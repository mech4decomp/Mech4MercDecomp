# C Runtime Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 21 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

C/C++ runtime helpers: strings, memory primitives, formatting, and math.

## How it works

Only the helpers that were not folded into import thunks or the platform layer are listed here. They are string/memory/format/math routines used by the game code, plus a few small static-lib helpers.

## Key entry points

No single entry point is representative; use the detail map below and the per-VA index.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| string | 18 | String copy/compare/format helpers. |
| math | 3 | Floating-point and trig helpers. |

## Coverage

All 21 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
