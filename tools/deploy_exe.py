#!/usr/bin/env python3
"""Deploy the oracle EXE into the game install and verify it is byte-identical
to the canonical reference (never deploy a broken/partial build).

Usage: python tools/deploy_exe.py [install_dir]
Default install dir: the Mercenaries install under the repo.
"""
import hashlib, os, shutil, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "build", "MW4Mercs.exe")
DEFAULT_INSTALL = os.path.join(ROOT, "Mechwarrior 4 Mercenaries")
REF_SHA = "deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f"


def sha(p):
    h = hashlib.sha256()
    with open(p, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main():
    install = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_INSTALL
    dst = os.path.join(install, "MW4Mercs.exe")
    if not os.path.isfile(SRC):
        print("ERROR: %s missing - run `nmake exe` first" % SRC)
        sys.exit(1)
    if sha(SRC) != REF_SHA:
        print("ERROR: %s is NOT the byte-identical oracle (ref %s...)" % (SRC, REF_SHA[:12]))
        sys.exit(1)
    if not os.path.isdir(install):
        print("ERROR: install dir %s not found" % install)
        sys.exit(1)
    if os.path.isfile(dst) and sha(dst) == REF_SHA:
        print("already deployed (byte-identical): %s" % dst)
        return
    shutil.copy2(SRC, dst)
    if sha(dst) != REF_SHA:
        print("ERROR: post-copy hash mismatch on %s" % dst)
        sys.exit(1)
    print("deployed oracle EXE -> %s (SHA-256 %s...)" % (dst, REF_SHA[:12]))


if __name__ == "__main__":
    main()
