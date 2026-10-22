# Unclassified Helpers

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 1137 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Helpers that could not be assigned to a system from the available evidence.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

These are mostly small functions in the 0x0051-0x0057, 0x0062-0x0065, 0x006E-0x0072, and 0x0075 clusters. They are listed so they are not silently dropped; classify them by inspecting the source header and callers.

The cluster table below is the best starting point for a focused pass. Many are wrappers, small accessors, or in-.text data blocks that need a semantic owner.

## Key entry points

No single entry point is representative; use the detail map below and the per-VA index.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 1137 | Helpers that could not be assigned to a system. |

## Address clusters

| Address band | VAs |
|--------------|-----|
| 0x00650000-0x0065FFFF | 97 |
| 0x00620000-0x0062FFFF | 96 |
| 0x00640000-0x0064FFFF | 92 |
| 0x00560000-0x0056FFFF | 90 |
| 0x006E0000-0x006EFFFF | 88 |
| 0x00550000-0x0055FFFF | 80 |
| 0x00510000-0x0051FFFF | 78 |
| 0x00750000-0x0075FFFF | 68 |
| 0x004C0000-0x004CFFFF | 64 |
| 0x00700000-0x0070FFFF | 61 |
| 0x00530000-0x0053FFFF | 59 |
| 0x00570000-0x0057FFFF | 51 |
| 0x00720000-0x0072FFFF | 44 |
| 0x006D0000-0x006DFFFF | 38 |
| 0x006F0000-0x006FFFFF | 37 |
| 0x00520000-0x0052FFFF | 36 |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
