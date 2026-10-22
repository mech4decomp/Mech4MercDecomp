#!/usr/bin/env python3
"""
tools/image_assemble.py -- module oracle exact-image assembly (reference-free).

Modes (mirrors exe_image_assemble.py):
  python tools/image_assemble.py <key> [--expect=...] [--out=...]
      reference-free assemble from committed src/<target>/artifacts
      + compiled objs (build/modules/<key>/obj). Reads NO reference content.
  python tools/image_assemble.py <key> --diff
      ... and byte-diff the result vs reference\\<dll> (verification only).
  python tools/image_assemble.py <key> --init
      ONE-TIME: commit the reference-derived content artifacts
      (header.bin / rsrc.bin / reloc.bin / extern_addrs.csv / text_pads.bin /
      gaptext.bin (when non-pad .text runs remain) / trailer.bin). After --init the build never touches the
      reference again.

Committed artifacts (src/<target>/artifacts/):
  header.bin        first 0x1000 bytes (DOS stub, PE header, section table,
                    import/export dirs) incl. the canonical timestamp
  rsrc.bin          .rsrc raw bytes (full file size)
  reloc.bin         .reloc raw bytes (full file size)
  extern_addrs.csv  symbol -> VA for residual reloc symbols (near-empty:
                    symbols whose name carries no address and are not imports)
  text_pads.bin     (offset, byte) pairs for uncovered .text bytes that are
                    0x90/0xCC/0x00 (inter-function alignment pads)
  gaptext.bin       optional: uncovered non-pad .text runs (offset, len,
                    bytes...) as opaque committed bytes. gundll's in-.text
                    data (jump/pointer tables, leftover IAT thunks, one
                    string) is now re-homed into data_0x*.c placeholders and
                    the residual micro-functions into func_*.c, so the
                    artifact is NOT written when zero non-pad runs remain.
  trailer.bin       any file bytes after the last section (e.g. blade's /
                    gundll's CodeView NB10 debug-directory PDB-path data)

Every module's section vs-tails (rs-vs) are all zeros -> synthesized. The
.text reloc sites resolve from address-embedded symbol names, then the
committed extern_addrs.csv, then the import map parsed from OUR assembled
.rdata (never the reference).
"""
import glob, os, re, struct, sys, csv

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import text_assemble as TA

BASE = None  # set per key
HEADER_SIZE = 0x1000


def commit_dir(key):
    # module key -> src target folder (missionlang folder is missionlang_mercs)
    target = {"missionlang": "missionlang_mercs"}.get(key, key)
    return os.path.join(ROOT, "src", target, "artifacts")


def header_bin(key):
    return os.path.join(commit_dir(key), "header.bin")


def rsrc_bin(key):
    return os.path.join(commit_dir(key), "rsrc.bin")


def reloc_bin(key):
    return os.path.join(commit_dir(key), "reloc.bin")


def externs_csv(key):
    return os.path.join(commit_dir(key), "extern_addrs.csv")


def pads_bin(key):
    return os.path.join(commit_dir(key), "text_pads.bin")


def gaptext_bin(key):
    return os.path.join(commit_dir(key), "gaptext.bin")


def trailer_bin(key):
    return os.path.join(commit_dir(key), "trailer.bin")


def objdir(key):
    return os.path.join(ROOT, "build", "modules", key, "obj")


def section_layout(header):
    """Parse the section table from the committed header bytes. Returns
    (e_lfanew, sections) where sections = list of dicts with name/rva/vs/rs/rp."""
    e_lfanew = struct.unpack_from("<I", header, 0x3C)[0]
    nsec = struct.unpack_from("<H", header, e_lfanew + 6)[0]
    opt = e_lfanew + 24
    opt_size = struct.unpack_from("<H", header, e_lfanew + 20)[0]
    sec_hdr = opt + opt_size
    out = []
    for i in range(nsec):
        o = sec_hdr + i * 40
        name = header[o:o + 8].split(b"\x00")[0].decode("latin1")
        vs = struct.unpack_from("<I", header, o + 8)[0]
        va = struct.unpack_from("<I", header, o + 12)[0]
        rs = struct.unpack_from("<I", header, o + 16)[0]
        rp = struct.unpack_from("<I", header, o + 20)[0]
        out.append({"name": name, "rva": va, "vs": vs, "rs": rs, "rp": rp})
    return e_lfanew, out


def import_map_from_rdata(rdata, rdata_rva, imp_dir_rva, base):
    """name -> IAT-slot VA, parsed from OUR assembled .rdata bytes (dir1 RVA
    from the committed PE header). Mirrors exe_image_assemble.import_map_from_rdata."""
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
            out.setdefault(nm, base + ft + j * 4)
            j += 1
        i += 1
    return out


def load_externs(key):
    out = {}
    p = externs_csv(key)
    if os.path.isfile(p):
        with open(p, newline="") as f:
            for r in csv.DictReader(f):
                out[r["symbol"]] = int(r["va"], 16)
    return out


def load_pads(key):
    p = pads_bin(key)
    out = {}
    if os.path.isfile(p):
        with open(p, "rb") as f:
            d = f.read()
        n = struct.unpack_from("<I", d, 0)[0]
        off = 4
        for _ in range(n):
            k, b = struct.unpack_from("<IB", d, off)
            out[k] = b
            off += 5
    return out


def load_gaptext(key):
    """gaptext.bin: uncovered non-pad .text runs as (offset, len, bytes...)."""
    p = gaptext_bin(key)
    out = []
    if os.path.isfile(p):
        with open(p, "rb") as f:
            d = f.read()
        n = struct.unpack_from("<I", d, 0)[0]
        off = 4
        for _ in range(n):
            k, ln = struct.unpack_from("<II", d, off)
            out.append((k, bytes(d[off + 8:off + 8 + ln])))
            off += 8 + ln
    return out


def _data_objs(key):
    for p in sorted(glob.glob(os.path.join(objdir(key), "data_*.obj"))):
        b = os.path.basename(p)
        mm = re.fullmatch(r"data_0x([0-9a-fA-F]{8})\.obj", b)
        if mm:
            yield int(mm.group(1), 16), p


def _all_text_objs(key):
    """func_ + semantic-named objs (iter_text_objs) then data_*.obj (gap
    placeholders that land in .text by VA). Funcs overlay after gaps so they
    win any accidental overlap (gaps are emitted only over uncovered bytes)."""
    for va, p in TA.iter_text_objs(key):
        yield va, p
    for va, p in _data_objs(key):
        yield va, p


def module_resolve_site(k, lst, impmap, externs, text_rva, base):
    """First resolvable reloc value for a site: committed externs (authoritative),
    then address-embedded name, then the import map (from our own .rdata)."""
    for typ, name, add in lst:
        if not name:
            continue
        tv = externs.get(name)
        if tv is None:
            dec = TA.decode_export_va(name, base)
            if dec and dec[0] is not None:
                tv = dec[0]
            elif dec and dec[1] == "import":
                norm = dec[2]
                tv = impmap.get(norm) or impmap.get("_" + norm)
            elif name.startswith("g_"):
                norm = name.replace("g_", "")
                tv = impmap.get(norm) or impmap.get("_" + norm)
        if tv is None:
            continue
        if typ in TA.REL32_TYPES:
            return (tv + add - (base + text_rva + k) - 4) & 0xFFFFFFFF
        return (tv + add) & 0xFFFFFFFF
    return None


def assemble_text(key, text_sec, externs, impmap):
    """Reference-free .text: overlay func/gap objs, resolve reloc sites, apply
    pads. The base buffer is zeros (every uncovered byte is a committed pad or
    gap placeholder; section vs-tails are all zeros)."""
    base = BASE
    TS = text_sec["rs"]
    TR = text_sec["rva"]
    buf = bytearray(TS)
    sites = {}
    for va, p in _all_text_objs(key):
        try:
            body, relocs = TA.obj_text_and_relocs(p)
        except Exception:
            continue
        if not body:
            continue
        off = va - base - TR
        if off < 0 or off >= TS:
            continue
        for k in range(len(body)):
            j = off + k
            if j < TS:
                buf[j] = body[k]
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
    n_resolved = 0
    for k, lst in sorted(sites.items()):
        v = module_resolve_site(k, lst, impmap, externs, TR, base)
        if v is None:
            continue
        for jj in range(4):
            buf[k + jj] = (v >> (jj * 8)) & 0xFF
        n_resolved += 1
    pads = load_pads(key)
    for k, b in pads.items():
        if k < TS:
            buf[k] = b
    for k, blob in load_gaptext(key):
        if k + len(blob) <= TS:
            buf[k:k + len(blob)] = blob
    return buf, n_resolved, len(pads)


def assemble(key, out, expect):
    global BASE
    dll, BASE = TA.BASER[key]
    hb = header_bin(key)
    if not os.path.isfile(hb):
        print("missing committed artifacts; run: python tools/image_assemble.py %s --init" % key)
        return 1
    header = open(hb, "rb").read()
    e_lfanew, secs = section_layout(header)
    externs = load_externs(key)

    # ---- .rdata/.data: overlay data_*.obj on a zero base, pad vs-tail to rs ----
    buffers = {}
    for s in secs:
        if s["name"] in (".rdata", ".data"):
            buffers[s["name"]] = bytearray(s["rs"])
    for va, p in _data_objs(key):
        body, relocs = TA.obj_text_and_relocs(p)
        for s in secs:
            if s["rva"] <= va - BASE < s["rva"] + s["rs"]:
                off = va - BASE - s["rva"]
                b = buffers.get(s["name"])
                if b is not None and off + len(body) <= len(b):
                    b[off:off + len(body)] = body
                break

    # ---- import map from OUR assembled .rdata (dir1 RVA from committed header) --
    opt = e_lfanew + 24
    imp_rva = struct.unpack_from("<I", header, opt + 96 + 8)[0]
    rdata_sec = next((s for s in secs if s["name"] == ".rdata"), None)
    impmap = {}
    if rdata_sec is not None:
        impmap = import_map_from_rdata(bytes(buffers[".rdata"]), rdata_sec["rva"],
                                       imp_rva, BASE)

    # ---- .text ----
    text_sec = next(s for s in secs if s["name"] == ".text")
    text, n_resolved, npads = assemble_text(key, text_sec, externs, impmap)

    # ---- compose file (contiguous rp layout) ----
    out_bytes = bytearray(header)
    for s in sorted(secs, key=lambda x: x["rp"]):
        if s["name"] == ".text":
            out_bytes += text[:s["rs"]]
        elif s["name"] in buffers:
            out_bytes += buffers[s["name"]][:s["rs"]]
        elif s["name"] == ".rsrc":
            out_bytes += open(rsrc_bin(key), "rb").read()[:s["rs"]]
        elif s["name"] == ".reloc":
            out_bytes += open(reloc_bin(key), "rb").read()[:s["rs"]]
        else:
            out_bytes += bytes(s["rs"])
    # canonical timestamp + zero checksum (as the reference has)
    struct.pack_into("<I", out_bytes, e_lfanew + 8,
                     struct.unpack_from("<I", header, e_lfanew + 8)[0])
    struct.pack_into("<I", out_bytes, opt + 64, 0)

    # file tail beyond the last section (debug-directory data, e.g. blade's /
    # gundll's CodeView PDB path) - committed verbatim
    tb = trailer_bin(key)
    if os.path.isfile(tb):
        out_bytes += open(tb, "rb").read()

    out = out.replace("\\", "/")
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, "wb") as f:
        f.write(bytes(out_bytes))

    placed = 0
    missing = []
    if expect:
        exp = set()
        with open(os.path.join(ROOT, expect)) as f:
            for ln in f:
                ln = ln.strip()
                if ln.startswith("0x"):
                    exp.add(int(ln, 16))
        pset = set()
        for va, p in _all_text_objs(key):
            pset.add(va)
        placed = len([v for v in exp if v in pset])
        missing = sorted(v for v in exp if v not in pset)
    print("== %s assemble (reference-free) ==" % key)
    for s in secs:
        if s["name"] in (".text", ".rdata", ".data"):
            print("  %-6s raw=0x%x vs=0x%x" % (s["name"], s["rs"], s["vs"]))
    print("  wrote %s (%d bytes); %d reloc sites resolved, %d pads applied"
          % (out, len(out_bytes), n_resolved, npads))
    if expect:
        print("  expected=%d placed=%d missing=%s" %
              (len(exp), placed, ", ".join("0x%x" % v for v in missing[:10]) or "none"))
    return 0


def diff(key, out):
    dll, _ = TA.BASER[key]
    ref_path = os.path.join(ROOT, "reference", dll)
    if not os.path.exists(ref_path):
        print("== %s: reference not present; skipping diff ==" % key)
        return 0
    ref = open(ref_path, "rb").read()
    outb = open(out, "rb").read()
    nb = len(ref)
    diffs = 0
    for k in range(min(nb, len(outb))):
        if outb[k] != ref[k]:
            diffs += 1
    diffs += abs(nb - len(outb))
    if diffs == 0:
        print("== %s: byte-identical to reference (no masking, reference-free build) ==" % key)
        return 0
    print("== %s: %d bytes differ from reference" % (key, diffs))
    return 1


def collect_sites(key):
    """All .text reloc sites (offset -> [(typ, name, add)]), for --init extern
    learning + gap discovery."""
    dll, base = TA.BASER[key]
    global BASE
    BASE = base
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    TS = text["vs"]
    TR = text["rva"]
    sites = {}
    for va, p in _all_text_objs(key):
        try:
            body, relocs = TA.obj_text_and_relocs(p)
        except Exception:
            continue
        off = va - base - TR
        if off < 0 or off >= TS:
            continue
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
    return pe, text, sites


def extract_init(key):
    dll, base = TA.BASER[key]
    global BASE
    BASE = base
    data = open(os.path.join(ROOT, "reference", dll), "rb").read()
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    cd = commit_dir(key)
    os.makedirs(cd, exist_ok=True)

    # header.bin
    with open(header_bin(key), "wb") as f:
        f.write(data[:HEADER_SIZE])

    # rsrc.bin / reloc.bin (full file size)
    for sec in pe.secs:
        if sec["name"] == ".rsrc":
            with open(rsrc_bin(key), "wb") as f:
                f.write(data[sec["rp"]:sec["rp"] + sec["rs"]])
        elif sec["name"] == ".reloc":
            with open(reloc_bin(key), "wb") as f:
                f.write(data[sec["rp"]:sec["rp"] + sec["rs"]])

    # trailer.bin: any bytes after the last section (e.g. blade's CodeView NB10
    # debug directory data -- the PDB path string appended after .reloc)
    last_end = max(s["rp"] + s["rs"] for s in pe.secs)
    trailer = data[last_end:]
    with open(trailer_bin(key), "wb") as f:
        f.write(trailer)
    print("--init %s: trailer after last section = %d bytes" % (key, len(trailer)))

    # reloc sites + residual externs
    pe2, text, sites = collect_sites(key)
    TR = text["rva"]
    text_buf = data[text["rp"]:text["rp"] + text["vs"]]
    impmap = TA.build_import_map(pe2, base)
    residual = {}
    for k, lst in sorted(sites.items()):
        raw = (text_buf[k] | text_buf[k + 1] << 8 |
               text_buf[k + 2] << 16 | text_buf[k + 3] << 24)
        for typ, name, add in lst:
            if not name:
                continue
            dec = TA.decode_export_va(name, base)
            if dec and dec[0] is not None:
                continue
            if dec and dec[1] == "import" and (dec[2] in impmap or "_" + dec[2] in impmap):
                continue
            if name.startswith("g_") and (name.replace("g_", "") in impmap or
                                          "_" + name.replace("g_", "") in impmap):
                continue
            # residual symbol: learn its target VA from the reference bytes
            if typ in TA.REL32_TYPES:
                d = raw - add
                if d >= 0x80000000:
                    d -= 0x100000000
                tgt = (base + TR + k) + 4 + d
            else:
                tgt = raw - add
            residual.setdefault(name, set()).add(tgt)
    learned = {}
    for name, vs in residual.items():
        if len(vs) == 1:
            learned[name] = next(iter(vs))
    with open(externs_csv(key), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["symbol", "va"])
        for name in sorted(learned):
            w.writerow([name, "0x%08X" % learned[name]])
    print("--init %s: wrote %s/header.bin rsrc.bin reloc.bin extern_addrs.csv (%d residual symbols)"
          % (key, cd, len(learned)))

    # uncovered .text gaps: 0x90/0xCC/0x00 pads -> text_pads.bin; the rest ->
    # gaptext.bin run records (gundll only; the other modules have no gaps).
    # Opaque committed bytes; transcribing real functions to func_*.c shrinks
    # this set over time (the factory-vtable methods are the precedent).
    covered = [False] * text["vs"]
    for va, p in _all_text_objs(key):
        try:
            body, relocs = TA.obj_text_and_relocs(p)
        except Exception:
            continue
        off = va - base - TR
        for k in range(len(body)):
            j = off + k
            if 0 <= j < len(covered):
                covered[j] = True
    pairs = bytearray()
    npad = 0
    runs = []
    cur = None
    for k in range(text["vs"]):
        if covered[k]:
            cur = None
            continue
        b = text_buf[k]
        if b in (0x90, 0xCC, 0x00):
            pairs += struct.pack("<IB", k, b)
            npad += 1
            cur = None
        else:
            if cur is None:
                cur = [k, bytearray()]
                runs.append(cur)
            cur[1].append(b)
    with open(pads_bin(key), "wb") as f:
        f.write(struct.pack("<I", npad))
        f.write(bytes(pairs))
    if runs:
        gapblob = bytearray(struct.pack("<I", len(runs)))
        for k, blob in runs:
            gapblob += struct.pack("<II", k, len(blob))
            gapblob += bytes(blob)
        with open(gaptext_bin(key), "wb") as f:
            f.write(bytes(gapblob))
    elif os.path.exists(gaptext_bin(key)):
        os.remove(gaptext_bin(key))
    print("--init %s: .text uncovered pads=%d nonpad-gap-runs=%d (bytes=%d)"
          % (key, npad, len(runs), sum(len(r[1]) for r in runs)))
    return 0


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    key = args[0] if args else "mw4stats"
    out = None
    expect = None
    for a in sys.argv[1:]:
        if a.startswith("--out="):
            out = a[6:]
        elif a.startswith("--expect="):
            expect = a[9:]
    if "--init" in sys.argv:
        return extract_init(key)
    dll, _ = TA.BASER[key]
    if out is None:
        out = os.path.join(ROOT, "build", "modules", key, "dll", dll)
    if "--diff" in sys.argv:
        return diff(key, out)
    return assemble(key, out, expect)


if __name__ == "__main__":
    raise SystemExit(main())
