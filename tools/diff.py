#!/usr/bin/env python3
"""
MW4 decompilation per-function diff harness (Phase 2, Option C: EXE slicing).

Compares the bytes of a function compiled in a .obj against the same function
in the reference MW4Mercs.exe, masking out 4-byte relocation sites in the .obj
so unresolved address references don't poison the comparison.

Usage:
    python tools/diff.py --func 0x00401000 --obj build/obj/foo.obj \
        --exe reference/MW4Mercs.exe --csv build/ghidra/MW4_project/dumps/functions.csv

Exit code 0 if match >= --threshold (default 100), else 1.
"""
import argparse
import csv
import struct
import sys

# PE / COFF constants
IMAGE_SCN_CNT_CODE = 0x00000020
IMAGE_SCN_CNT_INITIALIZED_DATA = 0x00000040


def read_coff_text_section(obj_path):
    """Return (raw_bytes, [(offset_in_section, length, symbol_index_or_None)])
    for the .text section in a COFF .obj file along with its reloc locations."""
    with open(obj_path, "rb") as f:
        data = f.read()

    # COFF header
    if data[:2] != b"MZ":
        # COFF object: starts with machine field
        pass
    machine, num_sections, _ts, _pst, _ns, opt_size, characteristics = struct.unpack_from(
        "<HHIIIHH", data, 0
    )
    # section table starts after optional header
    sec_off = 20 + opt_size
    text_section = None
    for i in range(num_sections):
        s = data[sec_off + i * 40 : sec_off + (i + 1) * 40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsize, rva, rawsize, rawptr = struct.unpack_from("<IIII", s, 8)
        reloc_ptr = struct.unpack_from("<I", s, 24)[0]
        num_relocs = struct.unpack_from("<H", s, 32)[0]
        flags = struct.unpack_from("<I", s, 36)[0]
        if name == ".text" or (text_section is None and (flags & IMAGE_SCN_CNT_CODE)):
            text_section = (rawptr, rawsize, reloc_ptr, num_relocs)
            break
    if not text_section:
        raise RuntimeError(".text section not found in %s" % obj_path)
    rawptr, rawsize, reloc_ptr, num_relocs = text_section
    text_bytes = data[rawptr : rawptr + rawsize]

    # Build offset list of relocated bytes (4-byte chunks per reloc)
    reloc_mask = bytearray(len(text_bytes))
    relocs = []
    for i in range(num_relocs):
        roff, rsym, rtype = struct.unpack_from(
            "<IIH", data, reloc_ptr + i * 10
        )
        # IMAGE_REL_I386_DIR32      6  -> 4 bytes
        # IMAGE_REL_I386_DIR32NB    7  -> 4 bytes
        # IMAGE_REL_I386_REL32      20 -> 4 bytes (target-oriented)
        # IMAGE_REL_I386_SECTION    0xA
        # Treat all as 4-byte patches; record offset for masking
        relocs.append((roff, rtype))
        if rtype in (6, 7, 20, 0xA, 0xB, 0x14):
            for k in range(4):
                if roff + k < len(reloc_mask):
                    reloc_mask[roff + k] = 1
    return text_bytes, bytes(reloc_mask), relocs


def read_pe_text_section(exe_path):
    """Return (raw_bytes, text_rva) for the .text section of a PE image."""
    with open(exe_path, "rb") as f:
        data = f.read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    # PE\0\0 (4) + IMAGE_FILE_HEADER (20 bytes = 2+2+4+4+4+2+2)
    sig, machine, num_sections, _ts, _pst, _ns, opt_size, characteristics = struct.unpack_from(
        "<IHHIIIHH", data, e_lfanew
    )
    # IMAGE_OPTIONAL_HEADER starts at e_lfanew + 24. Magic at +0, ImageBase at +28 (DWORD for PE32)
    magic = struct.unpack_from("<H", data, e_lfanew + 24)[0]
    if magic == 0x10b:  # PE32
        image_base = struct.unpack_from("<I", data, e_lfanew + 24 + 28)[0]
    else:  # PE32+ : 8-byte ULONGLONG
        image_base = struct.unpack_from("<Q", data, e_lfanew + 24 + 24)[0]
    sec_off = e_lfanew + 24 + opt_size
    for i in range(num_sections):
        s = data[sec_off + i * 40 : sec_off + (i + 1) * 40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsize, rva, rawsize, rawptr = struct.unpack_from("<IIII", s, 8)
        flags = struct.unpack_from("<I", s, 36)[0]
        if name == ".text":
            return data[rawptr : rawptr + rawsize], rva, image_base
    raise RuntimeError(".text section not found in %s" % exe_path)


def load_function_csv(csv_path):
    """Parse functions.csv with bracket-aware splitting — function names like
    `CStringT<wchar_t,class_StrTraitMFC<wchar_t,...>>` contain top-level commas
    that aren't quoted, so we split on commas only at depth 0."""
    rows = {}
    with open(csv_path, newline="") as f:
        lines = f.read().splitlines()
    if not lines:
        return rows
    header = lines[0].split(",")
    for line in lines[1:]:
        fields, depth, cur = [], 0, ""
        for ch in line:
            if ch == "<":
                depth += 1
                cur += ch
            elif ch == ">":
                depth -= 1
                cur += ch
            elif ch == "," and depth == 0:
                fields.append(cur)
                cur = ""
            else:
                cur += ch
        fields.append(cur)
        if len(fields) != 4:
            continue
        entry, name, size, cc = fields
        rows[int(entry, 16)] = (name, int(size))
    return rows


def hexdump(a, b, mask, off, length, base_addr, width=16):
    lines = []
    n = min(length, len(a), len(b))
    for i in range(0, n, width):
        chunk = a[i : i + width]
        cmpchunk = b[i : i + width]
        ismask = mask[i : i + width]
        match = all(mask[i + j] or chunk[j] == cmpchunk[j] for j in range(len(chunk)))
        marker = "  " if match else "* "
        hexa = " ".join("%02X" % chunk[j] for j in range(len(chunk)))
        hexb = " ".join(
            "##" if ismask[j] else "%02X" % cmpchunk[j] for j in range(len(cmpchunk))
        )
        addr = base_addr + off + i
        lines.append("%s%08X  %s  |%s" % (marker, addr, hexa, hexb))
    return "\n".join(lines)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--func", required=True, help="Function RVA, e.g. 0x00401000")
    ap.add_argument("--obj", required=True, help="Compiled .obj containing the function")
    ap.add_argument("--exe", required=True, help="Reference MW4Mercs.exe")
    ap.add_argument("--csv", required=False, default=None,
                    help="functions.csv from Ghidra dump (omit if --size given)")
    ap.add_argument("--size", type=lambda x: int(x, 0), default=None,
                    help="Override function size in bytes (for Ghidra-missed entries; "
                         "skips CSV lookup)")
    ap.add_argument("--threshold", type=int, default=100, help="Pass threshold in %%")
    ap.add_argument("--full", action="store_true", help="Print full hexdiff")
    ap.add_argument("--offset", type=lambda x: int(x, 0), default=0,
                    help="Offset of the function inside the .obj .text section")
    args = ap.parse_args()

    func_rva = int(args.func, 0)
    if args.size is not None:
        name, size = "FUN_%08X" % func_rva, args.size
    else:
        if args.csv is None:
            print("Either --csv or --size must be given")
            return 2
        funcs = load_function_csv(args.csv)
        if func_rva not in funcs:
            print("Function 0x%08X not in %s (use --size to override)" % (func_rva, args.csv))
            return 2
        name, size = funcs[func_rva]

    exe_text, text_rva, image_base = read_pe_text_section(args.exe)
    func_rva_rel = func_rva - image_base  # CSV has VA; .text rva is image-relative
    exe_off = func_rva_rel - text_rva
    if exe_off < 0 or exe_off + size > len(exe_text):
        print("Function RVA 0x%08X outside .text" % func_rva)
        return 2
    ref_bytes = exe_text[exe_off : exe_off + size]

    obj_text, mask, relocs = read_coff_text_section(args.obj)
    obj_off = args.offset
    if obj_off + size > len(obj_text):
        size = min(size, len(obj_text) - obj_off)
    new_bytes = obj_text[obj_off : obj_off + size]
    new_mask = mask[obj_off : obj_off + size]

    total = 0
    matched = 0
    for i in range(size):
        if new_mask[i]:
            continue  # masked relocation — don't count toward denominator
        total += 1
        if new_bytes[i] == ref_bytes[i]:
            matched += 1
    pct = 100.0 * matched / total if total else 0.0

    print("Function : %s @ 0x%08X  size=%d" % (name, func_rva, size))
    print("Masked   : %d reloc bytes" % sum(new_mask))
    print("Compared : %d bytes" % total)
    print("Match    : %d bytes (%.2f%%)" % (matched, pct))
    if args.full or pct < args.threshold:
        print("-" * 72)
        print("    ref  %-32s  | obj (## = masked)" % "obj")
        print(hexdump(ref_bytes, new_bytes, new_mask, 0, size, func_rva))

    return 0 if pct >= args.threshold else 1


if __name__ == "__main__":
    sys.exit(main())