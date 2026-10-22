#!/usr/bin/env python3
"""
tools/text_tiny.py -- auto-transcribe the remaining uncovered .text gap runs
(tiny accessors/thunks that Ghidra's inventory missed) into inline-asm functions.

For every byte range the module's transcribed objs do NOT cover:
  1. disassemble [VA, VA+size) from the reference with capstone
  2. generate src\\<target>\\text\\func_<va>.c (naked FUN_<va>, __cdecl) with
     external-symbol references for absolute addresses (g_* data, FUN_* code)
     and local labels for in-range branches
  3. compile to the module obj dir, verify byte fidelity vs the reference
     (reloc sites masked via the obj's own reloc records)
  4. on mismatch, fall back to justified per-instruction `__emit` for the exact
     bytes MSVC6 cannot encode natively, and iterate until 0 mismatch

Excluded (handled elsewhere): the CRT tail (0x1001ef9f) and entry (0x1001eed3),
plus any run that is data-like / partially-decodable / has an out-of-range jcc
(those land in the manual list).

Usage: python tools/text_tiny.py [key]
"""
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import text_assemble as ta
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

KEY = sys.argv[1] if len(sys.argv) > 1 else "mw4stats"
KEYS = {
    "mw4stats": (0x10000000, "MW4Stats.dll"),
    "blade":    (0x5E000000, "blade.dll"),
    "zloglib":  (0x10000000, "ZlogLib.dll"),
"language": (0x10000000, "Language.dll"),
"missionlang": (0x10000000, "MissionLang_MERCS.dll"),
}
BASE, REF_NAME = KEYS.get(KEY, KEYS["mw4stats"])
TR = 0x1000
SKIP_VA = set()                          # no longer skipped: entry + CRT tail are transcribed
_TGT = {"missionlang": "missionlang_mercs"}.get(KEY, KEY)
SRC_DIR = os.path.join(ROOT, "src", _TGT, "text")
OBJ_DIR = os.path.join(ROOT, "build", "modules", KEY, "obj")
REF = os.path.join(ROOT, "reference", REF_NAME)
CFLAGS = "/nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I" + os.path.join(ROOT, "include")

pe = pefile.PE(REF)
text_sec = next(s for s in pe.sections if s.Name.rstrip(b"\x00") == b".text")
TS = text_sec.Misc_VirtualSize
REFDATA = text_sec.get_data()
SECS = [(s.Name.rstrip(b"\x00").decode(), s.VirtualAddress,
         max(s.Misc_VirtualSize, s.SizeOfRawData)) for s in pe.sections]
md = Cs(CS_ARCH_X86, CS_MODE_32)


def off_of_va(va):
    return va - BASE - TR


def which_section(va):
    rva = va - BASE
    for name, sva, svs in SECS:
        if sva <= rva < sva + svs:
            return name.lstrip(".")
    return "?"


def get_runs():
    ours = [None] * TS
    for p in os.listdir(OBJ_DIR):
        m = re.fullmatch(r"func_([0-9a-fA-F]+)\.obj", p)
        if not m:
            continue
        va = int(m.group(1), 16)
        body, _ = ta.obj_text_and_relocs(os.path.join(OBJ_DIR, p))
        foff = off_of_va(va)
        for k in range(len(body)):
            if foff + k < TS:
                ours[foff + k] = body[k]
    runs = []
    i = 0
    while i < TS:
        if ours[i] is None:
            j = i
            while j < TS and ours[j] is None:
                j += 1
            runs.append((BASE + TR + i, j - i))
            i = j
        else:
            i += 1
    return runs


ABS_MEM = re.compile(r"\[(?:[a-z][a-z0-9]*:)?0[xX]([0-9a-fA-F]+)\]")
HEX = re.compile(r"(?<![0-9a-fA-F])0[xX][0-9a-fA-F]+")
DATA_SECS = {"rdata", "data", "rsrc", "idata", "edata"}


def _sub(externs, m):
    ea = int(m.group(0)[2:], 16)
    sec = which_section(ea)
    if sec == "text":
        externs[ea] = "FUN"
        return "FUN_%x" % ea
    if sec in DATA_SECS:
        externs[ea] = "g"
        return "g_%x" % ea
    return m.group(0)


def conv_mem(opstr, externs):
    if "[" not in opstr:
        return opstr
    parts = []
    seg = []
    in_b = False
    for ch in opstr:
        if ch == "[":
            parts.append("".join(seg) + "[")
            seg = []
            in_b = True
        elif ch == "]":
            parts.append(HEX.sub(lambda m: _sub(externs, m), "".join(seg)) + "]")
            seg = []
            in_b = False
        else:
            seg.append(ch)
    parts.append("".join(seg))
    return "".join(parts)


def interp(mnemonic, opstr, runva, runsize, externs, targets, bytestr=""):
    if mnemonic == "int3":
        return "int 3"
    if mnemonic in ("call", "jmp"):
        m = re.fullmatch(r"0x([0-9a-fA-F]+)", opstr)
        if m:
            tgt = int(m.group(1), 16)
            if runva <= tgt < runva + runsize:
                if bytestr[:2] == "e9":   # reference used near jmp -> force via extern
                    externs[tgt] = "FUN"
                    return "%s FUN_%x" % (mnemonic, tgt)
                targets.add(tgt)
                return "%s lbl_%x" % (mnemonic, tgt)
            externs[tgt] = "FUN"
            return "%s FUN_%x" % (mnemonic, tgt)
        return mnemonic + " " + conv_mem(opstr, externs)
    JC = {"ja", "jae", "jb", "jbe", "jc", "je", "jz", "jg", "jge", "jl", "jle",
          "jna", "jnae", "jnb", "jnbe", "jnc", "jne", "jng", "jnge", "jnl",
          "jnle", "jno", "jnp", "jns", "jnz", "jo", "jp", "jpe", "jpo", "js"}
    if mnemonic in JC:
        m = re.fullmatch(r"0x([0-9a-fA-F]+)", opstr)
        if m:
            tgt = int(m.group(1), 16)
            if runva <= tgt < runva + runsize:
                if bytestr[:2] == "0f":   # reference used near cc -> force via extern
                    externs[tgt] = "FUN"
                    return "%s FUN_%x" % (mnemonic, tgt)
                targets.add(tgt)
                return "%s lbl_%x" % (mnemonic, tgt)
            return None  # out-of-range jcc -> manual
        return mnemonic + " " + conv_mem(opstr, externs)
    return mnemonic + (" " + conv_mem(opstr, externs) if opstr else "")


def gen(va, size, insns, marked):
    insn_addr = {a for a, *_ in insns}
    externs = {}
    targets = set()
    forced = set(marked)
    texts = {}
    for i, (addr, bytestr, mnemonic, opstr) in enumerate(insns):
        t = interp(mnemonic, opstr, va, size, externs, targets, bytestr)
        if t is None:
            forced.add(i)
            texts[i] = None
        else:
            texts[i] = t
    # a branch target that is NOT an instruction boundary can't be a label:
    # force that instruction to exact bytes (and drop the phantom label).
    for i, (addr, bytestr, mnemonic, opstr) in enumerate(insns):
        if i in forced:
            continue
        for m in re.finditer(r"lbl_[0-9a-f]+", texts[i]):
            tva = int(m.group(0)[4:], 16)
            if tva in targets and tva not in insn_addr:
                targets.discard(tva)
                texts[i] = None
                forced.add(i)
    lines = []
    for i, (addr, bytestr, mnemonic, opstr) in enumerate(insns):
        if addr in targets:
            lines.append("        lbl_%x:" % addr)
        if i in forced:
            for k in range(0, len(bytestr), 2):
                lines.append("            __emit 0x%s /* %s %s: MSVC6 cannot encode natively */"
                             % (bytestr[k:k + 2], mnemonic, opstr))
            continue
        lines.append("            " + texts[i])
    marked |= forced
    out = ["/* auto-transcribed gap function 0x%X (%d B); review against reference; stepping stone */" % (va, size)]
    for ea in sorted(externs):
        if externs[ea] == "g":
            out.append("extern int g_%x;" % ea)
        else:
            out.append("extern void __cdecl FUN_%x(void);" % ea)
    out.append("__declspec(naked) void FUN_%x(void)" % va)
    out.append("{")
    out.append("    __asm {")
    pos = 0
    line_of = {}
    for i, (addr, bytestr, mnemonic, opstr) in enumerate(insns):
        if i in marked:
            pos += len(bytestr) // 2
            continue
        if addr in targets and addr != va:
            pos += 1
        pos += 1
        line_of[i] = 4 + len(externs) + pos
    out.extend(lines)
    out.append("    }")
    out.append("}")
    return "\n".join(out) + "\n", len(externs), line_of


def is_data_like(data):
    """True if the run is mostly a dword pointer array (jump table / ptr table)."""
    n = len(data)
    if n < 8:
        return False
    best = 0
    for a in range(4):
        cnt = 0
        tot = 0
        for k in range(a, n - 3, 4):
            d = int.from_bytes(data[k:k + 4], "little")
            tot += 1
            if BASE + 0x1000 <= d < BASE + 0x40000:   # pointer into the image
                cnt += 1
        if tot and cnt / tot > best:
            best = cnt / tot
    return best >= 0.6


def compile_files(files):
    if not files:
        return ""
    rsp = os.path.join(OBJ_DIR, "_tiny.rsp")
    with open(rsp, "w") as f:
        for fn in files:
            f.write('"%s"\n' % fn)
    cmd = "call tools\\env.bat && cl %s @%s /Fo%s\\" % (CFLAGS, rsp, OBJ_DIR)
    r = subprocess.run(["cmd", "/c", cmd], cwd=ROOT, capture_output=True, text=True)
    return r.returncode, r.stdout + r.stderr


def verify(va, size):
    obj = os.path.join(OBJ_DIR, "func_%x.obj" % va)
    if not os.path.exists(obj):
        return None, "no obj"
    body, reloc_off = ta.obj_text_and_relocs(obj)
    if not body:
        return None, "empty body"
    big = REFDATA[off_of_va(va): off_of_va(va) + size]
    mism = []
    n = min(len(body), size)
    for k in range(n):
        if k in reloc_off:
            continue
        if body[k] != big[k]:
            mism.append(k)
    if len(body) < size:
        mism.append(("SHORT", len(body), size))
    return mism, None


def main():
    os.makedirs(OBJ_DIR, exist_ok=True)
    os.makedirs(SRC_DIR, exist_ok=True)
    runs = get_runs()

    # Split large runs (CRT/EH/import-thunk tail etc.) at int3 padding into
    # individual sub-functions so each is transcribed as its own unit. Each
    # sub-function is [code start, next code start): it carries its own
    # trailing int3 padding (leading int3 padding rides on the first run).
    split = []
    for va, size in runs:
        if size <= 1024:
            split.append((va, size))
            continue
        data = REFDATA[off_of_va(va): off_of_va(va) + size]
        ins = list(md.disasm(data, va))
        int3n = sum(1 for x in ins if x.mnemonic == "int3")
        if int3n < 4:
            split.append((va, size))
            continue
        starts = [va]
        for i, x in enumerate(ins):
            if x.mnemonic == "int3" and i + 1 < len(ins) and ins[i + 1].mnemonic != "int3":
                starts.append(ins[i + 1].address)
        starts.append(va + size)
        pairs = [(a, b - a) for a, b in zip(starts, starts[1:]) if b > a]
        # merge pure-int3 padding runs into the following run
        merged = []
        i = 0
        while i < len(pairs):
            pva, psz = pairs[i]
            pdata = REFDATA[off_of_va(pva): off_of_va(pva) + psz]
            if pdata and all(b == 0xCC for b in pdata) and i + 1 < len(pairs):
                nva, nsz = pairs[i + 1]
                pairs[i + 1] = (pva, nsz + psz)
                i += 1
                continue
            merged.append((pva, psz))
            i += 1
        split.extend(merged)
    runs = split

    jobs = {}
    manual = []
    for va, size in runs:
        if va in SKIP_VA:
            continue
        data = REFDATA[off_of_va(va): off_of_va(va) + size]
        insns = [(x.address, x.bytes.hex(), x.mnemonic, x.op_str)
                 for x in md.disasm(data, va)]
        covered = sum(len(it[1]) // 2 for it in insns)
        if covered != size:
            manual.append((va, size, "partial-decode %d/%d" % (covered, size)))
            continue
        if is_data_like(data):
            manual.append((va, size, "data-like pointer array"))
            continue
        jobs[va] = (size, insns, set())

    redo = os.environ.get("TEXT_TINY_REDO", "")
    for rv in (int(x, 16) for x in redo.split(",") if x.strip()):
        obj = os.path.join(OBJ_DIR, "func_%x.obj" % rv)
        if os.path.exists(obj):
            body, _ = ta.obj_text_and_relocs(obj)
            if body:
                n = len(body)
                data = REFDATA[off_of_va(rv): off_of_va(rv) + n]
                ins = [(x.address, x.bytes.hex(), x.mnemonic, x.op_str)
                       for x in md.disasm(data, rv)]
                jobs[rv] = (n, ins, set())
                manual[:] = [m for m in manual if m[0] != rv]

    print("runs: %d   to-transcribe: %d   manual: %d" % (len(runs), len(jobs), len(manual)))
    done = {}
    maxiter = int(os.environ.get("TEXT_TINY_ITERS", "14"))
    for it in range(maxiter):
        changed = []
        for va in list(jobs):
            if va in done:
                continue
            size, insns, marked = jobs[va]
            src = os.path.join(SRC_DIR, "func_%x.c" % va)
            if os.path.exists(src):
                # only regenerate if not already verified this run
                pass
            text, _, _ = gen(va, size, insns, marked)
            if text is None:
                manual.append((va, size, "out-of-range jcc"))
                del jobs[va]
                continue
            open(src, "w").write(text)
            changed.append(src)
        if changed:
            rc, cerr = compile_files(changed)
            if rc != 0:
                errs = {}
                for el in cerr.splitlines():
                    m = re.search(r"func_([0-9a-fA-F]+)\.c\((\d+)\)\s*:\s*(?:error|fatal)", el)
                    if m:
                        errs.setdefault(int(m.group(1), 16), set()).add(int(m.group(2)))
                again = []
                for va in list(jobs):
                    if va in done or va not in errs:
                        continue
                    size, insns, marked = jobs[va]
                    text, E, line_of = gen(va, size, insns, marked)
                    if text is None:
                        continue
                    new = set(marked)
                    bad = False
                    for L in errs[va]:
                        if L < E + 5:      # error inside header/def/externs
                            bad = True
                            break
                        cand = min((abs(line_of[ix] - L), ix) for ix in line_of)
                        if cand[0] > 2:   # error line is far from any instruction
                            bad = True
                            break
                        new.add(cand[1])
                    if bad or new == marked:
                        manual.append((va, size, "compile error"))
                        del jobs[va]
                    else:
                        jobs[va] = (size, insns, new)
                        again.append(va)
                if again:
                    files = []
                    for va in again:
                        size, insns, marked = jobs[va]
                        text, _, _ = gen(va, size, insns, marked)
                        if text is None:
                            continue
                        open(os.path.join(SRC_DIR, "func_%x.c" % va), "w").write(text)
                        files.append(os.path.join(SRC_DIR, "func_%x.c" % va))
                    if files:
                        compile_files(files)
                if not jobs:
                    break
                continue
        pending = False
        for va in list(jobs):
            if va in done:
                continue
            size, insns, marked = jobs[va]
            mism, err = verify(va, size)
            if err:
                manual.append((va, size, err))
                del jobs[va]
                continue
            if mism:
                pending = True
                new = set(marked)
                for k in mism:
                    if isinstance(k, tuple):
                        continue
                    # mark only the FIRST mismatching instruction: a length-
                    # degenerate instruction shifts everything after it, and
                    # cascading the mark over the whole tail turns the function
                    # into a byte dump. Fix the alignment breaker first.
                    fi = None
                    for j, (a, bs, _, _) in enumerate(insns):
                        if a - va <= k < a - va + len(bs) // 2:
                            fi = j
                            break
                    if fi is not None:
                        new.add(fi)
                    break
                if new == marked:
                    manual.append((va, size, "unresolvable after marking"))
                    del jobs[va]
                else:
                    jobs[va] = (size, insns, new)
            else:
                done[va] = True
                print("  OK 0x%x (%d B) __emit=%d" % (va, size, len(marked)))
        if not pending:
            break

    print("\n== text_tiny: %d done, %d manual ==" % (len(done), len(manual)))
    for va, size, why in manual:
        print("  MANUAL 0x%x (%d B): %s" % (va, size, why))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
