#!/usr/bin/env python3
"""
tools/link_module.py -- baseline full-DLL link for a module track (Phase 7/5-for-module).

Goal: link the module's per-function .objs into a whole DLL so we can run a
whole-file diff (tools/diff_file.py) and start closing the container-level
gap (ordering, IAT, .rdata/.data/.rsrc/.reloc). This is the module analog of
the EXE skeleton build.

Arguments:
    python tools/link_module.py [key]
        key = mw4stats | blade | ...  (default mw4stats)

Per key it resolves (all under OUR track dirs only; never touches reference):
    src\<target>\text\func_*.c          -> sources
    build\modules\<key>\obj\func_*.o   -> objs (must already be built via nmake one)
    reference\<name>.dll                -> canonical target (read-only)
    build\modules\<key>\dll\            -> outputs (dll, .def, .rsp, .shim.c, .map)

Behavior:
    1. collects objs, orders by VA (filename func_<hex>.c)
    2. writes a .def with the reference's named exports + ordinals (from pe_dump)
    3. attempts the link
    4. on unresolved externals, auto-generates a shim.c defining them
       (int data globals / naked-stub functions) and relinks
    5. runs tools/diff_file.py vs the reference and prints the gap

This intentionally produces a NON-matching baseline (addresses, ordering, data
sections all still wrong); it exists to make whole-file reproduction tractable.
"""
import argparse
import os
import re
import struct
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

KEY = {
    "mw4stats": ("MW4Stats.dll", 0x10000000),
    "blade":    ("blade.dll",    0x5E000000),
    "zloglib":  ("ZlogLib.dll",  0x10000000),
    "language": ("Language.dll", 0x10000000),
    "missionlang": ("MissionLang_MERCS.dll", 0x10000000),
    "gundll": ("GunDll.dll", 0x10000000),
}

# module key -> src target folder (missionlang folder is missionlang_mercs)
TARGET = {"missionlang": "missionlang_mercs"}


def target_of(key):
    return TARGET.get(key, key)

REF = os.path.join(ROOT, "reference")
LINK = ["link"]
LIBS = ("kernel32.lib wininet.lib advapi32.lib ole32.lib oleaut32.lib "
        "msvcrt.lib")


def gather_objs(key):
    objdir = os.path.join(ROOT, "build", "modules", key, "obj")
    objs = []
    for fn in os.listdir(objdir):
        m = re.fullmatch(r"func_([0-9a-fA-F]+)\.obj", fn)
        if m:
            objs.append((int(m.group(1), 16), os.path.join(objdir, fn)))
    objs.sort()
    return objs


def gather_src_counts(key):
    d = os.path.join(ROOT, "src", target_of(key))
    n = 0
    for root, dirs, files in os.walk(d):
        for f in files:
            if f.startswith("func_"):
                n += 1
    return n


def defined_functions(obj):
    """Return the set of .text/COMDAT function symbols defined by an obj."""
    d = open(obj, "rb").read()
    mach, ns, _, pst, nsym, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    if not nsym:
        return []
    # section headers: 40 bytes each, starting right after the optional header
    sh = 20 + osize
    secname = {}
    for i in range(ns):
        nm = d[sh + i * 40: sh + i * 40 + 8].rstrip(b"\x00").decode("latin1", "replace")
        secname[i + 1] = nm
    txt = [n for n, nm in secname.items() if nm == ".text"]
    strtab = pst + nsym * 18
    out = []
    i = 0
    ptr = pst
    auxrec = 18 if nsym else 0
    while i < nsym:
        s = d[ptr:ptr + 18]
        rawo = s[:8]
        if rawo[0] != 0:
            nm = rawo.rstrip(b"\x00").decode("latin1", "replace")
        else:
            off = struct.unpack_from("<I", rawo, 4)[0]
            e = d.index(b"\x00", strtab + off)
            nm = d[strtab + off:e].decode("latin1", "replace")
        sec, typ = struct.unpack_from("<HH", s, 12)
        if sec in txt and typ == 0x20:
            out.append(nm)
        aux = s[17]
        ptr += 18 * (1 + aux)
        i += 1 + aux
    return out


def write_def(reference, objdir, out):
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from pe_dump import PE
    pe = PE(reference)
    va_to_sym = {}
    for fn in os.listdir(objdir):
        m = re.fullmatch(r"func_([0-9a-fA-F]+)\.obj", fn)
        if not m:
            continue
        for s in defined_functions(os.path.join(objdir, fn)):
            va_to_sym.setdefault(int(m.group(1), 16), s)
    ex = pe.exports()
    lines = ["LIBRARY %s" % os.path.basename(reference), "EXPORTS"]
    for nm, ord_, rv in ex:
        va = pe.imagebase + rv
        sym = va_to_sym.get(va, "_FUN_%x" % va)
        # undecorate: strip leading '_'; drop any '@N' stdcall/fastcall suffix
        und = sym[1:] if sym.startswith("_") else sym
        if und.startswith("@"):
            und = und[1:]
        j = und.find("@")
        if j > 0:
            und = und[:j]
        lines.append("    %s = %s @%d" % (nm, und, ord_))
    with open(out, "w") as f:
        f.write("\n".join(lines) + "\n")
    return pe


def run(cmd, cwd):
    r = subprocess.run(cmd, cwd=cwd, capture_output=True, text=True,
                       env={**os.environ, "CL": "", "LINK": ""})
    return r.returncode, r.stdout + r.stderr


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("key", nargs="?", default="mw4stats")
    ap.add_argument("--no-diff", action="store_true", help="skip diff_file at end")
    ap.add_argument("--all", action="store_true",
                    help="complete-image link: /OPT:NOREF,/OPT:NOICF so every "
                         "/Gy COMDAT is retained (baseline link discards "
                         "unreferenced funcs -> partial .text)")
    args = ap.parse_args()
    if args.key not in KEY:
        print("unknown key %r; keys: %s" % (args.key, sorted(KEY)))
        return 2
    dll_name, base = KEY[args.key]
    ref = os.path.join(REF, dll_name)
    src_dir = os.path.join(ROOT, "src", target_of(args.key))
    outdir = os.path.join(ROOT, "build", "modules", args.key, "dll")
    os.makedirs(outdir, exist_ok=True)

    objs = gather_objs(args.key)
    nsrc = gather_src_counts(args.key)
    print("key=%s  sources=%d  compiled objs=%d" % (args.key, nsrc, len(objs)))
    if not objs:
        print("no objs; build them first: nmake one SRC=src\\%s\\text\\func_xxx.c OUTDIR=build\\modules\\%s\\obj"
              % (target_of(args.key), args.key))
        return 1

    # --- generate .def from reference exports + obj-defined symbols ---
    def_path = os.path.join(outdir, "%s.def" % os.path.splitext(dll_name)[0])
    pe = write_def(ref, os.path.join(ROOT, "build", "modules", args.key, "obj"), def_path)
    print("wrote %s (%d exports)" % (def_path, len(pe.exports())))

    # --- response file with ordered objs ---
    rsp = os.path.join(outdir, "link.rsp")
    with open(rsp, "w") as f:
        for _, o in objs:
            f.write('"%s"\n' % o)

    dll_out = os.path.join(outdir, dll_name)
    map_out = os.path.join(outdir, "%s.map" % os.path.splitext(dll_name)[0])

    def link(*shims):
        cmd = LINK + [
            "/dll",
            "/entry:_DllMainCRTStartup@12",
            "/subsystem:windows,4.0",
            "/base:0x%x" % base,
            "/filealign:0x1000",
            "/align:0x1000",
            "/machine:i386",
            "/nodefaultlib:libc.lib",
            "/def:%s" % def_path,
            "/out:%s" % dll_out,
            "/map:%s" % map_out,
            "/implib:%s" % os.path.join(outdir, "mod.lib"),
        ]
        if args.all:
            cmd += ["/opt:noref", "/opt:noicf"]
        cmd.append("@%s" % rsp)
        for shim in shims:
            if shim:
                cmd.append(shim)
        cmd += LIBS.split()
        return run(cmd, cwd=outdir)

    rc, out = link()
    print(out[-4000:])

    # --- resolve unresolved externals with a generated shim, iterate ---
    for _ in range(6):
        un = []
        for m in re.finditer(r"unresolved external symbol ([\w@_$?]+) referenced", out):
            s = m.group(1)
            if s not in un:
                un.append(s)
        for m in re.finditer(r"LNK2001: unresolved external symbol\s+([\w@_$?]+)", out):
            s = m.group(1)
            if s not in un:
                un.append(s)
        if not un:
            if rc == 0:
                break
            # link failed for non-unresolved reasons
            print("link failed (not unresolved externals); see output above")
            return 1
        print("unresolved externals (%d): %s" % (len(un), ", ".join(un[:30])))
        shim_path = os.path.join(outdir, "shim.c")
        shim_plain_path = os.path.join(outdir, "shim_plain.c")
        with open(shim_path, "w") as f, open(shim_plain_path, "w") as g:
            f.write("/* auto shim (decorated) for baseline link */\n")
            g.write("/* auto shim (plain) for baseline link */\n")
            # Some module funcs are __stdcall (lead-transcribed COM/helper funcs),
            # giving decorated symbols like _FUN_5e012cf0@0 / @4; text_tiny's gap
            # funcs reference the same targets as __cdecl (_FUN_5e012cf0). A name
            # may legitimately be referenced BOTH ways by different funcs, and C
            # cannot hold both forms in one TU, so decorated forms go in shim.c and
            # plain forms in shim_plain.c (two objs, distinct symbols).
            for s in sorted(set(un), key=str.lower):
                if s.startswith("_"):
                    s = s[1:]
                if not s or s.startswith("@"):
                    continue
                mda = re.fullmatch(r"([A-Za-z_][A-Za-z0-9_]*)@(\d+)", s)
                if mda:
                    nargs = int(mda.group(2)) // 4
                    params = ", ".join("int a%d" % i for i in range(nargs)) if nargs else "void"
                    f.write("void __stdcall %s(%s) {}\n" % (mda.group(1), params))
                else:
                    g.write("int %s;\n" % s)
        shim_obj = os.path.join(outdir, "shim.obj")
        # compile shim with same env via cl
        cc = subprocess.run(
            ["cl", "/nologo", "/MD", "/GR-", "/Gs-", "/GX-", "/O1", "/c",
             "/I" + os.path.join(ROOT, "include"), shim_path, shim_plain_path,
             "/Fo%s\\" % outdir],
            cwd=outdir, capture_output=True, text=True,
            env={**os.environ, "CL": "", "LINK": ""})
        if cc.returncode != 0:
            print("shim compile failed:\n", cc.stdout + cc.stderr)
            return 1
        shim_plain_obj = os.path.join(outdir, "shim_plain.obj")
        rc, out = link(shim_obj, shim_plain_obj)
        print(out[-2000:])
    else:
        print("too many iterations")
        return 1

    if rc != 0:
        print("FINAL LINK FAILED rc=%d" % rc)
        return 1

    print("=== LNK succeeded: %s ===" % dll_out)
    if not args.no_diff:
        subprocess.run([sys.executable,
                        os.path.join(ROOT, "tools", "diff_file.py"),
                        "--ref", ref, "--new", dll_out, "--first", "6"])
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
