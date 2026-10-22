# Codec Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

LZW compression/decompression and related byte codecs.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The LZW compressor is 0x006FBE80; the decompressor is 0x006FC220. They are shared by the #VBD archive and by texture formats 5/6/7.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x006FBE80 | lzw | LZW compressor |
| 0x006FC220 | lzw | LZW decompressor |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| lzw | 2 | LZW compressor/decompressor used by #VBD and textures. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
