#!/usr/bin/env python3
"""Disassemble a raw byte range from a reference PE binary using capstone.

Local helper (NOT a Ghidra post-script). Used for functions that Ghidra's
automatic inventory missed (present in functions.csv with declared ranges but
not defined as functions in the Ghidra DB).

Usage:
    python tools/disasm_range.py <exe> <va> <size>
"""
import sys
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

exe, va_s, size_s = sys.argv[1], sys.argv[2], sys.argv[3]
va = int(va_s, 16) if va_s.lower().startswith("0x") else int(va_s)
size = int(size_s, 16) if size_s.lower().startswith("0x") else int(size_s)

pe = pefile.PE(exe)
image_base = pe.OPTIONAL_HEADER.ImageBase
rva = va - image_base

# find section containing rva
data = None
for s in pe.sections:
    vaddr = s.VirtualAddress
    vsize = max(s.Misc_VirtualSize, s.SizeOfRawData)
    if vaddr <= rva < vaddr + vsize:
        raw = s.get_data()
        off = rva - vaddr
        data = raw[off:off + size]
        break
if data is None:
    print("range not in any section")
    sys.exit(1)

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True
addr = va
for insn in md.disasm(data, addr):
    print("  0x%08X: %-24s %s %s" % (insn.address, insn.bytes.hex().upper(), insn.mnemonic, insn.op_str))
