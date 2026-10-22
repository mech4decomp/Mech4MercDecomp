#!/usr/bin/env python3
"""Generate symbol artifacts for the oracle EXE.

Source of truth = OUR OWN transcription inventory: every func_<VA>.c source
(each byte-verified 100% against the reference), plus the committed
src\mw4mercs\artifacts\extra_functions.csv table for the functions we intentionally have no
source for (31 IAT jump thunks + the out-of-scope .txt2 FUN_00769000).
The function inventory is our own committed CSV; nothing in the build/debug
pipeline depends on an external analysis database.

Artifacts:
  build\\MW4Mercs.map        - MSVC "Publics by Value" format (reference)
  build\\MW4Mercs.x64dbg.txt - x64dbg `labelset` script (working symbol path
                               for this x64dbg build, which is PDB-only)

x64dbg usage: attach (nmake debug), View > Script tab, Load
MW4Mercs.x64dbg.txt, Run; then File > Save Database (`dbsave`) to persist.

Usage: python tools/gen_symbol_map.py
"""
import csv, os, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "src")
EXTRA = os.path.join(ROOT, "src", "mw4mercs", "artifacts", "extra_functions.csv")
OUT_MAP = os.path.join(ROOT, "build", "MW4Mercs.map")
OUT_DBG = os.path.join(ROOT, "build", "MW4Mercs.x64dbg.txt")


def func_vas():
    vas = set()
    textdir = os.path.join(SRC, "mw4mercs", "text")
    if not os.path.isdir(textdir):
        return vas
    for fn in os.listdir(textdir):
        m = re.fullmatch(r"func_([0-9a-fA-F]{8})\.c", fn)
        if m:
            vas.add(int(m.group(1), 16))
    return vas


def extra():
    out = {}
    if os.path.isfile(EXTRA):
        with open(EXTRA, newline="") as f:
            for r in csv.DictReader(f):
                out[int(r["va"], 16)] = r["name"].strip()
    return out


def main():
    ours = func_vas()
    extras = extra()
    names = {va: "FUN_%08X" % va for va in ours}
    names.update(extras)  # extra entries already carry real names
    allvas = sorted(names)
    print("func_<VA>.c sources: %d (authoritative)" % len(ours))
    print("extra_functions.csv entries: %d" % len(extras))
    print("total labeled functions: %d" % len(allvas))

    map_lines = ["MW4Mercs.exe", "",
                 "Address         Publics by Value              Rva+Base", ""]
    dbg_lines = []
    for va in allvas:
        name = names[va]
        map_lines.append("0001:%08X      %08X       %s" % (va & 0xFFFF, va, name))
        dbg_lines.append("labelset %08X, %s" % (va, name))
    map_lines.append("")

    with open(OUT_MAP, "w") as f:
        f.write("\n".join(map_lines))
    with open(OUT_DBG, "w") as f:
        f.write("\n".join(dbg_lines))
    print("wrote %s" % OUT_MAP)
    print("wrote %s" % OUT_DBG)


if __name__ == "__main__":
    main()
