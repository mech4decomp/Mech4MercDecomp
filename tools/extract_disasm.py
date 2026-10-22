"""
Extract raw bytes and disassemble functions from the reference EXE.
Usage: python tools/extract_disasm.py <VA1> <VA2> ...
Reads functions.csv for size info.
"""
import struct
import sys
import os
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

# Load functions.csv
csv_path = os.path.join(os.path.dirname(os.path.dirname(__file__)),
                        'build', 'ghidra', 'MW4_project', 'dumps', 'functions.csv')

func_sizes = {}
with open(csv_path, 'r') as f:
    for line in f:
        line = line.strip()
        if not line or line.startswith('entry'):
            continue
        parts = line.split(',')
        if len(parts) >= 3:
            try:
                entry = int(parts[0], 16)
                size = int(parts[2])
                func_sizes[entry] = size
            except ValueError:
                pass

# Read reference EXE
exe_path = os.path.join(os.path.dirname(os.path.dirname(__file__)),
                        'reference', 'MW4Mercs.exe')
with open(exe_path, 'rb') as f:
    exe_data = f.read()

# Parse PE header to get section info
# DOS header
e_lfanew = struct.unpack('<I', exe_data[0x3C:0x40])[0]
# PE header
pe_offset = e_lfanew + 4  # skip PE signature
# FileHeader at pe_offset + 4 (20 bytes)
# OptionalHeader at pe_offset + 24
# Section headers follow optional header
# SizeOfOptionalHeader at pe_offset + 16 (2 bytes)
sections_offset = pe_offset + 20 + struct.unpack('<H', exe_data[pe_offset + 16:pe_offset + 18])[0]

# Get ImageBase from optional header
# Optional header starts at pe_offset + 20 (after file header)
opt_hdr = pe_offset + 20
image_base = struct.unpack('<I', exe_data[opt_hdr + 0x1C:opt_hdr + 0x20])[0]
print(f"ImageBase: 0x{image_base:08X}", file=sys.stderr)

# Parse sections
sections = []
for i in range(struct.unpack('<H', exe_data[pe_offset + 2:pe_offset + 4])[0]):
    sec_start = sections_offset + i * 40
    name = exe_data[sec_start:sec_start + 8].rstrip(b'\x00').decode('ascii', errors='replace')
    vsize = struct.unpack('<I', exe_data[sec_start + 8:sec_start + 12])[0]
    vaddr = struct.unpack('<I', exe_data[sec_start + 12:sec_start + 16])[0]
    raw_size = struct.unpack('<I', exe_data[sec_start + 16:sec_start + 20])[0]
    raw_ptr = struct.unpack('<I', exe_data[sec_start + 20:sec_start + 24])[0]
    # Convert RVA to full VA
    full_va = image_base + vaddr
    sections.append((name, full_va, vsize, raw_ptr, raw_size))
    print(f"Section {name}: VA=0x{full_va:08X}, VSize=0x{vsize:X}, RawPtr=0x{raw_ptr:X}, RawSize=0x{raw_size:X}", file=sys.stderr)

def va_to_offset(va, sections):
    """Convert VA to file offset."""
    for name, vaddr, vsize, raw_ptr, raw_size in sections:
        if vaddr <= va < vaddr + vsize:
            return raw_ptr + (va - vaddr)
    return None

# Disassemble each requested function
md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# Hardcoded sizes for functions not in functions.csv
hardcoded_sizes = {
    0x006E2D40: 146,
    0x006D3200: 148,
    0x006E0F80: 149,
    0x006D2A80: 151,
    0x006FBA70: 151,
    0x006D3000: 154,
    0x006E2A30: 154,
    0x006E2DD0: 155,
    0x006E7680: 157,
    0x006EE070: 158,
    0x006EE340: 158,
    0x006D3B60: 160,
    0x006E7020: 161,
    0x006D3010: 162,
    0x006E32D0: 164,
    0x006E2C30: 165,
    0x006F3F80: 166,
    0x006E2C80: 168,
    0x006E2F00: 170,
    0x006FC970: 171,
    0x006E3750: 172,
    0x006E2C60: 175,
    0x006D43C0: 176,
}

for arg in sys.argv[1:]:
    try:
        va = int(arg, 16)
    except ValueError:
        print(f"Invalid VA: {arg}", file=sys.stderr)
        continue
    
    size = func_sizes.get(va) or hardcoded_sizes.get(va)
    if size is None:
        print(f"FUN_{va:08X}: size not found", file=sys.stderr)
        continue
    
    offset = va_to_offset(va, sections)
    if offset is None:
        print(f"FUN_{va:08X}: VA not in any section", file=sys.stderr)
        continue
    
    code = exe_data[offset:offset + size]
    
    print(f"\n{'='*70}")
    print(f"FUN_{va:08X} (size={size})")
    print(f"{'='*70}")
    
    # Print raw bytes
    print(f"\nRaw bytes ({size}):")
    hex_str = ' '.join(f'{b:02X}' for b in code)
    print(hex_str)
    
    # Print disassembly
    print(f"\nDisassembly:")
    for insn in md.disasm(code, va):
        # Get raw bytes for this instruction
        insn_bytes = code[insn.address - va:insn.address - va + insn.size]
        bytes_str = ' '.join(f'{b:02X}' for b in insn_bytes)
        print(f"  {insn.address:08X}: {bytes_str:20s} {insn.mnemonic:10s} {insn.op_str}")
    
    # Print decomp-like pseudocode
    print(f"\nDecomp pseudocode:")
    print(f"  FUN_{va:08X} (size={size})")
    print(f"  Calling convention: __cdecl (default)")
    print(f"  Stack params: {size} bytes")
