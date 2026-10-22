#!/usr/bin/env python3
"""
tools/exe_data_assemble.py -- byte-lock the EXE's non-code sections at reference
RVAs as data objs (data_<va>.c, naked byte-exact via __emit) and verify byte-sum.

Mirrors tools/data_assemble.py (the DLL track) for the EXE. Covers every file
byte outside .text that a from-sources oracle build needs to reproduce:
  - .rdata (import descriptors + IAT + vtables + strings + constants)
  - .data  (initialized globals; BSS virtual tail is loader zero-filled)
  - .rsrc  (resources -- byte-verbatim transcription; Phase 8 will replace with
            a proper .rc rebuild)
  - .txt2  (SafeDisc leftover, out-of-scope bytes preserved for layout)

The .text inter-function pad runs (0x90/0xCC/0x00 linker-align fillers) are
NOT transcribed here -- they are committed once as src\mw4mercs\artifacts\text_pads.bin by
tools/exe_image_assemble.py --init and filled in by the finalizer.

Source: src/mw4mercs/<section>/data_<va>.c (per-section subfolders).
Objs: build/obj/data/.
The reference is read ONLY here (transcription) and in verify (diff oracle).

Usage:
  python tools/exe_data_assemble.py --compile # compile committed data sources
  python tools/exe_data_assemble.py --files   # (re)generate + compile + verify
  python tools/exe_data_assemble.py           # verify only
"""
import glob, os, re, struct, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

BASE = 0x00400000
EXE = os.path.join(ROOT, "reference", "MW4Mercs.exe")
SRC_DIR = os.path.join(ROOT, "src", "mw4mercs")
OBJ_DIR = os.path.join(ROOT, "build", "obj", "data")

DATA_SECS = [".rdata", ".data", ".rsrc", ".txt2"]
CHUNK = 0x1000

# section name -> per-section source subfolder (binary-structure layout)
SEC_FOLDER = {".rdata": "rdata", ".data": "data", ".rsrc": "rsrc",
              ".txt2": "txt2"}


def section_src_dir(sec_name):
    """src/mw4mercs/<folder> for a data section's runs."""
    return os.path.join(SRC_DIR, SEC_FOLDER.get(sec_name, "data"))


def emit_c(body, va, tag):
    """naked func emitting `body` verbatim (byte-exact __emit)."""
    out = ["/* %s: byte-exact %d-byte data run at 0x%08X */" % (tag, len(body), va),
           "#pragma warning(disable: 4035)",
           "__declspec(naked) void data_0x%08x(void)" % va,
           "{",
           "    __asm {"]
    for i in range(0, len(body), 16):
        fam = "        /* +0x%04X */\n" % i
        for b in body[i:i + 16]:
            fam += "            __emit 0x%02x\n" % b
        out.append(fam)
    out.append("    }")
    out.append("}")
    out.append("")
    return "\n".join(out)


def gen_section(name, sec, pe, out):
    """Transcribe one data section's raw file bytes into data_<va>.c chunks."""
    rp, rsize, vsize = sec["rp"], sec["rs"], sec["vs"]
    raw = pe.data[rp:rp + rsize]
    off = 0
    n = 0
    sdir = section_src_dir(name)
    os.makedirs(sdir, exist_ok=True)
    while off < len(raw):
        take = min(CHUNK, len(raw) - off)
        va = BASE + sec["rva"] + off
        src = os.path.join(sdir, "data_0x%08x.c" % va)
        open(src, "w").write(emit_c(raw[off:off + take], va, name))
        out.append((va, raw[off:off + take], name, src))
        n += 1
        off += take
    return n


def compile_objs(sources):
    os.makedirs(OBJ_DIR, exist_ok=True)
    rsp = os.path.join(OBJ_DIR, "_data.rsp")
    with open(rsp, "w") as f:
        for s in sorted(sources):
            f.write('"%s"\n' % s)
    cflags = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I" + os.path.join(ROOT, "include")
    cmd = "call tools\\env.bat && cl %s @%s /Fo%s\\" % (cflags, rsp, OBJ_DIR)
    import subprocess
    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        print((r.stdout + r.stderr)[-4000:])
    return r.returncode


def obj_bytes(obj):
    d = open(obj, "rb").read()
    _, ns, _, _, _, osize, _ = struct.unpack_from("<HHIIIHH", d, 0)
    sh = 20 + osize
    for i in range(ns):
        o = sh + i * 40
        if d[o:o + 8].startswith(b".text"):
            rsize = struct.unpack_from("<I", d, o + 16)[0]
            rp = struct.unpack_from("<I", d, o + 20)[0]
            return d[rp:rp + rsize]
    return b""


def verify():
    from pe_dump import PE
    pe = PE(EXE)
    print("== EXE data fidelity (raw-file bytes, from objs only) ==")
    ok = True
    for sec in pe.secs:
        name = sec["name"]
        if name not in DATA_SECS:
            continue  # .text func/pad coverage is verified by exe_image_assemble
        rp, rsize, vsize = sec["rp"], sec["rs"], sec["vs"]
        ref = pe.data[rp:rp + rsize]
        ours = bytearray(len(ref))
        placed = 0
        for p in glob.glob(os.path.join(OBJ_DIR, "*.obj")):
            base = os.path.basename(p)
            m = re.match(r"^data_0x([0-9a-fA-F]{8})\.obj$", base)
            if not m:
                continue
            va = int(m.group(1), 16)
            body = obj_bytes(p)
            off = va - BASE - sec["rva"]
            if off < 0 or off + len(body) > len(ref):
                continue
            ours[off:off + len(body)] = body[:]
            placed += len(body)
        mism = [k for k in range(len(ref)) if ours[k] != ref[k]]
        pct = 100.0 * (len(ref) - len(mism)) / len(ref) if ref else 100.0
        status = "OK" if len(mism) == 0 and placed == len(ref) else \
                 ("NOT PLACED" if placed != len(ref) else "MISMATCH")
        print("  %-7s rva=0x%x raw=0x%x vs=0x%x: placed=%d mismatch=%d (%.2f%%) %s"
              % (name, sec["rva"], len(ref), vsize, placed, len(mism), pct, status))
        if len(mism) != 0 or placed != len(ref):
            ok = False
            for k in mism[:8]:
                print("     mismatch at va 0x%08x ref=%02x ours=%02x"
                      % (BASE + sec["rva"] + k, ref[k], ours[k]))
    return 0 if ok else 1


def generate():
    from pe_dump import PE
    pe = PE(EXE)
    out = []
    total = 0
    for name in DATA_SECS:
        sec = next((s for s in pe.secs if s["name"] == name), None)
        if not sec:
            print("  no %s section" % name)
            continue
        n = gen_section(name, sec, pe, out)
        print("  %-7s %d chunks -> src/mw4mercs/%s" % (name, n, SEC_FOLDER[name]))
        total += n
    sources = [src for (_, _, _, src) in out]
    rc = compile_objs(sources)
    print("  compiled %d data objs (rc=%d)" % (len(sources), rc))
    return rc


def compile_existing():
    sources = []
    for folder in SEC_FOLDER.values():
        sources += sorted(glob.glob(os.path.join(SRC_DIR, folder, "*.c")))
    if not sources:
        print("no committed data sources found under src/mw4mercs/{rdata,data,rsrc,txt2}")
        return 1
    print("compiling %d committed data sources" % len(sources))
    return compile_objs(sources)


def main():
    if "--compile" in sys.argv:
        return compile_existing()
    if "--files" in sys.argv:
        rc = generate()
        if rc != 0:
            return rc
    return verify()


if __name__ == "__main__":
    raise SystemExit(main())
