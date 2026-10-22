#!/usr/bin/env python3
"""Verify built oracle images against the hashes in reference/SHA256.txt.

This checks the final acceptance gate: the assembled EXE and module DLLs must
be byte-identical to the canonical reference. The reference files themselves
are never required for this check; only their hashes are.

Usage:
  python tools/verify_hashes.py
  python tools/verify_hashes.py --reference-dir reference
"""
import argparse
import hashlib
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

OUTPUTS = {
    "MW4Mercs.exe": os.path.join(ROOT, "build", "MW4Mercs.exe"),
    "ZlogLib.dll": os.path.join(ROOT, "build", "modules", "zloglib", "dll", "ZlogLib.dll"),
    "MW4Stats.dll": os.path.join(ROOT, "build", "modules", "mw4stats", "dll", "MW4Stats.dll"),
    "blade.dll": os.path.join(ROOT, "build", "modules", "blade", "dll", "blade.dll"),
    "GunDll.dll": os.path.join(ROOT, "build", "modules", "gundll", "dll", "GunDll.dll"),
    "Language.dll": os.path.join(ROOT, "build", "modules", "language", "dll", "Language.dll"),
    "MissionLang_MERCS.dll": os.path.join(ROOT, "build", "modules", "missionlang", "dll",
                                          "MissionLang_MERCS.dll"),
}


def sha256(path):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def load_expected():
    out = {}
    path = os.path.join(ROOT, "reference", "SHA256.txt")
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        for line in f:
            line = line.strip()
            m = re.match(r"^([0-9a-fA-F]{64})\s+\*?(\S+)$", line)
            if m:
                out[m.group(2)] = m.group(1).lower()
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--reference-dir", default=None,
                    help="also compare against actual reference binaries in this directory")
    args = ap.parse_args()

    expected = load_expected()
    failures = 0
    for name, out in OUTPUTS.items():
        want = expected.get(name)
        if want is None:
            print("SKIP %-24s (no hash in reference/SHA256.txt)" % name)
            continue
        if not os.path.isfile(out):
            print("FAIL %-24s missing %s" % (name, out))
            failures += 1
            continue
        got = sha256(out)
        ok = got == want
        print("%s %-24s %s" % ("PASS" if ok else "FAIL", name, got))
        if not ok:
            print("     expected %s" % want)
            failures += 1
        if args.reference_dir:
            ref = os.path.join(args.reference_dir, name)
            if os.path.isfile(ref):
                rgot = sha256(ref)
                print("     reference file: %s" % ("match" if rgot == want else "HASH MISMATCH"))

    if failures:
        print("hash gate: FAIL (%d)" % failures)
        return 1
    print("hash gate: PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
