# ZlogLib.dll

> **VAs:** 33 | **Exhaustive index:** [ZlogLib.dll](../master_index/ZlogLib_dll.md)

Logging API (`GetngLogAPI`) with lifecycle, emit, MD5, and memory helpers.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

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
| data | 1 |  |
| rdata | 1 |  |

## VAs

Every VA in this module is listed below, grouped by detail.

### lifecycle

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001000 | core | 513 | `src/zloglib/text/func_10001000.c` | module-map |
| 0x10001357 | core | 522 | `src/zloglib/text/func_10001357.c` | module-map |
| 0x100015FB | core | 171 | `src/zloglib/text/func_100015fb.c` | module-map |
| 0x100016A6 | core | 51 | `src/zloglib/text/func_100016a6.c` | module-map |
| 0x100018A6 | core | 375 | `src/zloglib/text/func_100018a6.c` | module-map |
| 0x10001A1D | core | 460 | `src/zloglib/text/func_10001a1d.c` | module-map |
| 0x10001BE9 | core | 63 | `src/zloglib/text/func_10001be9.c` | module-map |
| 0x10001C28 | core | 70 | `src/zloglib/text/func_10001c28.c` | module-map |

### md5

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001CF5 | core | 47 | `src/zloglib/text/func_10001cf5.c` | module-map |
| 0x10001D24 | core | 149 | `src/zloglib/text/func_10001d24.c` | module-map |
| 0x10001DB9 | core | 72 | `src/zloglib/text/func_10001db9.c` | module-map |
| 0x10001E01 | core | 131 | `src/zloglib/text/func_10001e01.c` | module-map |
| 0x10001E84 | core | 40 | `src/zloglib/text/func_10001e84.c` | module-map |
| 0x10001EAC | core | 158 | `src/zloglib/text/func_10001eac.c` | module-map |
| 0x10001F4A | core | 100 | `src/zloglib/text/func_10001f4a.c` | module-map |
| 0x10001FAE | core | 2219 | `src/zloglib/text/func_10001fae.c` | module-map |

### api

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x100016D9 | core | 46 | `src/zloglib/text/func_100016d9.c` | module-map |
| 0x10001707 | core | 143 | `src/zloglib/text/func_10001707.c` | module-map |
| 0x10001796 | core | 48 | `src/zloglib/text/func_10001796.c` | module-map |
| 0x100017C8 | core | 222 | `src/zloglib/text/func_100017c8.c` | module-map |
| 0x10001C6E | core | 100 | `src/zloglib/text/func_10001c6e.c` | module-map |

### emit

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001201 | core | 330 | `src/zloglib/text/func_10001201.c` | module-map |
| 0x1000134B | core | 12 | `src/zloglib/text/func_1000134b.c` | module-map |
| 0x10001561 | core | 154 | `src/zloglib/text/func_10001561.c` | module-map |
| 0x10002931 | core | 60 | `src/zloglib/text/func_10002931.c` | module-map |

### mem

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10002859 | core | 69 | `src/zloglib/text/func_10002859.c` | module-map |
| 0x1000289E | core | 70 | `src/zloglib/text/func_1000289e.c` | module-map |
| 0x100028E4 | core | 30 | `src/zloglib/text/func_100028e4.c` | module-map |
| 0x10002902 | core | 47 | `src/zloglib/text/func_10002902.c` | module-map |

### crt

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001CE9 | core | 12 | `src/zloglib/text/func_10001ce9.c` | module-map |
| 0x1000296D | core | - | `src/zloglib/text/func_1000296d.c` | module-map |

### data

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10004000 | data | - | `src/zloglib/data/data_0x10004000.c` | section |

### rdata

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10003000 | data | - | `src/zloglib/rdata/data_0x10003000.c` | section |

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/ZlogLib_dll.md)
