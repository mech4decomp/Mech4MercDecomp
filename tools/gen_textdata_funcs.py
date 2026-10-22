"""Decompose the in-.text data_0x*.c blocks into real functions.

These blocks are ".text regions Ghidra didn't recover as functions" — most are
real code (NOP-padded function bodies). This tool:
  1. Walks src for data_0x*.c (block VA + byte size from the header comment).
  2. Splits each block into pad runs vs code/table segments.
  3. Disassembles each code segment with capstone (offline; NOT a Ghidra
     script — the project forbids custom Ghidra post-scripts).
  4. Validates: a segment is a function if it decodes and contains a ret/jmp
     terminator; pure pointer runs stay as data.
  5. Writes per-function disassembly to build/textdata_disasm/<va>.asm and a
     manifest build/textdata_functions.csv (va,size,block,dir,kind).

Bytes come from the reference (read-only). Read-only tool; never edits files.
"""
import os, re, struct, sys
import capstone

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, "reference", "MW4Mercs.exe")
SRC = os.path.join(ROOT, "src")
OUT_CSV = os.path.join(ROOT, "build", "textdata_functions.csv")
OUT_DISASM = os.path.join(ROOT, "build", "textdata_disasm")
BASE = 0x400000
TEXT_LO, TEXT_HI = 0x401000, 0x76A381

sys.path.insert(0, os.path.join(ROOT, "tools"))
from diff import read_pe_text_section

md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
md.detail = False


def get_block(va, size):
    exe_text, text_rva, _ = read_pe_text_section(EXE)
    off = va - BASE - text_rva
    return bytes(exe_text[off:off + size])


def split_segments(blob):
    """Yield (off, size, kind) where kind in {'fn','table','pad'}."""
    n = len(blob)
    segs = []
    i = 0
    while i < n:
        b = blob[i]
        if b in (0x90, 0xCC):
            j = i
            while j < n and blob[j] in (0x90, 0xCC):
                j += 1
            if j - i >= 6:
                segs.append((i, j - i, "pad"))
                i = j
                continue
        if i % 4 == 0 and i + 12 <= n:
            vals = [struct.unpack_from("<I", blob, i + 4 * k)[0] for k in range(3)]
            if all(TEXT_LO <= v <= TEXT_HI for v in vals):
                j = i
                while j + 4 <= n and TEXT_LO <= struct.unpack_from("<I", blob, j)[0] <= TEXT_HI:
                    j += 4
                if j - i >= 12:
                    segs.append((i, j - i, "table"))
                    i = j
                    continue
        j = i + 1
        while j < n:
            bj = blob[j]
            if bj in (0x90, 0xCC):
                k = j
                while k < n and blob[k] in (0x90, 0xCC):
                    k += 1
                if k - j >= 6:
                    break
            if j % 4 == 0 and j + 12 <= n:
                vals = [struct.unpack_from("<I", blob, j + 4 * t)[0] for t in range(3)]
                if all(TEXT_LO <= v <= TEXT_HI for v in vals):
                    break
            j += 1
        segs.append((i, j - i, "fn"))
        i = j
    return segs


def disassemble(code, va):
    out = []
    for ins in md.disasm(code, va):
        out.append((ins.address, ins.size, ins.mnemonic, ins.op_str))
    return out


def has_terminator(dis):
    """Function-like if any instruction is ret or an unconditional jmp
    (including IAT jump thunks `jmp dword ptr [imm]`)."""
    for a, sz, mn, op in dis:
        if mn in ("ret", "retf") or mn == "jmp":
            return True
    return False


def main():
    os.makedirs(OUT_DISASM, exist_ok=True)
    rows = []
    n_fn = n_table = n_pad = 0
    exe_text, text_rva, _ = read_pe_text_section(EXE)
    for root, dirs, files in os.walk(SRC):
        dirs[:] = [d for d in dirs if d != "modules"]
        for fn in sorted(files):
            if not (fn.startswith("data_") and fn.endswith(".c")):
                continue
            m = re.match(r"data_([0-9a-fA-F]{8})\.c", fn)
            if not m:
                continue
            va = int(m.group(1), 16)
            path = os.path.join(root, fn)
            with open(path) as f:
                head = f.read(220)
            sm = re.search(r"\(0x([0-9a-f]+) bytes @ 0x", head)
            size = int(sm.group(1), 16) if sm else 0
            if not size:
                continue
            blob = get_block(va, size)
            rel = os.path.relpath(root, SRC)
            for off, segsize, kind in split_segments(blob):
                if kind == "pad":
                    n_pad += 1
                    continue
                sva = va + off
                if kind == "table":
                    n_table += 1
                    rows.append((sva, segsize, fn, rel, "table"))
                    continue
                code = blob[off:off + segsize]
                dis = disassemble(code, sva)
                if not has_terminator(dis):
                    rows.append((sva, segsize, fn, rel, "data?"))
                    continue
                # distinguish a jump/ret thunk (1-2 insns) from a full function
                kind = "thunk" if (len(dis) <= 2 and dis[0][2] in ("jmp", "ret")) else "fn"
                n_fn += 1
                with open(os.path.join(OUT_DISASM, "%08x.asm" % sva), "w") as f:
                    f.write("; %s in %s (block 0x%X) -- %d bytes\n" % (fn, rel, va, segsize))
                    for a, sz, mn, op in dis:
                        b = code[a - sva:a - sva + sz].hex(" ").upper()
                        f.write("0x%08X: %-18s %s %s\n" % (a, b, mn, op))
                rows.append((sva, segsize, fn, rel, kind))
    with open(OUT_CSV, "w", newline="") as f:
        import csv
        w = csv.writer(f)
        w.writerow(["va", "size", "block", "dir", "kind"])
        for r in sorted(rows, key=lambda x: x[0]):
            w.writerow(["0x%08X" % r[0], r[1], r[2], r[3], r[4]])
    print("fn=%d table=%d data?=%d pad=%d  total rows=%d" % (n_fn, n_table, sum(1 for r in rows if r[4] == "data?"), n_pad, len(rows)))
    print("wrote %s and %s" % (OUT_CSV, OUT_DISASM))


if __name__ == "__main__":
    main()
