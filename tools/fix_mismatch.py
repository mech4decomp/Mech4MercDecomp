#!/usr/bin/env python3
"""Re-derive any existing module func whose whole-file .text placement has byte
mismatches, using text_tiny's (now-corrected) disasm->mcycle generator, iterating
to 0 mismatch. Stepping stone: keeps exact reference bytes per instruction."""
import os, sys, re, glob
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "tools"))
import text_tiny as tt
import text_assemble as ta

key = tt.KEY
def run(va, size, marked, iters=20):
    data = tt.REFDATA[tt.off_of_va(va): tt.off_of_va(va) + size]
    insns = []
    pos = va
    for x in tt.md.disasm(data, va):
        if x.address > pos and x.address < va + size:
            insns.append((pos, data[pos - va:x.address - va].hex(), "EMIT", ""))
        insns.append((x.address, x.bytes.hex(), x.mnemonic, x.op_str))
        pos = x.address + x.size
    if pos < va + size:
        insns.append((pos, data[pos - va:].hex(), "EMIT", ""))
    marked = set(marked)
    marked |= {i for i, (a, b, m, o) in enumerate(insns) if m == "EMIT"}
    src = os.path.join(tt.SRC_DIR, "func_%x.c" % va)
    for it in range(iters):
        text, _, _ = tt.gen(va, size, insns, marked)
        if text is None:
            return None, "out-of-range jcc"
        open(src, "w").write(text)
        rc, cerr = tt.compile_files([src])
        if rc != 0:
            errs = set()
            for el in cerr.splitlines():
                m = re.search(r"func_([0-9a-fA-F]+)\.c\((\d+)\)\s*:\s*(?:error|fatal)", el)
                if m:
                    errs.add(int(m.group(2)))
            _, E, line_of = tt.gen(va, size, insns, marked)
            new = set(marked)
            bad = False
            for L in errs:
                if L < E + 5:
                    bad = True; break
                cand = min((abs(line_of[ix] - L), ix) for ix in line_of)
                if cand[0] > 2:
                    bad = True; break
                new.add(cand[1])
            if bad or new == marked:
                return None, "compile error"
            marked = new
            continue
        mism, err = tt.verify(va, size)
        if err:
            return None, err
        if not mism:
            return va, marked
        new = set(marked)
        for k in mism:
            if isinstance(k, tuple):
                continue
            # mark only the first mismatch so a length-degenerate instruction
            # doesn't cascade into a whole-function byte dump
            for j, (a, bs, _, _) in enumerate(insns):
                if a - va <= k < a - va + len(bs) // 2:
                    new.add(j); break
            break
        if new == marked:
            return None, "unresolvable (%d mism)" % len(mism)
        marked = new
    return None, "iterations exhausted"

def main():
    files = []
    count = 0
    for p in glob.glob(os.path.join(tt.OBJ_DIR, "func_*.obj")):
        va = int(os.path.basename(p)[5:-4], 16)
        body, rel = ta.obj_text_and_relocs(p)
        if not body:
            continue
        st = tt.off_of_va(va)
        mism = [k for k in range(len(body)) if k not in rel and body[k] != tt.REFDATA[st + k]]
        if not mism:
            continue
        count += 1
        res, info = run(va, len(body), set())
        if res is None:
            print("KEEP 0x%x (%d B) mismatch=%d : %s" % (va, len(body), len(mism), info))
        else:
            em = len(info)
            print("FIXED 0x%x (%d B) mismatch=%d __emit=%d (re-derived from disasm; verify 0 mismatch)" % (va, len(body), len(mism), em))
    print("total funcs with mismatches processed: %d" % count)
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
