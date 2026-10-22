# C Runtime Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 21 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

C/C++ runtime helpers: strings, memory primitives, formatting, and math.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

Only the helpers that were not folded into import thunks or the platform layer are listed here. They are string/memory/format/math routines used by the game code, plus a few small static-lib helpers.

## Key entry points

No single entry point is representative; use the detail map below and the per-VA index.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| string | 18 | String copy/compare/format helpers. |
| math | 3 | Floating-point and trig helpers. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
