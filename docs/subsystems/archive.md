# Archive Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 285 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

`#VBD` archives, streams, file I/O, and path handling.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The archive layer owns the #VBD directory, entry hash chains, lazy member fetch/decompression, and the stream vtable. Open and close are at 0x004145E0 and 0x004148F0; open-from-stream is 0x00414820; the empty-archive initializer is 0x00413E90.

Member fetch is 0x00413830; the by-index, by-name, and iterator dispatchers are 0x00413BE0, 0x00413C70, and 0x00413D20. The writer path is 0x00413540; the LZW compressor/decompressor are 0x006FBE80 and 0x006FC220.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x004145E0 | vbd | archive open |
| 0x00414820 | stream | open from stream |
| 0x004148F0 | vbd | archive close |
| 0x00413E90 | vbd | empty-archive initializer |
| 0x00413830 | vbd | lazy member fetch/decompress |
| 0x00413BE0 | vbd | fetch by index |
| 0x00413C70 | vbd | fetch by name |
| 0x00413D20 | vbd | archive iterator |
| 0x00413540 | vbd | archive writer |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| vbd | 253 | #VBD archive directory, entry hashing, and member fetch. |
| stream | 30 | Stream vtable and memory/file stream implementations. |
| (general) | 2 | Archive helpers outside the #VBD/stream details. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
