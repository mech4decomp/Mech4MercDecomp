#!/usr/bin/env python3
"""Compile every oracle .text source for one target into its object directory.

The oracle build has two object sets per binary:

  * .text sources (func_*.c and in-.text data_*.c)
  * non-.text data sources (generated from your own reference by
    exe_data_assemble.py / data_assemble.py)

This script builds the .text set. It uses the same pinned MSVC6 flags as the
Makefile, batches sources through response files, and skips objects that are
newer than their source unless --force is given.

Usage:
  python tools/build_text_objs.py                 # EXE -> build/obj
  python tools/build_text_objs.py --module gundll # DLL -> build/modules/gundll/obj
  python tools/build_text_objs.py --force
"""
import argparse
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

TARGETS = {
    "mw4mercs": "mw4mercs",
    "blade": "blade",
    "gundll": "gundll",
    "language": "language",
    "missionlang": "missionlang_mercs",
    "mw4stats": "mw4stats",
    "zloglib": "zloglib",
}

CFLAGS = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /Iinclude"
CHUNK = 200


def source_and_obj_dirs(module):
    if module is None:
        return os.path.join(ROOT, "src", "mw4mercs", "text"), os.path.join(ROOT, "build", "obj")
    target = TARGETS[module]
    return (os.path.join(ROOT, "src", target, "text"),
            os.path.join(ROOT, "build", "modules", module, "obj"))


def compile_chunk(sources, objdir):
    rsp = os.path.join(ROOT, "_text_build.rsp")
    with open(rsp, "w", encoding="ascii") as f:
        for src in sources:
            f.write('"%s"\n' % src)
    inc = None
    out = os.path.relpath(objdir, ROOT) + "\\"
    cmd = 'call tools\\env.bat && cl %s @_text_build.rsp /Fo%s' % (CFLAGS, out)

    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True,
                       text=True, errors="replace")
    if r.returncode != 0:
        sys.stderr.write((r.stdout or "")[-6000:])
        sys.stderr.write((r.stderr or "")[-2000:])
    return r.returncode


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", choices=sorted(TARGETS), default=None,
                    help="build one module instead of the EXE")
    ap.add_argument("--force", action="store_true",
                    help="recompile even when the object is up to date")
    args = ap.parse_args()

    srcdir, objdir = source_and_obj_dirs(args.module)
    if not os.path.isdir(srcdir):
        print("ERROR: source directory not found: %s" % srcdir)
        return 2
    os.makedirs(objdir, exist_ok=True)

    sources = sorted(os.path.join(srcdir, n) for n in os.listdir(srcdir)
                     if n.endswith(".c"))
    if not sources:
        print("ERROR: no .c sources in %s" % srcdir)
        return 2

    pending = []
    for src in sources:
        obj = os.path.join(objdir, os.path.splitext(os.path.basename(src))[0] + ".obj")
        if args.force or not os.path.isfile(obj) or os.path.getmtime(obj) < os.path.getmtime(src):
            pending.append(src)

    label = args.module or "mw4mercs"
    print("%s: %d sources, %d need compiling -> %s" %
          (label, len(sources), len(pending), objdir))
    if not pending:
        return 0

    total = 0
    for i in range(0, len(pending), CHUNK):
        batch = pending[i:i + CHUNK]
        rc = compile_chunk(batch, objdir)
        if rc != 0:
            print("ERROR: cl failed on batch starting at %s" % os.path.basename(batch[0]))
            return rc
        total += len(batch)
        print("  compiled %d/%d" % (total, len(pending)))
    print("done: %d objects" % total)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
