#!/usr/bin/env python3
"""
tools/data_assemble.py -- byte-lock a module's .rdata + .data at reference RVAs
as data objs (data_<va>.c, naked byte-exact via __emit) and verify byte-sum.

This is the P1 (data-layout reproduction) stepping stone: every .rdata/.data
byte is emitted verbatim inside a naked function named after its RVA, so the
same squad of tools can later place these sections in the linked image at the
reference addresses. The IAT for these MSVC6 DLLs lives inside .rdata, so a
byte-exact .rdata also reproduces the import-address table (covers "P3" for the
data-side of the no-mask goal).

src/<target>/<rdata|data>/<va>.c are generated (per-section subfolders).
Verification (data_assemble <key>) sums the objs at reference RVAs and reports
byte fidelity for .rdata and .data.

Usage: python tools/data_assemble.py <key> --compile  (compile committed sources)
       python tools/data_assemble.py <key> [--files]  (--files = (re)generate)
       python tools/data_assemble.py <key>            (verify only)
"""
import glob, os, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASER = {
    "mw4stats": ("MW4Stats.dll", 0x10000000),
    "blade": ("blade.dll", 0x5E000000),
    "zloglib": ("ZlogLib.dll", 0x10000000),
    "language": ("Language.dll", 0x10000000),
    "missionlang": ("MissionLang_MERCS.dll", 0x10000000),
    "gundll": ("GunDll.dll", 0x10000000),
}

# module key -> src target folder (missionlang folder is missionlang_mercs)
TARGET = {"missionlang": "missionlang_mercs"}


def target_of(key):
    return TARGET.get(key, key)

DATA_SECS = (".rdata", ".data")
CHUNK = 0x1000   # per-func byte budget (keeps cl inline-asm manageable)

# section name -> per-section source subfolder (binary-structure layout)
SEC_FOLDER = {".rdata": "rdata", ".data": "data"}


def emit_c(data, va):
    """naked func emitting `data` verbatim (byte-exact __emit)."""
    out = ["/* byte-exact %d-byte data run at 0x%08X (.rdata/.data reproduction) */" % (len(data), va),
           "#pragma warning(disable: 4035)",   # no return value in naked asm
           "__declspec(naked) void data_0x%08x(void)" % va,
           "{",
           "    __asm {"]
    for i in range(0, len(data), 16):
        row = data[i:i + 16]
        fam = "        /* +0x%04X */\n" % i
        for b in row:
            fam += "            __emit 0x%02x\n" % b
        out.append(fam)
    out.append("    }")
    out.append("}")
    out.append("")
    return "\n".join(out)


def generate(key, base):
    from pe_dump import PE
    dll = BASER[key][0]
    pe = PE(os.path.join(ROOT, "reference", dll))
    objs = []
    for sec_name in DATA_SECS:
        sec = next((s for s in pe.secs if s["name"] == sec_name), None)
        if not sec:
            print("  %s: no %s section" % (key, sec_name))
            continue
        # reference bytes = raw data only (the FILE stores rs; anything beyond
        # rs up to vs is BSS, loader zero-filled, NOT in the file). Never emit
        # the phantom virtual tail.
        rp, rsize, vsize = sec["rp"], sec["rs"], sec["vs"]
        raw = pe.data[rp:rp + min(rsize, vsize)]
        off = 0
        sdir = os.path.join(ROOT, "src", target_of(key), SEC_FOLDER[sec_name])
        os.makedirs(sdir, exist_ok=True)
        while off < len(raw):
            n = min(CHUNK, len(raw) - off)
            va = base + sec["rva"] + off
            body = raw[off:off + n]
            src = os.path.join(sdir, "data_0x%08x.c" % va)
            open(src, "w").write(emit_c(body, va))
            objs.append((va, body, sec_name, src))
            off += n
    # compile all data objs
    import subprocess
    obj_dir = os.path.join(ROOT, "build", "modules", key, "obj")
    os.makedirs(obj_dir, exist_ok=True)
    rsp = os.path.join(obj_dir, "_data.rsp")
    with open(rsp, "w") as f:
        for (va, body, sec, src) in objs:
            f.write('"%s"\n' % src)
    cflags = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I" + os.path.join(ROOT, "include")
    cmd = "call tools\\env.bat && cl %s @%s /Fo%s\\" % (cflags, rsp, obj_dir)
    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True, text=True)
    rc = r.returncode
    if rc != 0:
        print((r.stdout + r.stderr))
    print("  wrote %d data objs (compile rc=%d)" % (len(objs), rc))
    return objs


def obj_bytes(obj):
    d = open(obj, "rb").read()
    mach, ns, _, _, _, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    for i in range(ns):
        o = sh + i * 40
        name = d[o:o + 8]
        if name.startswith(b".text"):
            rsize = struct.unpack_from("<I", d, o + 16)[0]
            rp = struct.unpack_from("<I", d, o + 20)[0]
            return d[rp:rp + rsize]
    return b""


def verify(key):
    from pe_dump import PE
    dll, base = BASER[key]
    pe = PE(os.path.join(ROOT, "reference", dll))
    print("== %s .rdata/.data fidelity (raw-file bytes) ==" % key)
    ok = True
    for sec_name in DATA_SECS:
        sec = next((s for s in pe.secs if s["name"] == sec_name), None)
        if not sec:
            continue
        rp, rsize, vsize = sec["rp"], sec["rs"], sec["vs"]
        # only the raw bytes are in the FILE; ignore the BSS virtual tail
        ref = pe.data[rp:rp + min(rsize, vsize)]
        ours = bytearray(len(ref))
        placed = 0
        pat = os.path.join(ROOT, "build", "modules", key, "obj", "data_*.obj")
        for p in glob.glob(pat):
            va = int(os.path.basename(p)[7:-4], 16)  # data_0x....obj
            body = obj_bytes(p)
            off = va - base - sec["rva"]
            if off < 0 or off + len(body) > len(ref):
                continue
            ours[off:off + len(body)] = body[:]
            placed += len(body)
        mism = [k for k in range(len(ref)) if ours[k] != ref[k]]
        pct = 100.0 * (len(ref) - len(mism)) / len(ref) if ref else 100.0
        status = "OK" if len(mism) == 0 and placed == len(ref) else ("NOT PLACED" if placed != len(ref) else "MISMATCH")
        print("  %-6s rva=0x%x raw=0x%x vs=0x%x: placed=%d mismatch=%d (%.2f%%) %s" %
              (sec_name, sec["rva"], len(ref), vsize, placed, len(mism), pct, status))
        if len(mism) != 0 or placed != len(ref):
            ok = False
            for k in mism[:6]:
                print("     mismatch at va 0x%08x ref=%02x ours=%02x" % (base + sec["rva"] + k, ref[k], ours[k]))
    return 0 if ok else 1


def compile_existing(key):
    target = target_of(key)
    src_root = os.path.join(ROOT, "src", target)
    sources = []
    for folder in SEC_FOLDER.values():
        sources += sorted(glob.glob(os.path.join(src_root, folder, "*.c")))
    if not sources:
        print("no committed data sources found for %s" % key)
        return 1
    obj_dir = os.path.join(ROOT, "build", "modules", key, "obj")
    os.makedirs(obj_dir, exist_ok=True)
    rsp = os.path.join(obj_dir, "_data.rsp")
    with open(rsp, "w") as f:
        for src in sources:
            f.write('"%s"\n' % src)
    cflags = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I" + os.path.join(ROOT, "include")
    cmd = "call tools\\env.bat && cl %s @%s /Fo%s\\" % (cflags, rsp, obj_dir)
    import subprocess
    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        print(r.stdout + r.stderr)
    print("  compiled %d committed data sources (rc=%d)" % (len(sources), r.returncode))
    return r.returncode


def main():
    key = sys.argv[1] if len(sys.argv) > 1 else "mw4stats"
    if "--compile" in sys.argv:
        return compile_existing(key)
    gen = "--files" in sys.argv
    if gen:
        generate(key, BASER[key][1])
    return verify(key)


if __name__ == "__main__":
    raise SystemExit(main())
