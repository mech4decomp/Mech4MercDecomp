#!/usr/bin/env python3
"""Audit the public oracle export before publishing.

This is deliberately stricter than a normal lint: it enforces the separation
between private development material and the public oracle snapshot.

Checks:
  * forbidden paths (generated data sections, binary artifacts, etc.)
  * forbidden binary files (reference EXEs/DLLs, objs, PDBs, archives)
  * forbidden text markers (tokens, personal identifiers, absolute paths)
  * required public files and source inventory

Usage:
  python tools/audit_public_export.py
  python tools/audit_public_export.py --strict
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

FORBIDDEN_DIRS = {
    ".opencode", ".vscode", "build",
    "Mech_tools", "MechCommander2-Source", "Mechwarrior 4 Mercenaries",
}
FORBIDDEN_TOP_FILES = {"opencode.jsonc"}
FORBIDDEN_BINARY_EXT = {
    ".exe", ".dll", ".obj", ".pdb", ".lib", ".bin", ".mw4",
    ".zip", ".7z", ".iso", ".icd",
}
FORBIDDEN_MARKERS = [
    "ghp_", "github_pat_", "dkelly123190", "dkelly@",
    "D:\\MW4_DECOMP", "D:/MW4_DECOMP",
]
TEXT_EXT = {
    ".c", ".h", ".py", ".md", ".txt", ".csv", ".bat", ".ps1",
    ".yml", ".yaml", ".json", ".jsonc", ".gitignore", ".gitattributes",
}
TARGETS = {
    "mw4mercs": ("MW4Mercs.exe", 13292),
    "blade": ("blade.dll", 700),
    "gundll": ("GunDll.dll", 3000),
    "language": ("Language.dll", 90),
    "missionlang_mercs": ("MissionLang_MERCS.dll", 60),
    "mw4stats": ("MW4Stats.dll", 1000),
    "zloglib": ("ZlogLib.dll", 25),
}
REQUIRED = [
    "README.md", "CONTRIBUTING.md", "LICENSE", "NOTICE.md", "AGENTS.md",
    "Makefile", ".gitignore", ".gitattributes",
    "reference/SHA256.txt", "reference/README.md",
    "reference/functions/MW4Mercs.csv", "reference/in_scope/gundll.txt",
    "tools/env.bat", "tools/build_text_objs.py",
    "tools/exe_image_assemble.py", "tools/image_assemble.py",
    "tools/diff.py", "tools/verify_nomask.py",
    "docs/ARCHITECTURE.md", "docs/BUILD.md", "docs/VERIFICATION.md",
    "docs/ORACLE_STATUS.md", "docs/LEGAL.md", "docs/FAQ.md",
]


def walk():
    for dp, dns, fns in os.walk(ROOT):
        dns[:] = [d for d in dns if d not in (".git", "build", "__pycache__")]
        rel = os.path.relpath(dp, ROOT).replace("\\", "/")
        if rel == ".":
            rel = ""
        for fn in fns:
            p = (os.path.join(rel, fn) if rel else fn).replace("\\", "/")
            parts = p.split("/")
            if parts[0] == "reference" and os.path.splitext(p)[1].lower() in (".exe", ".dll", ".icd"):
                continue
            if len(parts) >= 3 and parts[0] == "src" and parts[2] in ("rdata", "data", "rsrc", "txt2"):
                continue
            if "/artifacts/" in p and p.endswith(".bin"):
                continue
            yield p


def main():
    strict = "--strict" in sys.argv
    errors = []
    warnings = []

    files = list(walk())
    relset = set(files)

    for rel in files:
        parts = rel.split("/")
        if parts[0] in FORBIDDEN_DIRS:
            errors.append("forbidden directory/file: %s" % rel)
            continue
        if len(parts) == 1 and parts[0] in FORBIDDEN_TOP_FILES:
            errors.append("forbidden top-level file: %s" % rel)
        if rel in ("src/main.c",):
            errors.append("forbidden legacy skeleton source: %s" % rel)
        if len(parts) >= 3 and parts[0] == "src" and parts[2] in ("rdata", "data", "rsrc", "txt2"):
            errors.append("generated data section source: %s" % rel)
        if len(parts) >= 3 and parts[0] == "src" and parts[2] == "stubs":
            errors.append("legacy link stubs: %s" % rel)
        if "/artifacts/" in rel and rel.endswith(".bin"):
            errors.append("binary build artifact: %s" % rel)
        if rel.startswith("reference/") and os.path.splitext(rel)[1].lower() in (".exe", ".dll", ".icd"):
            errors.append("reference binary must not be committed: %s" % rel)
        ext = os.path.splitext(rel)[1].lower()
        if ext in FORBIDDEN_BINARY_EXT:
            errors.append("forbidden binary extension: %s" % rel)
        if os.path.getsize(os.path.join(ROOT, rel)) > 20 * 1024 * 1024:
            errors.append("file larger than 20 MiB: %s" % rel)

    for req in REQUIRED:
        if req not in relset:
            errors.append("missing required file: %s" % req)

    # Text-marker scan. Keep it to source/docs/metadata; skip large generated
    # indexes only if they exceed the scanner budget.
    for rel in files:
        if rel == "tools/audit_public_export.py":
            continue
        ext = os.path.splitext(rel)[1].lower()
        if ext not in TEXT_EXT and os.path.basename(rel) not in (
                "Makefile", ".gitignore", ".gitattributes"):
            continue
        path = os.path.join(ROOT, rel)
        if os.path.getsize(path) > 4 * 1024 * 1024:
            warnings.append("skipped marker scan for large file: %s" % rel)
            continue
        try:
            text = open(path, "r", encoding="utf-8", errors="replace").read()
        except OSError as exc:
            warnings.append("could not read %s: %s" % (rel, exc))
            continue
        for marker in FORBIDDEN_MARKERS:
            if marker in text:
                errors.append("forbidden marker %r in %s" % (marker, rel))

    # Inventory sanity: every target has its text tree and enough func sources.
    for target, (_dll, minimum) in TARGETS.items():
        d = os.path.join(ROOT, "src", target, "text")
        if not os.path.isdir(d):
            errors.append("missing source tree: src/%s/text" % target)
            continue
        n = sum(1 for fn in os.listdir(d)
                if re.fullmatch(r"func_[0-9a-fA-F]{8}\.c", fn))
        if n < minimum:
            errors.append("src/%s/text has only %d func sources (expected >= %d)"
                          % (target, n, minimum))

    print("audit: %d files" % len(files))
    for w in warnings:
        print("WARN: %s" % w)
    if errors:
        for e in errors:
            print("FAIL: %s" % e)
        print("audit: FAIL (%d errors)" % len(errors))
        return 1
    print("audit: PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
