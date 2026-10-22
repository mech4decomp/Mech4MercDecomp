# Audio Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 8 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Sound, music, and audio-device delivery.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The audio surface is small; most content is data-driven and the device delivery goes through the platform layer. The VA table lists the sound/music entry points that remain in the EXE.

## Key entry points

No single entry point is representative; use the detail map and VA table below.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 8 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00505A40 | core | 588 | `src/mw4mercs/text/func_00505a40.c` | keyword |
| 0x00505D5F | core | - | `src/mw4mercs/text/func_00505d5f.c` | keyword |
| 0x00505E10 | core | 771 | `src/mw4mercs/text/func_00505e10.c` | keyword |
| 0x005309A0 | core | 449 | `src/mw4mercs/text/func_005309a0.c` | keyword |
| 0x00532970 | core | 305 | `src/mw4mercs/text/func_00532970.c` | keyword |
| 0x00559810 | core | 323 | `src/mw4mercs/text/func_00559810.c` | keyword |
| 0x00559960 | core | 323 | `src/mw4mercs/text/func_00559960.c` | keyword |
| 0x00752680 | core | 478 | `src/mw4mercs/text/func_00752680.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
