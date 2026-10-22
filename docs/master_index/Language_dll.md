# Language.dll — Subsystem Index

> **Purpose:** a simple per-VA subsystem classification of every VA in this binary. It exists so you can quickly see which functions belong to which subsystem and jump to them.

> **Rule: every VA appears under exactly ONE subsystem section.** No VA is listed twice. Overlaps are resolved by a fixed priority (subsystem priority: net > ai > mlr); anything not classified is listed under `unclassified`.

> Static classification of the oracle binary. Data-section source paths refer to locally generated files (see `docs/BUILD.md`).

## Table of Contents

- [crt](#crt) — 36 VAs
- [string](#string) — 20 VAs
- [codepage](#codepage) — 17 VAs
- [arena](#arena) — 13 VAs
- [locks](#locks) — 10 VAs
- [error](#error) — 4 VAs
- [unclassified](#unclassified) — 4 VAs

## crt

| VA | Section | Source |
|----|---------|--------|
| 0x10001000 | text | `src/language/text/func_10001000.c` |
| 0x10001008 | text | `src/language/text/func_10001008.c` |
| 0x10001010 | text | `src/language/text/func_10001010.c` |
| 0x100010E9 | text | `src/language/text/func_100010e9.c` |
| 0x100011B9 | text | `src/language/text/func_100011b9.c` |
| 0x100011E6 | text | `src/language/text/func_100011e6.c` |
| 0x100011F7 | text | `src/language/text/func_100011f7.c` |
| 0x10001206 | text | `src/language/text/func_10001206.c` |
| 0x100012A9 | text | `src/language/text/func_100012a9.c` |
| 0x100012AB | text | `src/language/text/func_100012ab.c` |
| 0x100012B4 | text | `src/language/text/func_100012b4.c` |
| 0x100012BD | text | `src/language/text/func_100012bd.c` |
| 0x100012D7 | text | `src/language/text/func_100012d7.c` |
| 0x1000132B | text | `src/language/text/func_1000132b.c` |
| 0x10001349 | text | `src/language/text/func_10001349.c` |
| 0x1000135C | text | `src/language/text/func_1000135c.c` |
| 0x100013C3 | text | `src/language/text/func_100013c3.c` |
| 0x10001463 | text | `src/language/text/func_10001463.c` |
| 0x1000161F | text | `src/language/text/func_1000161f.c` |
| 0x10001673 | text | `src/language/text/func_10001673.c` |
| 0x1000172C | text | `src/language/text/func_1000172c.c` |
| 0x100017C5 | text | `src/language/text/func_100017c5.c` |
| 0x10001979 | text | `src/language/text/func_10001979.c` |
| 0x10001AAB | text | `src/language/text/func_10001aab.c` |
| 0x10001AD8 | text | `src/language/text/func_10001ad8.c` |
| 0x10001C20 | text | `src/language/text/func_10001c20.c` |
| 0x10001C7D | text | `src/language/text/func_10001c7d.c` |
| 0x10001FBC | text | `src/language/text/func_10001fbc.c` |
| 0x100020F9 | text | `src/language/text/func_100020f9.c` |
| 0x100021E2 | text | `src/language/text/func_100021e2.c` |
| 0x10002220 | text | `src/language/text/func_10002220.c` |
| 0x10002BB1 | text | `src/language/text/func_10002bb1.c` |
| 0x100040EE | text | `src/language/text/func_100040ee.c` |
| 0x10004106 | text | `src/language/text/func_10004106.c` |
| 0x100041CD | text | `src/language/text/func_100041cd.c` |
| 0x10004580 | text | `src/language/text/func_10004580.c` |

## string

| VA | Section | Source |
|----|---------|--------|
| 0x1000231C | text | `src/language/text/func_1000231c.c` |
| 0x10002320 | text | `src/language/text/func_10002320.c` |
| 0x10002327 | text | `src/language/text/func_10002327.c` |
| 0x10002330 | text | `src/language/text/func_10002330.c` |
| 0x10002410 | text | `src/language/text/func_10002410.c` |
| 0x1000287F | text | `src/language/text/func_1000287f.c` |
| 0x10002880 | text | `src/language/text/func_10002880.c` |
| 0x10002DD1 | text | `src/language/text/func_10002dd1.c` |
| 0x10002F70 | text | `src/language/text/func_10002f70.c` |
| 0x10003E9D | text | `src/language/text/func_10003e9d.c` |
| 0x10003FB9 | text | `src/language/text/func_10003fb9.c` |
| 0x1000440C | text | `src/language/text/func_1000440c.c` |
| 0x10004739 | text | `src/language/text/func_10004739.c` |
| 0x10004740 | text | `src/language/text/func_10004740.c` |
| 0x10004A75 | text | `src/language/text/func_10004a75.c` |
| 0x10004B10 | text | `src/language/text/func_10004b10.c` |
| 0x10004B4E | text | `src/language/text/func_10004b4e.c` |
| 0x10004B50 | text | `src/language/text/func_10004b50.c` |
| 0x10004B8A | text | `src/language/text/func_10004b8a.c` |
| 0x10004F20 | text | `src/language/text/func_10004f20.c` |

## codepage

| VA | Section | Source |
|----|---------|--------|
| 0x1000248B | text | `src/language/text/func_1000248b.c` |
| 0x10002638 | text | `src/language/text/func_10002638.c` |
| 0x10002682 | text | `src/language/text/func_10002682.c` |
| 0x100026B5 | text | `src/language/text/func_100026b5.c` |
| 0x100026DE | text | `src/language/text/func_100026de.c` |
| 0x10002863 | text | `src/language/text/func_10002863.c` |
| 0x10002BB5 | text | `src/language/text/func_10002bb5.c` |
| 0x10002BCC | text | `src/language/text/func_10002bcc.c` |
| 0x100041E8 | text | `src/language/text/func_100041e8.c` |
| 0x10004437 | text | `src/language/text/func_10004437.c` |
| 0x10004589 | text | `src/language/text/func_10004589.c` |
| 0x100045F8 | text | `src/language/text/func_100045f8.c` |
| 0x100046C4 | text | `src/language/text/func_100046c4.c` |
| 0x10004B90 | text | `src/language/text/func_10004b90.c` |
| 0x10004C60 | text | `src/language/text/func_10004c60.c` |
| 0x10004D61 | text | `src/language/text/func_10004d61.c` |
| 0x10004E55 | text | `src/language/text/func_10004e55.c` |

## arena

| VA | Section | Source |
|----|---------|--------|
| 0x10002F9F | text | `src/language/text/func_10002f9f.c` |
| 0x10002FE7 | text | `src/language/text/func_10002fe7.c` |
| 0x10003012 | text | `src/language/text/func_10003012.c` |
| 0x1000333B | text | `src/language/text/func_1000333b.c` |
| 0x10003644 | text | `src/language/text/func_10003644.c` |
| 0x100036F5 | text | `src/language/text/func_100036f5.c` |
| 0x100037F0 | text | `src/language/text/func_100037f0.c` |
| 0x10003934 | text | `src/language/text/func_10003934.c` |
| 0x1000398A | text | `src/language/text/func_1000398a.c` |
| 0x10003A4C | text | `src/language/text/func_10003a4c.c` |
| 0x10003AA3 | text | `src/language/text/func_10003aa3.c` |
| 0x10003AE8 | text | `src/language/text/func_10003ae8.c` |
| 0x10003CF0 | text | `src/language/text/func_10003cf0.c` |

## locks

| VA | Section | Source |
|----|---------|--------|
| 0x10001EB1 | text | `src/language/text/func_10001eb1.c` |
| 0x10001EDA | text | `src/language/text/func_10001eda.c` |
| 0x10001F46 | text | `src/language/text/func_10001f46.c` |
| 0x10001FA7 | text | `src/language/text/func_10001fa7.c` |
| 0x10002055 | text | `src/language/text/func_10002055.c` |
| 0x100020DE | text | `src/language/text/func_100020de.c` |
| 0x10002163 | text | `src/language/text/func_10002163.c` |
| 0x100021BB | text | `src/language/text/func_100021bb.c` |
| 0x10002287 | text | `src/language/text/func_10002287.c` |
| 0x100022E6 | text | `src/language/text/func_100022e6.c` |

## error

| VA | Section | Source |
|----|---------|--------|
| 0x10001D25 | text | `src/language/text/func_10001d25.c` |
| 0x10001D5E | text | `src/language/text/func_10001d5e.c` |
| 0x10003E14 | text | `src/language/text/func_10003e14.c` |
| 0x10003F9E | text | `src/language/text/func_10003f9e.c` |

## unclassified

| VA | Section | Source |
|----|---------|--------|
| 0x10005000 | rdata | `src/language/rdata/data_0x10005000.c` |
| 0x10006000 | data | `src/language/data/data_0x10006000.c` |
| 0x10007000 | data | `src/language/data/data_0x10007000.c` |
| 0x10008000 | data | `src/language/data/data_0x10008000.c` |
