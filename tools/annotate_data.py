#!/usr/bin/env python3
"""
tools/annotate_data.py -- regenerate the src/mw4mercs/<section>/data_0x<va>.c data
runs with inline semantic annotations + a master index, WITHOUT changing any byte.

The EXE's non-.text bytes (.rdata/.data/.rsrc/.txt2) are transcribed as
byte-exact __emit chunks (tools/exe_data_assemble.py). This tool re-emits the
SAME bytes (via exe_data_assemble.emit_c, byte-identical by construction) but
annotates every group with what the bytes ARE:

  - IAT slots       : IAT: DLL.Func            (every import, from dir12/dir1)
  - ILT entries     : ILT: DLL #idx            (OriginalFirstThunk arrays)
  - import descs    : IMPD: DLL ilt=X iat=Y    (dir1, 20 B each)
  - vtables         : vtable[N] @0x..  + per-slot -> FUN_xxxx
  - ASCII strings   : str len=N "..."          (>=8 printable, latin1)
  - float runs      : flt <value>              (>=4 finite floats, non-str/ptr)
  - data pointers   : -> 0x..  (into .text/.rdata/.data; FUN_ name if known)
  - raw             : (no annotation)

Outputs:
  - src/mw4mercs/<section>/data_0x<va>.c  regenerated with inline annotations (bytes kept)
  - docs/data_annotation.md master index (human)
  - build/data_annotation.csv machine-readable (offset -> annotation)

Usage:
  python tools/annotate_data.py          # regenerate annotated files + index
  python tools/annotate_data.py --verify # recompile objs + byte-sum check only
"""
import csv
import glob
import math
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import exe_data_assemble as XDA
from pe_dump import PE

BASE = XDA.BASE
EXE = XDA.EXE
CHUNK = XDA.CHUNK
INDEX_MD = os.path.join(ROOT, "docs", "data_annotation.md")
INDEX_CSV = os.path.join(ROOT, "build", "data_annotation.csv")

MIN_VTABLE = 4          # pointer run length to call it a vtable
MIN_STR = 8             # printable chars to call it a string
MIN_FLOAT = 4           # consecutive finite floats to call it a float run


def load_functions():
    """entry VA -> name from the committed function inventory."""
    out = {}
    p = os.path.join(ROOT, "reference", "functions", "MW4Mercs.csv")
    if not os.path.isfile(p):
        p = None
    if p is None:
        return out
    with open(p, newline="") as f:
        for r in csv.DictReader(f):
            try:
                out[int(r["entry"], 16)] = r["name"]
            except (KeyError, ValueError):
                pass
    return out


def build_imports(pe, data):
    """Return (iat_map, ilt_map, impdescs, iat_rng, imp_rng, ilt_rngs).

    iat_map: VA -> (dll, func) for every IAT slot.
    ilt_map: VA -> (dll, ordinal_or_name) for every ILT entry.
    impdescs: list of (va, dll, ilt_rva, iat_rva).
    iat_rng / imp_rng / ilt_rngs: VA ranges to reserve.
    """
    def sec_of(rva):
        for s in pe.secs:
            if s["rva"] <= rva < s["rva"] + s["rs"]:
                return s
        return None

    def read_rva(rva, n):
        s = sec_of(rva)
        if not s:
            return None
        o = s["rp"] + (rva - s["rva"])
        return data[o:o + n]

    def cstr(rva):
        b = read_rva(rva, 200)
        if not b:
            return "?"
        e = b.find(0)
        return b[:e].decode("latin1") if e >= 0 else b.decode("latin1")[:60]

    def u32(rva):
        return struct.unpack_from("<I", read_rva(rva, 4), 0)[0]

    imp_rva = 0x3AFE1C
    iat_map, ilt_map, impdescs, ilt_rngs = {}, {}, [], []
    i = 0
    while True:
        b = read_rva(imp_rva + i * 20, 20)
        if not b:
            break
        ilt, _ts, _fwd, name_rva, first = struct.unpack_from("<IIIII", b, 0)
        if ilt == 0 and first == 0 and name_rva == 0:
            break
        dll = cstr(name_rva)
        impdescs.append((BASE + imp_rva + i * 20, dll, ilt, first))
        # walk ILT + IAT in parallel
        j = 0
        while True:
            s_ilt = u32(ilt + j * 4) if ilt else 0
            s_iat = u32(first + j * 4)
            if s_iat == 0 and s_ilt == 0:
                break
            if s_ilt & 0x80000000:
                nm = "#%d" % (s_ilt & 0xFFFF)
            elif s_ilt:
                nm = cstr(s_ilt + 2)
            else:
                nm = "?"
            ilt_map[BASE + ilt + j * 4] = (dll, nm)
            if s_iat:
                iat_map[BASE + first + j * 4] = (dll, nm)
            j += 1
        i += 1
    iat_rng = None
    if iat_map:
        ks = sorted(iat_map)
        iat_rng = (ks[0], ks[-1] + 4)
    imp_rng = (impdescs[0][0], impdescs[-1][0] + 20) if impdescs else None
    return iat_map, ilt_map, impdescs, iat_rng, imp_rng


def vtable_runs(buf, off0_va, funcs):
    """Yield (va, slots[(slot_va, target_va, name)])."""
    out = []
    cur = []
    n = len(buf) // 4
    for i in range(n):
        v = struct.unpack_from("<I", buf, i * 4)[0]
        isptr = 0x401000 <= v < 0x768000
        if isptr:
            cur.append((off0_va + i * 4, v))
        else:
            if len(cur) >= MIN_VTABLE:
                out.append(cur)
            cur = []
    if len(cur) >= MIN_VTABLE:
        out.append(cur)
    res = []
    for run in out:
        slots = [(va, tgt, funcs.get(tgt, "FUN_%08X" % tgt)) for va, tgt in run]
        res.append((run[0][0], slots))
    return res


def san(s):
    """Sanitize free-form text (e.g. a string literal) for embedding in a
    /* ... */ inline-asm comment: the sequence */ would terminate the comment
    early, and non-printable bytes can upset the MSVC6 asm lexer."""
    s = s.replace("*/", "* /").replace("/*", "/ *")
    s = "".join(c if 0x20 <= ord(c) < 0x7F else "?" for c in s)
    return s


def string_runs(buf, off0_va):
    """Yield (va, text) for ASCII runs >= MIN_STR, plus their byte span."""
    out = []
    i = 0
    L = len(buf)
    while i < L:
        if 0x20 <= buf[i] < 0x7F:
            j = i
            while j < L and 0x20 <= buf[j] < 0x7F:
                j += 1
            if j - i >= MIN_STR:
                out.append((off0_va + i, buf[i:j].decode("latin1"), off0_va + i, off0_va + j))
            i = j
        else:
            i += 1
    return out


def float_runs(buf, off0_va):
    """Yield (va, list_of_floats) for runs >= MIN_FLOAT finite non-zero floats."""
    out = []
    L = len(buf)
    i = 0
    while i + 4 <= L:
        f = struct.unpack_from("<f", buf, i)[0]
        if math.isfinite(f) and f != 0 and 1e-30 < abs(f) < 1e30:
            j = i
            run = []
            while j + 4 <= L:
                g = struct.unpack_from("<f", buf, j)[0]
                if math.isfinite(g) and g != 0 and 1e-30 < abs(g) < 1e30:
                    run.append(g)
                    j += 4
                else:
                    break
            if len(run) >= MIN_FLOAT:
                out.append((off0_va + i, run))
            i = j
        else:
            i += 4
    return out


def build_annotations(pe, data, funcs, sec_name):
    """Return (per_va dict offset->annotation token) for one section's raw bytes."""
    s = next(sec for sec in pe.secs if sec["name"] == sec_name)
    raw = data[s["rp"]:s["rp"] + s["rs"]]
    va0 = BASE + s["rva"]
    ann = {}
    if sec_name == ".txt2":
        # SafeDisc leftover: junk bytes, no semantic annotation (kept for layout).
        return ann
    if sec_name == ".rdata":
        iat_map, ilt_map, impdescs, iat_rng, imp_rng = build_imports(pe, data)
        for va, (dll, func) in iat_map.items():
            ann[va] = "IAT: %s.%s" % (dll[:-4] if dll.lower().endswith(".dll") else dll, func)
        for va, (dll, nm) in ilt_map.items():
            ann[va] = "ILT: %s %s" % (dll[:-4] if dll.lower().endswith(".dll") else dll, nm)
        for va, dll, ilt, first in impdescs:
            ann[va] = "IMPD: %s ilt=0x%X iat=0x%X" % (dll, ilt, first)
    else:
        iat_map = ilt_map = {}
        impdescs = []

    # vtable slots
    for vstart, slots in vtable_runs(raw, va0, funcs):
        ann[vstart] = "vtable[%d] @0x%08X" % (len(slots), vstart)
        for sva, tgt, nm in slots[1:]:
            ann[sva] = "-> %s" % nm
    # strings
    str_ranges = []
    for sva, text, s0, s1 in string_runs(raw, va0):
        ann[sva] = "str len=%d %r" % (len(text), san(text)[:48])
        str_ranges.append((s0, s1))
    # floats (skip offsets already annotated or inside a string run)
    for fva, run in float_runs(raw, va0):
        if fva in ann:
            continue
        if any(s0 <= fva < s1 for s0, s1 in str_ranges):
            continue
        ann[fva] = "flt %s" % (",".join("%.6g" % x for x in run[:6]))
    # data pointers into .text/.rdata/.data (skip annotated)
    for i in range(0, len(raw) - 3, 4):
        v = struct.unpack_from("<I", raw, i)[0]
        va = va0 + i
        if va in ann:
            continue
        if 0x401000 <= v < 0x768000:
            ann[va] = "-> %s" % funcs.get(v, "FUN_%08X" % v)
        elif 0x76B000 <= v < 0x7B8000:
            ann[va] = "-> data 0x%08X" % v
    return ann


def emit_annotated_c(body, va, tag, ann, page_notes):
    """emit_c with annotations injected into the +0xNNNN group comments."""
    out = ["/* %s: byte-exact %d-byte data run at 0x%08X (annotated) */"
           % (tag, len(body), va)]
    out.append("/*")
    for n in page_notes:
        out.append(" *   %s" % n)
    out.append(" */")
    out.append("#pragma warning(disable: 4035)")
    out.append("__declspec(naked) void data_0x%08x(void)" % va)
    out.append("{")
    out.append("    __asm {")
    for i in range(0, len(body), 16):
        group = body[i:i + 16]
        tokens = []
        for j in range(len(group)):
            a = ann.get(va + i + j)
            if a:
                tokens.append("+0x%04X %s" % (i + j, a))
        if tokens:
            fam = "        /* %s */\n" % " ; ".join(tokens)
        else:
            fam = "        /* +0x%04X */\n" % i
        for b in group:
            fam += "            __emit 0x%02x\n" % b
        out.append(fam)
    out.append("    }")
    out.append("}")
    out.append("")
    return "\n".join(out)


def page_summary(va, body, ann, sec_name, iat_map, vtable_info, str_info, flt_info):
    """Human summary lines for the page header."""
    notes = ["section: %s" % sec_name]
    iat_n = sum(1 for o in range(0, len(body), 4) if (va + o) in iat_map)
    if iat_n:
        notes.append("IAT: %d import slots" % iat_n)
    vt = [v for v in vtable_info if va <= v < va + len(body)]
    if vt:
        notes.append("vtables: %s" % ", ".join("0x%08X[%d]" % (v, vtable_info[v][0]) for v in vt))
    st = [s for s in str_info if va <= s < va + len(body)]
    if st:
        notes.append("strings: %d" % len(st))
    fl = [f for f in flt_info if va <= f < va + len(body)]
    if fl:
        notes.append("float runs: %d" % len(fl))
    raw = sum(1 for i in range(0, len(body), 4) if (va + i) not in ann)
    notes.append("annotated %d/%d 4B words" % (len(body) // 4 - raw, len(body) // 4))
    return notes


def main():
    verify_only = "--verify" in sys.argv
    pe = PE(EXE)
    data = open(EXE, "rb").read()
    funcs = load_functions()
    iat_map, ilt_map, impdescs, iat_rng, imp_rng = build_imports(pe, data)

    # per-file regeneration
    md_rows = []
    csv_rows = []
    sources = []
    for sec in pe.secs:
        if sec["name"] not in XDA.DATA_SECS:
            continue
        ann = build_annotations(pe, data, funcs, sec["name"])
        raw = data[sec["rp"]:sec["rp"] + sec["rs"]]
        off = 0
        while off < len(raw):
            take = min(CHUNK, len(raw) - off)
            va = BASE + sec["rva"] + off
            body = raw[off:off + take]
            vtable_info = dict((v, (len(slots), slots)) for v, slots in
                               vtable_runs(body, va, funcs))
            str_info = [s for s, _, _, _ in string_runs(body, va)]
            flt_info = [f for f, _ in float_runs(body, va)]
            notes = page_summary(va, body, ann, sec["name"], iat_map,
                                 vtable_info, str_info, flt_info)
            sdir = XDA.section_src_dir(sec["name"])
            os.makedirs(sdir, exist_ok=True)
            src = os.path.join(sdir, "data_0x%08x.c" % va)
            sources.append(src)
            if not verify_only:
                open(src, "w").write(
                    emit_annotated_c(body, va, sec["name"], ann, notes))
                print("wrote %s" % src)
            md_rows.append((va, sec["name"], len(body), notes))
            for o in range(0, len(body), 4):
                a = ann.get(va + o)
                if a:
                    csv_rows.append([hex(va + o), sec["name"], a])
            off += take

    if not verify_only:
        # master index
        os.makedirs(os.path.dirname(INDEX_MD), exist_ok=True)
        with open(INDEX_MD, "w") as f:
            f.write("# MW4Mercs.exe data annotation index\n\n")
            f.write("Byte-exact data runs (`src/mw4mercs/<section>/data_0x*.c`) with inline\n")
            f.write("semantic annotations. Generated by `tools/annotate_data.py`.\n")
            f.write("IAT = import address table, ILT = import lookup table,\n")
            f.write("IMPD = import descriptor, vtable = method pointer run.\n\n")
            f.write("| VA | Section | Size | Summary |\n")
            f.write("|----|---------|------|---------|\n")
            for va, secname, size, notes in md_rows:
                f.write("| 0x%08X | %s | %d | %s |\n"
                        % (va, secname, size, "; ".join(n for n in notes[1:])))
        print("wrote %s (%d runs)" % (INDEX_MD, len(md_rows)))
        with open(INDEX_CSV, "w", newline="") as f:
            w = csv.writer(f)
            w.writerow(["va", "section", "annotation"])
            for row in csv_rows:
                w.writerow(row)
        print("wrote %s (%d annotated words)" % (INDEX_CSV, len(csv_rows)))
        # compile + byte-sum verify to prove annotations did not change bytes
        rc = XDA.compile_objs(sources)
        if rc != 0:
            print("compile failed")
            return 1
    return XDA.verify()


if __name__ == "__main__":
    raise SystemExit(main())
