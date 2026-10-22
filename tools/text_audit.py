#!/usr/bin/env python3
"""
tools/text_audit.py -- per-transcribed-function disagreement audit for a module.

Places each build/modules/<key>/obj/func_*.obj at its reference RVA and reports,
for every obj whose span disagrees with the reference .text bytes (after masking
reloc sites), its first mismatch offset (obj-relative + absolute VA), its total
mismatch byte count, and whether it is fully/mostly __emit-based.

Usage: python tools/text_audit.py [key] [--detail]
"""
import glob, os, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASER = {
    "mw4stats": ("MW4Stats.dll", 0x10000000),
    "blade": ("blade.dll", 0x5E000000),
    "zloglib": ("ZlogLib.dll", 0x10000000),
    "language": ("Language.dll", 0x10000000),
    "missionlang": ("MissionLang_MERCS.dll", 0x10000000),
}

DIR32 = 0x14
MASK_TYPES = (6, 7, 10, 11, 0x14)


def obj_text_and_relocs(obj):
    d = open(obj, "rb").read()
    mach, ns, _, pst, nsym, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    body = b""
    reloc_off = set()
    for i in range(ns):
        o = sh + i * 40
        name = d[o:o + 8]
        if not name.startswith(b".text"):
            continue
        vsize = struct.unpack_from("<I", d, o + 8)[0]
        rsize = struct.unpack_from("<I", d, o + 16)[0]
        rp = struct.unpack_from("<I", d, o + 20)[0]
        reloc_p = struct.unpack_from("<I", d, o + 24)[0]
        reloc_n = struct.unpack_from("<H", d, o + 32)[0]
        body += d[rp:rp + rsize]
        for k in range(reloc_n):
            ro = reloc_p + k * 10
            rva, sym, typ = struct.unpack_from("<IIH", d, ro)
            if typ in MASK_TYPES:
                for j in range(4):
                    reloc_off.add(rva + j)
    return body, reloc_off


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "mw4stats"
    detail = "--detail" in sys.argv
    dll, base = BASER[key]
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    TR, TW, TS = text["rva"], text["rp"], text["vs"]
    ref = pe.data[TW:TW + TS]

    bad = []
    for p in sorted(glob.glob(os.path.join(ROOT, "build", "modules", key, "obj", "func_*.obj"))):
        va = int(os.path.basename(p)[5:-4], 16)
        body, reloc_off = obj_text_and_relocs(p)
        off = va - base - TR
        mism = []
        for k in range(len(body)):
            if off + k >= TS:
                break
            if k in reloc_off:
                continue
            if body[k] != ref[off + k]:
                mism.append(k)
        if mism:
            bad.append((va, os.path.basename(p), len(body), len(mism), mism, body, off))

    print("== %s per-func disagreement (masked bytes excluded) ==" % key)
    print("  %d funcs placed, %d with >=1 mismatch byte" % (len(glob.glob(os.path.join(ROOT, "build", "modules", key, "obj", "func_*.obj"))), len(bad)))
    for va, name, nbytes, nmism, mism, body, off in bad:
        print("  %s va=0x%08x span=%d bytes, %d mismatched bytes (%.1f%%)" %
              (name, va, nbytes, nmism, 100.0 * nmism / nbytes))
        if detail:
            for k in mism[:12]:
                print("      +0x%04x   va 0x%08x  ours=%02x ref=%02x" %
                      (k, base + TR + off + k, body[k], ref[off + k]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
