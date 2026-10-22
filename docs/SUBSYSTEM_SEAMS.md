# Subsystem Seams

> Boundary calls between systems. For how each subsystem works, start with [subsystems/README.md](subsystems/README.md). Shared VAs are listed once in [subsystems/shared.md](subsystems/shared.md); this page records only outbound boundary calls and cross-system dependencies.

> The summary lists details with committed surface labels. Core counts are the full count from the master index; boundary and shared counts are the surface-labeled subset. Subsystem pages give the complete detail breakdown.

## Summary

| Subsystem | Detail | Core | Boundary | Shared |
|-----------|--------|------|----------|--------|
| ai | abl | 207 | 27 | 590 |
| ai | brain | 46 | 53 | 67 |
| ai | combat | 9 | 14 | 69 |
| ai | nav | 20 | 26 | 3 |
| ai | squad | 5 | 14 | 118 |
| ai | targeting | 33 | 7 | 0 |
| combat | fire-damage | 49 | 21 | 71 |
| crypto | md5 | 4 | 0 | 0 |
| net | gamespy | 37 | 16 | 0 |
| net | session | 46 | 38 | 149 |
| net | transport | 33 | 0 | 0 |
| net | zonematch | 19 | 28 | 13 |
| render | 2d | 41 | 5 | 3 |
| render | animation | 470 | 40 | 11 |
| render | camera | 59 | 35 | 35 |
| render | device | 40 | 2 | 0 |
| render | draw | 7 | 4 | 1 |
| render | font | 6 | 2 | 1 |
| render | frame | 1 | 1 | 0 |
| render | lighting | 107 | 41 | 22 |
| render | mesh | 187 | 118 | 59 |
| render | present | 35 | 43 | 11 |
| render | records | 5 | 7 | 0 |
| render | terrain | 25 | 9 | 3 |
| render | texture | 125 | 4 | 0 |
| render | vertex | 9 | 5 | 0 |

## ai / abl

Subsystem page: [ai](subsystems/ai.md). Core: 207, boundary: 27, shared: 590 (shared listed in [shared.md](subsystems/shared.md#ai)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004084E0 | `src/mw4mercs/text/func_004084e0.c` | 11 |
| 0x0040C9E0 | `src/mw4mercs/text/func_0040c9e0.c` | 37 |
| 0x00415230 | `src/mw4mercs/text/func_00415230.c` | 40 |
| 0x00563060 | `src/mw4mercs/text/func_00563060.c` | 315 |
| 0x005666D0 | `src/mw4mercs/text/func_005666d0.c` | 122 |
| 0x005669D0 | `src/mw4mercs/text/func_005669d0.c` | 295 |
| 0x00566B60 | `src/mw4mercs/text/func_00566b60.c` | 46 |
| 0x00566B90 | `src/mw4mercs/text/func_00566b90.c` | 81 |
| 0x00566BF0 | `src/mw4mercs/text/func_00566bf0.c` | 20 |
| 0x00566C30 | `src/mw4mercs/text/func_00566c30.c` | 63 |
| 0x00566C80 | `src/mw4mercs/text/func_00566c80.c` | 29 |
| 0x00566EF0 | `src/mw4mercs/text/func_00566ef0.c` | 437 |
| 0x00580540 | `src/mw4mercs/text/func_00580540.c` | 24 |
| 0x00580560 | `src/mw4mercs/text/func_00580560.c` | 14 |
| 0x00580BE0 | `src/mw4mercs/text/func_00580be0.c` | 364 |
| 0x00580D50 | `src/mw4mercs/text/func_00580d50.c` | 232 |
| 0x00580E40 | `src/mw4mercs/text/func_00580e40.c` | 364 |
| 0x00580FB0 | `src/mw4mercs/text/func_00580fb0.c` | 232 |
| 0x005810A0 | `src/mw4mercs/text/func_005810a0.c` | 364 |
| 0x00581210 | `src/mw4mercs/text/func_00581210.c` | 232 |
| 0x00581330 | `src/mw4mercs/text/func_00581330.c` | 17 |
| 0x00581350 | `src/mw4mercs/text/func_00581350.c` | 17 |
| 0x00581370 | `src/mw4mercs/text/func_00581370.c` | 17 |
| 0x005DD1D0 | `src/mw4mercs/text/func_005dd1d0.c` | 13 |
| 0x0064D3D0 | `src/mw4mercs/text/func_0064d3d0.c` | 426 |
| 0x0064DB40 | `src/mw4mercs/text/func_0064db40.c` | 500 |
| 0x006FABF0 | `src/mw4mercs/text/func_006fabf0.c` | 87 |

## ai / brain

Subsystem page: [ai](subsystems/ai.md). Core: 46, boundary: 53, shared: 67 (shared listed in [shared.md](subsystems/shared.md#ai)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004084D0 | `src/mw4mercs/text/func_004084d0.c` | 13 |
| 0x00415020 | `src/mw4mercs/text/func_00415020.c` | 22 |
| 0x0041C830 | `src/mw4mercs/text/func_0041c830.c` | 156 |
| 0x0041FD80 | `src/mw4mercs/text/func_0041fd80.c` | 14 |
| 0x004DABC0 | `src/mw4mercs/text/func_004dabc0.c` | 33 |
| 0x004DD270 | `src/mw4mercs/text/func_004dd270.c` | 195 |
| 0x00501A20 | `src/mw4mercs/text/func_00501a20.c` | 279 |
| 0x00501B40 | `src/mw4mercs/text/func_00501b40.c` | 28 |
| 0x00507F90 | `src/mw4mercs/text/func_00507f90.c` | 460 |
| 0x0050E1B0 | `src/mw4mercs/text/func_0050e1b0.c` | 10 |
| 0x00580580 | `src/mw4mercs/text/func_00580580.c` | 21 |
| 0x005809B0 | `src/mw4mercs/text/func_005809b0.c` | 17 |
| 0x005809D0 | `src/mw4mercs/text/func_005809d0.c` | 35 |
| 0x00581300 | `src/mw4mercs/text/func_00581300.c` | 41 |
| 0x00590DF0 | `src/mw4mercs/text/func_00590df0.c` | 194 |
| 0x005B6830 | `src/mw4mercs/text/func_005b6830.c` | 21 |
| 0x005C0C50 | `src/mw4mercs/text/func_005c0c50.c` | 62 |
| 0x005C0E60 | `src/mw4mercs/text/func_005c0e60.c` | 25 |
| 0x005C7ED0 | `src/mw4mercs/text/func_005c7ed0.c` | 102 |
| 0x005C7F40 | `src/mw4mercs/text/func_005c7f40.c` | 46 |
| 0x005C8610 | `src/mw4mercs/text/func_005c8610.c` | 375 |
| 0x005CB210 | `src/mw4mercs/text/func_005cb210.c` | 24 |
| 0x005CB230 | `src/mw4mercs/text/func_005cb230.c` | 24 |
| 0x005CB260 | `src/mw4mercs/text/func_005cb260.c` | 24 |
| 0x005CB2C0 | `src/mw4mercs/text/func_005cb2c0.c` | 40 |
| 0x005CB420 | `src/mw4mercs/text/func_005cb420.c` | 21 |
| 0x005CB440 | `src/mw4mercs/text/func_005cb440.c` | 21 |
| 0x005CB460 | `src/mw4mercs/text/func_005cb460.c` | 18 |
| 0x005CBBC0 | `src/mw4mercs/text/func_005cbbc0.c` | 17 |
| 0x005CC090 | `src/mw4mercs/text/func_005cc090.c` | 37 |
| 0x005DB360 | `src/mw4mercs/text/func_005db360.c` | 75 |
| 0x005DBBD0 | `src/mw4mercs/text/func_005dbbd0.c` | 344 |
| 0x005DBE50 | `src/mw4mercs/text/func_005dbe50.c` | 34 |
| 0x005DF390 | `src/mw4mercs/text/func_005df390.c` | 131 |
| 0x005DF4F0 | `src/mw4mercs/text/func_005df4f0.c` | 256 |
| 0x005DF620 | `src/mw4mercs/text/func_005df620.c` | 11 |
| 0x005E1240 | `src/mw4mercs/text/func_005e1240.c` | 138 |
| 0x005EF700 | `src/mw4mercs/text/func_005ef700.c` | 7 |
| 0x005EF710 | `src/mw4mercs/text/func_005ef710.c` | 7 |
| 0x005EFD50 | `src/mw4mercs/text/func_005efd50.c` | 13 |
| 0x005FA070 | `src/mw4mercs/text/func_005fa070.c` | 70 |
| 0x005FBB00 | `src/mw4mercs/text/func_005fbb00.c` | 309 |
| 0x00637A20 | `src/mw4mercs/text/func_00637a20.c` | 10 |
| 0x00637B40 | `src/mw4mercs/text/func_00637b40.c` | 6 |
| 0x0065E3D0 | `src/mw4mercs/text/func_0065e3d0.c` | 18 |
| 0x0065E590 | `src/mw4mercs/text/func_0065e590.c` | 87 |
| 0x00682170 | `src/mw4mercs/text/func_00682170.c` | 25 |
| 0x00682D20 | `src/mw4mercs/text/func_00682d20.c` | 82 |
| 0x00682EC0 | `src/mw4mercs/text/func_00682ec0.c` | 104 |
| 0x00683C40 | `src/mw4mercs/text/func_00683c40.c` | 74 |
| 0x006F4950 | `src/mw4mercs/text/func_006f4950.c` | 63 |
| 0x006F49A0 | `src/mw4mercs/text/func_006f49a0.c` | 67 |
| 0x00707E70 | `src/mw4mercs/text/func_00707e70.c` | 26 |

## ai / combat

Subsystem page: [ai](subsystems/ai.md). Core: 9, boundary: 14, shared: 69 (shared listed in [shared.md](subsystems/shared.md#ai)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x005008E0 | `src/mw4mercs/text/func_005008e0.c` | 74 |
| 0x00500EC0 | `src/mw4mercs/text/func_00500ec0.c` | 71 |
| 0x005013F0 | `src/mw4mercs/text/func_005013f0.c` | 85 |
| 0x00501500 | `src/mw4mercs/text/func_00501500.c` | 42 |
| 0x005016B0 | `src/mw4mercs/text/func_005016b0.c` | 71 |
| 0x00663900 | `src/mw4mercs/text/func_00663900.c` | 218 |
| 0x00663BD0 | `src/mw4mercs/text/func_00663bd0.c` | 370 |
| 0x00664850 | `src/mw4mercs/text/func_00664850.c` | 229 |
| 0x00664B20 | `src/mw4mercs/text/func_00664b20.c` | 17 |
| 0x006A22F0 | `src/mw4mercs/text/func_006a22f0.c` | 71 |
| 0x006A29D0 | `src/mw4mercs/text/func_006a29d0.c` | 95 |
| 0x006A49E0 | `src/mw4mercs/text/func_006a49e0.c` | 35 |
| 0x006A4AE0 | `src/mw4mercs/text/func_006a4ae0.c` | 32 |
| 0x006A4DA0 | `src/mw4mercs/text/func_006a4da0.c` | 256 |

## ai / nav

Subsystem page: [ai](subsystems/ai.md). Core: 20, boundary: 26, shared: 3 (shared listed in [shared.md](subsystems/shared.md#ai)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x0040C410 | `src/mw4mercs/text/func_0040c410.c` | 25 |
| 0x0040C5D0 | `src/mw4mercs/text/func_0040c5d0.c` | 25 |
| 0x0040CA10 | `src/mw4mercs/text/func_0040ca10.c` | 37 |
| 0x00419E70 | `src/mw4mercs/text/func_00419e70.c` | 45 |
| 0x0041A070 | `src/mw4mercs/text/func_0041a070.c` | 227 |
| 0x0041A160 | `src/mw4mercs/text/func_0041a160.c` | 235 |
| 0x0041A250 | `src/mw4mercs/text/func_0041a250.c` | 41 |
| 0x0041AC80 | `src/mw4mercs/text/func_0041ac80.c` | 39 |
| 0x0041AFD0 | `src/mw4mercs/text/func_0041afd0.c` | 354 |
| 0x0041B140 | `src/mw4mercs/text/func_0041b140.c` | 208 |
| 0x0041B320 | `src/mw4mercs/text/func_0041b320.c` | 138 |
| 0x0041C680 | `src/mw4mercs/text/func_0041c680.c` | 85 |
| 0x004206B0 | `src/mw4mercs/text/func_004206b0.c` | 141 |
| 0x00420740 | `src/mw4mercs/text/func_00420740.c` | 52 |
| 0x004DAA20 | `src/mw4mercs/text/func_004daa20.c` | 301 |
| 0x004DAD70 | `src/mw4mercs/text/func_004dad70.c` | 71 |
| 0x004DAE60 | `src/mw4mercs/text/func_004dae60.c` | 158 |
| 0x005D9F90 | `src/mw4mercs/text/func_005d9f90.c` | 24 |
| 0x005D9FB0 | `src/mw4mercs/text/func_005d9fb0.c` | 14 |
| 0x005DA020 | `src/mw4mercs/text/func_005da020.c` | 18 |
| 0x005DA050 | `src/mw4mercs/text/func_005da050.c` | 16 |
| 0x005DA270 | `src/mw4mercs/text/func_005da270.c` | 232 |
| 0x005DA4E0 | `src/mw4mercs/text/func_005da4e0.c` | 17 |
| 0x005DA550 | `src/mw4mercs/text/func_005da550.c` | 67 |
| 0x006FAB90 | `src/mw4mercs/text/func_006fab90.c` | 87 |
| 0x00767430 | `src/mw4mercs/text/func_00767430.c` | 43 |

## ai / squad

Subsystem page: [ai](subsystems/ai.md). Core: 5, boundary: 14, shared: 118 (shared listed in [shared.md](subsystems/shared.md#ai)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00411BF0 | `src/mw4mercs/text/func_00411bf0.c` | 80 |
| 0x00411CB0 | `src/mw4mercs/text/func_00411cb0.c` | 83 |
| 0x00411EC0 | `src/mw4mercs/text/func_00411ec0.c` | 83 |
| 0x00412780 | `src/mw4mercs/text/func_00412780.c` | 127 |
| 0x00412A00 | `src/mw4mercs/text/func_00412a00.c` | 65 |
| 0x00412A50 | `src/mw4mercs/text/func_00412a50.c` | 81 |
| 0x00415180 | `src/mw4mercs/text/func_00415180.c` | 18 |
| 0x004179B0 | `src/mw4mercs/text/func_004179b0.c` | 55 |
| 0x004D0100 | `src/mw4mercs/text/func_004d0100.c` | 1228 |
| 0x004D1F10 | `src/mw4mercs/text/func_004d1f10.c` | 71 |
| 0x004D21C0 | `src/mw4mercs/text/func_004d21c0.c` | 11 |
| 0x004D5B10 | `src/mw4mercs/text/func_004d5b10.c` | 33 |
| 0x004D5C10 | `src/mw4mercs/text/func_004d5c10.c` | 263 |
| 0x00637AC0 | `src/mw4mercs/text/func_00637ac0.c` | 66 |

## ai / targeting

Subsystem page: [ai](subsystems/ai.md). Core: 33, boundary: 7, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x0040D030 | `src/mw4mercs/text/func_0040d030.c` | 26 |
| 0x00419460 | `src/mw4mercs/text/func_00419460.c` | 22 |
| 0x0041FDE0 | `src/mw4mercs/text/func_0041fde0.c` | 1130 |
| 0x005BA7F0 | `src/mw4mercs/text/func_005ba7f0.c` | 21 |
| 0x00682D80 | `src/mw4mercs/text/func_00682d80.c` | 68 |
| 0x00682DD0 | `src/mw4mercs/text/func_00682dd0.c` | 94 |
| 0x006F4710 | `src/mw4mercs/text/func_006f4710.c` | 319 |

## combat / fire-damage

Subsystem page: [combat](subsystems/combat.md). Core: 49, boundary: 21, shared: 71 (shared listed in [shared.md](subsystems/shared.md#combat)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x0040C0E0 | `src/mw4mercs/text/func_0040c0e0.c` | 19 |
| 0x00411C40 | `src/mw4mercs/text/func_00411c40.c` | 60 |
| 0x00411D10 | `src/mw4mercs/text/func_00411d10.c` | 43 |
| 0x00417A40 | `src/mw4mercs/text/func_00417a40.c` | 17 |
| 0x0041C7D0 | `src/mw4mercs/text/func_0041c7d0.c` | 94 |
| 0x0041FC80 | `src/mw4mercs/text/func_0041fc80.c` | 12 |
| 0x0041FCB0 | `src/mw4mercs/text/func_0041fcb0.c` | 26 |
| 0x0041FCD0 | `src/mw4mercs/text/func_0041fcd0.c` | 47 |
| 0x004CDFA0 | `src/mw4mercs/text/func_004cdfa0.c` | 30 |
| 0x004CEEB0 | `src/mw4mercs/text/func_004ceeb0.c` | 171 |
| 0x004E7FB0 | `src/mw4mercs/text/func_004e7fb0.c` | 107 |
| 0x00501D90 | `src/mw4mercs/text/func_00501d90.c` | 285 |
| 0x005BF280 | `src/mw4mercs/text/func_005bf280.c` | 333 |
| 0x005E4360 | `src/mw4mercs/text/func_005e4360.c` | 110 |
| 0x005E6590 | `src/mw4mercs/text/func_005e6590.c` | 49 |
| 0x005ECEF0 | `src/mw4mercs/text/func_005ecef0.c` | 403 |
| 0x005ED240 | `src/mw4mercs/text/func_005ed240.c` | 507 |
| 0x005FB740 | `src/mw4mercs/text/func_005fb740.c` | 18 |
| 0x00626950 | `src/mw4mercs/text/func_00626950.c` | 29 |
| 0x00629290 | `src/mw4mercs/text/func_00629290.c` | 286 |
| 0x0063D510 | `src/mw4mercs/text/func_0063d510.c` | 13 |

## crypto / md5

Subsystem page: [crypto](subsystems/crypto.md). Core: 4, boundary: 0, shared: 0.

No outbound boundary calls recorded.

## net / gamespy

Subsystem page: [net](subsystems/net.md). Core: 37, boundary: 16, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004FF5E0 | `src/mw4mercs/text/func_004ff5e0.c` | 28 |
| 0x004FF9E0 | `src/mw4mercs/text/func_004ff9e0.c` | 41 |
| 0x00500040 | `src/mw4mercs/text/func_00500040.c` | 19 |
| 0x00500520 | `src/mw4mercs/text/func_00500520.c` | 5 |
| 0x00500530 | `src/mw4mercs/text/func_00500530.c` | 8 |
| 0x005008B0 | `src/mw4mercs/text/func_005008b0.c` | 28 |
| 0x0050D680 | `src/mw4mercs/text/func_0050d680.c` | 7 |
| 0x0050D690 | `src/mw4mercs/text/func_0050d690.c` | 16 |
| 0x0050D6A0 | `src/mw4mercs/text/func_0050d6a0.c` | 22 |
| 0x0050D810 | `src/mw4mercs/text/func_0050d810.c` | 35 |
| 0x0050D860 | `src/mw4mercs/text/func_0050d860.c` | 103 |
| 0x00708930 | `src/mw4mercs/text/func_00708930.c` | 121 |
| 0x007089B0 | `src/mw4mercs/text/func_007089b0.c` | 90 |
| 0x0075DC00 | `src/mw4mercs/text/func_0075dc00.c` | 47 |
| 0x0075DFFE | `src/mw4mercs/text/func_0075dffe.c` | 6 |
| 0x0075E010 | `src/mw4mercs/text/func_0075e010.c` | 6 |

## net / session

Subsystem page: [net](subsystems/net.md). Core: 46, boundary: 38, shared: 149 (shared listed in [shared.md](subsystems/shared.md#net)).

**Outbound boundary**

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
| 0x004E27F0 | `src/mw4mercs/text/func_004e27f0.c` | 95 |
| 0x004EBCF0 | `src/mw4mercs/text/func_004ebcf0.c` | 231 |
| 0x004EBE90 | `src/mw4mercs/text/func_004ebe90.c` | 76 |
| 0x004F23E0 | `src/mw4mercs/text/func_004f23e0.c` | 71 |
| 0x00511C80 | `src/mw4mercs/text/func_00511c80.c` | 32 |
| 0x00523000 | `src/mw4mercs/text/func_00523000.c` | 51 |
| 0x0052DBB0 | `src/mw4mercs/text/func_0052dbb0.c` | 530 |
| 0x0053C120 | `src/mw4mercs/text/func_0053c120.c` | 1554 |
| 0x0053C740 | `src/mw4mercs/text/func_0053c740.c` | 677 |
| 0x00543EC0 | `src/mw4mercs/text/func_00543ec0.c` | 447 |
| 0x005446C0 | `src/mw4mercs/text/func_005446c0.c` | 317 |
| 0x00563550 | `src/mw4mercs/text/func_00563550.c` | 66 |
| 0x00563C80 | `src/mw4mercs/text/func_00563c80.c` | 263 |
| 0x00602BC0 | `src/mw4mercs/text/func_00602bc0.c` | 92 |
| 0x0060FE30 | `src/mw4mercs/text/func_0060fe30.c` | 118 |
| 0x0060FFE0 | `src/mw4mercs/text/func_0060ffe0.c` | 40 |
| 0x006100A0 | `src/mw4mercs/text/func_006100a0.c` | 34 |
| 0x0067F7F0 | `src/mw4mercs/text/func_0067f7f0.c` | 58 |
| 0x006BBC00 | `src/mw4mercs/text/func_006bbc00.c` | 397 |
| 0x006F9000 | `src/mw4mercs/text/func_006f9000.c` | 69 |
| 0x006FC400 | `src/mw4mercs/text/func_006fc400.c` | 174 |
| 0x006FC640 | `src/mw4mercs/text/func_006fc640.c` | 22 |
| 0x00701790 | `src/mw4mercs/text/func_00701790.c` | 263 |
| 0x00701F20 | `src/mw4mercs/text/func_00701f20.c` | 3160 |
| 0x00707B40 | `src/mw4mercs/text/func_00707b40.c` | 649 |
| 0x00707F50 | `src/mw4mercs/text/func_00707f50.c` | 35 |
| 0x00709F20 | `src/mw4mercs/text/func_00709f20.c` | 354 |
| 0x0072DC20 | `src/mw4mercs/text/func_0072dc20.c` | 136 |
| 0x0072DCF0 | `src/mw4mercs/text/func_0072dcf0.c` | 124 |
| 0x0075DC60 | `src/mw4mercs/text/func_0075dc60.c` | 52 |

## net / transport

Subsystem page: [net](subsystems/net.md). Core: 33, boundary: 0, shared: 0.

No outbound boundary calls recorded.

## net / zonematch

Subsystem page: [net](subsystems/net.md). Core: 19, boundary: 28, shared: 13 (shared listed in [shared.md](subsystems/shared.md#net)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x006F5110 | `src/mw4mercs/text/func_006f5110.c` | 245 |
| 0x006F59F0 | `src/mw4mercs/text/func_006f59f0.c` | 143 |
| 0x006F5B80 | `src/mw4mercs/text/func_006f5b80.c` | 129 |
| 0x006F5ED0 | `src/mw4mercs/text/func_006f5ed0.c` | 12 |
| 0x006F5EE0 | `src/mw4mercs/text/func_006f5ee0.c` | 12 |
| 0x006F6410 | `src/mw4mercs/text/func_006f6410.c` | 121 |
| 0x006F7970 | `src/mw4mercs/text/func_006f7970.c` | 37 |
| 0x006F8430 | `src/mw4mercs/text/func_006f8430.c` | 4 |
| 0x006F88C0 | `src/mw4mercs/text/func_006f88c0.c` | 249 |
| 0x006F89F0 | `src/mw4mercs/text/func_006f89f0.c` | 6 |
| 0x006FD230 | `src/mw4mercs/text/func_006fd230.c` | 48 |
| 0x006FD260 | `src/mw4mercs/text/func_006fd260.c` | 22 |
| 0x006FFD60 | `src/mw4mercs/text/func_006ffd60.c` | 267 |
| 0x007006A0 | `src/mw4mercs/text/func_007006a0.c` | 11 |
| 0x00701740 | `src/mw4mercs/text/func_00701740.c` | 68 |
| 0x007018A0 | `src/mw4mercs/text/func_007018a0.c` | 23 |
| 0x00705D80 | `src/mw4mercs/text/func_00705d80.c` | 540 |
| 0x00706F10 | `src/mw4mercs/text/func_00706f10.c` | 3 |
| 0x00707920 | `src/mw4mercs/text/func_00707920.c` | 74 |
| 0x00707E90 | `src/mw4mercs/text/func_00707e90.c` | 69 |
| 0x00708A10 | `src/mw4mercs/text/func_00708a10.c` | 76 |
| 0x00740FD0 | `src/mw4mercs/text/func_00740fd0.c` | 98 |
| 0x00741700 | `src/mw4mercs/text/func_00741700.c` | 80 |
| 0x00741930 | `src/mw4mercs/text/func_00741930.c` | 72 |
| 0x00741F40 | `src/mw4mercs/text/func_00741f40.c` | 76 |
| 0x00741F90 | `src/mw4mercs/text/func_00741f90.c` | 68 |
| 0x00742830 | `src/mw4mercs/text/func_00742830.c` | 26 |
| 0x0075DBBE | `src/mw4mercs/text/func_0075dbbe.c` | 18 |

## render / 2d

Subsystem page: [render](subsystems/render.md). Core: 41, boundary: 5, shared: 3 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004151C0 | `src/mw4mercs/text/func_004151c0.c` | 58 |
| 0x0041A2C0 | `src/mw4mercs/text/func_0041a2c0.c` | 288 |
| 0x00482B50 | `src/mw4mercs/text/func_00482b50.c` | 44 |
| 0x00482BD0 | `src/mw4mercs/text/func_00482bd0.c` | 41 |
| 0x004A9720 | `src/mw4mercs/text/func_004a9720.c` |  |

## render / animation

Subsystem page: [render](subsystems/render.md). Core: 470, boundary: 40, shared: 11 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004084C0 | `src/mw4mercs/text/func_004084c0.c` | 16 |
| 0x0040CA40 | `src/mw4mercs/text/func_0040ca40.c` | 37 |
| 0x0040DD50 | `src/mw4mercs/text/func_0040dd50.c` | 95 |
| 0x0040DE20 | `src/mw4mercs/text/func_0040de20.c` | 152 |
| 0x00411A80 | `src/mw4mercs/text/func_00411a80.c` | 119 |
| 0x004125E0 | `src/mw4mercs/text/func_004125e0.c` | 131 |
| 0x00412670 | `src/mw4mercs/text/func_00412670.c` | 103 |
| 0x00412740 | `src/mw4mercs/text/func_00412740.c` | 49 |
| 0x00417980 | `src/mw4mercs/text/func_00417980.c` | 43 |
| 0x00419F10 | `src/mw4mercs/text/func_00419f10.c` | 30 |
| 0x0041B680 | `src/mw4mercs/text/func_0041b680.c` | 152 |
| 0x0041BB80 | `src/mw4mercs/text/func_0041bb80.c` | 376 |
| 0x0041C380 | `src/mw4mercs/text/func_0041c380.c` | 107 |
| 0x004D2000 | `src/mw4mercs/text/func_004d2000.c` | 265 |
| 0x004D2310 | `src/mw4mercs/text/func_004d2310.c` | 22 |
| 0x004D2330 | `src/mw4mercs/text/func_004d2330.c` | 22 |
| 0x004DA880 | `src/mw4mercs/text/func_004da880.c` | 68 |
| 0x0055E370 | `src/mw4mercs/text/func_0055e370.c` | 63 |
| 0x005B8A00 | `src/mw4mercs/text/func_005b8a00.c` | 18 |
| 0x005B8A30 | `src/mw4mercs/text/func_005b8a30.c` | 49 |
| 0x005CBB20 | `src/mw4mercs/text/func_005cbb20.c` | 29 |
| 0x00603D70 | `src/mw4mercs/text/func_00603d70.c` | 16 |
| 0x00604F30 | `src/mw4mercs/text/func_00604f30.c` | 669 |
| 0x006055F0 | `src/mw4mercs/text/func_006055f0.c` | 161 |
| 0x00605700 | `src/mw4mercs/text/func_00605700.c` | 59 |
| 0x00605740 | `src/mw4mercs/text/func_00605740.c` | 24 |
| 0x0066B370 | `src/mw4mercs/text/func_0066b370.c` | 126 |
| 0x0066BDE0 | `src/mw4mercs/text/func_0066bde0.c` | 57 |
| 0x00698B90 | `src/mw4mercs/text/func_00698b90.c` | 144 |
| 0x00698DC0 | `src/mw4mercs/text/func_00698dc0.c` | 36 |
| 0x00698DF0 | `src/mw4mercs/text/func_00698df0.c` | 53 |
| 0x00698FE0 | `src/mw4mercs/text/func_00698fe0.c` | 36 |
| 0x00699010 | `src/mw4mercs/text/func_00699010.c` | 50 |
| 0x00699160 | `src/mw4mercs/text/func_00699160.c` | 46 |
| 0x006991D0 | `src/mw4mercs/text/func_006991d0.c` | 75 |
| 0x006992F0 | `src/mw4mercs/text/func_006992f0.c` | 483 |
| 0x00699530 | `src/mw4mercs/text/func_00699530.c` | 257 |
| 0x00699940 | `src/mw4mercs/text/func_00699940.c` | 26 |
| 0x006A75C0 | `src/mw4mercs/text/func_006a75c0.c` | 328 |
| 0x00767D20 | `src/mw4mercs/text/func_00767d20.c` | 48 |

## render / camera

Subsystem page: [render](subsystems/render.md). Core: 59, boundary: 35, shared: 35 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00415CC0 | `src/mw4mercs/text/func_00415cc0.c` | 8 |
| 0x00416110 | `src/mw4mercs/text/func_00416110.c` | 18 |
| 0x00416A90 | `src/mw4mercs/text/func_00416a90.c` | 203 |
| 0x00416BC0 | `src/mw4mercs/text/func_00416bc0.c` | 33 |
| 0x00416C60 | `src/mw4mercs/text/func_00416c60.c` | 11 |
| 0x00417D80 | `src/mw4mercs/text/func_00417d80.c` | 428 |
| 0x004188E0 | `src/mw4mercs/text/func_004188e0.c` | 406 |
| 0x0041D810 | `src/mw4mercs/text/func_0041d810.c` | 118 |
| 0x00428730 | `src/mw4mercs/text/func_00428730.c` | 24 |
| 0x00428830 | `src/mw4mercs/text/func_00428830.c` | 24 |
| 0x00491280 | `src/mw4mercs/text/func_00491280.c` | 34 |
| 0x00491440 | `src/mw4mercs/text/func_00491440.c` | 477 |
| 0x004919E0 | `src/mw4mercs/text/func_004919e0.c` | 75 |
| 0x00492560 | `src/mw4mercs/text/func_00492560.c` | 37 |
| 0x004AF200 | `src/mw4mercs/text/func_004af200.c` | 91 |
| 0x004C32D0 | `src/mw4mercs/text/func_004c32d0.c` | 325 |
| 0x004C3D50 | `src/mw4mercs/text/func_004c3d50.c` | 34 |
| 0x004C3D80 | `src/mw4mercs/text/func_004c3d80.c` | 193 |
| 0x004C3E50 | `src/mw4mercs/text/func_004c3e50.c` | 649 |
| 0x004C41D0 | `src/mw4mercs/text/func_004c41d0.c` | 17 |
| 0x004F0E30 | `src/mw4mercs/text/func_004f0e30.c` | 31 |
| 0x004F0F90 | `src/mw4mercs/text/func_004f0f90.c` | 145 |
| 0x0055F020 | `src/mw4mercs/text/func_0055f020.c` | 601 |
| 0x0055F280 | `src/mw4mercs/text/func_0055f280.c` | 420 |
| 0x00560420 | `src/mw4mercs/text/func_00560420.c` | 187 |
| 0x0061AE30 | `src/mw4mercs/text/func_0061ae30.c` | 12 |
| 0x0061AE40 | `src/mw4mercs/text/func_0061ae40.c` | 72 |
| 0x0061BF80 | `src/mw4mercs/text/func_0061bf80.c` | 36 |
| 0x0067AEB0 | `src/mw4mercs/text/func_0067aeb0.c` | 365 |
| 0x006BF4A0 | `src/mw4mercs/text/func_006bf4a0.c` | 31 |
| 0x00704A80 | `src/mw4mercs/text/func_00704a80.c` | 2427 |
| 0x00713D10 | `src/mw4mercs/text/func_00713d10.c` | 90 |
| 0x00713D70 | `src/mw4mercs/text/func_00713d70.c` | 103 |
| 0x00717650 | `src/mw4mercs/text/func_00717650.c` | 596 |
| 0x00766050 | `src/mw4mercs/text/func_00766050.c` | 108 |

## render / device

Subsystem page: [render](subsystems/render.md). Core: 40, boundary: 2, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00714040 | `src/mw4mercs/text/func_00714040.c` | 6320 |
| 0x0074A670 | `src/mw4mercs/text/func_0074a670.c` | 91 |

## render / draw

Subsystem page: [render](subsystems/render.md). Core: 7, boundary: 4, shared: 1 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00422FE0 | `src/mw4mercs/text/func_00422fe0.c` | 251 |
| 0x00423E00 | `src/mw4mercs/text/func_00423e00.c` | 13 |
| 0x004911E0 | `src/mw4mercs/text/func_004911e0.c` | 16 |
| 0x00491CD0 | `src/mw4mercs/text/func_00491cd0.c` | 4 |

## render / font

Subsystem page: [render](subsystems/render.md). Core: 6, boundary: 2, shared: 1 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x006C8950 | `src/mw4mercs/text/func_006c8950.c` | 200 |
| 0x006CB160 | `src/mw4mercs/text/func_006cb160.c` | 224 |

## render / frame

Subsystem page: [render](subsystems/render.md). Core: 1, boundary: 1, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00495E30 | `src/mw4mercs/text/func_00495e30.c` | 41 |

## render / lighting

Subsystem page: [render](subsystems/render.md). Core: 107, boundary: 41, shared: 22 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00406C90 | `src/mw4mercs/text/func_00406c90.c` | 42 |
| 0x0040C2E0 | `src/mw4mercs/text/func_0040c2e0.c` | 97 |
| 0x0040C610 | `src/mw4mercs/text/func_0040c610.c` | 27 |
| 0x0040ECC0 | `src/mw4mercs/text/func_0040ecc0.c` | 147 |
| 0x00411A10 | `src/mw4mercs/text/func_00411a10.c` | 62 |
| 0x00411D60 | `src/mw4mercs/text/func_00411d60.c` | 83 |
| 0x00411F70 | `src/mw4mercs/text/func_00411f70.c` | 83 |
| 0x00419480 | `src/mw4mercs/text/func_00419480.c` | 26 |
| 0x0041D570 | `src/mw4mercs/text/func_0041d570.c` | 158 |
| 0x0041E690 | `src/mw4mercs/text/func_0041e690.c` | 59 |
| 0x0041F750 | `src/mw4mercs/text/func_0041f750.c` | 84 |
| 0x00421EC0 | `src/mw4mercs/text/func_00421ec0.c` | 53 |
| 0x00423B80 | `src/mw4mercs/text/func_00423b80.c` | 73 |
| 0x00423BD0 | `src/mw4mercs/text/func_00423bd0.c` | 100 |
| 0x00423C40 | `src/mw4mercs/text/func_00423c40.c` | 82 |
| 0x00423D10 | `src/mw4mercs/text/func_00423d10.c` | 126 |
| 0x00423D90 | `src/mw4mercs/text/func_00423d90.c` | 82 |
| 0x004286C0 | `src/mw4mercs/text/func_004286c0.c` | 25 |
| 0x00428810 | `src/mw4mercs/text/func_00428810.c` | 23 |
| 0x00428850 | `src/mw4mercs/text/func_00428850.c` | 22 |
| 0x00429930 | `src/mw4mercs/text/func_00429930.c` | 113 |
| 0x00429B20 | `src/mw4mercs/text/func_00429b20.c` | 441 |
| 0x0042A130 | `src/mw4mercs/text/func_0042a130.c` | 21 |
| 0x0042BB10 | `src/mw4mercs/text/func_0042bb10.c` | 31 |
| 0x00430F10 | `src/mw4mercs/text/func_00430f10.c` | 394 |
| 0x00450B10 | `src/mw4mercs/text/func_00450b10.c` | 44 |
| 0x0047CFE0 | `src/mw4mercs/text/func_0047cfe0.c` | 513 |
| 0x00482050 | `src/mw4mercs/text/func_00482050.c` | 91 |
| 0x004821F0 | `src/mw4mercs/text/func_004821f0.c` | 43 |
| 0x00482220 | `src/mw4mercs/text/func_00482220.c` | 29 |
| 0x0048F380 | `src/mw4mercs/text/func_0048f380.c` | 691 |
| 0x0048F9E0 | `src/mw4mercs/text/func_0048f9e0.c` | 83 |
| 0x0048FAC0 | `src/mw4mercs/text/func_0048fac0.c` | 185 |
| 0x004912B0 | `src/mw4mercs/text/func_004912b0.c` | 52 |
| 0x00491340 | `src/mw4mercs/text/func_00491340.c` | 255 |
| 0x004924E0 | `src/mw4mercs/text/func_004924e0.c` | 125 |
| 0x004ADD70 | `src/mw4mercs/text/func_004add70.c` | 20 |
| 0x004ADD90 | `src/mw4mercs/text/func_004add90.c` | 20 |
| 0x004ADF40 | `src/mw4mercs/text/func_004adf40.c` | 45 |
| 0x004ADF70 | `src/mw4mercs/text/func_004adf70.c` | 50 |
| 0x0070F090 | `src/mw4mercs/text/func_0070f090.c` | 3 |

## render / mesh

Subsystem page: [render](subsystems/render.md). Core: 187, boundary: 118, shared: 59 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00406CC0 | `src/mw4mercs/text/func_00406cc0.c` | 49 |
| 0x0040C9C0 | `src/mw4mercs/text/func_0040c9c0.c` | 25 |
| 0x0040CCD0 | `src/mw4mercs/text/func_0040ccd0.c` | 25 |
| 0x0040D9B0 | `src/mw4mercs/text/func_0040d9b0.c` | 24 |
| 0x0040DCA0 | `src/mw4mercs/text/func_0040dca0.c` | 171 |
| 0x0040E4A0 | `src/mw4mercs/text/func_0040e4a0.c` | 84 |
| 0x0040ED60 | `src/mw4mercs/text/func_0040ed60.c` | 54 |
| 0x0040F060 | `src/mw4mercs/text/func_0040f060.c` | 20 |
| 0x00412390 | `src/mw4mercs/text/func_00412390.c` | 83 |
| 0x00412570 | `src/mw4mercs/text/func_00412570.c` | 106 |
| 0x00412950 | `src/mw4mercs/text/func_00412950.c` | 44 |
| 0x00412980 | `src/mw4mercs/text/func_00412980.c` | 55 |
| 0x004129C0 | `src/mw4mercs/text/func_004129c0.c` | 56 |
| 0x00412B30 | `src/mw4mercs/text/func_00412b30.c` | 47 |
| 0x00412B60 | `src/mw4mercs/text/func_00412b60.c` | 26 |
| 0x00412B80 | `src/mw4mercs/text/func_00412b80.c` | 107 |
| 0x00412BF0 | `src/mw4mercs/text/func_00412bf0.c` | 174 |
| 0x00412E70 | `src/mw4mercs/text/func_00412e70.c` | 16 |
| 0x00416990 | `src/mw4mercs/text/func_00416990.c` | 37 |
| 0x00416C80 | `src/mw4mercs/text/func_00416c80.c` | 12 |
| 0x00416CC0 | `src/mw4mercs/text/func_00416cc0.c` | 20 |
| 0x00416F60 | `src/mw4mercs/text/func_00416f60.c` | 37 |
| 0x0041C540 | `src/mw4mercs/text/func_0041c540.c` | 66 |
| 0x0041D890 | `src/mw4mercs/text/func_0041d890.c` | 558 |
| 0x0041DAC0 | `src/mw4mercs/text/func_0041dac0.c` | 101 |
| 0x0041DB30 | `src/mw4mercs/text/func_0041db30.c` | 54 |
| 0x0041DB70 | `src/mw4mercs/text/func_0041db70.c` | 8 |
| 0x0041DE80 | `src/mw4mercs/text/func_0041de80.c` | 60 |
| 0x0041DEC0 | `src/mw4mercs/text/func_0041dec0.c` | 23 |
| 0x0041E710 | `src/mw4mercs/text/func_0041e710.c` | 7 |
| 0x0041EE70 | `src/mw4mercs/text/func_0041ee70.c` | 68 |
| 0x0041EF60 | `src/mw4mercs/text/func_0041ef60.c` | 37 |
| 0x0041F210 | `src/mw4mercs/text/func_0041f210.c` | 22 |
| 0x00431900 | `src/mw4mercs/text/func_00431900.c` | 39 |
| 0x004319D0 | `src/mw4mercs/text/func_004319d0.c` | 336 |
| 0x00435E00 | `src/mw4mercs/text/func_00435e00.c` | 50 |
| 0x00435ED0 | `src/mw4mercs/text/func_00435ed0.c` | 287 |
| 0x00439E40 | `src/mw4mercs/text/func_00439e40.c` | 39 |
| 0x00439F10 | `src/mw4mercs/text/func_00439f10.c` | 336 |
| 0x0043E480 | `src/mw4mercs/text/func_0043e480.c` | 50 |
| 0x0043E550 | `src/mw4mercs/text/func_0043e550.c` | 287 |
| 0x00442180 | `src/mw4mercs/text/func_00442180.c` | 45 |
| 0x00442230 | `src/mw4mercs/text/func_00442230.c` | 42 |
| 0x0044D070 | `src/mw4mercs/text/func_0044d070.c` | 33 |
| 0x0044D140 | `src/mw4mercs/text/func_0044d140.c` | 336 |
| 0x00450BD0 | `src/mw4mercs/text/func_00450bd0.c` | 287 |
| 0x00455070 | `src/mw4mercs/text/func_00455070.c` | 73 |
| 0x004554A0 | `src/mw4mercs/text/func_004554a0.c` | 91 |
| 0x00458560 | `src/mw4mercs/text/func_00458560.c` | 37 |
| 0x00458660 | `src/mw4mercs/text/func_00458660.c` | 1205 |
| 0x0047A680 | `src/mw4mercs/text/func_0047a680.c` | 43 |
| 0x0047F1B0 | `src/mw4mercs/text/func_0047f1b0.c` | 620 |
| 0x0047FB90 | `src/mw4mercs/text/func_0047fb90.c` | 694 |
| 0x0047FE80 | `src/mw4mercs/text/func_0047fe80.c` | 52 |
| 0x00487830 | `src/mw4mercs/text/func_00487830.c` | 111 |
| 0x00487CE0 | `src/mw4mercs/text/func_00487ce0.c` | 196 |
| 0x004C6920 | `src/mw4mercs/text/func_004c6920.c` | 50 |
| 0x004C6960 | `src/mw4mercs/text/func_004c6960.c` | 218 |
| 0x004C8E90 | `src/mw4mercs/text/func_004c8e90.c` | 26 |
| 0x004C8EB0 | `src/mw4mercs/text/func_004c8eb0.c` | 33 |
| ... | 58 more | |

## render / present

Subsystem page: [render](subsystems/render.md). Core: 35, boundary: 43, shared: 11 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004164B0 | `src/mw4mercs/text/func_004164b0.c` | 42 |
| 0x00417170 | `src/mw4mercs/text/func_00417170.c` | 49 |
| 0x004171B0 | `src/mw4mercs/text/func_004171b0.c` | 5 |
| 0x00417AD0 | `src/mw4mercs/text/func_00417ad0.c` | 35 |
| 0x00487900 | `src/mw4mercs/text/func_00487900.c` | 72 |
| 0x004B6A30 | `src/mw4mercs/text/func_004b6a30.c` | 239 |
| 0x004C43F0 | `src/mw4mercs/text/func_004c43f0.c` | 129 |
| 0x004C8A50 | `src/mw4mercs/text/func_004c8a50.c` | 57 |
| 0x004D21D0 | `src/mw4mercs/text/func_004d21d0.c` | 96 |
| 0x004D9910 | `src/mw4mercs/text/func_004d9910.c` | 34 |
| 0x004D9940 | `src/mw4mercs/text/func_004d9940.c` | 928 |
| 0x004E24D0 | `src/mw4mercs/text/func_004e24d0.c` | 271 |
| 0x004E2BE0 | `src/mw4mercs/text/func_004e2be0.c` | 82 |
| 0x004E2E90 | `src/mw4mercs/text/func_004e2e90.c` | 66 |
| 0x004E86E0 | `src/mw4mercs/text/func_004e86e0.c` | 200 |
| 0x004F3420 | `src/mw4mercs/text/func_004f3420.c` | 65 |
| 0x006D2760 | `src/mw4mercs/text/func_006d2760.c` | 111 |
| 0x006D27D0 | `src/mw4mercs/text/func_006d27d0.c` | 138 |
| 0x006D2C60 | `src/mw4mercs/text/func_006d2c60.c` | 304 |
| 0x006D2DF0 | `src/mw4mercs/text/func_006d2df0.c` | 199 |
| 0x006FAA30 | `src/mw4mercs/text/func_006faa30.c` | 72 |
| 0x00710B40 | `src/mw4mercs/text/func_00710b40.c` | 74 |
| 0x00724350 | `src/mw4mercs/text/func_00724350.c` | 1370 |
| 0x0072D830 | `src/mw4mercs/text/func_0072d830.c` | 332 |
| 0x00735030 | `src/mw4mercs/text/func_00735030.c` | 63 |
| 0x00735230 | `src/mw4mercs/text/func_00735230.c` | 76 |
| 0x00735310 | `src/mw4mercs/text/func_00735310.c` | 59 |
| 0x00735350 | `src/mw4mercs/text/func_00735350.c` | 62 |
| 0x007353F0 | `src/mw4mercs/text/func_007353f0.c` | 80 |
| 0x00735440 | `src/mw4mercs/text/func_00735440.c` | 83 |
| 0x007355D0 | `src/mw4mercs/text/func_007355d0.c` | 108 |
| 0x00735710 | `src/mw4mercs/text/func_00735710.c` | 59 |
| 0x007357D0 | `src/mw4mercs/text/func_007357d0.c` | 63 |
| 0x00735810 | `src/mw4mercs/text/func_00735810.c` | 62 |
| 0x00735850 | `src/mw4mercs/text/func_00735850.c` | 66 |
| 0x007358A0 | `src/mw4mercs/text/func_007358a0.c` | 62 |
| 0x0073E160 | `src/mw4mercs/text/func_0073e160.c` | 5563 |
| 0x00740D60 | `src/mw4mercs/text/func_00740d60.c` | 71 |
| 0x00740DB0 | `src/mw4mercs/text/func_00740db0.c` | 13 |
| 0x0074A150 | `src/mw4mercs/text/func_0074a150.c` | 76 |
| 0x0074A4A0 | `src/mw4mercs/text/func_0074a4a0.c` | 56 |
| 0x0074A5E0 | `src/mw4mercs/text/func_0074a5e0.c` | 60 |
| 0x007536A0 | `src/mw4mercs/text/func_007536a0.c` | 69 |

## render / records

Subsystem page: [render](subsystems/render.md). Core: 5, boundary: 7, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x0041CCB0 | `src/mw4mercs/text/func_0041ccb0.c` | 40 |
| 0x00421100 | `src/mw4mercs/text/func_00421100.c` | 25 |
| 0x004880D0 | `src/mw4mercs/text/func_004880d0.c` | 60 |
| 0x0048BCD0 | `src/mw4mercs/text/func_0048bcd0.c` | 19 |
| 0x00491670 | `src/mw4mercs/text/func_00491670.c` | 92 |
| 0x004C28D0 | `src/mw4mercs/text/func_004c28d0.c` | 255 |
| 0x004C8460 | `src/mw4mercs/text/func_004c8460.c` | 84 |

## render / terrain

Subsystem page: [render](subsystems/render.md). Core: 25, boundary: 9, shared: 3 (shared listed in [shared.md](subsystems/shared.md#render)).

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00448D80 | `src/mw4mercs/text/func_00448d80.c` | 122 |
| 0x00448E40 | `src/mw4mercs/text/func_00448e40.c` | 1 |
| 0x00454F60 | `src/mw4mercs/text/func_00454f60.c` | 227 |
| 0x00455560 | `src/mw4mercs/text/func_00455560.c` | 124 |
| 0x00486E50 | `src/mw4mercs/text/func_00486e50.c` | 206 |
| 0x004870B0 | `src/mw4mercs/text/func_004870b0.c` | 22 |
| 0x004C6430 | `src/mw4mercs/text/func_004c6430.c` | 268 |
| 0x00547BA0 | `src/mw4mercs/text/func_00547ba0.c` | 21 |
| 0x005634E0 | `src/mw4mercs/text/func_005634e0.c` | 58 |

## render / texture

Subsystem page: [render](subsystems/render.md). Core: 125, boundary: 4, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x006BFA50 | `src/mw4mercs/text/func_006bfa50.c` | 303 |
| 0x00728EB0 | `src/mw4mercs/text/func_00728eb0.c` | 282 |
| 0x00728FD0 | `src/mw4mercs/text/func_00728fd0.c` | 16 |
| 0x00729560 | `src/mw4mercs/text/func_00729560.c` | 1100 |

## render / vertex

Subsystem page: [render](subsystems/render.md). Core: 9, boundary: 5, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00421F00 | `src/mw4mercs/text/func_00421f00.c` | 311 |
| 0x00423B60 | `src/mw4mercs/text/func_00423b60.c` | 12 |
| 0x0043E0E0 | `src/mw4mercs/text/func_0043e0e0.c` | 212 |
| 0x00458E10 | `src/mw4mercs/text/func_00458e10.c` | 967 |
| 0x004919C0 | `src/mw4mercs/text/func_004919c0.c` | 17 |

## Module interface seams

| Module | Surface | Contract |
|--------|---------|----------|
| [`ZlogLib.dll`](subsystems/zloglib.md) | `GetngLogAPI` (0x10001C6E) | 8-slot log-method table; lifecycle, emit, MD5, memory. |
| [`Language.dll`](subsystems/language.md) | module handle + string IDs | Codepage-aware string-table lookup; no named exports. |
| [`MissionLang_MERCS.dll`](subsystems/missionlang.md) | module handle + string IDs | Mission/string-table lookup mirroring Language.dll. |
| [`blade.dll`](subsystems/blade.md) | DirectDraw exports (0x5E001040+) | Lazy `ddraw.dll` loader, COM wrappers, facade, caps, software rasterizer. |
| [`GunDll.dll`](subsystems/gundll.md) | `DllGetClassObject` (0x100010B0) | COM class factory -> lobby object model -> HTTP/sockets/hash-list/crypto. |
| [`MW4Stats.dll`](subsystems/mw4stats.md) | `MW4StatsDll_*` exports | Recording -> XML serializer -> Zone upload -> Gun auth ticket. |

## Module internal seams

| Module | Seam | Direction |
|--------|------|-----------|
| `ZlogLib.dll` | API -> emit / MD5 / memory | public method table -> internal sinks |
| `Language.dll` | string table -> codepage / arena / locks | lookup -> decoder/storage |
| `MissionLang_MERCS.dll` | string table -> codepage / arena / locks | lookup -> decoder/storage |
| `blade.dll` | facade -> caps / wrapper / rasterizer | DirectDraw calls -> implementation |
| `GunDll.dll` | object model -> HTTP / sockets / hash-list / crypto | lobby commands -> transport/storage |
| `MW4Stats.dll` | recording -> serializer -> upload -> auth | stats events -> wire payload |

## EXE/module runtime seams

- `MW4Mercs.exe` -> `blade.dll`: runtime `LoadLibraryA` + DirectDraw export lookup.
- `MW4Mercs.exe` -> `GunDll.dll`: runtime `LoadLibraryA` + `DllGetClassObject` (0x006FCF00 / 0x006FCDD0 family).
- `MW4Mercs.exe` -> `MW4Stats.dll`: runtime export lookup of the `MW4StatsDll_*` API.
- `MW4Mercs.exe` -> `ZlogLib.dll`: runtime `GetngLogAPI` lookup.
- `MW4Mercs.exe` -> `Language.dll` / `MissionLang_MERCS.dll`: module handle + string-ID lookup.

## System dependency seams

| From | To | Nature |
|------|----|--------|
| gameplay | render | entity/scene state -> draw submission |
| gameplay | ai | unit state -> decision/control |
| gameplay | combat | unit/weapon state -> fire resolution |
| gameplay | database | object graph -> container/iterator |
| ai | combat | engagement decision -> weapon fire |
| ai | gameplay | navigation/target state -> unit state |
| combat | render | hit/effect events -> visual records |
| input | ui | keyboard/mouse/joystick -> command events |
| ui | render | HUD/menu -> 2D/font/present |
| net | gameplay | session/roster state -> mission state |
| archive | gameplay | #VBD member load -> game data |
| config | gameplay | options.ini -> runtime settings |
| render | platform | scene/device calls -> D3D/DirectDraw |
| audio | platform | sound/music -> audio device |
| log | platform | diagnostics -> debug output |
| runtime | platform | memory/thread/COM services |
