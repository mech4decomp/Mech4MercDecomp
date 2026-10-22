# Log Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 192 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Logging, assertions, error reporting, and diagnostic output.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The log buffer, level filtering, emit, and assert code sit in 0x006F9000-0x006FB000; error dispatch is at 0x006BF9E0. ZlogLib exposes the same facility through `GetngLogAPI`.

Logging is called from runtime, UI, net, and archive code. It writes diagnostic output and is one of the main observability seams in the game.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x006F9000-0x006FB000 | runtime | log buffer/emit/assert |
| 0x006BF9E0 | runtime | error dispatch |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 192 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00406AC0 | core | 152 | `src/mw4mercs/text/func_00406ac0.c` | keyword |
| 0x00431820 | core | 175 | `src/mw4mercs/text/func_00431820.c` | keyword |
| 0x00435CA0 | core | 62 | `src/mw4mercs/text/func_00435ca0.c` | keyword |
| 0x0044CFB0 | core | 148 | `src/mw4mercs/text/func_0044cfb0.c` | keyword |
| 0x004651FB | core | - | `src/mw4mercs/text/func_004651FB.c` | keyword |
| 0x00467CE0 | core | 156 | `src/mw4mercs/text/func_00467ce0.c` | keyword |
| 0x00472AF0 | core | 148 | `src/mw4mercs/text/func_00472af0.c` | keyword |
| 0x004801B0 | core | 59 | `src/mw4mercs/text/func_004801b0.c` | keyword |
| 0x0048A420 | core | - | `src/mw4mercs/text/func_0048A420.c` | keyword |
| 0x0048A440 | core | - | `src/mw4mercs/text/func_0048A440.c` | keyword |
| 0x0048A460 | core | - | `src/mw4mercs/text/func_0048A460.c` | keyword |
| 0x00493270 | core | 217 | `src/mw4mercs/text/func_00493270.c` | keyword |
| 0x004933D0 | core | 68 | `src/mw4mercs/text/func_004933d0.c` | keyword |
| 0x004A26E0 | core | 337 | `src/mw4mercs/text/func_004a26e0.c` | keyword |
| 0x004ABCC0 | core | 255 | `src/mw4mercs/text/func_004abcc0.c` | keyword |
| 0x004B3260 | core | 113 | `src/mw4mercs/text/func_004b3260.c` | keyword |
| 0x004B56F0 | core | 173 | `src/mw4mercs/text/func_004b56f0.c` | keyword |
| 0x004B66A0 | core | - | `src/mw4mercs/text/func_004B66A0.c` | keyword |
| 0x004B66C0 | core | - | `src/mw4mercs/text/func_004B66C0.c` | keyword |
| 0x004B66E0 | core | - | `src/mw4mercs/text/func_004B66E0.c` | keyword |
| 0x004B9C40 | core | - | `src/mw4mercs/text/func_004B9C40.c` | keyword |
| 0x004B9C60 | core | - | `src/mw4mercs/text/func_004B9C60.c` | keyword |
| 0x004B9C80 | core | - | `src/mw4mercs/text/func_004B9C80.c` | keyword |
| 0x004B9CA0 | core | - | `src/mw4mercs/text/func_004B9CA0.c` | keyword |
| 0x004B9DE0 | core | - | `src/mw4mercs/text/func_004B9DE0.c` | keyword |
| 0x004BA2E0 | core | - | `src/mw4mercs/text/func_004BA2E0.c` | keyword |
| 0x004BA300 | core | - | `src/mw4mercs/text/func_004BA300.c` | keyword |
| 0x004BA370 | core | - | `src/mw4mercs/text/func_004BA370.c` | keyword |
| 0x004BA390 | core | - | `src/mw4mercs/text/func_004BA390.c` | keyword |
| 0x004BA540 | core | - | `src/mw4mercs/text/func_004BA540.c` | keyword |
| 0x004BB74D | core | - | `src/mw4mercs/text/func_004BB74D.c` | keyword |
| 0x004BB770 | core | - | `src/mw4mercs/text/func_004BB770.c` | keyword |
| 0x004BBB50 | core | - | `src/mw4mercs/text/func_004BBB50.c` | keyword |
| 0x004BBB70 | core | - | `src/mw4mercs/text/func_004BBB70.c` | keyword |
| 0x004BBB90 | core | - | `src/mw4mercs/text/func_004BBB90.c` | keyword |
| 0x004BBBB0 | core | - | `src/mw4mercs/text/func_004BBBB0.c` | keyword |
| 0x004BBF10 | core | - | `src/mw4mercs/text/func_004BBF10.c` | keyword |
| 0x004BBF30 | core | - | `src/mw4mercs/text/func_004BBF30.c` | keyword |
| 0x004BBF50 | core | - | `src/mw4mercs/text/func_004BBF50.c` | keyword |
| 0x004BBF70 | core | - | `src/mw4mercs/text/func_004BBF70.c` | keyword |
| 0x004CFFA0 | core | 352 | `src/mw4mercs/text/func_004cffa0.c` | keyword |
| 0x004D1950 | core | 103 | `src/mw4mercs/text/func_004d1950.c` | keyword |
| 0x004D3570 | core | 278 | `src/mw4mercs/text/func_004d3570.c` | keyword |
| 0x004D4210 | core | 119 | `src/mw4mercs/text/func_004d4210.c` | keyword |
| 0x004D5590 | core | 1018 | `src/mw4mercs/text/func_004d5590.c` | keyword |
| 0x004D9FA0 | core | 374 | `src/mw4mercs/text/func_004d9fa0.c` | keyword |
| 0x004DB550 | core | 210 | `src/mw4mercs/text/func_004db550.c` | keyword |
| 0x004E4920 | core | 393 | `src/mw4mercs/text/func_004e4920.c` | keyword |
| 0x004E92C0 | core | 442 | `src/mw4mercs/text/func_004e92c0.c` | keyword |
| 0x004EA280 | core | 141 | `src/mw4mercs/text/func_004ea280.c` | keyword |
| 0x004EA320 | core | 157 | `src/mw4mercs/text/func_004ea320.c` | keyword |
| 0x004ED660 | core | 464 | `src/mw4mercs/text/func_004ed660.c` | keyword |
| 0x004EDDF0 | core | 1502 | `src/mw4mercs/text/func_004eddf0.c` | keyword |
| 0x004EEEB0 | core | 168 | `src/mw4mercs/text/func_004eeeb0.c` | keyword |
| 0x004F0920 | core | 149 | `src/mw4mercs/text/func_004f0920.c` | keyword |
| 0x004F0E50 | core | 115 | `src/mw4mercs/text/func_004f0e50.c` | keyword |
| 0x004F0ED0 | core | 38 | `src/mw4mercs/text/func_004f0ed0.c` | keyword |
| 0x004F2540 | core | 155 | `src/mw4mercs/text/func_004f2540.c` | keyword |
| 0x004F3360 | core | 86 | `src/mw4mercs/text/func_004f3360.c` | keyword |
| 0x004F4060 | core | 274 | `src/mw4mercs/text/func_004f4060.c` | keyword |
| 0x004F4780 | core | 60 | `src/mw4mercs/text/func_004f4780.c` | keyword |
| 0x004FCCD0 | core | 803 | `src/mw4mercs/text/func_004fccd0.c` | keyword |
| 0x0050097C | core | - | `src/mw4mercs/text/func_0050097C.c` | keyword |
| 0x005009A0 | core | - | `src/mw4mercs/text/func_005009A0.c` | keyword |
| 0x005009C0 | core | - | `src/mw4mercs/text/func_005009C0.c` | keyword |
| 0x00546520 | core | 47 | `src/mw4mercs/text/func_00546520.c` | keyword |
| 0x005602D0 | core | 155 | `src/mw4mercs/text/func_005602d0.c` | keyword |
| 0x00560B10 | core | 82 | `src/mw4mercs/text/func_00560b10.c` | keyword |
| 0x00563D90 | core | 1348 | `src/mw4mercs/text/func_00563d90.c` | keyword |
| 0x005642E0 | core | 1271 | `src/mw4mercs/text/func_005642e0.c` | keyword |
| 0x005667C0 | core | 233 | `src/mw4mercs/text/func_005667c0.c` | keyword |
| 0x00568290 | core | 124 | `src/mw4mercs/text/func_00568290.c` | keyword |
| 0x00571730 | core | 782 | `src/mw4mercs/text/func_00571730.c` | keyword |
| 0x00572150 | core | 764 | `src/mw4mercs/text/func_00572150.c` | keyword |
| 0x00572450 | core | 873 | `src/mw4mercs/text/func_00572450.c` | keyword |
| 0x005727C0 | core | 725 | `src/mw4mercs/text/func_005727c0.c` | keyword |
| 0x00572AA0 | core | 661 | `src/mw4mercs/text/func_00572aa0.c` | keyword |
| 0x00572D40 | core | 661 | `src/mw4mercs/text/func_00572d40.c` | keyword |
| 0x00572FE0 | core | 464 | `src/mw4mercs/text/func_00572fe0.c` | keyword |
| 0x00577530 | core | 214 | `src/mw4mercs/text/func_00577530.c` | keyword |
| 0x005808B0 | core | 247 | `src/mw4mercs/text/func_005808b0.c` | keyword |
| 0x005971B0 | core | 63 | `src/mw4mercs/text/func_005971b0.c` | keyword |
| 0x00597280 | core | 71 | `src/mw4mercs/text/func_00597280.c` | keyword |
| 0x005A02F0 | core | 44 | `src/mw4mercs/text/func_005a02f0.c` | keyword |
| 0x005A0ED0 | core | 44 | `src/mw4mercs/text/func_005a0ed0.c` | keyword |
| 0x005A3740 | core | 107 | `src/mw4mercs/text/func_005a3740.c` | keyword |
| 0x005A37B0 | core | 63 | `src/mw4mercs/text/func_005a37b0.c` | keyword |
| 0x005A3EE0 | core | 44 | `src/mw4mercs/text/func_005a3ee0.c` | keyword |
| 0x005A4840 | core | 44 | `src/mw4mercs/text/func_005a4840.c` | keyword |
| 0x005A4D40 | core | 44 | `src/mw4mercs/text/func_005a4d40.c` | keyword |
| 0x005A50E0 | core | 44 | `src/mw4mercs/text/func_005a50e0.c` | keyword |
| 0x005A5360 | core | - | `src/mw4mercs/text/func_005A5360.c` | keyword |
| 0x005A5C60 | core | 44 | `src/mw4mercs/text/func_005a5c60.c` | keyword |
| 0x005AFE90 | core | 44 | `src/mw4mercs/text/func_005afe90.c` | keyword |
| 0x005B1300 | core | 44 | `src/mw4mercs/text/func_005b1300.c` | keyword |
| 0x005B3030 | core | 125 | `src/mw4mercs/text/func_005b3030.c` | keyword |
| 0x005B43F0 | core | 44 | `src/mw4mercs/text/func_005b43f0.c` | keyword |
| 0x005B75C0 | core | 71 | `src/mw4mercs/text/func_005b75c0.c` | keyword |
| 0x005B7620 | core | 131 | `src/mw4mercs/text/func_005b7620.c` | keyword |
| 0x005DBB10 | core | 93 | `src/mw4mercs/text/func_005dbb10.c` | keyword |
| 0x005DBB70 | core | 93 | `src/mw4mercs/text/func_005dbb70.c` | keyword |
| 0x005DD330 | core | 689 | `src/mw4mercs/text/func_005dd330.c` | keyword |
| 0x005DFDA0 | core | 52 | `src/mw4mercs/text/func_005dfda0.c` | keyword |
| 0x005DFDE0 | core | 504 | `src/mw4mercs/text/func_005dfde0.c` | keyword |
| 0x005DFFE0 | core | 395 | `src/mw4mercs/text/func_005dffe0.c` | keyword |
| 0x005E7890 | core | 44 | `src/mw4mercs/text/func_005e7890.c` | keyword |
| 0x005E7B90 | core | 44 | `src/mw4mercs/text/func_005e7b90.c` | keyword |
| 0x005E84A0 | core | 44 | `src/mw4mercs/text/func_005e84a0.c` | keyword |
| 0x005F07F0 | core | 44 | `src/mw4mercs/text/func_005f07f0.c` | keyword |
| 0x005F0BE0 | core | 199 | `src/mw4mercs/text/func_005f0be0.c` | keyword |
| 0x005FAF30 | core | 1480 | `src/mw4mercs/text/func_005faf30.c` | keyword |
| 0x005FB500 | core | 524 | `src/mw4mercs/text/func_005fb500.c` | keyword |
| 0x005FBC80 | core | 44 | `src/mw4mercs/text/func_005fbc80.c` | keyword |
| 0x005FCC50 | core | 44 | `src/mw4mercs/text/func_005fcc50.c` | keyword |
| 0x005FD730 | core | 309 | `src/mw4mercs/text/func_005fd730.c` | keyword |
| 0x006126C0 | core | - | `src/mw4mercs/text/func_006126C0.c` | keyword |
| 0x00620890 | core | 166 | `src/mw4mercs/text/func_00620890.c` | keyword |
| 0x00620BE0 | core | - | `src/mw4mercs/text/func_00620be0.c` | keyword |
| 0x00625820 | core | 657 | `src/mw4mercs/text/func_00625820.c` | keyword |
| 0x0062F530 | core | 419 | `src/mw4mercs/text/func_0062f530.c` | keyword |
| 0x00630030 | core | 1951 | `src/mw4mercs/text/func_00630030.c` | keyword |
| 0x0064A090 | core | 73 | `src/mw4mercs/text/func_0064a090.c` | keyword |
| 0x00650530 | core | 69 | `src/mw4mercs/text/func_00650530.c` | keyword |
| 0x0065C440 | core | 147 | `src/mw4mercs/text/func_0065c440.c` | keyword |
| 0x00666550 | core | 68 | `src/mw4mercs/text/func_00666550.c` | keyword |
| 0x006665A0 | core | 68 | `src/mw4mercs/text/func_006665a0.c` | keyword |
| 0x0066B0A0 | core | 106 | `src/mw4mercs/text/func_0066b0a0.c` | keyword |
| 0x00676520 | core | 136 | `src/mw4mercs/text/func_00676520.c` | keyword |
| 0x0067FA60 | core | 145 | `src/mw4mercs/text/func_0067fa60.c` | keyword |
| 0x006BBF00 | core | 61 | `src/mw4mercs/text/func_006bbf00.c` | keyword |
| 0x006BBF40 | core | 62 | `src/mw4mercs/text/func_006bbf40.c` | keyword |
| 0x006BFB7F | core | - | `src/mw4mercs/text/func_006BFB7F.c` | keyword |
| 0x006E7840 | core | 2682 | `src/mw4mercs/text/func_006e7840.c` | keyword |
| 0x006ED920 | core | 852 | `src/mw4mercs/text/func_006ed920.c` | keyword |
| 0x006EE070 | core | - | `src/mw4mercs/text/func_006ee070.c` | keyword |
| 0x006EE340 | core | - | `src/mw4mercs/text/func_006ee340.c` | keyword |
| 0x006F9070 | core | 95 | `src/mw4mercs/text/func_006f9070.c` | range |
| 0x006F90D0 | core | 6 | `src/mw4mercs/text/func_006f90d0.c` | range |
| 0x006F90E0 | core | 43 | `src/mw4mercs/text/func_006f90e0.c` | range |
| 0x006F910B | core | - | `src/mw4mercs/text/func_006f910b.c` | range |
| 0x006F9160 | core | 1 | `src/mw4mercs/text/func_006f9160.c` | range |
| 0x006F9170 | core | 12 | `src/mw4mercs/text/func_006f9170.c` | range |
| 0x006F917C | core | - | `src/mw4mercs/text/func_006f917c.c` | range |
| 0x006F9190 | core | - | `src/mw4mercs/text/func_006F9190.c` | range |
| 0x006F91A0 | core | 10 | `src/mw4mercs/text/func_006f91a0.c` | range |
| 0x006F91B0 | core | 12 | `src/mw4mercs/text/func_006f91b0.c` | range |
| 0x006FA970 | core | - | `src/mw4mercs/text/func_006FA970.c` | range |
| 0x006FAA00 | core | - | `src/mw4mercs/text/func_006FAA00.c` | range |
| 0x006FAA78 | core | - | `src/mw4mercs/text/func_006faa78.c` | range |
| 0x006FAAB0 | core | 98 | `src/mw4mercs/text/func_006faab0.c` | range |
| 0x006FAB20 | core | 109 | `src/mw4mercs/text/func_006fab20.c` | range |
| 0x006FAE50 | core | 432 | `src/mw4mercs/text/func_006fae50.c` | range |
| 0x006FB000 | core | - | `src/mw4mercs/text/func_006fb000.c` | range |
| 0x006FB0E0 | core | 299 | `src/mw4mercs/text/func_006fb0e0.c` | keyword |
| 0x006FC8C0 | core | 113 | `src/mw4mercs/text/func_006fc8c0.c` | keyword |
| 0x006FC940 | core | 135 | `src/mw4mercs/text/func_006fc940.c` | keyword |
| 0x006FC970 | core | - | `src/mw4mercs/text/func_006fc970.c` | keyword |
| 0x006FECB0 | core | 114 | `src/mw4mercs/text/func_006fecb0.c` | keyword |
| 0x006FF030 | core | - | `src/mw4mercs/text/func_006FF030.c` | keyword |
| 0x006FFC00 | core | 124 | `src/mw4mercs/text/func_006ffc00.c` | keyword |
| 0x00701410 | core | 87 | `src/mw4mercs/text/func_00701410.c` | keyword |
| 0x0070D040 | core | 341 | `src/mw4mercs/text/func_0070d040.c` | keyword |
| 0x0070DDB0 | core | 552 | `src/mw4mercs/text/func_0070ddb0.c` | keyword |
| 0x00715E00 | core | 910 | `src/mw4mercs/text/func_00715e00.c` | keyword |
| 0x007161A0 | core | 1062 | `src/mw4mercs/text/func_007161a0.c` | keyword |
| 0x007165D0 | core | 876 | `src/mw4mercs/text/func_007165d0.c` | keyword |
| 0x00717C60 | core | 72 | `src/mw4mercs/text/func_00717c60.c` | keyword |
| 0x00734FB0 | core | 63 | `src/mw4mercs/text/func_00734fb0.c` | keyword |
| 0x00734FF0 | core | 63 | `src/mw4mercs/text/func_00734ff0.c` | keyword |
| 0x007351B0 | core | 52 | `src/mw4mercs/text/func_007351b0.c` | keyword |
| 0x00735390 | core | 82 | `src/mw4mercs/text/func_00735390.c` | keyword |
| 0x007354A0 | core | 80 | `src/mw4mercs/text/func_007354a0.c` | keyword |
| 0x007354F0 | core | 83 | `src/mw4mercs/text/func_007354f0.c` | keyword |
| 0x00735640 | core | 100 | `src/mw4mercs/text/func_00735640.c` | keyword |
| 0x0073C320 | core | 45 | `src/mw4mercs/text/func_0073c320.c` | keyword |
| 0x00755280 | core | 81 | `src/mw4mercs/text/func_00755280.c` | keyword |
| 0x007552E0 | core | 65 | `src/mw4mercs/text/func_007552e0.c` | keyword |
| 0x00755620 | core | 88 | `src/mw4mercs/text/func_00755620.c` | keyword |
| 0x00755760 | core | 52 | `src/mw4mercs/text/func_00755760.c` | keyword |
| 0x007557E0 | core | 52 | `src/mw4mercs/text/func_007557e0.c` | keyword |
| 0x00757AF0 | core | 59 | `src/mw4mercs/text/func_00757af0.c` | keyword |
| 0x00757B30 | core | 59 | `src/mw4mercs/text/func_00757b30.c` | keyword |
| 0x00757B70 | core | 59 | `src/mw4mercs/text/func_00757b70.c` | keyword |
| 0x00758580 | core | 87 | `src/mw4mercs/text/func_00758580.c` | keyword |
| 0x007585E0 | core | 99 | `src/mw4mercs/text/func_007585e0.c` | keyword |
| 0x0075B090 | core | 59 | `src/mw4mercs/text/func_0075b090.c` | keyword |
| 0x0075B590 | core | 62 | `src/mw4mercs/text/func_0075b590.c` | keyword |
| 0x0075B760 | core | 70 | `src/mw4mercs/text/func_0075b760.c` | keyword |
| 0x0075B7B0 | core | 62 | `src/mw4mercs/text/func_0075b7b0.c` | keyword |
| 0x0075B7F0 | core | 62 | `src/mw4mercs/text/func_0075b7f0.c` | keyword |
| 0x0075B830 | core | 62 | `src/mw4mercs/text/func_0075b830.c` | keyword |
| 0x0075C8E0 | core | 168 | `src/mw4mercs/text/func_0075c8e0.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
