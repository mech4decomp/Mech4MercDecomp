# ZlogLib.dll

> **Classified VAs:** 33 | **Exhaustive index:** [ZlogLib.dll](../va_index/ZlogLib_dll.md)

Logging API (`GetngLogAPI`) with lifecycle, emit, MD5, and memory helpers.

## How it works

`GetngLogAPI` at 0x10001C6E returns an 8-slot method table. The lifecycle detail initializes/shuts down the log; emit writes messages; md5 and mem are support helpers.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x10001C6E | api | GetngLogAPI |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| lifecycle | 8 | Log init/shutdown. |
| md5 | 8 | MD5 helper. |
| api | 5 | GetngLogAPI and method table. |
| emit | 4 | Log message emission. |
| mem | 4 | Memory helper. |
| crt | 2 | Statically linked C runtime. |
| data | 1 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Coverage

All 33 classified VAs are in [the ZlogLib.dll index](../va_index/ZlogLib_dll.md), which lists role, size, source, and evidence.
