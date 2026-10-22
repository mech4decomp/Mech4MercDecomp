#!/usr/bin/env python3
"""
tools/diff_file.py -- whole-PE byte diff (build vs reference).

Compares two PE files section-by-section (by RVA), reporting per-section
byte-match percentage and the first N mismatching offsets. This is the
full-file complement to the per-function tools/diff.py (which masks
relocations); it is what "reproduce byte-for-byte" is graded against.

Usage:
    python tools/diff_file.py --ref reference\MW4Stats.dll --new build\modules\mw4stats\MW4Stats.dll
    python tools/diff_file.py --ref ... --new ... --first 20     # show first 20 diffs/section
    python tools/diff_file.py --ref ... --new ... --only text    # only section named text
"""
import argparse

from pe_dump import PE


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ref", required=True)
    ap.add_argument("--new", required=True)
    ap.add_argument("--only", default=None, help="only this section name")
    ap.add_argument("--first", type=int, default=8)
    args = ap.parse_args()

    a = PE(args.ref)
    b = PE(args.new)
    print("ref %s (%d B)  ts=0x%08x csum=0x%x entry=0x%x base=0x%x"
          % (args.ref, len(a.data), a.timestamp, a.checksum, a.entry, a.imagebase))
    print("new %s (%d B)  ts=0x%08x csum=0x%x entry=0x%x base=0x%x"
          % (args.new, len(b.data), b.timestamp, b.checksum, b.entry, b.imagebase))

    names_a = [s["name"] for s in a.secs]
    names_b = [s["name"] for s in b.secs]
    print("sections ref: %s" % names_a)
    print("sections new: %s" % names_b)

    total = matched = 0
    for ra, rb in zip(a.secs, b.secs):
        name = ra["name"]
        if args.only and name != args.only:
            continue
        if name != rb["name"]:
            print("!! section order/name mismatch at %s vs %s" % (name, rb["name"]))
            break
        size = min(max(ra["vs"], ra["rs"]), max(rb["vs"], rb["rs"]))
        # read raw section bytes (file raw alignment matters for comparison)
        ba = a.data[ra["rp"]: ra["rp"] + size]
        bb = b.data[rb["rp"]: rb["rp"] + size]
        n = min(len(ba), len(bb))
        m = sum(1 for i in range(n) if ba[i] == bb[i])
        total += n
        matched += m
        pct = 100.0 * m / n if n else 100.0
        # note where size differs from vs
        vsa, vsb = max(ra["vs"], ra["rs"]), max(rb["vs"], rb["rs"])
        sizen = "" if vsa == vsb else "  (raw %d vs %d)" % (vsa, vsb)
        print("  %-8s rva=0x%x  %6d / %6d  (%.2f%%)%s"
              % (name, ra["rva"], m, n, pct, sizen))
        shown = 0
        for i in range(n):
            if ba[i] != bb[i]:
                print("      diff rva 0x%08X  ref %02X  new %02X"
                      % (ra["rva"] + i, ba[i], bb[i]))
                shown += 1
                if shown >= args.first:
                    if n > i + 1:
                        print("      ... (N more)")
                    break
    print("TOTAL compared %d bytes, matched %d (%.2f%%)" % (total, matched, 100.0*matched/total if total else 0))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
