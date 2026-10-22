#!/usr/bin/env python3
"""Disassemble N bytes at a VA in the reference EXE using capstone."""
import struct, sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

def main():
    va = int(sys.argv[1], 16)
    size = int(sys.argv[2]) if len(sys.argv) > 2 else 64
    exe = sys.argv[3] if len(sys.argv) > 3 else r"reference\MW4Mercs.exe"
    with open(exe, "rb") as f:
        data = f.read()
    pe_off = struct.unpack_from("<I", data, 0x3C)[0]
    num_sections = struct.unpack_from("<H", data, pe_off + 6)[0]
    opt_size = struct.unpack_from("<H", data, pe_off + 20)[0]
    sec_start = pe_off + 24 + opt_size
    rva = va - 0x400000
    for i in range(num_sections):
        s = sec_start + i * 40
        sec_rva = struct.unpack_from("<I", data, s + 12)[0]
        sec_raw = struct.unpack_from("<I", data, s + 20)[0]
        sec_rsize = struct.unpack_from("<I", data, s + 16)[0]
        if sec_rva <= rva < sec_rva + sec_rsize:
            off = rva - sec_rva + sec_raw
            code = data[off:off + size]
            md = Cs(CS_ARCH_X86, CS_MODE_32)
            md.detail = True
            print(f"==== {va:#010x} ({size} bytes) ====")
            for insn in md.disasm(code, va):
                print(f"  {insn.address:08x}: {insn.bytes.hex():<20s} {insn.mnemonic:8s} {insn.op_str}")
                if insn.mnemonic in ("ret", "retn", "jmp") and not insn.op_str:
                    print("  --- (terminator) ---")
            return
    print(f"VA {va:#x} not in any section")

if __name__ == "__main__":
    main()
