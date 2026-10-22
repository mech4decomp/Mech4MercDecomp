# Language.dll

> **VAs:** 104 | **Exhaustive index:** [Language.dll](../master_index/Language_dll.md)

Codepage-aware localizable string-table loader.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The module has no named exports. The game loads it and looks up string IDs; the loader converts codepages and stores strings in an arena protected by locks. CRT/string/codepage/arena/locks/error details are listed in the VA table.

## Key entry points

The module has no named exports; the game reaches it through its module handle and string IDs.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 36 | Statically linked C runtime. |
| string | 20 | String table lookup/storage. |
| codepage | 17 | Codepage conversion. |
| arena | 13 | String arena. |
| locks | 10 | Lock helpers. |
| error | 4 | Error reporting. |
| data | 3 |  |
| rdata | 1 |  |

## VAs

Every VA in this module is listed below, grouped by detail.

### crt

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001000 | core | 8 | `src/language/text/func_10001000.c` | module-map |
| 0x10001008 | core | - | `src/language/text/func_10001008.c` | module-map |
| 0x10001010 | core | 217 | `src/language/text/func_10001010.c` | module-map |
| 0x100010E9 | core | 157 | `src/language/text/func_100010e9.c` | module-map |
| 0x100011B9 | core | 45 | `src/language/text/func_100011b9.c` | module-map |
| 0x100011E6 | core | 17 | `src/language/text/func_100011e6.c` | module-map |
| 0x100011F7 | core | 15 | `src/language/text/func_100011f7.c` | module-map |
| 0x10001206 | core | 163 | `src/language/text/func_10001206.c` | module-map |
| 0x100012A9 | core | - | `src/language/text/func_100012a9.c` | module-map |
| 0x100012AB | core | 9 | `src/language/text/func_100012ab.c` | module-map |
| 0x100012B4 | core | 9 | `src/language/text/func_100012b4.c` | module-map |
| 0x100012BD | core | 26 | `src/language/text/func_100012bd.c` | module-map |
| 0x100012D7 | core | 84 | `src/language/text/func_100012d7.c` | module-map |
| 0x1000132B | core | 30 | `src/language/text/func_1000132b.c` | module-map |
| 0x10001349 | core | 19 | `src/language/text/func_10001349.c` | module-map |
| 0x1000135C | core | 103 | `src/language/text/func_1000135c.c` | module-map |
| 0x100013C3 | core | 160 | `src/language/text/func_100013c3.c` | module-map |
| 0x10001463 | core | 444 | `src/language/text/func_10001463.c` | module-map |
| 0x1000161F | core | 84 | `src/language/text/func_1000161f.c` | module-map |
| 0x10001673 | core | 185 | `src/language/text/func_10001673.c` | module-map |
| 0x1000172C | core | 153 | `src/language/text/func_1000172c.c` | module-map |
| 0x100017C5 | core | 436 | `src/language/text/func_100017c5.c` | module-map |
| 0x10001979 | core | 306 | `src/language/text/func_10001979.c` | module-map |
| 0x10001AAB | core | 45 | `src/language/text/func_10001aab.c` | module-map |
| 0x10001AD8 | core | 328 | `src/language/text/func_10001ad8.c` | module-map |
| 0x10001C20 | core | 93 | `src/language/text/func_10001c20.c` | module-map |
| 0x10001C7D | core | 168 | `src/language/text/func_10001c7d.c` | module-map |
| 0x10001FBC | core | 289 | `src/language/text/func_10001fbc.c` | module-map |
| 0x100020F9 | core | 215 | `src/language/text/func_100020f9.c` | module-map |
| 0x100021E2 | core | 18 | `src/language/text/func_100021e2.c` | module-map |
| 0x10002220 | core | 231 | `src/language/text/func_10002220.c` | module-map |
| 0x10002BB1 | core | - | `src/language/text/func_10002bb1.c` | module-map |
| 0x100040EE | core | 24 | `src/language/text/func_100040ee.c` | module-map |
| 0x10004106 | core | - | `src/language/text/func_10004106.c` | module-map |
| 0x100041CD | core | 27 | `src/language/text/func_100041cd.c` | module-map |
| 0x10004580 | core | 9 | `src/language/text/func_10004580.c` | module-map |

### string

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x1000231C | core | - | `src/language/text/func_1000231c.c` | module-map |
| 0x10002320 | core | 7 | `src/language/text/func_10002320.c` | module-map |
| 0x10002327 | core | - | `src/language/text/func_10002327.c` | module-map |
| 0x10002330 | core | 224 | `src/language/text/func_10002330.c` | module-map |
| 0x10002410 | core | 123 | `src/language/text/func_10002410.c` | module-map |
| 0x1000287F | core | - | `src/language/text/func_1000287f.c` | module-map |
| 0x10002880 | core | 664 | `src/language/text/func_10002880.c` | module-map |
| 0x10002DD1 | core | - | `src/language/text/func_10002dd1.c` | module-map |
| 0x10002F70 | core | 47 | `src/language/text/func_10002f70.c` | module-map |
| 0x10003E9D | core | - | `src/language/text/func_10003e9d.c` | module-map |
| 0x10003FB9 | core | - | `src/language/text/func_10003fb9.c` | module-map |
| 0x1000440C | core | 43 | `src/language/text/func_1000440c.c` | module-map |
| 0x10004739 | core | - | `src/language/text/func_10004739.c` | module-map |
| 0x10004740 | core | 664 | `src/language/text/func_10004740.c` | module-map |
| 0x10004A75 | core | - | `src/language/text/func_10004a75.c` | module-map |
| 0x10004B10 | core | 62 | `src/language/text/func_10004b10.c` | module-map |
| 0x10004B4E | core | - | `src/language/text/func_10004b4e.c` | module-map |
| 0x10004B50 | core | 58 | `src/language/text/func_10004b50.c` | module-map |
| 0x10004B8A | core | - | `src/language/text/func_10004b8a.c` | module-map |
| 0x10004F20 | core | - | `src/language/text/func_10004f20.c` | module-map |

### codepage

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x1000248B | core | 429 | `src/language/text/func_1000248b.c` | module-map |
| 0x10002638 | core | 74 | `src/language/text/func_10002638.c` | module-map |
| 0x10002682 | core | 51 | `src/language/text/func_10002682.c` | module-map |
| 0x100026B5 | core | 41 | `src/language/text/func_100026b5.c` | module-map |
| 0x100026DE | core | 389 | `src/language/text/func_100026de.c` | module-map |
| 0x10002863 | core | 28 | `src/language/text/func_10002863.c` | module-map |
| 0x10002BB5 | core | 23 | `src/language/text/func_10002bb5.c` | module-map |
| 0x10002BCC | core | 517 | `src/language/text/func_10002bcc.c` | module-map |
| 0x100041E8 | core | 511 | `src/language/text/func_100041e8.c` | module-map |
| 0x10004437 | core | 318 | `src/language/text/func_10004437.c` | module-map |
| 0x10004589 | core | 111 | `src/language/text/func_10004589.c` | module-map |
| 0x100045F8 | core | 204 | `src/language/text/func_100045f8.c` | module-map |
| 0x100046C4 | core | 117 | `src/language/text/func_100046c4.c` | module-map |
| 0x10004B90 | core | 208 | `src/language/text/func_10004b90.c` | module-map |
| 0x10004C60 | core | 257 | `src/language/text/func_10004c60.c` | module-map |
| 0x10004D61 | core | - | `src/language/text/func_10004d61.c` | module-map |
| 0x10004E55 | core | 203 | `src/language/text/func_10004e55.c` | module-map |

### arena

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10002F9F | core | 72 | `src/language/text/func_10002f9f.c` | module-map |
| 0x10002FE7 | core | 43 | `src/language/text/func_10002fe7.c` | module-map |
| 0x10003012 | core | 809 | `src/language/text/func_10003012.c` | module-map |
| 0x1000333B | core | 777 | `src/language/text/func_1000333b.c` | module-map |
| 0x10003644 | core | 177 | `src/language/text/func_10003644.c` | module-map |
| 0x100036F5 | core | 251 | `src/language/text/func_100036f5.c` | module-map |
| 0x100037F0 | core | 324 | `src/language/text/func_100037f0.c` | module-map |
| 0x10003934 | core | 86 | `src/language/text/func_10003934.c` | module-map |
| 0x1000398A | core | 194 | `src/language/text/func_1000398a.c` | module-map |
| 0x10003A4C | core | 87 | `src/language/text/func_10003a4c.c` | module-map |
| 0x10003AA3 | core | 69 | `src/language/text/func_10003aa3.c` | module-map |
| 0x10003AE8 | core | 520 | `src/language/text/func_10003ae8.c` | module-map |
| 0x10003CF0 | core | 292 | `src/language/text/func_10003cf0.c` | module-map |

### locks

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001EB1 | core | 41 | `src/language/text/func_10001eb1.c` | module-map |
| 0x10001EDA | core | 108 | `src/language/text/func_10001eda.c` | module-map |
| 0x10001F46 | core | 97 | `src/language/text/func_10001f46.c` | module-map |
| 0x10001FA7 | core | 21 | `src/language/text/func_10001fa7.c` | module-map |
| 0x10002055 | core | 9 | `src/language/text/func_10002055.c` | module-map |
| 0x100020DE | core | 9 | `src/language/text/func_100020de.c` | module-map |
| 0x10002163 | core | 9 | `src/language/text/func_10002163.c` | module-map |
| 0x100021BB | core | 9 | `src/language/text/func_100021bb.c` | module-map |
| 0x10002287 | core | 9 | `src/language/text/func_10002287.c` | module-map |
| 0x100022E6 | core | 9 | `src/language/text/func_100022e6.c` | module-map |

### error

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001D25 | core | 57 | `src/language/text/func_10001d25.c` | module-map |
| 0x10001D5E | core | 339 | `src/language/text/func_10001d5e.c` | module-map |
| 0x10003E14 | core | 137 | `src/language/text/func_10003e14.c` | module-map |
| 0x10003F9E | core | 27 | `src/language/text/func_10003f9e.c` | module-map |

### data

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10006000 | data | - | `src/language/data/data_0x10006000.c` | section |
| 0x10007000 | data | - | `src/language/data/data_0x10007000.c` | section |
| 0x10008000 | data | - | `src/language/data/data_0x10008000.c` | section |

### rdata

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10005000 | data | - | `src/language/rdata/data_0x10005000.c` | section |

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/Language_dll.md)
