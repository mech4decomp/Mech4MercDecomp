# ZlogLib.dll - Subsystem Index

> **Purpose:** per-VA subsystem classification for every VA in this binary. Use it to find the functions that implement a system and the functions that sit on its boundary.

> **Rule:** every VA appears under exactly one subsystem/detail section. `role` is `core` (system implementation), `shared` (used by multiple systems), `boundary` (called by the system but implemented elsewhere), `data` (non-code section or table), or `unknown`. `confidence`/`reason` record the evidence used.

> Static snapshot of the oracle binary. See [the subsystem catalog](../SUBSYSTEM_CATALOG.md) and [the seam summary](../SUBSYSTEM_SEAMS.md).

## Summary

| Role | VAs |
|------|-----|
| core | 31 |
| data | 2 |

## Table of Contents

- [zloglib / lifecycle](#zloglib--lifecycle) - 8 VAs
- [zloglib / md5](#zloglib--md5) - 8 VAs
- [zloglib / api](#zloglib--api) - 5 VAs
- [zloglib / emit](#zloglib--emit) - 4 VAs
- [zloglib / mem](#zloglib--mem) - 4 VAs
- [zloglib / crt](#zloglib--crt) - 2 VAs
- [data / data](#data--data) - 1 VAs
- [data / rdata](#data--rdata) - 1 VAs

## zloglib / lifecycle

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001000 | text | `src/zloglib/text/func_10001000.c` | core | high | module-map |
| 0x10001357 | text | `src/zloglib/text/func_10001357.c` | core | high | module-map |
| 0x100015FB | text | `src/zloglib/text/func_100015fb.c` | core | high | module-map |
| 0x100016A6 | text | `src/zloglib/text/func_100016a6.c` | core | high | module-map |
| 0x100018A6 | text | `src/zloglib/text/func_100018a6.c` | core | high | module-map |
| 0x10001A1D | text | `src/zloglib/text/func_10001a1d.c` | core | high | module-map |
| 0x10001BE9 | text | `src/zloglib/text/func_10001be9.c` | core | high | module-map |
| 0x10001C28 | text | `src/zloglib/text/func_10001c28.c` | core | high | module-map |

## zloglib / md5

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001CF5 | text | `src/zloglib/text/func_10001cf5.c` | core | high | module-map |
| 0x10001D24 | text | `src/zloglib/text/func_10001d24.c` | core | high | module-map |
| 0x10001DB9 | text | `src/zloglib/text/func_10001db9.c` | core | high | module-map |
| 0x10001E01 | text | `src/zloglib/text/func_10001e01.c` | core | high | module-map |
| 0x10001E84 | text | `src/zloglib/text/func_10001e84.c` | core | high | module-map |
| 0x10001EAC | text | `src/zloglib/text/func_10001eac.c` | core | high | module-map |
| 0x10001F4A | text | `src/zloglib/text/func_10001f4a.c` | core | high | module-map |
| 0x10001FAE | text | `src/zloglib/text/func_10001fae.c` | core | high | module-map |

## zloglib / api

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x100016D9 | text | `src/zloglib/text/func_100016d9.c` | core | high | module-map |
| 0x10001707 | text | `src/zloglib/text/func_10001707.c` | core | high | module-map |
| 0x10001796 | text | `src/zloglib/text/func_10001796.c` | core | high | module-map |
| 0x100017C8 | text | `src/zloglib/text/func_100017c8.c` | core | high | module-map |
| 0x10001C6E | text | `src/zloglib/text/func_10001c6e.c` | core | high | module-map |

## zloglib / emit

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001201 | text | `src/zloglib/text/func_10001201.c` | core | high | module-map |
| 0x1000134B | text | `src/zloglib/text/func_1000134b.c` | core | high | module-map |
| 0x10001561 | text | `src/zloglib/text/func_10001561.c` | core | high | module-map |
| 0x10002931 | text | `src/zloglib/text/func_10002931.c` | core | high | module-map |

## zloglib / mem

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10002859 | text | `src/zloglib/text/func_10002859.c` | core | high | module-map |
| 0x1000289E | text | `src/zloglib/text/func_1000289e.c` | core | high | module-map |
| 0x100028E4 | text | `src/zloglib/text/func_100028e4.c` | core | high | module-map |
| 0x10002902 | text | `src/zloglib/text/func_10002902.c` | core | high | module-map |

## zloglib / crt

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001CE9 | text | `src/zloglib/text/func_10001ce9.c` | core | high | module-map |
| 0x1000296D | text | `src/zloglib/text/func_1000296d.c` | core | high | module-map |

## data / data

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10004000 | data | `src/zloglib/data/data_0x10004000.c` | data | high | section |

## data / rdata

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10003000 | rdata | `src/zloglib/rdata/data_0x10003000.c` | data | high | section |
