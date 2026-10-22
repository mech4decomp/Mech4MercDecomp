# MissionLang_MERCS.dll - Subsystem Index

> **Purpose:** per-VA subsystem classification for every VA in this binary. Use it to find the functions that implement a system and the functions that sit on its boundary.

> **Rule:** every VA appears under exactly one subsystem/detail section. `role` is `core` (system implementation), `shared` (used by multiple systems), `boundary` (called by the system but implemented elsewhere), `data` (non-code section or table), or `unknown`. `confidence`/`reason` record the evidence used.

> Static snapshot of the oracle binary. See [the subsystem catalog](../SUBSYSTEM_CATALOG.md) and [the seam summary](../SUBSYSTEM_SEAMS.md).

## Summary

| Role | VAs |
|------|-----|
| core | 67 |
| data | 2 |

## Table of Contents

- [missionlang / crt](#missionlang--crt) - 35 VAs
- [missionlang / codepage](#missionlang--codepage) - 9 VAs
- [missionlang / string](#missionlang--string) - 9 VAs
- [missionlang / arena](#missionlang--arena) - 6 VAs
- [missionlang / error](#missionlang--error) - 4 VAs
- [missionlang / locks](#missionlang--locks) - 4 VAs
- [data / data](#data--data) - 1 VAs
- [data / rdata](#data--rdata) - 1 VAs

## missionlang / crt

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001000 | text | `src/missionlang_mercs/text/func_10001000.c` | core | high | module-map |
| 0x10001006 | text | `src/missionlang_mercs/text/func_10001006.c` | core | high | module-map |
| 0x100010DF | text | `src/missionlang_mercs/text/func_100010df.c` | core | high | module-map |
| 0x100011AF | text | `src/missionlang_mercs/text/func_100011af.c` | core | high | module-map |
| 0x100011DC | text | `src/missionlang_mercs/text/func_100011dc.c` | core | high | module-map |
| 0x100011ED | text | `src/missionlang_mercs/text/func_100011ed.c` | core | high | module-map |
| 0x100011FC | text | `src/missionlang_mercs/text/func_100011fc.c` | core | high | module-map |
| 0x1000129F | text | `src/missionlang_mercs/text/func_1000129f.c` | core | high | module-map |
| 0x100012A1 | text | `src/missionlang_mercs/text/func_100012a1.c` | core | high | module-map |
| 0x100012AA | text | `src/missionlang_mercs/text/func_100012aa.c` | core | high | module-map |
| 0x100012B3 | text | `src/missionlang_mercs/text/func_100012b3.c` | core | high | module-map |
| 0x100012CD | text | `src/missionlang_mercs/text/func_100012cd.c` | core | high | module-map |
| 0x10001321 | text | `src/missionlang_mercs/text/func_10001321.c` | core | high | module-map |
| 0x1000133F | text | `src/missionlang_mercs/text/func_1000133f.c` | core | high | module-map |
| 0x10001352 | text | `src/missionlang_mercs/text/func_10001352.c` | core | high | module-map |
| 0x100013F2 | text | `src/missionlang_mercs/text/func_100013f2.c` | core | high | module-map |
| 0x100015AE | text | `src/missionlang_mercs/text/func_100015ae.c` | core | high | module-map |
| 0x10001602 | text | `src/missionlang_mercs/text/func_10001602.c` | core | high | module-map |
| 0x100016BB | text | `src/missionlang_mercs/text/func_100016bb.c` | core | high | module-map |
| 0x10001754 | text | `src/missionlang_mercs/text/func_10001754.c` | core | high | module-map |
| 0x10001908 | text | `src/missionlang_mercs/text/func_10001908.c` | core | high | module-map |
| 0x10001A3A | text | `src/missionlang_mercs/text/func_10001a3a.c` | core | high | module-map |
| 0x10001A76 | text | `src/missionlang_mercs/text/func_10001a76.c` | core | high | module-map |
| 0x10001D82 | text | `src/missionlang_mercs/text/func_10001d82.c` | core | high | module-map |
| 0x10001E0F | text | `src/missionlang_mercs/text/func_10001e0f.c` | core | high | module-map |
| 0x10001E57 | text | `src/missionlang_mercs/text/func_10001e57.c` | core | high | module-map |
| 0x10001E95 | text | `src/missionlang_mercs/text/func_10001e95.c` | core | high | module-map |
| 0x1000356B | text | `src/missionlang_mercs/text/func_1000356b.c` | core | high | module-map |
| 0x100038A5 | text | `src/missionlang_mercs/text/func_100038a5.c` | core | high | module-map |
| 0x1000397E | text | `src/missionlang_mercs/text/func_1000397e.c` | core | high | module-map |
| 0x10003996 | text | `src/missionlang_mercs/text/func_10003996.c` | core | high | module-map |
| 0x10003A5D | text | `src/missionlang_mercs/text/func_10003a5d.c` | core | high | module-map |
| 0x10003A78 | text | `src/missionlang_mercs/text/func_10003a78.c` | core | high | module-map |
| 0x10003A80 | text | `src/missionlang_mercs/text/func_10003a80.c` | core | high | module-map |
| 0x10003AAF | text | `src/missionlang_mercs/text/func_10003aaf.c` | core | high | module-map |

## missionlang / codepage

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x1000205B | text | `src/missionlang_mercs/text/func_1000205b.c` | core | high | module-map |
| 0x10002208 | text | `src/missionlang_mercs/text/func_10002208.c` | core | high | module-map |
| 0x10002252 | text | `src/missionlang_mercs/text/func_10002252.c` | core | high | module-map |
| 0x10002285 | text | `src/missionlang_mercs/text/func_10002285.c` | core | high | module-map |
| 0x100022AE | text | `src/missionlang_mercs/text/func_100022ae.c` | core | high | module-map |
| 0x10002433 | text | `src/missionlang_mercs/text/func_10002433.c` | core | high | module-map |
| 0x100031D3 | text | `src/missionlang_mercs/text/func_100031d3.c` | core | high | module-map |
| 0x100033F7 | text | `src/missionlang_mercs/text/func_100033f7.c` | core | high | module-map |
| 0x10003422 | text | `src/missionlang_mercs/text/func_10003422.c` | core | high | module-map |

## missionlang / string

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001EE3 | text | `src/missionlang_mercs/text/func_10001ee3.c` | core | high | module-map |
| 0x10001EF0 | text | `src/missionlang_mercs/text/func_10001ef0.c` | core | high | module-map |
| 0x10001EF7 | text | `src/missionlang_mercs/text/func_10001ef7.c` | core | high | module-map |
| 0x10001F00 | text | `src/missionlang_mercs/text/func_10001f00.c` | core | high | module-map |
| 0x10001FE0 | text | `src/missionlang_mercs/text/func_10001fe0.c` | core | high | module-map |
| 0x1000244F | text | `src/missionlang_mercs/text/func_1000244f.c` | core | high | module-map |
| 0x10002450 | text | `src/missionlang_mercs/text/func_10002450.c` | core | high | module-map |
| 0x10003057 | text | `src/missionlang_mercs/text/func_10003057.c` | core | high | module-map |
| 0x10003570 | text | `src/missionlang_mercs/text/func_10003570.c` | core | high | module-map |

## missionlang / arena

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10002785 | text | `src/missionlang_mercs/text/func_10002785.c` | core | high | module-map |
| 0x100027C3 | text | `src/missionlang_mercs/text/func_100027c3.c` | core | high | module-map |
| 0x100027EE | text | `src/missionlang_mercs/text/func_100027ee.c` | core | high | module-map |
| 0x10002B19 | text | `src/missionlang_mercs/text/func_10002b19.c` | core | high | module-map |
| 0x10002E22 | text | `src/missionlang_mercs/text/func_10002e22.c` | core | high | module-map |
| 0x10002ED3 | text | `src/missionlang_mercs/text/func_10002ed3.c` | core | high | module-map |

## missionlang / error

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001AEB | text | `src/missionlang_mercs/text/func_10001aeb.c` | core | high | module-map |
| 0x10001B24 | text | `src/missionlang_mercs/text/func_10001b24.c` | core | high | module-map |
| 0x10002FCE | text | `src/missionlang_mercs/text/func_10002fce.c` | core | high | module-map |
| 0x100031B8 | text | `src/missionlang_mercs/text/func_100031b8.c` | core | high | module-map |

## missionlang / locks

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001C77 | text | `src/missionlang_mercs/text/func_10001c77.c` | core | high | module-map |
| 0x10001CA0 | text | `src/missionlang_mercs/text/func_10001ca0.c` | core | high | module-map |
| 0x10001D0C | text | `src/missionlang_mercs/text/func_10001d0c.c` | core | high | module-map |
| 0x10001D6D | text | `src/missionlang_mercs/text/func_10001d6d.c` | core | high | module-map |

## data / data

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10005000 | data | `src/missionlang_mercs/data/data_0x10005000.c` | data | high | section |

## data / rdata

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10004000 | rdata | `src/missionlang_mercs/rdata/data_0x10004000.c` | data | high | section |
