#!/usr/bin/env python3
"""Ghidra-free disassembler for untranscribed gundll .text gaps (gaptext.bin).

Slices the bytes for a VA+size range out of reference\\GunDll.dll and
disassembles them with capstone, so the decomp agents can transcribe
gaptext functions to func_<va>.c without a Ghidra project.

Usage:
    python tools/gaptext_disasm.py --va 0x10001199 --size 167
    python tools/gaptext_disasm.py --gap 0x10001199   (size from gundll_gaps.csv)

Prints, for the run: the leading NOP-pad count, the real function entry VA
(first non-pad byte), the usable size, and a per-instruction disassembly
(offset | bytes | mnemonic operands).
"""
import argparse, csv, struct, sys

try:
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:
    sys.exit("capstone not installed")


def dll_text_bytes(dll):
    d = open(dll, "rb").read()
    e = struct.unpack_from("<I", d, 0x3C)[0]
    sig, machine, nsec, _ts, _pst, _ns, osz, _ch = struct.unpack_from("<IHHIIIHH", d, e)
    magic = struct.unpack_from("<H", d, e + 24)[0]
    ib = struct.unpack_from("<I", d, e + 24 + 28)[0] if magic == 0x10B else struct.unpack_from("<Q", d, e + 24 + 24)[0]
    so = e + 24 + osz
    for i in range(nsec):
        s = d[so + i*40: so + (i+1)*40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsize, rva, rawsize, rawptr = struct.unpack_from("<IIII", s, 8)
        if name == ".text":
            return d[rawptr:rawptr+rawsize], rva, ib
    sys.exit("no .text")


def load_gap(va):
    for r in csv.DictReader(open(r"build/module_textdata/gundll_gaps.csv")):
        if int(r["va"], 16) == va:
            return int(r["size"]), r["kind"]
    sys.exit("gap %08x not in gundll_gaps.csv" % va)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--va", required=True)
    ap.add_argument("--size", default=None)
    ap.add_argument("--dll", default=r"reference\GunDll.dll")
    ap.add_argument("--base", default="0x10000000")
    a = ap.parse_args()
    va = int(a.va, 16)
    if a.size is None:
        size, kind = load_gap(va)
    else:
        size, kind = int(a.size), "given"
    text, trva, ib = dll_text_bytes(a.dll)
    base = int(a.base, 16)
    off = va - base - trva
    body = text[off:off+size]
    nops = 0
    while nops < len(body) and body[nops] == 0x90:
        nops += 1
    entry = va + nops
    use = size - nops
    print("GAP %08x kind=%s total=%d B  leadnop=%d  entry=%08x  usable=%d B"
          % (va, kind, size, nops, entry, use))
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.skipdata = True
    i = 0
    for ins in md.disasm(body, va):
        print("%08x | %-22s | %s %s"
              % (ins.address, bytes(ins.bytes).hex(" "), ins.mnemonic, ins.op_str))
        i += 1
        if ins.address >= va + size - 1:
            break
    if i == 0:
        print("(no disassembly produced; verify the run contains code)")


if __name__ == "__main__":
    main()
