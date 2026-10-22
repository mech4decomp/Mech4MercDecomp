# Codec Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

LZW compression/decompression and related byte codecs.

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

## Coverage

All 2 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
