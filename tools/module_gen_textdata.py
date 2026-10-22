#!/usr/bin/env python3
"""
tools/module_gen_textdata.py -- module-track analog of tools/gen_textdata_funcs.py.

Examines a module's .text for "Ghidra-didn't-map" code the same way the EXE
track did:
  1. Finds any src/<target>/<section>/data_0x*.c whose block VA falls inside .text
     (these are in-.text data-C placeholders that are usually real functions).
     Decomposes each with capstone (offline; NOT a Ghidra script), splits pad /
     code / pointer-table segments, and validates function-ness (ret/jmp
     terminator). Writes per-segment disassembly + a manifest row.
  2. Audits .text coverage from the placed func/data objs (build/modules/<key>/
     obj) and reports uncovered runs >= MIN_GAP. Each uncovered run is
     capstone-scanned against the reference bytes and classified:
       pad      all 0x90/0xCC/0x00 filler
       fn-like  decodes and contains a ret/jmp (likely unmapped function)
       data?    decodes but no terminator (pointer table / inline data)
       unk      does not cleanly decode

Bytes always come from the reference (read-only). Read-only tool; never edits
files.

Usage: python tools/module_gen_textdata.py [key]   # default zloglib
Outputs: build/module_textdata/<key>.csv  (va,size,block,kind) + disasm files
         build/module_textdata/<key>_gaps.csv (coverage-gap audit)
"""
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

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

MIN_GAP = 8          # min uncovered run (bytes) to report
PAD = (0x90, 0xCC, 0x00)

import capstone
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
md.detail = False


def disassemble(code, va):
    try:
        return [(ins.address, ins.size, ins.mnemonic, ins.op_str)
                for ins in md.disasm(code, va)]
    except Exception:
        return []


def has_terminator(dis):
    return any(mn in ("ret", "retf") or mn == "jmp" for _, _, mn, _ in dis)


def is_pad(blob):
    return all(b in PAD for b in blob)


def split_segments(blob, text_lo, text_hi):
    """Yield (off, size, kind) with kind in {'fn','table','pad','data?'}.
    Mirrors gen_textdata_funcs.split_segments but with a per-module .text range."""
    n = len(blob)
    segs = []
    i = 0
    while i < n:
        b = blob[i]
        if b in (0x90, 0xCC):
            j = i
            while j < n and blob[j] in (0x90, 0xCC):
                j += 1
            if j - i >= 6:
                segs.append((i, j - i, "pad"))
                i = j
                continue
        if i % 4 == 0 and i + 12 <= n:
            vals = [struct.unpack_from("<I", blob, i + 4 * k)[0] for k in range(3)]
            if all(text_lo <= v < text_hi for v in vals):
                j = i
                while j + 4 <= n and text_lo <= struct.unpack_from("<I", blob, j)[0] < text_hi:
                    j += 4
                if j - i >= 12:
                    segs.append((i, j - i, "table"))
                    i = j
                    continue
        j = i + 1
        while j < n:
            bj = blob[j]
            if bj in (0x90, 0xCC):
                k = j
                while k < n and blob[k] in (0x90, 0xCC):
                    k += 1
                if k - j >= 6:
                    break
            if j % 4 == 0 and j + 12 <= n:
                vals = [struct.unpack_from("<I", blob, j + 4 * t)[0] for t in range(3)]
                if all(text_lo <= v < text_hi for v in vals):
                    break
            j += 1
        segs.append((i, j - i, "fn"))
        i = j
    return segs


def load_func_sizes(key, base):
    """entry VA -> size from functions.csv (for gap attribution only)."""
    out = {}
    p = os.path.join(ROOT, "build", "ghidra", "modules", key, "dumps", "functions.csv")
    if not os.path.isfile(p):
        return out
    import csv
    with open(p, newline="") as f:
        for r in csv.DictReader(f):
            try:
                out[int(r["entry"], 16)] = int(r.get("size", "0"), 16)
            except (KeyError, ValueError):
                pass
    return out


def obj_body(path):
    d = open(path, "rb").read()
    _, ns, _, _, _, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    for i in range(ns):
        o = sh + i * 40
        if d[o:o + 8].startswith(b".text"):
            rsize = struct.unpack_from("<I", d, o + 16)[0]
            rp = struct.unpack_from("<I", d, o + 20)[0]
            return d[rp:rp + rsize]
    return b""


def placed_objs(key, base):
    """(va, size) for every .text obj (func_*.obj + semantic-named objs)."""
    import text_assemble as ta
    out = []
    for va, p in ta.iter_text_objs(key):
        b = obj_body(p)
        if b:
            out.append((va, len(b)))
    return out


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "zloglib"
    if key not in BASER:
        print("unknown key %r; keys: %s" % (key, sorted(BASER)))
        return 2
    dll, base = BASER[key]
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    trva, trs, tvs = text["rva"], text["rs"], text["vs"]
    text_lo, text_hi = base + trva, base + trva + max(trs, tvs)
    ref_text = pe.data[text["rp"]:text["rp"] + trs]
    outdir = os.path.join(ROOT, "build", "module_textdata")
    os.makedirs(outdir, exist_ok=True)

    # ---- 1) in-.text data_0x*.c blocks ------------------------------------
    rows = []
    n_fn = n_table = n_data = n_pad = 0
    tgt_root = os.path.join(ROOT, "src", target_of(key))
    for root, dirs, files in os.walk(tgt_root):
        for fn in sorted(files):
            m = re.fullmatch(r"data_([0-9a-fA-F]{8})\.c", fn)
            if not m:
                continue
            va = int(m.group(1), 16)
            if not (text_lo <= va < text_hi):
                continue
            path = os.path.join(root, fn)
            sm = re.search(r"\((\d+)-byte data run at", open(path).read(220))
            size = int(sm.group(1)) if sm else 0
            if not size:
                continue
            blob = ref_text[va - text_lo:va - text_lo + size]
            rel = os.path.relpath(root, tgt_root)
            for off, segsize, kind in split_segments(blob, text_lo, text_hi):
                sva = va + off
                if kind == "pad":
                    n_pad += 1
                    continue
                if kind == "table":
                    n_table += 1
                    rows.append((sva, segsize, fn, rel, "table"))
                    continue
                code = blob[off:off + segsize]
                dis = disassemble(code, sva)
                if not has_terminator(dis):
                    rows.append((sva, segsize, fn, rel, "data?"))
                    n_data += 1
                    continue
                kind2 = "thunk" if (len(dis) <= 2 and dis[0][2] in ("jmp", "ret")) else "fn"
                if kind2 == "fn":
                    n_fn += 1
                with open(os.path.join(outdir, "%08x.asm" % sva), "w") as f:
                    f.write("; %s in %s (block 0x%X, %s) -- %d bytes\n"
                            % (fn, rel, va, kind2, segsize))
                    for a, sz, mn, op in dis:
                        f.write("0x%08X: %-18s %s %s\n"
                                % (a, code[a - sva:a - sva + sz].hex(" ").upper(), mn, op))
                rows.append((sva, segsize, fn, rel, kind2))

    import csv
    with open(os.path.join(outdir, "%s.csv" % key), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["va", "size", "block", "dir", "kind"])
        for r in sorted(rows, key=lambda x: x[0]):
            w.writerow(["0x%08X" % r[0], r[1], r[2], r[3], r[4]])
    print("== %s in-.text data-C blocks ==" % key)
    print("  fn=%d thunk=%d table=%d data?=%d pad=%d  total=%d"
          % (n_fn, sum(1 for r in rows if r[4] == "thunk"), n_table, n_data, n_pad, len(rows)))
    if not rows:
        print("  (none: no data_0x*.c block lives inside .text -- .text is fully func-covered)")

    # ---- 2) coverage-gap audit ---------------------------------------------
    TS = max(trs, tvs)
    covered = bytearray(TS)
    for va, sz in placed_objs(key, base):
        off = va - text_lo
        if off < 0 or off >= TS:
            continue
        for k in range(min(sz, TS - off)):
            covered[off + k] = 1
    gaps = []
    in_run = False
    for i in range(TS):
        if not covered[i]:
            if not in_run:
                start = i
                in_run = True
        else:
            if in_run:
                gaps.append((start, i))
                in_run = False
    if in_run:
        gaps.append((start, TS))
    gap_rows = []
    for lo, hi in gaps:
        if hi - lo < MIN_GAP:
            continue
        gva = text_lo + lo
        blob = bytes(ref_text[lo:hi]) if hi <= len(ref_text) else bytes(ref_text[lo:])
        if is_pad(blob):
            kind = "pad"
        else:
            dis = disassemble(blob, gva)
            if not dis:
                kind = "unk"
            elif has_terminator(dis):
                kind = "fn-like"
            else:
                kind = "data?"
        gap_rows.append([hex(gva), hi - lo, kind, blob[:16].hex(" ")])
    with open(os.path.join(outdir, "%s_gaps.csv" % key), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["va", "size", "kind", "head_bytes"])
        w.writerows(gap_rows)
    print("== %s .text coverage-gap audit (>=%d B, vs %d placed objs) =="
          % (key, MIN_GAP, len(placed_objs(key, base))))
    print("  gaps=%d  fn-like=%d data?=%d pad=%d unk=%d"
          % (len(gap_rows),
             sum(1 for r in gap_rows if r[2] == "fn-like"),
             sum(1 for r in gap_rows if r[2] == "data?"),
             sum(1 for r in gap_rows if r[2] == "pad"),
             sum(1 for r in gap_rows if r[2] == "unk")))
    for r in gap_rows:
        print("    %s %6d B %-8s %s" % (r[0], r[1], r[2], r[3]))
    print("wrote %s/%s.csv and %s_gaps.csv" % (outdir, key, key))


if __name__ == "__main__":
    raise SystemExit(main())
