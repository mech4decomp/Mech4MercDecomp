#!/usr/bin/env python3
"""
tools/exe_image_assemble.py -- the EXE exact-image finalizer.

Assembles build\\MW4Mercs.exe from compiled objs + committed source artifacts
(src/mw4mercs/artifacts/*). The reference EXE is read ONLY in --init (one-time extraction of
container metadata + pad bytes) and in --diff (the oracle gate). Mirrors
tools/image_assemble.py (the DLL track) for the EXE.

Sections come from our own compiled bytes:
  - .text  : func_*.obj / data_*.obj (build/obj) at reference RVAs, reloc
             sites resolved from source paths then the committed
             extern_addrs.csv; inter-function pads filled from text_pads.bin.
  - .rdata : data_*.obj (build/obj/data) -- carries import descriptors + IAT,
             so a byte-exact .rdata reproduces the imports.
  - .data  : data_*.obj (BSS virtual tail is loader zero-filled, not in file).
  - .rsrc  : data_*.obj (resources; Phase 8 replaces with a .rc rebuild).
  - .txt2  : data_*.obj (SafeDisc leftover, preserved for layout).

Committed artifacts (extracted once by --init, then never touch the reference):
  - src\mw4mercs\artifacts\pe_headers.bin  : 0x1000-byte header region (DOS stub, Rich header,
    COFF/optional header, data dirs, section table) -- pins timestamp/checksum/
    Rich as documented acceptance deltas.
  - src\mw4mercs\artifacts\text_pads.bin   : (offset,byte) pairs for the .text pad bytes
    (0x90/0xCC/0x00 linker-align fillers) not covered by any obj.
  - src\mw4mercs\artifacts\extern_addrs.csv: symbol -> VA for residual reloc symbols that
    carry no address in their name (tools/exe_extract_externs.py). This
    committed table is authoritative over name-embedded addresses and source
    comments in resolve_site (resolve_site consults it first).

Usage:
  python tools/exe_image_assemble.py --init   # extract committed artifacts once
  python tools/exe_image_assemble.py          # assemble build\\MW4Mercs.exe
  python tools/exe_image_assemble.py --diff   # assemble + byte-diff vs reference
"""
import csv, glob, os, re, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASE = 0x00400000
IMAGE_END = 0x008C2000
EXE = os.path.join(ROOT, "reference", "MW4Mercs.exe")
OUT = os.path.join(ROOT, "build", "MW4Mercs.exe")
DATA_DIR = os.path.join(ROOT, "src", "mw4mercs", "artifacts")
OBJ_DIR = os.path.join(ROOT, "build", "obj")
DATA_OBJ_DIR = os.path.join(ROOT, "build", "obj", "data")
HEADER_BIN = os.path.join(DATA_DIR, "pe_headers.bin")
PADS_BIN = os.path.join(DATA_DIR, "text_pads.bin")
EXTERNS_CSV = os.path.join(DATA_DIR, "extern_addrs.csv")
HEADER_SIZE = 0x1000

import exe_text_assemble as E
import diff as D
from pe_dump import PE


def load_externs():
    out = {}
    with open(EXTERNS_CSV, newline="") as f:
        for r in csv.DictReader(f):
            out[r["symbol"]] = int(r["va"], 16)
    return out


def import_map_from_rdata(rdata, rdata_rva, imp_dir_rva):
    """Parse name -> IAT-slot-VA from OUR assembled .rdata bytes (dir1 RVA from
    the committed PE header). Mirrors exe_text_assemble.build_import_map (which
    reads names + IAT slots via the FirstThunk field at descriptor +16)."""
    out = {}
    o0 = imp_dir_rva - rdata_rva
    i = 0
    while True:
        o = o0 + i * 20
        if o + 20 > len(rdata) or struct.unpack_from("<I", rdata, o)[0] == 0:
            break
        ft = struct.unpack_from("<I", rdata, o + 16)[0]
        j = 0
        while True:
            no = (ft - rdata_rva) + j * 4
            if no + 4 > len(rdata):
                break
            v = struct.unpack_from("<I", rdata, no)[0]
            if v == 0:
                break
            if v & 0x80000000:
                nm = "#%d" % (v & 0xFFFF)
            else:
                ho = v - rdata_rva
                e2 = rdata.index(b"\x00", ho + 2)
                nm = rdata[ho + 2:e2].decode("latin1")
            out.setdefault(nm, BASE + ft + j * 4)
            j += 1
        i += 1
    return out


def place_text(sem, text_rva, TS):
    """Place func/data objs at reference RVAs LAST-WINS (matches the
    exe_text_assemble --nomasks 0-mismatch oracle: later/higher-VA objs
    overwrite earlier ones where adjacent functions overlap) and collect the
    reloc site table. Returns (ours, sites)."""
    ours = [None] * TS
    sites = {}
    for va, p in E.iter_objs(sem):
        body, relocs = E.obj_text_and_relocs(p)
        off = va - BASE - text_rva
        if off < 0 or off >= TS:
            continue
        for k in range(len(body)):
            j = off + k
            if j < TS:
                ours[j] = body[k]
        for rva, name, typ in relocs:
            so = off + rva
            if so < 0 or so + 4 > TS:
                continue
            add = 0
            if rva + 4 <= len(body):
                add = (body[rva] | body[rva + 1] << 8 |
                       body[rva + 2] << 16 | body[rva + 3] << 24)
            lst = sites.setdefault(so, [])
            if not any(a[0] == typ and a[1] == name for a in lst):
                lst.append((typ, name, add))
    return ours, sites


def _doc_path_would_fire(name):
    """True if resolve_export_va would resolve this reloc symbol via the
    source-comment doc fallback (extern_addr_lookup) -- i.e. the symbol is NOT
    in the committed extern table, carries no address in its name, but a
    hand-written source comment documents it. Mirrors resolve_export_va's own
    name normalization and precedence (address-in-name BEFORE doc comments)."""
    n = name
    if n.startswith("__imp_"):
        n = n[6:]
    elif n.startswith("_"):
        n = n[1:]
    n = n.lstrip("_")
    n2 = re.sub(r"@\d+$", "", n)
    tv, _kind = E._addr_in_name(n2, BASE)
    if tv is not None:
        return False
    return E.extern_addr_lookup(n2) is not None


def resolve_site(k, lst, impmap, externs, text_rva):
    """First resolvable reloc value for a site. The committed extern table
    (reference-derived, consistency-verified) is authoritative: a reloc
    symbol present in it resolves to its table value regardless of what the
    hand-written source name/comments would parse to (name-embedded
    addresses and doc comments are hints, not truth).

    The source-comment doc fallback (extern_addr_lookup) is legacy and must
    NEVER fire in the build -- the committed table is the only trusted
    name->address mapping. If a symbol would resolve via a comment, that is a
    hard error (regenerate the table with --init, or fix the source symbol),
    not a silent fallback."""
    for typ, name, add in lst:
        if not name:
            continue
        tv = externs.get(name)
        if tv is None:
            if _doc_path_would_fire(name):
                print("ERROR: reloc symbol '%s' at .text offset 0x%X would resolve "
                      "via the source-comment doc fallback (extern_addr_lookup). "
                      "The committed extern_addrs.csv is the only trusted mapping; "
                      "comments must not drive the build. Re-run --init to "
                      "regenerate the table, or fix the source symbol/docs."
                      % (name, k))
                return None
            tv, _kind = E.resolve_export_va(name, BASE, impmap)
        if tv is None:
            continue
        if typ in E.REL32:
            return (tv + add - (BASE + text_rva + k) - 4) & 0xFFFFFFFF
        return (tv + add) & 0xFFFFFFFF
    return None


def build_text_from(ours, sites, pads, externs):
    """Reference-free .text body: resolve reloc sites (sources + extern table),
    then apply committed pads. Returns (text, n_resolved). Layout only (no
    reference content bytes) comes from the PE section table."""
    text = bytearray(b if b is not None else 0 for b in ours)
    pe = PE(EXE)
    text_sec = next(s for s in pe.secs if s["name"] == ".text")
    text_rva = text_sec["rva"]
    rdata_sec = next(s for s in pe.secs if s["name"] == ".rdata")
    rdata_buf = place_data_sections(pe)[".rdata"]
    header = open(HEADER_BIN, "rb").read()
    opt = pe.e + 24
    imp_dir_rva = struct.unpack_from("<I", header, opt + 96 + 8)[0]
    impmap = import_map_from_rdata(bytes(rdata_buf), rdata_sec["rva"], imp_dir_rva)
    n_resolved = 0
    for k, lst in sorted(sites.items()):
        v = resolve_site(k, lst, impmap, externs, text_rva)
        if v is not None:
            for jj in range(4):
                text[k + jj] = (v >> (jj * 8)) & 0xFF
            n_resolved += 1
    for k, b in pads.items():
        text[k] = b
    return text, n_resolved


def extract_init():
    os.makedirs(DATA_DIR, exist_ok=True)
    data = open(EXE, "rb").read()
    with open(HEADER_BIN, "wb") as f:
        f.write(data[:HEADER_SIZE])
    # text pads: uncovered .text bytes that are 0x90/0xCC/0x00 (the covered set
    # is placement-order independent: a byte is covered iff ANY obj covers it).
    sem = E.load_semantic_map()
    exe_text, text_rva, _ = D.read_pe_text_section(EXE)
    TS = len(exe_text)
    ours, sites = place_text(sem, text_rva, TS)
    pairs = bytearray()
    n = 0
    for k in range(TS):
        if ours[k] is None and exe_text[k] in (0x90, 0xCC, 0x00):
            pairs += struct.pack("<IB", k, exe_text[k])
            n += 1
    with open(PADS_BIN, "wb") as f:
        f.write(struct.pack("<I", n))
        f.write(bytes(pairs))
    print("--init: wrote %s (%d B), %s (%d pad bytes)" %
          (HEADER_BIN, HEADER_SIZE, PADS_BIN, n))
    # committed extern-address table (reference-derived; used by the build)
    import exe_extract_externs as X
    X.main()


def load_text_pads():
    with open(PADS_BIN, "rb") as f:
        data = f.read()
    n = struct.unpack_from("<I", data, 0)[0]
    out = {}
    off = 4
    for _ in range(n):
        k, b = struct.unpack_from("<IB", data, off)
        out[k] = b
        off += 5
    return out


def place_data_sections(pe):
    """Place data_*.obj into .rdata/.data/.rsrc/.txt2 raw buffers."""
    buffers = {}
    for sec in pe.secs:
        if sec["name"] in (".text", ".rdata", ".data", ".rsrc", ".txt2"):
            buffers[sec["name"]] = bytearray(sec["rs"])
    for p in glob.glob(os.path.join(DATA_OBJ_DIR, "*.obj")):
        base = os.path.basename(p)
        import re
        m = re.match(r"^data_0x([0-9a-fA-F]{8})\.obj$", base)
        if not m:
            continue
        va = int(m.group(1), 16)
        body = E.obj_text_and_relocs(p)[0]
        for sec in pe.secs:
            if sec["rva"] <= va - BASE < sec["rva"] + sec["rs"]:
                off = va - BASE - sec["rva"]
                buffers[sec["name"]][off:off + len(body)] = body[:]
                break
    return buffers


def assemble():
    if not (os.path.isfile(HEADER_BIN) and os.path.isfile(PADS_BIN)
            and os.path.isfile(EXTERNS_CSV)):
        print("missing committed artifacts; run: python tools/exe_image_assemble.py --init")
        return 1
    pe = PE(EXE)
    pads = load_text_pads()
    externs = load_externs()

    # ---- .text: place func/data objs (last-wins), resolve relocs, pads ----
    sem = E.load_semantic_map()
    text_sec = next(s for s in pe.secs if s["name"] == ".text")
    TS = text_sec["rs"]
    ours, sites = place_text(sem, text_sec["rva"], TS)
    text, n_resolved = build_text_from(ours, sites, pads, externs)

    # ---- compose file ----
    header = open(HEADER_BIN, "rb").read()
    buffers = place_data_sections(pe)
    out = bytearray(header)
    for sec in pe.secs:
        if sec["name"] == ".text":
            out += bytes(text[:sec["rs"]])
        else:
            out += bytes(buffers.get(sec["name"], bytearray(sec["rs"]))[:sec["rs"]])
    open(OUT, "wb").write(bytes(out))
    print("assemble: wrote %s (%d bytes); %d reloc sites resolved, %d pads"
          % (OUT, len(out), n_resolved, len(pads)))
    return 0


def diff_oracle():
    if not os.path.exists(EXE):
        print("diff: reference not present; skipping")
        return 0
    ref = open(EXE, "rb").read()
    out = open(OUT, "rb").read()
    if len(out) != len(ref):
        print("diff: SIZE MISMATCH ref=%d out=%d" % (len(ref), len(out)))
        return 1
    mism = [k for k in range(len(out)) if out[k] != ref[k]]
    if not mism:
        import hashlib
        print("diff: byte-identical to reference (SHA-256 %s)"
              % hashlib.sha256(out).hexdigest())
        return 0
    # summarize per region
    print("diff: %d mismatching bytes (%0.4f%%)" % (len(mism), 100.0 * len(mism) / len(out)))
    from collections import Counter
    bysec = Counter()
    for k in mism[:200000]:
        rva = k
        sec = "header"
        for s in pe_secs():
            if s["rp"] <= k < s["rp"] + s["rs"]:
                sec = s["name"]
                break
        bysec[sec] += 1
    for s, c in bysec.most_common():
        print("   %-7s %d" % (s, c))
    for k in mism[:20]:
        print("   off 0x%08X ref=%02x out=%02x" % (k, ref[k], out[k]))
    return 1


def pe_secs():
    return PE(EXE).secs


def main():
    if "--init" in sys.argv:
        extract_init()
        return 0
    rc = assemble()
    if rc:
        return rc
    if "--diff" in sys.argv:
        return diff_oracle()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
