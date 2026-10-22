# MissionLang_MERCS.dll — Subsystem Index

> **Purpose:** a simple per-VA subsystem classification of every VA in this binary. It exists so you can quickly see which functions belong to which subsystem and jump to them.

> **Rule: every VA appears under exactly ONE subsystem section.** No VA is listed twice. Overlaps are resolved by a fixed priority (subsystem priority: net > ai > mlr); anything not classified is listed under `unclassified`.

> Static classification of the oracle binary. Data-section source paths refer to locally generated files (see `docs/BUILD.md`).

## Table of Contents

- [crt](#crt) — 35 VAs
- [codepage](#codepage) — 9 VAs
- [string](#string) — 9 VAs
- [arena](#arena) — 6 VAs
- [error](#error) — 4 VAs
- [locks](#locks) — 4 VAs
- [unclassified](#unclassified) — 2 VAs

## crt

| VA | Section | Source |
|----|---------|--------|
| 0x10001000 | text | `src/missionlang_mercs/text/func_10001000.c` |
| 0x10001006 | text | `src/missionlang_mercs/text/func_10001006.c` |
| 0x100010DF | text | `src/missionlang_mercs/text/func_100010df.c` |
| 0x100011AF | text | `src/missionlang_mercs/text/func_100011af.c` |
| 0x100011DC | text | `src/missionlang_mercs/text/func_100011dc.c` |
| 0x100011ED | text | `src/missionlang_mercs/text/func_100011ed.c` |
| 0x100011FC | text | `src/missionlang_mercs/text/func_100011fc.c` |
| 0x1000129F | text | `src/missionlang_mercs/text/func_1000129f.c` |
| 0x100012A1 | text | `src/missionlang_mercs/text/func_100012a1.c` |
| 0x100012AA | text | `src/missionlang_mercs/text/func_100012aa.c` |
| 0x100012B3 | text | `src/missionlang_mercs/text/func_100012b3.c` |
| 0x100012CD | text | `src/missionlang_mercs/text/func_100012cd.c` |
| 0x10001321 | text | `src/missionlang_mercs/text/func_10001321.c` |
| 0x1000133F | text | `src/missionlang_mercs/text/func_1000133f.c` |
| 0x10001352 | text | `src/missionlang_mercs/text/func_10001352.c` |
| 0x100013F2 | text | `src/missionlang_mercs/text/func_100013f2.c` |
| 0x100015AE | text | `src/missionlang_mercs/text/func_100015ae.c` |
| 0x10001602 | text | `src/missionlang_mercs/text/func_10001602.c` |
| 0x100016BB | text | `src/missionlang_mercs/text/func_100016bb.c` |
| 0x10001754 | text | `src/missionlang_mercs/text/func_10001754.c` |
| 0x10001908 | text | `src/missionlang_mercs/text/func_10001908.c` |
| 0x10001A3A | text | `src/missionlang_mercs/text/func_10001a3a.c` |
| 0x10001A76 | text | `src/missionlang_mercs/text/func_10001a76.c` |
| 0x10001D82 | text | `src/missionlang_mercs/text/func_10001d82.c` |
| 0x10001E0F | text | `src/missionlang_mercs/text/func_10001e0f.c` |
| 0x10001E57 | text | `src/missionlang_mercs/text/func_10001e57.c` |
| 0x10001E95 | text | `src/missionlang_mercs/text/func_10001e95.c` |
| 0x1000356B | text | `src/missionlang_mercs/text/func_1000356b.c` |
| 0x100038A5 | text | `src/missionlang_mercs/text/func_100038a5.c` |
| 0x1000397E | text | `src/missionlang_mercs/text/func_1000397e.c` |
| 0x10003996 | text | `src/missionlang_mercs/text/func_10003996.c` |
| 0x10003A5D | text | `src/missionlang_mercs/text/func_10003a5d.c` |
| 0x10003A78 | text | `src/missionlang_mercs/text/func_10003a78.c` |
| 0x10003A80 | text | `src/missionlang_mercs/text/func_10003a80.c` |
| 0x10003AAF | text | `src/missionlang_mercs/text/func_10003aaf.c` |

## codepage

| VA | Section | Source |
|----|---------|--------|
| 0x1000205B | text | `src/missionlang_mercs/text/func_1000205b.c` |
| 0x10002208 | text | `src/missionlang_mercs/text/func_10002208.c` |
| 0x10002252 | text | `src/missionlang_mercs/text/func_10002252.c` |
| 0x10002285 | text | `src/missionlang_mercs/text/func_10002285.c` |
| 0x100022AE | text | `src/missionlang_mercs/text/func_100022ae.c` |
| 0x10002433 | text | `src/missionlang_mercs/text/func_10002433.c` |
| 0x100031D3 | text | `src/missionlang_mercs/text/func_100031d3.c` |
| 0x100033F7 | text | `src/missionlang_mercs/text/func_100033f7.c` |
| 0x10003422 | text | `src/missionlang_mercs/text/func_10003422.c` |

## string

| VA | Section | Source |
|----|---------|--------|
| 0x10001EE3 | text | `src/missionlang_mercs/text/func_10001ee3.c` |
| 0x10001EF0 | text | `src/missionlang_mercs/text/func_10001ef0.c` |
| 0x10001EF7 | text | `src/missionlang_mercs/text/func_10001ef7.c` |
| 0x10001F00 | text | `src/missionlang_mercs/text/func_10001f00.c` |
| 0x10001FE0 | text | `src/missionlang_mercs/text/func_10001fe0.c` |
| 0x1000244F | text | `src/missionlang_mercs/text/func_1000244f.c` |
| 0x10002450 | text | `src/missionlang_mercs/text/func_10002450.c` |
| 0x10003057 | text | `src/missionlang_mercs/text/func_10003057.c` |
| 0x10003570 | text | `src/missionlang_mercs/text/func_10003570.c` |

## arena

| VA | Section | Source |
|----|---------|--------|
| 0x10002785 | text | `src/missionlang_mercs/text/func_10002785.c` |
| 0x100027C3 | text | `src/missionlang_mercs/text/func_100027c3.c` |
| 0x100027EE | text | `src/missionlang_mercs/text/func_100027ee.c` |
| 0x10002B19 | text | `src/missionlang_mercs/text/func_10002b19.c` |
| 0x10002E22 | text | `src/missionlang_mercs/text/func_10002e22.c` |
| 0x10002ED3 | text | `src/missionlang_mercs/text/func_10002ed3.c` |

## error

| VA | Section | Source |
|----|---------|--------|
| 0x10001AEB | text | `src/missionlang_mercs/text/func_10001aeb.c` |
| 0x10001B24 | text | `src/missionlang_mercs/text/func_10001b24.c` |
| 0x10002FCE | text | `src/missionlang_mercs/text/func_10002fce.c` |
| 0x100031B8 | text | `src/missionlang_mercs/text/func_100031b8.c` |

## locks

| VA | Section | Source |
|----|---------|--------|
| 0x10001C77 | text | `src/missionlang_mercs/text/func_10001c77.c` |
| 0x10001CA0 | text | `src/missionlang_mercs/text/func_10001ca0.c` |
| 0x10001D0C | text | `src/missionlang_mercs/text/func_10001d0c.c` |
| 0x10001D6D | text | `src/missionlang_mercs/text/func_10001d6d.c` |

## unclassified

| VA | Section | Source |
|----|---------|--------|
| 0x10004000 | rdata | `src/missionlang_mercs/rdata/data_0x10004000.c` |
| 0x10005000 | data | `src/missionlang_mercs/data/data_0x10005000.c` |
