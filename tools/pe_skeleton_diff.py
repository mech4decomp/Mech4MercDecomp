#!/usr/bin/env python3
"""
MW4 PE skeleton comparison — field-by-field diff of two PE files.

Used in Phase 5 to iterate the baseline skeleton build toward structural
agreement with the reference MW4Mercs.exe.

Usage:
    python tools/pe_skeleton_diff.py reference/MW4Mercs.exe build/MW4Mercs.exe
"""
import argparse
import struct
import sys

DD_NAMES = [
    "Export", "Import", "Resource", "Exception", "Certificate", "BaseReloc",
    "Debug", "Architecture", "GlobalPtr", "TLS", "LoadConfig", "BoundImport",
    "IAT", "DelayImport", "CLR", "Reserved",
]


def parse_pe(data):
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    sig, machine, num_sections, ts, pst, ns, opt_size, ch = struct.unpack_from(
        "<IHHIIIHH", data, e_lfanew
    )
    opt_start = e_lfanew + 24
    magic = struct.unpack_from("<H", data, opt_start)[0]
    image_base = struct.unpack_from("<I", data, opt_start + 28)[0]
    # Standard fields
    fields = {}
    fields["e_lfanew"] = e_lfanew
    fields["machine"] = machine
    fields["num_sections"] = num_sections
    fields["time_date_stamp"] = ts
    fields["size_of_opt_hdr"] = opt_size
    fields["characteristics"] = ch
    fields["opt_magic"] = magic
    fields["linker_version"] = (data[opt_start + 2], data[opt_start + 3])
    fields["size_of_code"] = struct.unpack_from("<I", data, opt_start + 4)[0]
    fields["size_of_init"] = struct.unpack_from("<I", data, opt_start + 8)[0]
    fields["size_of_uninit"] = struct.unpack_from("<I", data, opt_start + 12)[0]
    fields["addr_of_entry"] = struct.unpack_from("<I", data, opt_start + 16)[0]
    fields["base_of_code"] = struct.unpack_from("<I", data, opt_start + 20)[0]
    fields["base_of_data"] = struct.unpack_from("<I", data, opt_start + 24)[0]
    fields["image_base"] = image_base
    fields["section_align"] = struct.unpack_from("<I", data, opt_start + 32)[0]
    fields["file_align"] = struct.unpack_from("<I", data, opt_start + 36)[0]
    fields["os_ver"] = struct.unpack_from("<HH", data, opt_start + 40)
    fields["image_ver"] = struct.unpack_from("<HH", data, opt_start + 44)
    fields["subsys_ver"] = struct.unpack_from("<HH", data, opt_start + 48)
    fields["size_of_image"] = struct.unpack_from("<I", data, opt_start + 56)[0]
    fields["size_of_headers"] = struct.unpack_from("<I", data, opt_start + 60)[0]
    fields["checksum"] = struct.unpack_from("<I", data, opt_start + 64)[0]
    fields["subsystem"] = struct.unpack_from("<H", data, opt_start + 68)[0]
    fields["dll_characteristics"] = struct.unpack_from("<H", data, opt_start + 70)[0]
    fields["num_rva_and_sizes"] = struct.unpack_from("<I", data, opt_start + 92)[0]

    # Data dirs (at opt_start + 96 for PE32)
    dd_off = opt_start + 96
    data_dirs = []
    for i in range(min(fields["num_rva_and_sizes"], 16)):
        rva, sz = struct.unpack_from("<II", data, dd_off + i * 8)
        data_dirs.append((rva, sz))

    # Sections
    sec_off = opt_start + opt_size
    sections = []
    for i in range(num_sections):
        s = data[sec_off + i * 40 : sec_off + (i + 1) * 40]
        name = s[:8].rstrip(b"\x00").decode("ascii", "replace")
        vsz, rva, rsz, rptr = struct.unpack_from("<IIII", s, 8)
        flags = struct.unpack_from("<I", s, 36)[0]
        sections.append({"name": name, "vsize": vsz, "rva": rva, "rawsize": rsz, "rawptr": rptr, "flags": flags})

    return fields, data_dirs, sections


def fmt(v):
    if isinstance(v, int):
        return "0x%X" % v
    if isinstance(v, tuple):
        return ".".join(str(x) for x in v)
    return str(v)


def diff_field(name, a, b, ignored=None):
    if ignored and name in ignored:
        return
    if a != b:
        print("  %-22s ref=%-14s new=%s" % (name, fmt(a), fmt(b)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("reference")
    ap.add_argument("new")
    ap.add_argument("--ignore", default="time_date_stamp,checksum",
                    help="comma-separated field names to skip")
    args = ap.parse_args()
    ignored = set(args.ignore.split(","))

    with open(args.reference, "rb") as f:
        ref_data = f.read()
    with open(args.new, "rb") as f:
        new_data = f.read()

    ref_f, ref_dd, ref_sec = parse_pe(ref_data)
    new_f, new_dd, new_sec = parse_pe(new_data)

    print("=" * 70)
    print("PE HEADER FIELDS")
    print("=" * 70)
    for k in ref_f:
        if k in ignored:
            continue
        diff_field(k, ref_f[k], new_f.get(k), ignored)

    print()
    print("=" * 70)
    print("DATA DIRECTORIES")
    print("=" * 70)
    for i, name in enumerate(DD_NAMES):
        if name in ignored:
            continue
        if i >= len(ref_dd) or i >= len(new_dd):
            print("  %-14s missing in one" % name)
            continue
        rr, rs = ref_dd[i]
        nr, ns = new_dd[i]
        if (rr, rs) != (nr, ns):
            print("  %-14s ref=(0x%X, 0x%X) new=(0x%X, 0x%X)" % (name, rr, rs, nr, ns))

    print()
    print("=" * 70)
    print("SECTIONS")
    print("=" * 70)
    ref_names = [s["name"] for s in ref_sec]
    new_names = [s["name"] for s in new_sec]
    print("  ref has %d sections: %s" % (len(ref_names), ref_names))
    print("  new has %d sections: %s" % (len(new_names), new_names))
    print()
    print("  %-8s %-12s %-12s %-12s %-12s %s" % (
        "name", "rva ref/new", "vsize ref/new", "rawsize ref/new", "rawptr ref/new", "flags ref/new"))
    max_sections = max(len(ref_sec), len(new_sec))
    for i in range(max_sections):
        r = ref_sec[i] if i < len(ref_sec) else None
        n = new_sec[i] if i < len(new_sec) else None
        name = (r or n)["name"]
        rv = (fmt(r["rva"]) if r else "-", fmt(n["rva"]) if n else "-")
        vs = (fmt(r["vsize"]) if r else "-", fmt(n["vsize"]) if n else "-")
        rs = (fmt(r["rawsize"]) if r else "-", fmt(n["rawsize"]) if n else "-")
        rp = (fmt(r["rawptr"]) if r else "-", fmt(n["rawptr"]) if n else "-")
        fl = (fmt(r["flags"]) if r else "-", fmt(n["flags"]) if n else "-")
        mark = "  " if r and n and r["name"] == n["name"] else "* "
        print("%s%-8s %-12s %-12s %-12s %-12s %s" % (mark, name, "/".join(rv), "/".join(vs), "/".join(rs), "/".join(rp), "/".join(fl)))

    print()
    print("Diff complete. (Items above are mismatches; unlisted fields match.)")


if __name__ == "__main__":
    main()