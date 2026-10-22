# MissionLang_MERCS.dll

> **Classified VAs:** 69 | **Exhaustive index:** [MissionLang_MERCS.dll](../va_index/MissionLang_MERCS_dll.md)

Mission/string-table loader mirroring Language.dll.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The module has no named exports. It loads mission string tables through the same codepage/arena/lock shape as Language.dll, with mission-specific lookup paths.

## Key entry points

No single function is representative; use the export table in the per-VA index and the detail map below.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 35 | Statically linked C runtime. |
| codepage | 9 | Codepage conversion. |
| string | 9 | Mission string lookup/storage. |
| arena | 6 | String arena. |
| error | 4 | Error reporting. |
| locks | 4 | Lock helpers. |
| data | 1 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Inventory

The detail table above gives the full count for this module. The exhaustive per-VA table (role, size, source, evidence) is in [the MissionLang_MERCS.dll index](../va_index/MissionLang_MERCS_dll.md).

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MissionLang_MERCS_dll.md)
