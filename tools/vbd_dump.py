#!/usr/bin/env python
"""
Parser for the MW4 "VBD" (.mw4) resource archive.

Layout deduced from raw hex dumps of core/props/textures.mw4:

  Header (variable; ends just before archive name):
    u32  sig            = 0x44425623  ("#VBD")
    u32  version        = 4
    u32  entry_count    = 63  (constant across the 3 archives we have)
    u32  dir_data_off   = file offset at which packed file contents begin
    u16  key            (key2 = key)   encryption-ish seed
    u16  key2           = key
    u64  filetime       (Win32 FILETIME, identical to per-entry timestamps)
    u32  flags1 = 1
    u32  flags2 = 1
    u8 reserved[6]      (zeros)
    u8  archive_name_len
    u8  archive_name[archive_name_len]

  Entry (one per member):
    u64  filetime       (identical to header's)
    u32  field_a        (smallish integer; occasionally 0)
    u32  field_b        (size?   for entry it is uncompressed file size?)
    u32  off            (offset relative to dir_data_off of this entry's bytes)
    u16  index          (entry index, 1-based)
    u8   name_len
    char name[name_len]

Entry written adjacently; the directory is concatenated together with no
separators after the archive-name field. Data blobs begin at dir_data_off.
"""
import os
import struct
import sys


def parse(path):
    with open(path, "rb") as f:
        data = f.read()

    if data[:4] != b"#VBD":
        raise ValueError("not a VBD archive")

    version, count, dir_off = struct.unpack_from("<III", data, 4)
    key1, key2 = struct.unpack_from("<HH", data, 16)
    filetime = struct.unpack_from("<Q", data, 20)[0]
    flags1, flags2 = struct.unpack_from("<II", data, 28)
    # bytes 36..41 are reserved (6 zero bytes)
    p = 42
    name_len = data[p]
    p += 1
    archive_name = data[p:p + name_len].decode("latin-1")
    p += name_len

    files = []
    for i in range(count):
        if p + 23 > len(data):
            print(f"[!] truncated entry {i} at {p}")
            break
        # FT(8) + 3*u32 (12) + u16 (2) + u8 namelen (1)  -> 23 bytes fixed prefix
        e_ft, a, b, off, idx, nlen = struct.unpack_from("<QIIIHB", data, p)
        p += 23
        name = data[p:p + nlen].decode("latin-1")
        p += nlen
        files.append((idx, a, b, off, nlen, name))

    return {
        "version": version,
        "entry_count": count,
        "dir_off": dir_off,
        "keys": (key1, key2),
        "filetime": filetime,
        "flags": (flags1, flags2),
        "archive_name": archive_name,
        "files": files,
    }


def main():
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    default = os.path.join(root, "Mechwarrior 4 Mercenaries", "RESOURCE", "core.mw4")
    path = sys.argv[1] if len(sys.argv) > 1 else default
    info = parse(path)
    print(f"filename      : {path}")
    print(f"version       : {info['version']}")
    print(f"entry_count   : {info['entry_count']}")
    print(f"dir_data_off  : 0x{info['dir_off']:X}")
    print(f"keys          : 0x{info['keys'][0]:04X},0x{info['keys'][1]:04X}")
    print(f"FILETIME      : 0x{info['filetime']:X}")
    print(f"flags         : {info['flags']}")
    print(f"archive_name  : {info['archive_name']}")
    print()
    print(f"{'#':>3} {'idx':>4} {'a':>8} {'b':>8} {'data_off':>10} {'nlen':>4} name")
    for idx, a, b, off, nlen, name in info["files"]:
        print(f"{idx:3} {idx:4d} {a:8d} {b:8d} {off:#10x} {nlen:4d} {name}")


if __name__ == "__main__":
    main()