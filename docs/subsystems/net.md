# Network Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 385 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Shared VAs](#shared-vas)
- [Boundary VAs](#boundary-vas)
- [Related](#related)

## How it works

The transport layer is a DirectPlay8 COM wrapper. Session and lobby code owns roster, join/leave, mission accept, broadcast, and countdown state; it exposes that state to gameplay.

GameSpy uses winsock queries (the 0x004D7xxx/0x004FFxxx clusters). ZoneMatch has its own client around 0x00700000-0x00709FFF. The subsystem boundary is the session/roster state consumed by gameplay and the UI.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00700000-0x00709FFF | zonematch | ZoneMatch client |
| 0x004D7000-0x004D8FFF | gamespy | GameSpy/winsock query cluster |
| 0x004FF000-0x0050DFFF | gamespy | GameSpy/winsock query cluster |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| session | 236 | In-game lobby/session state, join/leave, mission accept, broadcast, and countdown. |
| zonematch | 60 | ZoneMatch matchmaking client and session registry. |
| gamespy | 53 | Winsock GameSpy query path and master-server discovery. |
| transport | 33 | DirectPlay8 COM transport wrapper and its session/roster operations. |
| (general) | 3 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### session

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004D2AB0 | core | 16 | `src/mw4mercs/text/func_004d2ab0.c` | surface |
| 0x004D40F0 | core | 70 | `src/mw4mercs/text/func_004d40f0.c` | surface |
| 0x004D8F60 | core | 72 | `src/mw4mercs/text/func_004d8f60.c` | surface |
| 0x004FF3E0 | core | 169 | `src/mw4mercs/text/func_004ff3e0.c` | keyword |
| 0x0051192A | core | 243 | `src/mw4mercs/text/func_0051192a.c` | surface |
| 0x00511CA0 | core | 102 | `src/mw4mercs/text/func_00511ca0.c` | surface |
| 0x0052E160 | core | 3832 | `src/mw4mercs/text/func_0052e160.c` | surface |
| 0x00530360 | core | 423 | `src/mw4mercs/text/func_00530360.c` | surface |
| 0x00530510 | core | 380 | `src/mw4mercs/text/func_00530510.c` | surface |
| 0x00530690 | core | 687 | `src/mw4mercs/text/func_00530690.c` | surface |
| 0x00534200 | core | 1058 | `src/mw4mercs/text/func_00534200.c` | surface |
| 0x00534650 | core | 403 | `src/mw4mercs/text/func_00534650.c` | surface |
| 0x00534D40 | core | 1295 | `src/mw4mercs/text/func_00534d40.c` | surface |
| 0x00535B40 | core | 5 | `src/mw4mercs/text/func_00535b40.c` | surface |
| 0x00535F30 | core | 299 | `src/mw4mercs/text/func_00535f30.c` | surface |
| 0x00536DF0 | core | 180 | `src/mw4mercs/text/func_00536df0.c` | surface |
| 0x005394A0 | core | 494 | `src/mw4mercs/text/func_005394a0.c` | surface |
| 0x0053CAE0 | core | 167 | `src/mw4mercs/text/func_0053cae0.c` | surface |
| 0x0053CD70 | core | 250 | `src/mw4mercs/text/func_0053cd70.c` | surface |
| 0x0053CE70 | core | 193 | `src/mw4mercs/text/func_0053ce70.c` | surface |
| 0x0053CF80 | core | 182 | `src/mw4mercs/text/func_0053cf80.c` | surface |
| 0x0053D160 | core | 1145 | `src/mw4mercs/text/func_0053d160.c` | surface |
| 0x0053D720 | core | 1028 | `src/mw4mercs/text/func_0053d720.c` | surface |
| 0x0053DDA0 | core | 361 | `src/mw4mercs/text/func_0053dda0.c` | surface |
| 0x0053F210 | core | 1783 | `src/mw4mercs/text/func_0053f210.c` | surface |
| 0x0053F910 | core | 126 | `src/mw4mercs/text/func_0053f910.c` | surface |
| 0x0053F9B0 | core | 184 | `src/mw4mercs/text/func_0053f9b0.c` | surface |
| 0x0053FA70 | core | 1494 | `src/mw4mercs/text/func_0053fa70.c` | surface |
| 0x00543BC0 | core | 407 | `src/mw4mercs/text/func_00543bc0.c` | surface |
| 0x005450B0 | core | 179 | `src/mw4mercs/text/func_005450b0.c` | surface |
| 0x00563630 | core | 218 | `src/mw4mercs/text/func_00563630.c` | surface |
| 0x00563800 | core | 1135 | `src/mw4mercs/text/func_00563800.c` | surface |
| 0x00564AA0 | core | 498 | `src/mw4mercs/text/func_00564aa0.c` | surface |
| 0x005663B0 | core | 442 | `src/mw4mercs/text/func_005663b0.c` | surface |
| 0x005AAB90 | core | 143 | `src/mw4mercs/text/func_005aab90.c` | surface |
| 0x005BB9C0 | core | 11 | `src/mw4mercs/text/func_005bb9c0.c` | surface |
| 0x005BD680 | core | 1247 | `src/mw4mercs/text/func_005bd680.c` | surface |
| 0x005BDF90 | core | 634 | `src/mw4mercs/text/func_005bdf90.c` | surface |
| 0x005BE210 | core | 2316 | `src/mw4mercs/text/func_005be210.c` | surface |
| 0x0061B0B0 | core | 106 | `src/mw4mercs/text/func_0061b0b0.c` | surface |
| 0x0062DDC0 | core | 105 | `src/mw4mercs/text/func_0062ddc0.c` | surface |
| 0x00680490 | core | 89 | `src/mw4mercs/text/func_00680490.c` | surface |
| 0x00680730 | core | 232 | `src/mw4mercs/text/func_00680730.c` | surface |
| 0x00680960 | core | 331 | `src/mw4mercs/text/func_00680960.c` | surface |
| 0x00680B30 | core | 29 | `src/mw4mercs/text/func_00680b30.c` | surface |
| 0x00701730 | core | 5 | `src/mw4mercs/text/func_00701730.c` | surface |

### gamespy

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004D7A60 | core | 74 | `src/mw4mercs/text/func_004d7a60.c` | surface |
| 0x004D7B00 | core | 74 | `src/mw4mercs/text/func_004d7b00.c` | surface |
| 0x004D7B50 | core | 349 | `src/mw4mercs/text/func_004d7b50.c` | surface |
| 0x004D7CD0 | core | 151 | `src/mw4mercs/text/func_004d7cd0.c` | surface |
| 0x004D7DB0 | core | 74 | `src/mw4mercs/text/func_004d7db0.c` | surface |
| 0x004D7E00 | core | 77 | `src/mw4mercs/text/func_004d7e00.c` | surface |
| 0x004D7E50 | core | 159 | `src/mw4mercs/text/func_004d7e50.c` | surface |
| 0x004D7EF0 | core | 245 | `src/mw4mercs/text/func_004d7ef0.c` | surface |
| 0x004D7FF0 | core | 159 | `src/mw4mercs/text/func_004d7ff0.c` | surface |
| 0x004D8090 | core | 308 | `src/mw4mercs/text/func_004d8090.c` | surface |
| 0x004D81D0 | core | 96 | `src/mw4mercs/text/func_004d81d0.c` | surface |
| 0x004D8230 | core | 96 | `src/mw4mercs/text/func_004d8230.c` | surface |
| 0x004D8290 | core | 96 | `src/mw4mercs/text/func_004d8290.c` | surface |
| 0x004D82F0 | core | 96 | `src/mw4mercs/text/func_004d82f0.c` | surface |
| 0x004D8350 | core | 93 | `src/mw4mercs/text/func_004d8350.c` | surface |
| 0x004D83B0 | core | 275 | `src/mw4mercs/text/func_004d83b0.c` | surface |
| 0x004D84D0 | core | 171 | `src/mw4mercs/text/func_004d84d0.c` | surface |
| 0x004D8580 | core | 43 | `src/mw4mercs/text/func_004d8580.c` | surface |
| 0x004D85B0 | core | 359 | `src/mw4mercs/text/func_004d85b0.c` | surface |
| 0x004D8720 | core | 19 | `src/mw4mercs/text/func_004d8720.c` | surface |
| 0x004D8740 | core | 538 | `src/mw4mercs/text/func_004d8740.c` | surface |
| 0x004D8980 | core | 242 | `src/mw4mercs/text/func_004d8980.c` | surface |
| 0x004D8A80 | core | 47 | `src/mw4mercs/text/func_004d8a80.c` | surface |
| 0x004D8AB0 | core | 560 | `src/mw4mercs/text/func_004d8ab0.c` | surface |
| 0x004D8CE0 | core | 3 | `src/mw4mercs/text/func_004d8ce0.c` | surface |
| 0x004D8CF0 | core | 128 | `src/mw4mercs/text/func_004d8cf0.c` | surface |
| 0x004FFA90 | core | 252 | `src/mw4mercs/text/func_004ffa90.c` | surface |
| 0x004FFB90 | core | 412 | `src/mw4mercs/text/func_004ffb90.c` | surface |
| 0x004FFD30 | core | 729 | `src/mw4mercs/text/func_004ffd30.c` | surface |
| 0x00500010 | core | 39 | `src/mw4mercs/text/func_00500010.c` | surface |
| 0x00500430 | core | 142 | `src/mw4mercs/text/func_00500430.c` | surface |
| 0x005004C0 | core | 78 | `src/mw4mercs/text/func_005004c0.c` | surface |
| 0x00500890 | core | 6 | `src/mw4mercs/text/func_00500890.c` | surface |
| 0x005008D0 | core | 5 | `src/mw4mercs/text/func_005008d0.c` | surface |
| 0x0050DD10 | core | 82 | `src/mw4mercs/text/func_0050dd10.c` | surface |
| 0x005635A0 | core | 136 | `src/mw4mercs/text/func_005635a0.c` | surface |
| 0x0075DFB6 | core | 6 | `src/mw4mercs/text/func_0075dfb6.c` | surface |

### transport

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00740DD0 | core | 66 | `src/mw4mercs/text/func_00740dd0.c` | surface |
| 0x00740E20 | core | 69 | `src/mw4mercs/text/func_00740e20.c` | surface |
| 0x00740E70 | core | 73 | `src/mw4mercs/text/func_00740e70.c` | surface |
| 0x00740EC0 | core | 52 | `src/mw4mercs/text/func_00740ec0.c` | surface |
| 0x00741090 | core | 66 | `src/mw4mercs/text/func_00741090.c` | surface |
| 0x00741160 | core | 85 | `src/mw4mercs/text/func_00741160.c` | surface |
| 0x00741220 | core | 82 | `src/mw4mercs/text/func_00741220.c` | surface |
| 0x007413A0 | core | 66 | `src/mw4mercs/text/func_007413a0.c` | surface |
| 0x007413F0 | core | 85 | `src/mw4mercs/text/func_007413f0.c` | surface |
| 0x00741450 | core | 82 | `src/mw4mercs/text/func_00741450.c` | surface |
| 0x00741500 | core | 74 | `src/mw4mercs/text/func_00741500.c` | surface |
| 0x007415F0 | core | 66 | `src/mw4mercs/text/func_007415f0.c` | surface |
| 0x007416A0 | core | 85 | `src/mw4mercs/text/func_007416a0.c` | surface |
| 0x00741750 | core | 74 | `src/mw4mercs/text/func_00741750.c` | surface |
| 0x007417A0 | core | 82 | `src/mw4mercs/text/func_007417a0.c` | surface |
| 0x007418A0 | core | 66 | `src/mw4mercs/text/func_007418a0.c` | surface |
| 0x00741980 | core | 78 | `src/mw4mercs/text/func_00741980.c` | surface |
| 0x007419D0 | core | 115 | `src/mw4mercs/text/func_007419d0.c` | surface |
| 0x00741C30 | core | 77 | `src/mw4mercs/text/func_00741c30.c` | surface |
| 0x00741C80 | core | 86 | `src/mw4mercs/text/func_00741c80.c` | surface |
| 0x00741CE0 | core | 74 | `src/mw4mercs/text/func_00741ce0.c` | surface |
| 0x00741D80 | core | 82 | `src/mw4mercs/text/func_00741d80.c` | surface |
| 0x00741E30 | core | 66 | `src/mw4mercs/text/func_00741e30.c` | surface |
| 0x007420A0 | core | 66 | `src/mw4mercs/text/func_007420a0.c` | surface |
| 0x007420F0 | core | 82 | `src/mw4mercs/text/func_007420f0.c` | surface |
| 0x00742150 | core | 82 | `src/mw4mercs/text/func_00742150.c` | surface |
| 0x007422A0 | core | 66 | `src/mw4mercs/text/func_007422a0.c` | surface |
| 0x0074D020 | core | 247 | `src/mw4mercs/text/func_0074d020.c` | surface |
| 0x0074D160 | core | 34 | `src/mw4mercs/text/func_0074d160.c` | surface |
| 0x0074D190 | core | 412 | `src/mw4mercs/text/func_0074d190.c` | surface |
| 0x0074D330 | core | 402 | `src/mw4mercs/text/func_0074d330.c` | surface |
| 0x0074D4D0 | core | 1241 | `src/mw4mercs/text/func_0074d4d0.c` | surface |
| 0x0074D9B0 | core | 175 | `src/mw4mercs/text/func_0074d9b0.c` | surface |

### zonematch

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x006F5AE0 | core | 137 | `src/mw4mercs/text/func_006f5ae0.c` | surface |
| 0x006F65F0 | core | 348 | `src/mw4mercs/text/func_006f65f0.c` | surface |
| 0x006FE690 | core | 595 | `src/mw4mercs/text/func_006fe690.c` | surface |
| 0x006FE8F0 | core | 412 | `src/mw4mercs/text/func_006fe8f0.c` | surface |
| 0x006FEC00 | core | 78 | `src/mw4mercs/text/func_006fec00.c` | surface |
| 0x00700070 | core | 188 | `src/mw4mercs/text/func_00700070.c` | surface |
| 0x00700300 | core | 370 | `src/mw4mercs/text/func_00700300.c` | surface |
| 0x007008E0 | core | 681 | `src/mw4mercs/text/func_007008e0.c` | surface |
| 0x00700CF0 | core | 468 | `src/mw4mercs/text/func_00700cf0.c` | surface |
| 0x00700ED0 | core | 300 | `src/mw4mercs/text/func_00700ed0.c` | surface |
| 0x00703BB0 | core | 683 | `src/mw4mercs/text/func_00703bb0.c` | surface |
| 0x00703E60 | core | 2193 | `src/mw4mercs/text/func_00703e60.c` | surface |
| 0x00704750 | core | 137 | `src/mw4mercs/text/func_00704750.c` | surface |
| 0x00705FE0 | core | 1277 | `src/mw4mercs/text/func_00705fe0.c` | surface |
| 0x00706570 | core | 739 | `src/mw4mercs/text/func_00706570.c` | surface |
| 0x00741330 | core | 110 | `src/mw4mercs/text/func_00741330.c` | surface |
| 0x00741FE0 | core | 90 | `src/mw4mercs/text/func_00741fe0.c` | surface |
| 0x007421B0 | core | 76 | `src/mw4mercs/text/func_007421b0.c` | surface |
| 0x00742200 | core | 74 | `src/mw4mercs/text/func_00742200.c` | surface |

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004CCD00 | core | - | `src/mw4mercs/text/func_004ccd00.c` | band |
| 0x004D7250 | core | 152 | `src/mw4mercs/text/func_004d7250.c` | keyword |
| 0x004FF390 | core | 71 | `src/mw4mercs/text/func_004ff390.c` | keyword |

## Shared VAs

This subsystem references **162 shared VAs**. They are described once in [shared.md](shared.md#net); the table below shows a few representative entries.

| VA | Detail | Source |
|----|--------|--------|
| 0x006B4B20 | session | `src/mw4mercs/text/func_006b4b20.c` |
| 0x006C34E0 | session | `src/mw4mercs/text/func_006c34e0.c` |
| 0x006C12E0 | session | `src/mw4mercs/text/func_006c12e0.c` |
| 0x006C66F0 | session | `src/mw4mercs/text/func_006c66f0.c` |
| 0x00729AE0 | session | `src/mw4mercs/text/func_00729ae0.c` |
| 0x006C0940 | session | `src/mw4mercs/text/func_006c0940.c` |
| 0x006BAF60 | session | `src/mw4mercs/text/func_006baf60.c` |
| 0x006CE480 | session | `src/mw4mercs/text/func_006ce480.c` |

## Boundary VAs

This subsystem has **85 outbound boundary VAs**. The full table is in [SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md); representative entries are below.

| VA | Source | Size |
|----|--------|------|
| 0x00416B60 | `src/mw4mercs/text/func_00416b60.c` | 25 |
| 0x00416CA0 | `src/mw4mercs/text/func_00416ca0.c` | 12 |
| 0x00416D00 | `src/mw4mercs/text/func_00416d00.c` | 14 |
| 0x00416D40 | `src/mw4mercs/text/func_00416d40.c` | 15 |
| 0x0041EA10 | `src/mw4mercs/text/func_0041ea10.c` | 40 |
| 0x0041F030 | `src/mw4mercs/text/func_0041f030.c` | 92 |
| 0x004CC9F0 | `src/mw4mercs/text/func_004cc9f0.c` | 12 |
| 0x004CE190 | `src/mw4mercs/text/func_004ce190.c` | 1032 |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
