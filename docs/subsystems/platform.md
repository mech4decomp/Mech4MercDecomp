# Platform Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 256 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Win32/COM/DLL/registry glue, DirectDraw/D3D wrappers, import thunks, and the SafeDisc wrapper.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The IAT jump thunks occupy 0x0075DB4A-0x0076015C, inside the SafeDisc/anti-tamper region 0x0075DB4A-0x0076A381 (which spans the end of `.text` and the `.txt2` section); representative functions include 0x00762410 (anti-tamper jump chains) and 0x00760530 (SafeDisc call setup).

COM, DLL loading, registry access, and DirectDraw/D3D glue also live here. This is the OS boundary used by render, audio, input, and net.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0075DB4A-0x0076015C | imports | IAT jump thunks |
| 0x0076015C-0x0076A381 | drm | SafeDisc/anti-tamper tail |
| 0x00762410 | drm | anti-tamper jump-chain function |
| 0x00760530 | drm | SafeDisc call setup |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| drm | 152 | SafeDisc wrapper, anti-tamper glue, and import thunks. |
| imports | 96 | IAT jump thunks and imported-function glue. |
| (general) | 7 | Win32/COM/DLL/registry glue outside the named platform details. |
| dll | 1 | Runtime DLL load/resolve glue. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
