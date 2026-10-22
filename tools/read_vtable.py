#!/usr/bin/env python3
"""Read a vtable (array of function pointers) from the reference EXE."""
import struct, sys, os

def main():
    va = int(sys.argv[1], 16)
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 32
    exe = sys.argv[3] if len(sys.argv) > 3 else r"reference\MW4Mercs.exe"
    with open(exe, "rb") as f:
        data = f.read()
    pe_off = struct.unpack_from("<I", data, 0x3C)[0]
    num_sections = struct.unpack_from("<H", data, pe_off + 6)[0]
    opt_size = struct.unpack_from("<H", data, pe_off + 20)[0]
    sec_start = pe_off + 24 + opt_size
    rva = va - 0x400000
    file_off = None
    for i in range(num_sections):
        s = sec_start + i * 40
        name = data[s:s + 8].rstrip(b"\x00").decode(errors="replace")
        sec_rva = struct.unpack_from("<I", data, s + 12)[0]
        sec_raw = struct.unpack_from("<I", data, s + 20)[0]
        sec_rsize = struct.unpack_from("<I", data, s + 16)[0]
        if sec_rva <= rva < sec_rva + sec_rsize:
            file_off = rva - sec_rva + sec_raw
            break
    if file_off is None:
        print(f"VA {va:#x} not in any section", file=sys.stderr)
        sys.exit(1)
    print(f"vtable @ {va:#010x} (file_off {file_off:#x}), {count} slots:")
    for i in range(count):
        v = struct.unpack_from("<I", data, file_off + i * 4)[0]
        in_text = 0x401000 <= v < 0x76A381
        tag = "" if in_text else "  <-- non-code?"
        print(f"  slot {i:2d}: {v:#010x}{tag}")

if __name__ == "__main__":
    main()
