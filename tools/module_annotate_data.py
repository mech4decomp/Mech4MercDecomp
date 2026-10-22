#!/usr/bin/env python3
"""
tools/module_annotate_data.py -- regenerate a module's src/<target>/<section>/data_0x*.c
data runs with inline semantic annotations + a per-module index, WITHOUT changing
any byte. Module-track analog of tools/annotate_data.py (EXE).

Each module's non-.text bytes (.rdata/.data) are transcribed as byte-exact
__emit chunks (tools/data_assemble.py). This tool re-emits the SAME bytes (the
existing committed file's declared VA+size is the source of truth for the byte
run; bytes come from the read-only reference) but annotates every group with
what the bytes ARE:

  - IAT slots       : IAT: DLL.Func                (every import, from dir1)
  - ILT entries     : ILT: DLL #idx                (OriginalFirstThunk arrays)
  - import descs    : IMPD: DLL ilt=X iat=Y        (dir1, 20 B each)
  - export dir      : EXPORT: name (ord #n)        (dir0, in .rdata)
  - vtables         : vtable[N] @0x..  + per-slot -> FUN_xxxx
  - ASCII strings   : str len=N "..."              (>=8 printable, latin1)
  - float runs      : flt <value>                  (>=4 finite floats, non-str/ptr)
  - data pointers   : -> 0x..  (into .text/.rdata/.data; FUN_ name if known)
  - raw             : (no annotation)

Outputs:
  - src/<target>/<section>/data_0x*.c  regenerated with inline annotations (bytes kept)
  - docs/module_data_annotation/<key>.md  per-module human index
  - build/module_data_annotation/<key>.csv machine-readable (offset -> annotation)

Usage:
  python tools/module_annotate_data.py <key>           # regenerate + compile + verify
  python tools/module_annotate_data.py <key> --verify  # compile + byte-sum check only
"""
import csv
import glob
import math
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

from pe_dump import PE

# (dll, imagebase) -- must match tools/data_assemble.py / image_assemble.py
BASER = {
    "mw4stats": ("MW4Stats.dll", 0x10000000),
    "blade": ("blade.dll", 0x5E000000),
    "zloglib": ("ZlogLib.dll", 0x10000000),
    "language": ("Language.dll", 0x10000000),
    "missionlang": ("MissionLang_MERCS.dll", 0x10000000),
    "gundll": ("GunDll.dll", 0x10000000),
}

# module key -> src target folder (missionlang folder is missionlang_mercs)
TARGET = {"missionlang": "missionlang_mercs"}


def target_of(key):
    return TARGET.get(key, key)

DATA_SECS = (".rdata", ".data")
MIN_VTABLE = 4          # pointer run length to call it a vtable
MIN_STR = 8             # printable chars to call it a string
MIN_FLOAT = 4           # consecutive finite floats to call it a float run


def load_functions(key):
    """entry VA -> name from the committed module function inventory."""
    out = {}
    p = os.path.join(ROOT, "reference", "functions", "%s.csv" % key)
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


def load_exports(key):
    """entry VA -> (name, ordinal) from an optional exports.csv."""
    out = {}
    p = os.path.join(ROOT, "reference", "exports", "%s.csv" % key)
    if not os.path.isfile(p):
        return out
    with open(p, newline="") as f:
        for r in csv.DictReader(f):
            try:
                out[int(r["rva"], 16)] = (r["name"], r.get("ordinal", "?"))
            except (KeyError, ValueError):
                pass
    return out


def build_imports(pe, base):
    """Return (iat_map, ilt_map, impdescs, iat_rng, imp_rng).

    Generalization of annotate_data.build_imports: the import directory RVA
    (dir1) and every descriptor/ILT/IAT address come from the PE itself, not
    hardcoded. ilt==0 descriptors use first==0 as the terminator.
    """
    imp_rva = struct.unpack_from("<I", pe.data, pe.data_dir_off + 8)[0]

    def read_rva(rva, n):
        return pe.rd(rva, n) if rva else None

    def cstr(rva):
        b = read_rva(rva, 200)
        if not b:
            return "?"
        e = b.find(0)
        return b[:e].decode("latin1") if e >= 0 else b.decode("latin1")[:60]

    def u32(rva):
        b = read_rva(rva, 4)
        return struct.unpack_from("<I", b, 0)[0] if b and len(b) >= 4 else 0

    if not imp_rva:
        return {}, {}, [], None, None
    iat_map, ilt_map, impdescs = {}, {}, []
    i = 0
    while True:
        b = read_rva(imp_rva + i * 20, 20)
        if not b or len(b) < 20:
            break
        ilt, _ts, _fwd, name_rva, first = struct.unpack_from("<IIIII", b, 0)
        if ilt == 0 and first == 0 and name_rva == 0:
            break
        dll = cstr(name_rva)
        impdescs.append((base + imp_rva + i * 20, dll, ilt, first))
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
            if ilt:
                ilt_map[base + ilt + j * 4] = (dll, nm)
            if first and s_iat:
                iat_map[base + first + j * 4] = (dll, nm)
            j += 1
        i += 1
    iat_rng = None
    if iat_map:
        ks = sorted(iat_map)
        iat_rng = (ks[0], ks[-1] + 4)
    imp_rng = (impdescs[0][0], impdescs[-1][0] + 20) if impdescs else None
    return iat_map, ilt_map, impdescs, iat_rng, imp_rng


def sec_va_range(pe, base, name):
    s = next((s for s in pe.secs if s["name"] == name), None)
    return (base + s["rva"], base + s["rva"] + max(s["rs"], s["vs"])) if s else None


def vtable_runs(buf, off0_va, text_lo, text_hi, funcs):
    """Yield (va, slots[(slot_va, target_va, name)])."""
    out = []
    cur = []
    n = len(buf) // 4
    for i in range(n):
        v = struct.unpack_from("<I", buf, i * 4)[0]
        isptr = text_lo <= v < text_hi
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
    s = s.replace("*/", "* /").replace("/*", "/ *")
    s = "".join(c if 0x20 <= ord(c) < 0x7F else "?" for c in s)
    return s


def string_runs(buf, off0_va):
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


def build_annotations(pe, base, sec_name, raw, va0, funcs, exports,
                      iat_map, ilt_map, impdescs, text_lo, text_hi, data_rngs):
    ann = {}
    if sec_name == ".rdata":
        for va, (dll, func) in iat_map.items():
            ann[va] = "IAT: %s.%s" % (dll[:-4] if dll.lower().endswith(".dll") else dll, func)
        for va, (dll, nm) in ilt_map.items():
            ann[va] = "ILT: %s %s" % (dll[:-4] if dll.lower().endswith(".dll") else dll, nm)
        for va, dll, ilt, first in impdescs:
            ann[va] = "IMPD: %s ilt=0x%X iat=0x%X" % (dll, ilt, first)
        # export directory (dir0) lives in .rdata for these MSVC6 DLLs
        exp_rva = struct.unpack_from("<I", pe.data, pe.data_dir_off)[0]
        if exp_rva:
            o = pe.r2o(exp_rva)
            if o is not None:
                nb = struct.unpack_from("<I", pe.data, o + 16)[0]
                nf, na = struct.unpack_from("<II", pe.data, o + 20)
                af, an, ao = struct.unpack_from("<III", pe.data, o + 28)
                an_o, ao_o, af_o = pe.r2o(an), pe.r2o(ao), pe.r2o(af)
                for k in range(min(na, 200)):
                    p = struct.unpack_from("<I", pe.data, an_o + k * 4)[0]
                    nmo = pe.r2o(p)
                    if nmo is None:
                        continue
                    end = pe.data.index(b"\x00", nmo)
                    nm = pe.data[nmo:end].decode("latin1")
                    oi = struct.unpack_from("<H", pe.data, ao_o + k * 2)[0]
                    rv = struct.unpack_from("<I", pe.data, af_o + oi * 4)[0]
                    fva = base + rv
                    if va0 <= fva < va0 + len(raw):
                        ann[fva] = "EXPORT: %s (ord #%d)" % (nm, nb + oi)
                    # also mark the EAT slot itself
                    eas = base + af + oi * 4
                    if va0 <= eas < va0 + len(raw):
                        ann[eas] = "EAT[%d]: %s @0x%X" % (oi, nm, fva)

    # vtable slots
    for vstart, slots in vtable_runs(raw, va0, text_lo, text_hi, funcs):
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
        if text_lo <= v < text_hi:
            ann[va] = "-> %s" % funcs.get(v, "FUN_%08X" % v)
        else:
            for rlo, rhi in data_rngs:
                if rlo <= v < rhi:
                    ann[va] = "-> data 0x%08X" % v
                    break
    return ann


def emit_annotated_c(body, va, tag, ann, page_notes):
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


def existing_data_files(key):
    """(va, size) for each committed src/<target>/<section>/data_0x*.c, from the
    file's own header comment (the committed byte run is the source of truth)."""
    out = []
    tgt = target_of(key)
    for p in sorted(glob.glob(os.path.join(ROOT, "src", tgt, "rdata", "data_0x*.c")) +
                    glob.glob(os.path.join(ROOT, "src", tgt, "data", "data_0x*.c"))):
        m = re.search(r"byte-exact (\d+)-byte data run at (0x[0-9a-fA-F]+)",
                      open(p).read(220))
        if not m:
            continue
        out.append((int(m.group(2), 16), int(m.group(1)), p))
    return out


def compile_objs(key, sources):
    import subprocess
    obj_dir = os.path.join(ROOT, "build", "modules", key, "obj")
    os.makedirs(obj_dir, exist_ok=True)
    rsp = os.path.join(obj_dir, "_data_annot.rsp")
    with open(rsp, "w") as f:
        for s in sorted(sources):
            f.write('"%s"\n' % s)
    cflags = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I" + os.path.join(ROOT, "include")
    cmd = "call tools\\env.bat && cl %s @%s /Fo%s\\" % (cflags, rsp, obj_dir)
    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        print((r.stdout + r.stderr)[-4000:])
    return r.returncode


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "zloglib"
    verify_only = "--verify" in sys.argv
    if key not in BASER:
        print("unknown key %r; keys: %s" % (key, sorted(BASER)))
        return 2
    dll, base = BASER[key]
    ref = os.path.join(ROOT, "reference", dll)
    pe = PE(ref)
    funcs = load_functions(key)
    exports = load_exports(key)
    iat_map, ilt_map, impdescs, iat_rng, imp_rng = build_imports(pe, base)

    text_lo, text_hi = sec_va_range(pe, base, ".text")
    data_rngs = [r for r in (sec_va_range(pe, base, s) for s in (".rdata", ".data")) if r]

    files = existing_data_files(key)
    md_rows = []
    csv_rows = []
    sources = []
    for va, size, path in files:
        # read the exact committed byte run from the reference
        o = pe.r2o(va - base)
        if o is None:
            print("  %s: VA 0x%08X not in a section; skipping" % path)
            continue
        body = pe.data[o:o + size]
        if len(body) != size:
            print("  %s: short read (%d != %d)" % (path, len(body), size))
            continue
        sec = next(s for s in pe.secs if s["rva"] <= va - base < s["rva"] + max(s["rs"], s["vs"]))
        ann = build_annotations(pe, base, sec["name"], body, va, funcs, exports,
                                iat_map, ilt_map, impdescs, text_lo, text_hi, data_rngs)
        vtable_info = dict((v, (len(slots), slots)) for v, slots in
                           vtable_runs(body, va, text_lo, text_hi, funcs))
        str_info = [s for s, _, _, _ in string_runs(body, va)]
        flt_info = [f for f, _ in float_runs(body, va)]
        notes = page_summary(va, body, ann, sec["name"], iat_map,
                             vtable_info, str_info, flt_info)
        sources.append(path)
        if not verify_only:
            open(path, "w").write(emit_annotated_c(body, va, sec["name"], ann, notes))
            print("wrote %s" % path)
        md_rows.append((va, sec["name"], len(body), notes))
        for off in range(0, len(body), 4):
            a = ann.get(va + off)
            if a:
                csv_rows.append([hex(va + off), sec["name"], a])

    if not verify_only:
        md_dir = os.path.join(ROOT, "docs", "module_data_annotation")
        os.makedirs(md_dir, exist_ok=True)
        md_path = os.path.join(md_dir, "%s.md" % key)
        with open(md_path, "w") as f:
            f.write("# %s data annotation index\n\n" % dll)
            f.write("Byte-exact data runs (`src/%s/<section>/data_0x*.c`) with inline\n" % target_of(key))
            f.write("semantic annotations. Generated by `tools/module_annotate_data.py`.\n")
            f.write("IAT = import address table, ILT = import lookup table,\n")
            f.write("IMPD = import descriptor, EXPORT = export directory, vtable = method run.\n\n")
            f.write("| VA | Section | Size | Summary |\n")
            f.write("|----|---------|------|---------|\n")
            for va, secname, size, notes in md_rows:
                f.write("| 0x%08X | %s | %d | %s |\n"
                        % (va, secname, size, "; ".join(n for n in notes[1:])))
        print("wrote %s (%d runs)" % (md_path, len(md_rows)))
        csv_dir = os.path.join(ROOT, "build", "module_data_annotation")
        os.makedirs(csv_dir, exist_ok=True)
        csv_path = os.path.join(csv_dir, "%s.csv" % key)
        with open(csv_path, "w", newline="") as f:
            w = csv.writer(f)
            w.writerow(["va", "section", "annotation"])
            w.writerows(csv_rows)
        print("wrote %s (%d annotated words)" % (csv_path, len(csv_rows)))
    # compile + byte-sum verify to prove annotations did not change bytes
    rc = compile_objs(key, sources)
    if rc != 0:
        print("compile failed")
        return 1
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import data_assemble
    return data_assemble.verify(key)


if __name__ == "__main__":
    raise SystemExit(main())
