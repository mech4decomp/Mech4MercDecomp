# Codec Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 3 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

LZW compression/decompression and related byte codecs.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
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
| lzw | 3 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### lzw

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x006FBE80 | core | 919 | `src/mw4mercs/text/func_006fbe80.c` | range |
| 0x006FC220 | core | 465 | `src/mw4mercs/text/func_006fc220.c` | range |
| 0x00701030 | core | 354 | `src/mw4mercs/text/func_00701030.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
