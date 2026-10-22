#!/usr/bin/env python3
"""
tools/obj_compare.py -- side-by-side disasm of a transcribed obj vs the reference
DLL bytes at its RVA, for a window around obj offset K.

Usage: python tools/obj_compare.py <key> <func_basename> [window] [skip]
e.g.  python tools/obj_compare.py blade func_5e01d710 96 0x680
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

MASK_TYPES = (6, 7, 10, 11, 0x14)


def obj_text(obj):
    d = open(obj, "rb").read()
    _, ns, _, pst, _, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    body = b""
    for i in range(ns):
        o = sh + i * 40
        name = d[o:o + 8]
        if not name.startswith(b".text"):
            continue
        vsize = struct.unpack_from("<I", d, o + 8)[0]
        rsize = struct.unpack_from("<I", d, o + 16)[0]
        rp = struct.unpack_from("<I", d, o + 20)[0]
        body += d[rp:rp + rsize]
    return body


def main():
    key, fb = sys.argv[1], sys.argv[2]
    win = int(sys.argv[3]) if len(sys.argv) > 3 else 96
    skip = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0
    dll, base = BASER[key]
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    TR, TW, TS = text["rva"], text["rp"], text["vs"]
    ref = pe.data[TW:TW + TS]

    # devices
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    md_obj = Cs(CS_ARCH_X86, CS_MODE_32)
    md_ref = Cs(CS_ARCH_X86, CS_MODE_32)
    md_obj.detail = md_ref.detail = False

    va = int(fb[len("func_"):].split(".")[0], 16)
    objp = os.path.join(ROOT, "build", "modules", key, "obj", fb)
    body = obj_text(objp)
    off = va - base - TR

    i = skip
    ref_i = skip
    print("obj offset  | ours (obj bytes -> disasm)                    | ref (va bytes -> disasm)")
    n = 0
    while i < min(skip + win, len(body)):
        ol = list(md_obj.disasm(body[i:i + 16], va + i))
        rl = list(md_ref.disasm(ref[off + ref_i:off + ref_i + 16], va + ref_i))
        o = ol[0] if ol else None
        r = rl[0] if rl else None
        ob = body[i:i + (o.size if o else 1)].hex() if o else body[i:i + 1].hex()
        rb = ref[off + ref_i:off + ref_i + (r.size if r else 1)].hex() if r else ref[off + ref_i:off + ref_i + 1].hex()
        od = ("%s %s" % (o.mnemonic, o.op_str)) if o else "(??)"
        rd = ("%s %s" % (r.mnemonic, r.op_str)) if r else "(??)"
        print("0x%05x     | %-26s %-28s| %-26s %-28s" % (i, ob, od, rb, rd))
        n += 1
        if not o:
            break
        i += o.size if o else 1
        ref_i += r.size if r else 1
        if n >= 40:
            print("  ...[truncated]")
            break
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
