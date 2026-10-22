# Input Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 11 | **Exhaustive index:** [MW4Mercs.exe](../master_index/MW4Mercs_exe.md)

Keyboard/mouse/joystick state and command bindings.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The window procedure is 0x0072E580. Keyboard and mouse state is kept in a 256-bit bitmap: 0x007238D0 sets a bit, 0x007239A0 clears it, and 0x007239F0 copies the per-frame snapshot. Queries are 0x00723A30 and 0x00723B40.

The command table at 0x0077B9D8 maps command IDs to handlers. Bindings are loaded from the pilot's `options.mw4` control entry. DirectInput is used for mouse motion/wheel and joysticks, not for the keyboard.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0072E580 | window | window procedure/message routing |
| 0x007238D0 | keyboard | set key state bit |
| 0x007239A0 | keyboard | clear key state bit |
| 0x007239F0 | keyboard | per-frame key snapshot |
| 0x00723A30 | keyboard | action state query |
| 0x00723B40 | keyboard | virtual-key query |
| 0x0077B9D8 | binding | command table (131 entries) |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| keyboard | 9 | Keyboard/mouse bitmap and action-state queries. |
| directinput | 1 | DirectInput device enumeration and GUID/name lookup. |
| window | 1 | Window procedure and message routing. |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### keyboard

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0050C5D0 | core | 466 | `src/mw4mercs/text/func_0050c5d0.c` | keyword |
| 0x0050C850 | core | 312 | `src/mw4mercs/text/func_0050c850.c` | keyword |
| 0x00529470 | core | 755 | `src/mw4mercs/text/func_00529470.c` | keyword |
| 0x00529770 | core | 476 | `src/mw4mercs/text/func_00529770.c` | keyword |
| 0x00529950 | core | 1400 | `src/mw4mercs/text/func_00529950.c` | keyword |
| 0x00529ED0 | core | 304 | `src/mw4mercs/text/func_00529ed0.c` | keyword |
| 0x007522D0 | core | 387 | `src/mw4mercs/text/func_007522d0.c` | keyword |
| 0x00753160 | core | 1332 | `src/mw4mercs/text/func_00753160.c` | keyword |
| 0x00755820 | core | 72 | `src/mw4mercs/text/func_00755820.c` | keyword |

### directinput

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x007506F3 | core | - | `src/mw4mercs/text/func_007506f3.c` | range |

### window

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0072E580 | core | 2103 | `src/mw4mercs/text/func_0072e580.c` | range |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/MW4Mercs_exe.md)
