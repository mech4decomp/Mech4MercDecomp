# Language.dll - Subsystem Index

> **Purpose:** per-VA subsystem classification for every VA in this binary. Use it to find the functions that implement a system and the functions that sit on its boundary.

> **Rule:** every VA appears under exactly one subsystem/detail section. `role` is `core` (system implementation), `shared` (used by multiple systems), `boundary` (called by the system but implemented elsewhere), `data` (non-code section or table), or `unknown`. `confidence`/`reason` record the evidence used.

> Static snapshot of the oracle binary. See [the subsystem catalog](../SUBSYSTEM_CATALOG.md) and [the seam summary](../SUBSYSTEM_SEAMS.md).

## Summary

| Role | VAs |
|------|-----|
| core | 100 |
| data | 4 |

## Table of Contents

- [language / crt](#language--crt) - 36 VAs
- [language / string](#language--string) - 20 VAs
- [language / codepage](#language--codepage) - 17 VAs
- [language / arena](#language--arena) - 13 VAs
- [language / locks](#language--locks) - 10 VAs
- [language / error](#language--error) - 4 VAs
- [data / data](#data--data) - 3 VAs
- [data / rdata](#data--rdata) - 1 VAs

## language / crt

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001000 | text | `src/language/text/func_10001000.c` | core | high | module-map |
| 0x10001008 | text | `src/language/text/func_10001008.c` | core | high | module-map |
| 0x10001010 | text | `src/language/text/func_10001010.c` | core | high | module-map |
| 0x100010E9 | text | `src/language/text/func_100010e9.c` | core | high | module-map |
| 0x100011B9 | text | `src/language/text/func_100011b9.c` | core | high | module-map |
| 0x100011E6 | text | `src/language/text/func_100011e6.c` | core | high | module-map |
| 0x100011F7 | text | `src/language/text/func_100011f7.c` | core | high | module-map |
| 0x10001206 | text | `src/language/text/func_10001206.c` | core | high | module-map |
| 0x100012A9 | text | `src/language/text/func_100012a9.c` | core | high | module-map |
| 0x100012AB | text | `src/language/text/func_100012ab.c` | core | high | module-map |
| 0x100012B4 | text | `src/language/text/func_100012b4.c` | core | high | module-map |
| 0x100012BD | text | `src/language/text/func_100012bd.c` | core | high | module-map |
| 0x100012D7 | text | `src/language/text/func_100012d7.c` | core | high | module-map |
| 0x1000132B | text | `src/language/text/func_1000132b.c` | core | high | module-map |
| 0x10001349 | text | `src/language/text/func_10001349.c` | core | high | module-map |
| 0x1000135C | text | `src/language/text/func_1000135c.c` | core | high | module-map |
| 0x100013C3 | text | `src/language/text/func_100013c3.c` | core | high | module-map |
| 0x10001463 | text | `src/language/text/func_10001463.c` | core | high | module-map |
| 0x1000161F | text | `src/language/text/func_1000161f.c` | core | high | module-map |
| 0x10001673 | text | `src/language/text/func_10001673.c` | core | high | module-map |
| 0x1000172C | text | `src/language/text/func_1000172c.c` | core | high | module-map |
| 0x100017C5 | text | `src/language/text/func_100017c5.c` | core | high | module-map |
| 0x10001979 | text | `src/language/text/func_10001979.c` | core | high | module-map |
| 0x10001AAB | text | `src/language/text/func_10001aab.c` | core | high | module-map |
| 0x10001AD8 | text | `src/language/text/func_10001ad8.c` | core | high | module-map |
| 0x10001C20 | text | `src/language/text/func_10001c20.c` | core | high | module-map |
| 0x10001C7D | text | `src/language/text/func_10001c7d.c` | core | high | module-map |
| 0x10001FBC | text | `src/language/text/func_10001fbc.c` | core | high | module-map |
| 0x100020F9 | text | `src/language/text/func_100020f9.c` | core | high | module-map |
| 0x100021E2 | text | `src/language/text/func_100021e2.c` | core | high | module-map |
| 0x10002220 | text | `src/language/text/func_10002220.c` | core | high | module-map |
| 0x10002BB1 | text | `src/language/text/func_10002bb1.c` | core | high | module-map |
| 0x100040EE | text | `src/language/text/func_100040ee.c` | core | high | module-map |
| 0x10004106 | text | `src/language/text/func_10004106.c` | core | high | module-map |
| 0x100041CD | text | `src/language/text/func_100041cd.c` | core | high | module-map |
| 0x10004580 | text | `src/language/text/func_10004580.c` | core | high | module-map |

## language / string

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x1000231C | text | `src/language/text/func_1000231c.c` | core | high | module-map |
| 0x10002320 | text | `src/language/text/func_10002320.c` | core | high | module-map |
| 0x10002327 | text | `src/language/text/func_10002327.c` | core | high | module-map |
| 0x10002330 | text | `src/language/text/func_10002330.c` | core | high | module-map |
| 0x10002410 | text | `src/language/text/func_10002410.c` | core | high | module-map |
| 0x1000287F | text | `src/language/text/func_1000287f.c` | core | high | module-map |
| 0x10002880 | text | `src/language/text/func_10002880.c` | core | high | module-map |
| 0x10002DD1 | text | `src/language/text/func_10002dd1.c` | core | high | module-map |
| 0x10002F70 | text | `src/language/text/func_10002f70.c` | core | high | module-map |
| 0x10003E9D | text | `src/language/text/func_10003e9d.c` | core | high | module-map |
| 0x10003FB9 | text | `src/language/text/func_10003fb9.c` | core | high | module-map |
| 0x1000440C | text | `src/language/text/func_1000440c.c` | core | high | module-map |
| 0x10004739 | text | `src/language/text/func_10004739.c` | core | high | module-map |
| 0x10004740 | text | `src/language/text/func_10004740.c` | core | high | module-map |
| 0x10004A75 | text | `src/language/text/func_10004a75.c` | core | high | module-map |
| 0x10004B10 | text | `src/language/text/func_10004b10.c` | core | high | module-map |
| 0x10004B4E | text | `src/language/text/func_10004b4e.c` | core | high | module-map |
| 0x10004B50 | text | `src/language/text/func_10004b50.c` | core | high | module-map |
| 0x10004B8A | text | `src/language/text/func_10004b8a.c` | core | high | module-map |
| 0x10004F20 | text | `src/language/text/func_10004f20.c` | core | high | module-map |

## language / codepage

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x1000248B | text | `src/language/text/func_1000248b.c` | core | high | module-map |
| 0x10002638 | text | `src/language/text/func_10002638.c` | core | high | module-map |
| 0x10002682 | text | `src/language/text/func_10002682.c` | core | high | module-map |
| 0x100026B5 | text | `src/language/text/func_100026b5.c` | core | high | module-map |
| 0x100026DE | text | `src/language/text/func_100026de.c` | core | high | module-map |
| 0x10002863 | text | `src/language/text/func_10002863.c` | core | high | module-map |
| 0x10002BB5 | text | `src/language/text/func_10002bb5.c` | core | high | module-map |
| 0x10002BCC | text | `src/language/text/func_10002bcc.c` | core | high | module-map |
| 0x100041E8 | text | `src/language/text/func_100041e8.c` | core | high | module-map |
| 0x10004437 | text | `src/language/text/func_10004437.c` | core | high | module-map |
| 0x10004589 | text | `src/language/text/func_10004589.c` | core | high | module-map |
| 0x100045F8 | text | `src/language/text/func_100045f8.c` | core | high | module-map |
| 0x100046C4 | text | `src/language/text/func_100046c4.c` | core | high | module-map |
| 0x10004B90 | text | `src/language/text/func_10004b90.c` | core | high | module-map |
| 0x10004C60 | text | `src/language/text/func_10004c60.c` | core | high | module-map |
| 0x10004D61 | text | `src/language/text/func_10004d61.c` | core | high | module-map |
| 0x10004E55 | text | `src/language/text/func_10004e55.c` | core | high | module-map |

## language / arena

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10002F9F | text | `src/language/text/func_10002f9f.c` | core | high | module-map |
| 0x10002FE7 | text | `src/language/text/func_10002fe7.c` | core | high | module-map |
| 0x10003012 | text | `src/language/text/func_10003012.c` | core | high | module-map |
| 0x1000333B | text | `src/language/text/func_1000333b.c` | core | high | module-map |
| 0x10003644 | text | `src/language/text/func_10003644.c` | core | high | module-map |
| 0x100036F5 | text | `src/language/text/func_100036f5.c` | core | high | module-map |
| 0x100037F0 | text | `src/language/text/func_100037f0.c` | core | high | module-map |
| 0x10003934 | text | `src/language/text/func_10003934.c` | core | high | module-map |
| 0x1000398A | text | `src/language/text/func_1000398a.c` | core | high | module-map |
| 0x10003A4C | text | `src/language/text/func_10003a4c.c` | core | high | module-map |
| 0x10003AA3 | text | `src/language/text/func_10003aa3.c` | core | high | module-map |
| 0x10003AE8 | text | `src/language/text/func_10003ae8.c` | core | high | module-map |
| 0x10003CF0 | text | `src/language/text/func_10003cf0.c` | core | high | module-map |

## language / locks

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001EB1 | text | `src/language/text/func_10001eb1.c` | core | high | module-map |
| 0x10001EDA | text | `src/language/text/func_10001eda.c` | core | high | module-map |
| 0x10001F46 | text | `src/language/text/func_10001f46.c` | core | high | module-map |
| 0x10001FA7 | text | `src/language/text/func_10001fa7.c` | core | high | module-map |
| 0x10002055 | text | `src/language/text/func_10002055.c` | core | high | module-map |
| 0x100020DE | text | `src/language/text/func_100020de.c` | core | high | module-map |
| 0x10002163 | text | `src/language/text/func_10002163.c` | core | high | module-map |
| 0x100021BB | text | `src/language/text/func_100021bb.c` | core | high | module-map |
| 0x10002287 | text | `src/language/text/func_10002287.c` | core | high | module-map |
| 0x100022E6 | text | `src/language/text/func_100022e6.c` | core | high | module-map |

## language / error

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10001D25 | text | `src/language/text/func_10001d25.c` | core | high | module-map |
| 0x10001D5E | text | `src/language/text/func_10001d5e.c` | core | high | module-map |
| 0x10003E14 | text | `src/language/text/func_10003e14.c` | core | high | module-map |
| 0x10003F9E | text | `src/language/text/func_10003f9e.c` | core | high | module-map |

## data / data

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10006000 | data | `src/language/data/data_0x10006000.c` | data | high | section |
| 0x10007000 | data | `src/language/data/data_0x10007000.c` | data | high | section |
| 0x10008000 | data | `src/language/data/data_0x10008000.c` | data | high | section |

## data / rdata

| VA | Section | Source | Role | Confidence | Evidence |
|----|---------|--------|------|------------|----------|
| 0x10005000 | rdata | `src/language/rdata/data_0x10005000.c` | data | high | section |
