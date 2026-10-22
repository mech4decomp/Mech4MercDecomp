# Crypto Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 3 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

MD5, hashing, and base64 helpers.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The MD5 implementation is the 0x0070E380-0x0070E480 island. Base64 and related byte helpers are used by the network and stats/auth paths.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0070E380-0x0070E480 | md5 | MD5 implementation |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 2 |  |
| md5 | 1 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0050D9D0 | core | 43 | `src/mw4mercs/text/func_0050d9d0.c` | keyword |
| 0x0050DA00 | core | 171 | `src/mw4mercs/text/func_0050da00.c` | keyword |

### md5

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0060C12D | core | - | `src/mw4mercs/text/func_0060C12D.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
