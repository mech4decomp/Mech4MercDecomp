#!/usr/bin/env python3
"""
tools/audit_doc_addresses.py -- list source-documented extern addresses that
disagree with the committed extern_addrs.csv (reference-learned, consistent).

2026-08: these discrepancies are now NON-LOAD-BEARING — resolve_site consults
the committed table FIRST for any reloc symbol in it, and hard-errors if a
reloc symbol would ever resolve via a source comment (the extern_addr_lookup
fallback is legacy; comments are documentation only, never build inputs). So
wrong docs cannot affect the build (0 per-site fixups). This audit exists to
track the remaining doc-debt for a careful manual pass; many `header` hits are
ambiguous free-form callee lists the regex misreads as an address->name
mapping, so mass auto-rewrite is unsafe.

Usage:
  python tools/audit_doc_addresses.py   # list every disagreeing doc line
"""
import csv, os, re, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import exe_image_assemble as A
import exe_text_assemble as E
import diff as D

RE_HELP = re.compile(r"extern[^;]*\b([A-Za-z_]\w*)\s*[\(;]")
RE_ADDR = re.compile(r"(?:0x|FUN_|@FUN_)([0-9a-fA-F]{6,8})")
RE_DOC_FUN = re.compile(r"([A-Za-z_]\w*)\s*\(\s*FUN_([0-9a-fA-F]{8})")
RE_FUN_EM = re.compile(r"FUN_([0-9a-fA-F]{6,8})\s+\S+\s+([A-Za-z_]\w*)")

CSV = A.EXTERNS_CSV
SKIP_DIRS = ("modules", "non_matchings", "build")


def load_csv():
    ext = {}
    with open(CSV, newline="") as f:
        for r in csv.DictReader(f):
            ext[r["symbol"]] = int(r["va"], 16)
    return ext


def doc_entries():
    """Yield (symbol_key, address, file, line_no, kind, text) for every
    documented extern address, matching extern_addr_lookup's own regexes."""
    for d0, dirs, files in os.walk(os.path.join(ROOT, "src")):
        dirs[:] = [d for d in dirs if d not in SKIP_DIRS]
        for fn in files:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(d0, fn)
            rel = os.path.relpath(p, ROOT)
            try:
                lines = open(p, errors="ignore").read().splitlines()
            except Exception:
                continue
            head = " ".join(lines[:40])
            for v, nm in RE_FUN_EM.findall(head):
                yield nm.lstrip("_"), int(v, 16), rel, 0, "header", "FUN_%s %s" % (v, nm)
            for nm, v in RE_DOC_FUN.findall(head):
                yield nm.lstrip("_"), int(v, 16), rel, 0, "calldoc", "%s(FUN_%s)" % (nm, v)
            for i, ln in enumerate(lines):
                if "extern" not in ln:
                    continue
                mm = RE_HELP.search(ln)
                if not mm:
                    continue
                nm = mm.group(1)
                trailer = ln[mm.end():]
                am = RE_ADDR.search(trailer)
                if am:
                    yield nm.lstrip("_"), int(am.group(1), 16), rel, i + 1, "extern", ln.strip()[:100]


def main():
    ext = load_csv()
    errors = []
    for key, addr, rel, ln, kind, text in doc_entries():
        sym = "_" + key if not key.startswith("_") else key
        if sym not in ext:
            continue
        if addr != ext[sym]:
            errors.append((key, addr, rel, ln, kind, text, ext[sym]))
    print("documented addresses disagreeing with committed table: %d" % len(errors))
    from collections import Counter
    print("by kind:", dict(Counter(k for (_, _, _, _, k, _, _) in errors)))
    by_file = {}
    for key, addr, rel, ln, kind, text, correct in errors:
        by_file.setdefault(rel, []).append((key, addr, ln, kind, text, correct))
    for rel in sorted(by_file):
        for key, addr, ln, kind, text, correct in sorted(by_file[rel]):
            print("  %-30s %-16s %-10s -> %s  [%s] %s"
                  % (rel, key, hex(addr), hex(correct), kind, text))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
