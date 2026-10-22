# Log Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 192 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Logging, assertions, error reporting, and diagnostic output.

## How it works

The log buffer, level filtering, emit, and assert code sit in 0x006F9000-0x006FB000; error dispatch is at 0x006BF9E0. ZlogLib exposes the same facility through `GetngLogAPI`.

Logging is called from runtime, UI, net, and archive code. It writes diagnostic output and is one of the main observability seams in the game.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x006F9000-0x006FB000 | (general) | log buffer/emit/assert |
| 0x006BF9E0 | (general) | error dispatch |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 192 | Logging, assertions, and diagnostic output. |

## Coverage

All 192 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
