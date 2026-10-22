/*
 * include/mw4/vbd.h
 *
 * Layout of the MW4 ".mw4" resource archive (the `#VBD` container).
 *
 * Reverse-engineered 2026-07-30 by walking the live game data:
 *   <install>\RESOURCE\{core,props,textures}.mw4
 *
 * Layout:
 *
 *   Archive header (variable length; the archived file's own path is
 *   length-prefixed at the end of the fixed prologue).
 *
 *     u32 sig              = 0x44425623   ("#VBD")
 *     u32 version          = 4                       (all 3 archives)
 *     u32 entry_count      = 63                       (all 3 archives)
 *     u32 dir_file_offset  = file offset at which packed member data begins
 *                            (i.e. the first member's bytes; per-entry
 *                             `data_off` is relative to this base)
 *     u16 key              = encryption/seed 1 (always == key2)
 *     u16 key2             = encryption/seed 2 (== key)
 *     u64 filetime         = archive's Win32 FILETIME creation timestamp
 *                            (every entry repeats this same timestamp)
 *     u32 flags1 = 1
 *     u32 flags2 = 1
 *     u8  reserved[6]      = zeros
 *     u8  archive_path_len
 *     u8  archive_path[archive_path_len]   ("resource\<name>.mw4")
 *
 *   Entry (entry_count entries, written inline immediately after the
 *   archive path; each is 23 + name_len bytes):
 *
 *     u64  filetime        (== archive's filetime, every entry)
 *     u32  uncompressed_size  (size of expanded member file)
 *     u32  stored_size     (== uncompressed_size when entry stored raw)
 *     u32  data_off        (offset from dir_file_offset to member bytes)
 *     u16  entry_index     (1-based; matches position in the directory)
 *     u8   name_len
 *     char name[name_len]  (backslash path, no NUL terminator)
 *
 *   Member data:
 *     bytes at [dir_file_offset + data_off .. + stored_size].
 *     When `uncompressed_size == stored_size` the bytes appear verbatim
 *     (no compression). Otherwise `uncompressed_size - stored_size` worth
 *     of compression is applied; the algorithm is statically compiled into
 *     both MW4eXtractor.exe (Mektek tools) and the game binary -- it is
 *     NOT zlib, LZNT1, LZ4, raw-deflate, or a single-byte XOR/shift by
 *     `key`. Header bytes of compressed members look like
 *       00 01 08 <flag> <4 bytes hash/seed> ...
 *     with the leading `00 01 08` constant across members within one
 *     archive; the byte at offset 3 varies per member. Likely a custom
 *     LZ77/LZSS-derived codec parametrised by `key`.
 *
 * Open Phase 4 task: identify the per-entry compression algorithm via
 * Ghidra analysis of the game's resource loader (look up the
 * `#VBD` magic cross-reference in the `.text` section).
 *
 * NOTE: member paths can contain braces from the WinFS-style
 *   `name.data{gamemodel}` / `{effects}` family used by LOD-aware
 *   pipelines; treat as opaque ASCII (no escaping enforced).
 */

#ifndef MW4_VBD_H
#define MW4_VBD_H

#pragma pack(push, 1)

#define MW4_VBD_SIG 0x44425623u        /* "#VBD", little-endian */
#define MW4_VBD_VERSION 4u

struct Mw4ArchiveHeader {
    unsigned long sig;             /* MW4_VBD_SIG          */
    unsigned long version;         /* 4                    */
    unsigned long entry_count;     /* 63                   */
    unsigned long dir_file_offset; /* data area base       */
    unsigned short key1;           /* seed 1 (== key2)     */
    unsigned short key2;           /* seed 2 (== key1)     */
    unsigned long long filetime;   /* Win32 FILETIME       */
    unsigned long flags1;          /* 1                    */
    unsigned long flags2;          /* 1                    */
    unsigned char  reserved[6];    /* zeros                */
    unsigned char  archive_path_len;
    /* archive_path follows: archive_path_len bytes */
};

struct Mw4ArchiveEntry {
    unsigned long long filetime;        /* == header filetime */
    unsigned long       uncompressed_size;
    unsigned long       stored_size;
    unsigned long       data_off;        /* relative to dir_file_offset */
    unsigned short      entry_index;     /* 1-based */
    unsigned char       name_len;
    /* name follows: name_len bytes */
};

#pragma pack(pop)

#endif /* MW4_VBD_H */