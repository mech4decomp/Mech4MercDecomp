"""
Extract raw bytes for specific functions from the reference EXE.
Usage: python tools/extract_raw.py <VA1>:<size1> <VA2>:<size2> ...
"""
import struct
import sys
import os

exe_path = os.path.join(os.path.dirname(os.path.dirname(__file__)),
                        'reference', 'MW4Mercs.exe')
with open(exe_path, 'rb') as f:
    exe_data = f.read()

# Parse PE
e_lfanew = struct.unpack('<I', exe_data[0x3C:0x40])[0]
pe_offset = e_lfanew + 4
opt_hdr = pe_offset + 20
image_base = struct.unpack('<I', exe_data[opt_hdr + 0x1C:opt_hdr + 0x20])[0]
num_sec = struct.unpack('<H', exe_data[pe_offset + 2:pe_offset + 4])[0]
size_opt = struct.unpack('<H', exe_data[pe_offset + 16:pe_offset + 18])[0]
sections_offset = pe_offset + 20 + size_opt

sections = []
for i in range(num_sec):
    sec_start = sections_offset + i * 40
    name = exe_data[sec_start:sec_start + 8].rstrip(b'\x00').decode('ascii', errors='replace')
    vsize = struct.unpack('<I', exe_data[sec_start + 8:sec_start + 12])[0]
    vaddr = struct.unpack('<I', exe_data[sec_start + 12:sec_start + 16])[0]
    raw_size = struct.unpack('<I', exe_data[sec_start + 16:sec_start + 20])[0]
    raw_ptr = struct.unpack('<I', exe_data[sec_start + 20:sec_start + 24])[0]
    full_va = image_base + vaddr
    sections.append((name, full_va, vsize, raw_ptr, raw_size))

def va_to_offset(va):
    for name, vaddr, vsize, raw_ptr, raw_size in sections:
        if vaddr <= va < vaddr + vsize:
            return raw_ptr + (va - vaddr)
    return None

for arg in sys.argv[1:]:
    parts = arg.split(':')
    va = int(parts[0], 16)
    size = int(parts[1])
    offset = va_to_offset(va)
    if offset is None:
        print(f"FUN_{va:08X}: VA not found", file=sys.stderr)
        continue
    code = exe_data[offset:offset + size]
    hex_str = ' '.join(f'{b:02X}' for b in code)
    print(f"FUN_{va:08X} (size={size}):")
    print(hex_str)
    print()
