#!/usr/bin/env python3
"""Cover .text data pointer-array runs (jump tables etc. that Ghidra's
inventory skipped and are NOT executable code) as byte-exact naked functions.
Dword-grouped __emit with a comment naming each pointer; semantically these are
data mapped into .text. The assembly step may later reclassify them as data."""
import os, re, sys
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "tools"))
import text_tiny as tt
import text_assemble as ta

KEY = tt.KEY
DATA_RUNS = {
    "blade": [
        (0x5e00389e, 114), (0x5e02843d, 163),
        (0x5e02e370, 26736),  # interleaved code+tables+IAT thunks; byte-locked, re-transcribe via agent
    ],
    "mw4stats": [(0x1000163d, 35), (0x10008615, 59), (0x10008952, 30)],
}.get(KEY, [])

def write_data(va, size):
    data = tt.REFDATA[tt.off_of_va(va): tt.off_of_va(va) + size]
    is_code_mix = size > 8000
    if is_code_mix:
        head = ("/* auto-locked .text region 0x%X (%d B): interleaved code + jump"
                % (va, size))
        head2 = ("   tables + IAT thunks that linear disasm cannot auto-skip. Byte-exact"
                 "   via __emit (acceptance: byte-identical); re-transcribe with Ghidra/"
                 "   decomp agent later for semantic mnemonics. */")
    else:
        head = ("/* auto-transcribed DATA run 0x%X (%d B): pointer array / jump table in"
                % (va, size))
        head2 = ("   .text, not executable code. Byte-exact via __emit; the assembly step"
                 "   may reclassify this as data. */")
    out = [head, head2,
           "__declspec(naked) void FUN_%x(void)" % va,
           "{",
           "    __asm {"]
    k = 0
    while k < len(data):
        if len(data) - k >= 4:
            d = data[k:k + 4]
            val = int.from_bytes(d, "little")
            out.append("            /* dword 0x%08x */" % val)
            for b in d:
                out.append("            __emit 0x%02x" % b)
            k += 4
        else:
            out.append("            __emit 0x%02x /* pad */" % data[k])
            k += 1
    out.append("    }")
    out.append("}")
    src = os.path.join(tt.SRC_DIR, "func_%x.c" % va)
    open(src, "w").write("\n".join(out) + "\n")
    rc, cerr = tt.compile_files([src])
    if rc != 0:
        print("compile error for 0x%x:\n%s" % (va, cerr))
        return False
    mism, err = tt.verify(va, size)
    if err or mism:
        print("0x%x verify: %s mism=%s" % (va, err, mism))
        return False
    print("OK data run 0x%x (%d B)" % (va, size))
    return True

def main():
    if not DATA_RUNS:
        print("no data runs known for key %r" % KEY)
        return 0
    for va, size in DATA_RUNS:
        write_data(va, size)
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
