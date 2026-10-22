# Language.dll

> **Classified VAs:** 104 | **Exhaustive index:** [Language.dll](../va_index/Language_dll.md)

Codepage-aware localizable string-table loader.

## How it works

The module has no named exports. The game loads it and looks up string IDs; the loader converts codepages and stores strings in an arena protected by locks. CRT/string/codepage/arena/locks/error details are listed in the detail table.

## Key entry points

No single function is representative; use the detail map below and the per-VA index.

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

## Coverage

All 104 classified VAs are in [the Language.dll index](../va_index/Language_dll.md), which lists role, size, source, and evidence.
