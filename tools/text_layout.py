#!/usr/bin/env python3
"""
tools/text_layout.py -- build the definitive .text block plan for a module DLL.

Walks the reference .text and classifies every byte into one of:
    func   covered by a functions.csv entry (has an entry VA)
    pad    fill bytes (all 0x90/0xCC/0x00)
    blob   real code NOT covered by any function entry (missed by inventory)

Emits build/modules/<key>/text_layout.csv:
    rva_off, va, type, size, csv_name, bytes_hex

Usage: python tools/text_layout.py [key]   (default mw4stats)
"""
import csv, os, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

KEYROOT = {
    "mw4stats": ("MW4Stats.dll", "build\\ghidra\\modules\\mw4stats\\dumps\\functions.csv"),
    "blade": ("blade.dll", "build\\ghidra\\modules\\blade\\dumps\\functions.csv"),
    "zloglib": ("ZlogLib.dll", "build\\ghidra\\modules\\zloglib\\dumps\\functions.csv"),
    "gundll": ("GunDll.dll", "build\\ghidra\\modules\\gundll\\dumps\\functions.csv"),
}


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "mw4stats"
    dll, csvrel = KEYROOT.get(key, (None, None))
    if not dll:
        print("unknown key", key)
        return 1
    from pe_dump import PE
    pe = PE(os.path.join(ROOT, "reference", dll))
    text = next(s for s in pe.secs if s["name"] == ".text")
    TR, TW, TS, BASE = text["rva"], text["rp"], text["vs"], pe.imagebase
    d = pe.data

    rows = []
    with open(os.path.join(ROOT, csvrel)) as f:
        for r in csv.DictReader(f):
            rows.append((int(r["entry"], 16), int(r["size"]), r["name"]))
    rows.sort()

    mark = bytearray(TS)
    func_name = [""] * TS
    for va, sz, nm in rows:
        off = va - BASE - TR
        for i in range(max(0, off), min(TS, off + sz)):
            mark[i] = 1
            if not func_name[i]:
                func_name[i] = nm

    blocks = []
    i = 0
    while i < TS:
        if mark[i]:
            j = i
            while j < TS and mark[j]:
                j += 1
            blocks.append((i, j - i, "func", func_name[i]))
            i = j
            continue
        j = i
        while j < TS and not mark[j]:
            j += 1
        b = d[TW + i: TW + j]
        kind = "pad" if set(b) <= {0x90, 0xCC, 0x00} else "blob"
        blocks.append((i, j - i, kind, ""))
        i = j

    out = os.path.join(ROOT, "build", "modules", key, "text_layout.csv")
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["off", "va", "type", "size", "name", "bytes"])
        for off, sz, kind, nm in blocks:
            hx = "" if kind == "pad" else d[TW + off: TW + off + sz].hex(" ")
            w.writerow(["0x%x" % off, "0x%x" % (BASE + TR + off), kind, sz, nm, hx])

    from collections import Counter
    c = Counter(k for _, _, k, _ in blocks)
    print("== %s .text (%d B) ==" % (dll, TS))
    for k, n in sorted(c.items()):
        tot = sum(s for _, s, kk, _ in blocks if kk == k)
        print("  %-5s %4d blocks  %7d bytes (%5.1f%%)" % (k, n, tot, 100.0 * tot / TS))
    nb = sum(1 for _, _, k, _ in blocks if k == "blob")
    bb = sum(s for b, s, k, _ in blocks if k == "blob")
    print("blobs: %d, %d bytes -- size histogram:" % (nb, bb))
    h = Counter()
    for _, s, k, _ in blocks:
        if k == "blob":
            h[(s // 8) * 8 if s < 64 else 64] += s
    for kk, v in sorted(h.items()):
        print("    <=%3d B: %7d bytes" % (kk, v))
    print("wrote %s" % out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
