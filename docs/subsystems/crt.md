# C Runtime Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 21 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

C/C++ runtime helpers: strings, memory primitives, formatting, and math.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

Only the helpers that were not folded into import thunks or the platform layer are listed here. They are string/memory/format/math routines used by the game code, plus a few small static-lib helpers.

## Key entry points

No single entry point is representative; use the detail map and VA table below.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| string | 18 | String copy/compare/format helpers. |
| math | 3 | Floating-point and trig helpers. |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### string

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00401A10 | core | - | `src/mw4mercs/text/func_00401A10.c` | keyword |
| 0x00405F30 | core | 99 | `src/mw4mercs/text/func_00405f30.c` | keyword |
| 0x004D6DB0 | core | - | `src/mw4mercs/text/func_004D6DB0.c` | keyword |
| 0x004D6E50 | core | - | `src/mw4mercs/text/func_004D6E50.c` | keyword |
| 0x004F8540 | core | 182 | `src/mw4mercs/text/func_004f8540.c` | keyword |
| 0x004F86C0 | core | 201 | `src/mw4mercs/text/func_004f86c0.c` | keyword |
| 0x0050D760 | core | 50 | `src/mw4mercs/text/func_0050d760.c` | keyword |
| 0x0053CBF0 | core | 376 | `src/mw4mercs/text/func_0053cbf0.c` | keyword |
| 0x0059DB70 | core | 41 | `src/mw4mercs/text/func_0059db70.c` | keyword |
| 0x005BF780 | core | 443 | `src/mw4mercs/text/func_005bf780.c` | keyword |
| 0x005CBB90 | core | 35 | `src/mw4mercs/text/func_005cbb90.c` | keyword |
| 0x005D6850 | core | 272 | `src/mw4mercs/text/func_005d6850.c` | keyword |
| 0x005DDEC0 | core | 45 | `src/mw4mercs/text/func_005ddec0.c` | keyword |
| 0x00620AF0 | core | 231 | `src/mw4mercs/text/func_00620af0.c` | keyword |
| 0x006866E0 | core | 74 | `src/mw4mercs/text/func_006866e0.c` | keyword |
| 0x006BF4C0 | core | 58 | `src/mw4mercs/text/func_006bf4c0.c` | keyword |
| 0x00711060 | core | 294 | `src/mw4mercs/text/func_00711060.c` | keyword |
| 0x0075AC80 | core | 257 | `src/mw4mercs/text/func_0075ac80.c` | keyword |

### math

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0040D600 | core | 53 | `src/mw4mercs/text/func_0040d600.c` | keyword |
| 0x004DB100 | core | 125 | `src/mw4mercs/text/func_004db100.c` | keyword |
| 0x005BF170 | core | 205 | `src/mw4mercs/text/func_005bf170.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
