# Platform Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 256 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Win32/COM/DLL/registry glue, DirectDraw/D3D wrappers, import thunks, and the in-image SafeDisc/anti-tamper wrapper.

## How it works

The IAT jump thunks occupy 0x0075DB4A-0x0076015C. The SafeDisc/anti-tamper tail runs from the end of the thunks through `.txt2` (0x0076015C-0x0076A381); representative functions include 0x00762410 (anti-tamper jump chains) and 0x00760530 (SafeDisc call setup).

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

## Coverage

All 256 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
