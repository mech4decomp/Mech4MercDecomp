#!/usr/bin/env python3
"""
MW4 Phase 3 binary inventory.

Parses reference/MW4Mercs.exe directly (no Ghidra dependency) and produces:

  dumps/type_descriptors.csv   - MSVC RTTI TypeDescriptor structs (.?A* names)
  dumps/vtable_candidates.csv  - .rdata arrays of .text pointers (vtable-shaped)
  dumps/imports.csv            - import table: dll, fn_name, iat_rva
  dumps/sections.csv           - PE section table
  dumps/strings_mangled.txt    - all ?...@ demangled-style strings (CRT/MFC hints)

Usage:
    python tools/phase3_inventory.py
"""
import csv
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DUMP = os.path.join(ROOT, "build", "ghidra", "MW4_project", "dumps")


def main_default():
    return os.path.join(ROOT, "reference", "MW4Mercs.exe")


# Allow overriding the input EXE via argv[1] for skeleton-vs-target comparison.
if len(sys.argv) > 1 and not sys.argv[1].startswith("-"):
    EXE = os.path.abspath(sys.argv[1])
    DUMP = os.path.join(ROOT, "build", "ghidra", "MW4_project", "skeleton_dumps")
else:
    EXE = os.path.join(ROOT, "reference", "MW4Mercs.exe")


def parse_pe(data):
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    sig, machine, num_sections, _ts, _pst, _ns, opt_size, _ch = struct.unpack_from(
        "<IHHIIIHH", data, e_lfanew
    )
    magic = struct.unpack_from("<H", data, e_lfanew + 24)[0]
    if magic == 0x10B:
        image_base = struct.unpack_from("<I", data, e_lfanew + 24 + 28)[0]
    else:
        image_base = struct.unpack_from("<Q", data, e_lfanew + 24 + 24)[0]

    sec_off = e_lfanew + 24 + opt_size
    sections = []
    for i in range(num_sections):
        s = data[sec_off + i * 40 : sec_off + (i + 1) * 40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsize, rva, rawsize, rawptr = struct.unpack_from("<IIII", s, 8)
        flags = struct.unpack_from("<I", s, 36)[0]
        sections.append(
            {"name": name, "vsize": vsize, "rva": rva, "rawsize": rawsize, "rawptr": rawptr, "flags": flags}
        )

    # Data directories (16 entries, each 8 bytes: RVA+size)
    dd_off = e_lfanew + 24 + 96  # PE32: optional header standard + windows-specific up to NumberOfRvaAndSizes at +92, then 8*16
    # Actually, data dirs start at e_lfanew + 24 + 96 for PE32
    num_dd = struct.unpack_from("<I", data, e_lfanew + 24 + 92)[0]
    data_dirs = []
    for i in range(min(num_dd, 16)):
        rva, sz = struct.unpack_from("<II", data, dd_off + i * 8)
        data_dirs.append((rva, sz))

    return {
        "image_base": image_base,
        "sections": sections,
        "data_dirs": data_dirs,  # index 1 = Import, 2 = Resource, etc.
    }


def rva_to_off(sections, rva):
    for s in sections:
        if s["rva"] <= rva < s["rva"] + max(s["vsize"], s["rawsize"]):
            return s["rawptr"] + (rva - s["rva"])
    return None


def scan_type_descriptors(data, sections, image_base):
    """Find `.?A*` strings; back up 8 bytes for the TypeDescriptor struct."""
    hits = []
    pattern = b".?A"
    i = 0
    while True:
        j = data.find(pattern, i)
        if j < 0:
            break
        # Continues until NUL
        end = data.find(b"\x00", j)
        if end < 0:
            end = j + 1
        name = data[j:end].decode("ascii", "replace")
        # Only accept if it looks like an MSVC mangled class name (.?AV...@@ or .?AU...@@)
        if not re.match(r"^\.\?A[UVW][^@]*@+$", name):
            i = j + 1
            continue
        # Back up 8 bytes for pVFTable + spare
        if j >= 8:
            pVF, spare = struct.unpack_from("<II", data, j - 8)
            # Map file offset of name start to RVA
            file_off_name = j
            rva_name = None
            for s in sections:
                if s["rawptr"] <= file_off_name < s["rawptr"] + s["rawsize"]:
                    rva_name = s["rva"] + (file_off_name - s["rawptr"])
                    break
            rva_td = (rva_name - 8) if rva_name is not None else None
            hits.append(
                {
                    "rva": rva_td,
                    "pVFTable_va": pVF,
                    "spare": spare,
                    "name": name,
                }
            )
        i = end + 1
    return hits


def scan_vtable_candidates(data, sections, image_base, min_len=3, max_len=512):
    """Scan .rdata for runs of pointers into .text. A vtable is typically a
    contiguous array (>=3 entries) of .text VAs, optionally followed by a
    pointer into .rdata (the type-info or colocator). We emit each run.
    We also accept .rdata pointers (or 0) as a terminator rather than ending the run,
    but the core run is .text addresses.
    """
    rdata = next((s for s in sections if s["name"] == ".rdata"), None)
    text = next((s for s in sections if s["name"] == ".text"), None)
    if not rdata or not text:
        return []
    text_va_lo = image_base + text["rva"]
    text_va_hi = image_base + text["rva"] + text["vsize"]
    rdata_va_lo = image_base + rdata["rva"]
    rdata_va_hi = image_base + rdata["rva"] + rdata["vsize"]

    raw = data[rdata["rawptr"] : rdata["rawptr"] + rdata["rawsize"]]
    candidates = []
    i = 0
    n = len(raw)
    while i + 4 <= n:
        # Try to read a run of .text pointers starting at i
        run_start = i
        run = []
        while i + 4 <= n and len(run) < max_len:
            va = struct.unpack_from("<I", raw, i)[0]
            if text_va_lo <= va < text_va_hi:
                run.append(va)
                i += 4
            else:
                break
        if len(run) >= min_len:
            rva_vt = rdata["rva"] + run_start
            candidates.append({"rva": rva_vt, "va": image_base + rva_vt, "count": len(run), "methods": run})
            i = run_start + len(run) * 4
        else:
            i = run_start + 4
    return candidates


def parse_imports(data, sections, image_base, data_dirs):
    """Walk the Import Directory (data dir index 1) and emit (dll, name, iat_rva)."""
    imports = []
    if len(data_dirs) <= 1:
        return imports
    imp_rva, _imp_size = data_dirs[1]
    if imp_rva == 0:
        return imports
    off = rva_to_off(sections, imp_rva)
    if off is None:
        return imports
    while True:
        ilt_rva, _ts, _fwd, name_rva, iat_rva = struct.unpack_from("<IIIII", data, off)
        if ilt_rva == 0 and name_rva == 0:
            break
        # DLL name
        name_off = rva_to_off(sections, name_rva)
        dll = ""
        if name_off is not None:
            end = data.find(b"\x00", name_off)
            dll = data[name_off:end].decode("ascii", "replace")
        # Walk ILT (or IAT if ILT is 0) to get function names
        lookup_rva = ilt_rva if ilt_rva else iat_rva
        lookup_off = rva_to_off(sections, lookup_rva)
        if lookup_off is None:
            off += 20
            continue
        idx = 0
        while True:
            entry = struct.unpack_from("<I", data, lookup_off + idx * 4)[0]
            if entry == 0:
                break
            if entry & 0x80000000:
                imports.append({"dll": dll, "name": "ordinal_%d" % (entry & 0xFFFF), "iat_rva": iat_rva + idx * 4})
            else:
                hint_off = rva_to_off(sections, entry)
                if hint_off is None:
                    imports.append({"dll": dll, "name": "?", "iat_rva": iat_rva + idx * 4})
                else:
                    end = data.find(b"\x00", hint_off + 2)
                    nm = data[hint_off + 2 : end].decode("ascii", "replace")
                    imports.append({"dll": dll, "name": nm, "iat_rva": iat_rva + idx * 4})
            idx += 1
        off += 20
    return imports


def scan_mangled_strings(data):
    """Find DllMainCRTStartup, _main, ?xxx@@YA... patterns and well-known CRT strings."""
    hits = []
    patterns = [
        rb"_main\b",
        rb"DllMainCRTStartup\b",
        rb"DllMain\b",
        rb"\?_main@@",
        rb"_CRT_INIT\b",
        rb"atexit\b",
        rb"_initterm\b",
        rb"msvcrt\.dll\x00",
        rb"__p_+[A-Za-z]",
    ]
    for pat in patterns:
        regex = re.compile(pat)
        for m in regex.finditer(data):
            ctx_start = max(0, m.start() - 8)
            ctx_end = min(len(data), m.end() + 64)
            ctx = data[ctx_start:ctx_end]
            printable = "".join(chr(b) if 32 <= b < 127 else "." for b in ctx)
            hits.append({"off": m.start(), "match": m.group().decode("ascii", "replace"), "ctx": printable})
    return hits


def main():
    os.makedirs(DUMP, exist_ok=True)
    with open(EXE, "rb") as f:
        data = f.read()

    pe = parse_pe(data)
    ib = pe["image_base"]
    print("ImageBase: 0x%08X  sections: %d" % (ib, len(pe["sections"])))

    # 1. Sections
    with open(os.path.join(DUMP, "sections.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["name", "rva", "vsize", "rawptr", "rawsize", "flags"])
        for s in pe["sections"]:
            w.writerow([s["name"], "0x%08X" % s["rva"], s["vsize"], "0x%08X" % s["rawptr"], s["rawsize"], "0x%08X" % s["flags"]])
    print("  -> sections.csv")

    # 2. Imports
    imports = parse_imports(data, pe["sections"], ib, pe["data_dirs"])
    with open(os.path.join(DUMP, "imports.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["dll", "name", "iat_rva"])
        for imp in imports:
            w.writerow([imp["dll"], imp["name"], "0x%08X" % imp["iat_rva"]])
    # Per-DLL summary
    dll_count = {}
    for imp in imports:
        dll_count[imp["dll"]] = dll_count.get(imp["dll"], 0) + 1
    print("  -> imports.csv (%d imports across %d DLLs)" % (len(imports), len(dll_count)))
    for d, c in sorted(dll_count.items()):
        print("       %-18s %d" % (d, c))

    # 3. Type descriptors
    tds = scan_type_descriptors(data, pe["sections"], ib)
    with open(os.path.join(DUMP, "type_descriptors.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["rva", "pVFTable_va", "spare", "name"])
        for td in tds:
            w.writerow(["0x%08X" % (td["rva"] or 0), "0x%08X" % td["pVFTable_va"], "0x%08X" % td["spare"], td["name"]])
    print("  -> type_descriptors.csv (%d type descriptors)" % len(tds))

    # 4. Vtable candidates
    vts = scan_vtable_candidates(data, pe["sections"], ib)
    with open(os.path.join(DUMP, "vtable_candidates.csv"), "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["rva", "va", "count", "methods_va"])
        for v in vts:
            w.writerow(["0x%08X" % v["rva"], "0x%08X" % v["va"], v["count"], ";".join("0x%08X" % m for m in v["methods"])])
    print("  -> vtable_candidates.csv (%d vtable-shaped arrays)" % len(vts))

    # 5. Well-known CRT/MFC string hints
    mangled = scan_mangled_strings(data)
    with open(os.path.join(DUMP, "strings_mangled.txt"), "w") as f:
        for h in mangled:
            f.write("0x%08X  %-40s  %s\n" % (h["off"], h["match"], h["ctx"]))
    print("  -> strings_mangled.txt (%d hits)" % len(mangled))

    print("Dump complete.")


if __name__ == "__main__":
    main()