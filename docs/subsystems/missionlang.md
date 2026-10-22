# MissionLang_MERCS.dll

> **VAs:** 69 | **Exhaustive index:** [MissionLang_MERCS.dll](../va_index/MissionLang_MERCS_dll.md)

Mission/string-table loader mirroring Language.dll.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The module has no named exports. It loads mission string tables through the same codepage/arena/lock shape as Language.dll, with mission-specific lookup paths.

## Key entry points

The module has no named exports; the game reaches it through its module handle and string IDs.

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 35 | Statically linked C runtime. |
| codepage | 9 | Codepage conversion. |
| string | 9 | Mission string lookup/storage. |
| arena | 6 | String arena. |
| error | 4 | Error reporting. |
| locks | 4 | Lock helpers. |
| data | 1 |  |
| rdata | 1 |  |

## VAs

Every VA in this module is listed below, grouped by detail.

### crt

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001000 | core | 6 | `src/missionlang_mercs/text/func_10001000.c` | module-map |
| 0x10001006 | core | 217 | `src/missionlang_mercs/text/func_10001006.c` | module-map |
| 0x100010DF | core | 157 | `src/missionlang_mercs/text/func_100010df.c` | module-map |
| 0x100011AF | core | 45 | `src/missionlang_mercs/text/func_100011af.c` | module-map |
| 0x100011DC | core | 17 | `src/missionlang_mercs/text/func_100011dc.c` | module-map |
| 0x100011ED | core | 15 | `src/missionlang_mercs/text/func_100011ed.c` | module-map |
| 0x100011FC | core | 163 | `src/missionlang_mercs/text/func_100011fc.c` | module-map |
| 0x1000129F | core | - | `src/missionlang_mercs/text/func_1000129f.c` | module-map |
| 0x100012A1 | core | 9 | `src/missionlang_mercs/text/func_100012a1.c` | module-map |
| 0x100012AA | core | 9 | `src/missionlang_mercs/text/func_100012aa.c` | module-map |
| 0x100012B3 | core | 26 | `src/missionlang_mercs/text/func_100012b3.c` | module-map |
| 0x100012CD | core | 84 | `src/missionlang_mercs/text/func_100012cd.c` | module-map |
| 0x10001321 | core | 30 | `src/missionlang_mercs/text/func_10001321.c` | module-map |
| 0x1000133F | core | 19 | `src/missionlang_mercs/text/func_1000133f.c` | module-map |
| 0x10001352 | core | 160 | `src/missionlang_mercs/text/func_10001352.c` | module-map |
| 0x100013F2 | core | 444 | `src/missionlang_mercs/text/func_100013f2.c` | module-map |
| 0x100015AE | core | 84 | `src/missionlang_mercs/text/func_100015ae.c` | module-map |
| 0x10001602 | core | 185 | `src/missionlang_mercs/text/func_10001602.c` | module-map |
| 0x100016BB | core | 153 | `src/missionlang_mercs/text/func_100016bb.c` | module-map |
| 0x10001754 | core | 436 | `src/missionlang_mercs/text/func_10001754.c` | module-map |
| 0x10001908 | core | 306 | `src/missionlang_mercs/text/func_10001908.c` | module-map |
| 0x10001A3A | core | 60 | `src/missionlang_mercs/text/func_10001a3a.c` | module-map |
| 0x10001A76 | core | 117 | `src/missionlang_mercs/text/func_10001a76.c` | module-map |
| 0x10001D82 | core | 141 | `src/missionlang_mercs/text/func_10001d82.c` | module-map |
| 0x10001E0F | core | 72 | `src/missionlang_mercs/text/func_10001e0f.c` | module-map |
| 0x10001E57 | core | 18 | `src/missionlang_mercs/text/func_10001e57.c` | module-map |
| 0x10001E95 | core | 78 | `src/missionlang_mercs/text/func_10001e95.c` | module-map |
| 0x1000356B | core | - | `src/missionlang_mercs/text/func_1000356b.c` | module-map |
| 0x100038A5 | core | - | `src/missionlang_mercs/text/func_100038a5.c` | module-map |
| 0x1000397E | core | 24 | `src/missionlang_mercs/text/func_1000397e.c` | module-map |
| 0x10003996 | core | - | `src/missionlang_mercs/text/func_10003996.c` | module-map |
| 0x10003A5D | core | 27 | `src/missionlang_mercs/text/func_10003a5d.c` | module-map |
| 0x10003A78 | core | - | `src/missionlang_mercs/text/func_10003a78.c` | module-map |
| 0x10003A80 | core | 47 | `src/missionlang_mercs/text/func_10003a80.c` | module-map |
| 0x10003AAF | core | - | `src/missionlang_mercs/text/func_10003aaf.c` | module-map |

### codepage

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x1000205B | core | 429 | `src/missionlang_mercs/text/func_1000205b.c` | module-map |
| 0x10002208 | core | 74 | `src/missionlang_mercs/text/func_10002208.c` | module-map |
| 0x10002252 | core | 51 | `src/missionlang_mercs/text/func_10002252.c` | module-map |
| 0x10002285 | core | 41 | `src/missionlang_mercs/text/func_10002285.c` | module-map |
| 0x100022AE | core | 389 | `src/missionlang_mercs/text/func_100022ae.c` | module-map |
| 0x10002433 | core | 28 | `src/missionlang_mercs/text/func_10002433.c` | module-map |
| 0x100031D3 | core | 511 | `src/missionlang_mercs/text/func_100031d3.c` | module-map |
| 0x100033F7 | core | 43 | `src/missionlang_mercs/text/func_100033f7.c` | module-map |
| 0x10003422 | core | 318 | `src/missionlang_mercs/text/func_10003422.c` | module-map |

### string

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001EE3 | core | - | `src/missionlang_mercs/text/func_10001ee3.c` | module-map |
| 0x10001EF0 | core | 7 | `src/missionlang_mercs/text/func_10001ef0.c` | module-map |
| 0x10001EF7 | core | - | `src/missionlang_mercs/text/func_10001ef7.c` | module-map |
| 0x10001F00 | core | 224 | `src/missionlang_mercs/text/func_10001f00.c` | module-map |
| 0x10001FE0 | core | 123 | `src/missionlang_mercs/text/func_10001fe0.c` | module-map |
| 0x1000244F | core | - | `src/missionlang_mercs/text/func_1000244f.c` | module-map |
| 0x10002450 | core | 664 | `src/missionlang_mercs/text/func_10002450.c` | module-map |
| 0x10003057 | core | - | `src/missionlang_mercs/text/func_10003057.c` | module-map |
| 0x10003570 | core | 664 | `src/missionlang_mercs/text/func_10003570.c` | module-map |

### arena

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10002785 | core | 62 | `src/missionlang_mercs/text/func_10002785.c` | module-map |
| 0x100027C3 | core | 43 | `src/missionlang_mercs/text/func_100027c3.c` | module-map |
| 0x100027EE | core | 811 | `src/missionlang_mercs/text/func_100027ee.c` | module-map |
| 0x10002B19 | core | 777 | `src/missionlang_mercs/text/func_10002b19.c` | module-map |
| 0x10002E22 | core | 177 | `src/missionlang_mercs/text/func_10002e22.c` | module-map |
| 0x10002ED3 | core | 251 | `src/missionlang_mercs/text/func_10002ed3.c` | module-map |

### error

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001AEB | core | 57 | `src/missionlang_mercs/text/func_10001aeb.c` | module-map |
| 0x10001B24 | core | 339 | `src/missionlang_mercs/text/func_10001b24.c` | module-map |
| 0x10002FCE | core | 137 | `src/missionlang_mercs/text/func_10002fce.c` | module-map |
| 0x100031B8 | core | 27 | `src/missionlang_mercs/text/func_100031b8.c` | module-map |

### locks

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10001C77 | core | 41 | `src/missionlang_mercs/text/func_10001c77.c` | module-map |
| 0x10001CA0 | core | 108 | `src/missionlang_mercs/text/func_10001ca0.c` | module-map |
| 0x10001D0C | core | 97 | `src/missionlang_mercs/text/func_10001d0c.c` | module-map |
| 0x10001D6D | core | 21 | `src/missionlang_mercs/text/func_10001d6d.c` | module-map |

### data

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10005000 | data | - | `src/missionlang_mercs/data/data_0x10005000.c` | section |

### rdata

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x10004000 | data | - | `src/missionlang_mercs/rdata/data_0x10004000.c` | section |

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MissionLang_MERCS_dll.md)
