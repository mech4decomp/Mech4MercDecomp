# Language.dll

> **Classified VAs:** 104 | **Exhaustive index:** [Language.dll](../va_index/Language_dll.md)

Codepage-aware localizable string-table loader.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The module has no named exports. The game loads it and looks up string IDs; the loader converts codepages and stores strings in an arena protected by locks. CRT/string/codepage/arena/locks/error details are listed in the detail table.

## Key entry points

No single function is representative; use the export table in the per-VA index and the detail map below.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 36 | Statically linked C runtime. |
| string | 20 | String table lookup/storage. |
| codepage | 17 | Codepage conversion. |
| arena | 13 | String arena. |
| locks | 10 | Lock helpers. |
| error | 4 | Error reporting. |
| data | 3 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Inventory

The detail table above gives the full count for this module. The exhaustive per-VA table (role, size, source, evidence) is in [the Language.dll index](../va_index/Language_dll.md).

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/Language_dll.md)
