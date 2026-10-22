# Crypto Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 6 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

MD5, hashing, and base64 helpers.

## How it works

The MD5 primitive island is 0x0070E380-0x0070E480; the in-game MD5 caller/validator is 0x0060C12D. Base64 and related byte helpers are used by the network and stats/auth paths.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0070E380-0x0070E480 | md5 | MD5 primitive helpers |
| 0x0060C12D | md5 | MD5 caller/validator |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| md5 | 4 | MD5 primitives, callers, and validators. |
| (general) | 2 | Hashing/encoding helpers outside the MD5 detail. |

## Coverage

All 6 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
