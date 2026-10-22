#!/usr/bin/env python3
"""
Validate vtable candidates against the Ghidra functions.csv:
- A 'real' C++ vtable has every method pointing at a known function entry.
- Function-pointer arrays/jump-tables often fail this test.

Also tags each vtable by sample method size to give a rough complexity hint.

Outputs:
  dumps/vtables_validated.csv  - rva, count, valid_methods, all_at_entry, method_sizes

Usage:
    python tools/phase3_validate_vtables.py
"""
import csv
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DUMP = os.path.join(ROOT, "build", "ghidra", "MW4_project", "dumps")
VT_CSV = os.path.join(DUMP, "vtable_candidates.csv")
FN_CSV = os.path.join(DUMP, "functions.csv")


def parse_bracket_csv(line):
    """Split a CSV line on top-level commas only (depth-aware on <>)."""
    fields, depth, cur = [], 0, ""
    for ch in line:
        if ch == "<":
            depth += 1
            cur += ch
        elif ch == ">":
            depth -= 1
            cur += ch
        elif ch == "," and depth == 0:
            fields.append(cur)
            cur = ""
        else:
            cur += ch
    fields.append(cur)
    return fields


def main():
    entries = set()
    sizes = {}
    with open(FN_CSV) as f:
        lines = f.read().splitlines()
    for line in lines[1:]:
        fields = parse_bracket_csv(line)
        if len(fields) < 3:
            continue
        va = int(fields[0], 16)
        entries.add(va)
        sizes[va] = int(fields[2])

    out = []
    with open(VT_CSV) as f:
        r = csv.DictReader(f)
        for row in r:
            methods = [int(x, 16) for x in row["methods_va"].split(";") if x]
            n = len(methods)
            at_entry = sum(1 for m in methods if m in entries)
            method_sizes = [sizes.get(m, 0) for m in methods]
            out.append(
                {
                    "rva": int(row["rva"], 16),
                    "count": n,
                    "valid_methods": at_entry,
                    "all_at_entry": at_entry == n,
                    "method_sizes": method_sizes,
                }
            )

    out.sort(key=lambda v: -v["count"])
    out_path = os.path.join(DUMP, "vtables_validated.csv")
    with open(out_path, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["rva", "count", "valid_methods", "all_at_entry", "method_sizes"])
        for v in out:
            w.writerow(
                [
                    "0x%08X" % v["rva"],
                    v["count"],
                    v["valid_methods"],
                    "yes" if v["all_at_entry"] else "no",
                    ";".join(str(s) for s in v["method_sizes"]),
                ]
            )

    total = len(out)
    all_valid = sum(1 for v in out if v["all_at_entry"])
    partial = sum(1 for v in out if 0 < v["valid_methods"] < v["count"])
    none = sum(1 for v in out if v["valid_methods"] == 0)
    print("Validated %d vtable candidates:" % total)
    print("  All methods at function entry: %d  (likely real vtables)" % all_valid)
    print("  Some methods at entry:         %d  (maybe vtables or call tables)" % partial)
    print("  Zero methods at entry:         %d  (likely false positives)" % none)
    print("  -> vtables_validated.csv")
    print()
    # Likely-real vtables: at least 50% of methods land at function entries,
    # with a minimum of 4 valid methods (excludes small coincidental pointer runs).
    likely = [v for v in out if v["valid_methods"] >= 4 and (v["valid_methods"] * 2 >= v["count"])]
    likely.sort(key=lambda v: -v["valid_methods"])
    print("Top 20 likely-real vtables (>=4 valid methods, >=50%% match):")
    for v in likely[:20]:
        total_size = sum(v["method_sizes"])
        ratio = 100.0 * v["valid_methods"] / v["count"]
        print("  rva=0x%08X  count=%3d  valid=%3d (%4.0f%%)  method_bytes=%6d"
              % (v["rva"], v["count"], v["valid_methods"], ratio, total_size))
    print()
    print("Total likely-real vtables: %d" % len(likely))


if __name__ == "__main__":
    main()