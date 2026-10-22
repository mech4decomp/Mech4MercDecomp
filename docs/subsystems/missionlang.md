# MissionLang_MERCS.dll

> **Classified VAs:** 69 | **Exhaustive index:** [MissionLang_MERCS.dll](../va_index/MissionLang_MERCS_dll.md)

Mission/string-table loader mirroring Language.dll.

## How it works

The module has no named exports. It loads mission string tables through the same codepage/arena/lock shape as Language.dll, with mission-specific lookup paths.

## Key entry points

No single function is representative; use the detail map below and the per-VA index.

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

## Coverage

All 69 classified VAs are in [the MissionLang_MERCS.dll index](../va_index/MissionLang_MERCS_dll.md), which lists role, size, source, and evidence.
