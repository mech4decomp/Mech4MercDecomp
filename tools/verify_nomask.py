"""No-mask per-function verification: place a recompiled .obj at its VA,
resolve every reloc site to its committed/derived target, and compare the
resulting bytes against the reference .text with NO masking.

This is the acceptance test for correcting misaligned/spurious reloc
defects (which the masked diff harness cannot catch). Exit 0 iff every
byte matches the reference (reloc sites included).
"""
import argparse
import csv
import os
import struct
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
import diff as D
import exe_image_assemble as A
import exe_text_assemble as E

BASE = A.BASE


def load_externs():
    ext = {}
    with open(A.EXTERNS_CSV, newline="") as f:
        for r in csv.DictReader(f):
            ext[r["symbol"]] = int(r["va"], 16)
    return ext


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--func", required=True, help="Function VA, e.g. 0x0042903b")
    ap.add_argument("--obj", required=True, help="Path to the recompiled .obj")
    ap.add_argument("--full", action="store_true", help="Print per-byte diff")
    args = ap.parse_args()
    va = int(args.func, 16)
    exe_text, text_rva, _ = D.read_pe_text_section(A.EXE)
    ext = load_externs()
    body, relocs = E.obj_text_and_relocs(args.obj)
    off = va - BASE - text_rva
    if off < 0 or off + len(body) > len(exe_text):
        print("obj does not fit in .text at %s" % hex(va))
        return 1
    buf = bytearray(body)
    rinfo = {}
    for rva, name, typ in relocs:
        tv = ext.get(name)
        if tv is None:
            tv, _k = E.resolve_export_va(name, BASE, None)
        if tv is None:
            print("  unresolvable reloc at rva %s: %s" % (hex(rva), name))
            return 1
        so = off + rva
        if typ in E.REL32:
            v = (tv - (BASE + text_rva + so) - 4) & 0xFFFFFFFF
        else:
            v = (tv + 0) & 0xFFFFFFFF
        for jj in range(4):
            buf[rva + jj] = (v >> (jj * 8)) & 0xFF
        rinfo[rva] = (name, tv, v)
    mism = 0
    for i in range(len(body)):
        b = buf[i]
        if b != exe_text[off + i]:
            mism += 1
            if args.full:
                print("  MISMATCH rva=%s va=%s obj=%02x ref=%02x" %
                      (hex(i), hex(va + i), b, exe_text[off + i]))
    print("func %s: %d bytes, %d reloc sites, %d byte mismatches" %
          (hex(va), len(body), len(relocs), mism))
    if mism:
        print("reloc sites:")
        for rva, (name, tv, v) in sorted(rinfo.items()):
            so = off + rva
            ref = (exe_text[so] | exe_text[so + 1] << 8 |
                   exe_text[so + 2] << 16 | exe_text[so + 3] << 24)
            print("    rva=%s %-22s target=%s resolved=%s ref=%s %s" %
                  (hex(rva), name, hex(tv), hex(v), hex(ref),
                   "OK" if v == ref else "DIFF"))
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
