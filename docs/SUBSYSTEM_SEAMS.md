# Subsystem Seams

> Boundary functions between systems. `boundary` means the system calls it but does not implement it; `shared` means it is used by more than one system. Only systems with committed surface labels appear here; the full per-VA map is in [`master_index/`](master_index/).

## Summary

| Subsystem | Detail | Core | Boundary | Shared |
|-----------|--------|------|----------|--------|
| ai | abl | 20 | 27 | 590 |
| ai | brain | 45 | 53 | 67 |
| ai | combat | 9 | 14 | 69 |
| ai | nav | 15 | 26 | 3 |
| ai | squad | 5 | 14 | 118 |
| ai | targeting | 15 | 7 | 0 |
| combat | fire-damage | 31 | 21 | 71 |
| net | gamespy | 37 | 16 | 0 |
| net | session | 45 | 41 | 149 |
| net | transport | 33 | 0 | 0 |
| net | zonematch | 19 | 28 | 13 |
| render | 2d | 8 | 5 | 3 |
| render | animation | 20 | 40 | 11 |
| render | camera | 24 | 35 | 35 |
| render | device | 8 | 2 | 0 |
| render | draw | 7 | 4 | 1 |
| render | font | 4 | 2 | 1 |
| render | frame | 1 | 1 | 0 |
| render | lighting | 94 | 41 | 22 |
| render | mesh | 187 | 118 | 59 |
| render | present | 22 | 43 | 11 |
| render | records | 5 | 7 | 0 |
| render | terrain | 12 | 9 | 3 |
| render | texture | 10 | 4 | 0 |
| render | vertex | 9 | 5 | 0 |

## ai / abl

Core: 20, boundary: 27, shared: 590.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004084E0 | `src/mw4mercs/text/func_004084e0.c` | 11 |
| 0x0040C9E0 | `src/mw4mercs/text/func_0040c9e0.c` | 37 |
| 0x00415230 | `src/mw4mercs/text/func_00415230.c` | 40 |
| 0x00563060 | `src/mw4mercs/text/func_00563060.c` | 315 |
| 0x005666D0 | `src/mw4mercs/text/func_005666d0.c` | 122 |
| 0x005669D0 | `src/mw4mercs/text/func_005669d0.c` | 295 |
| 0x00566B60 | `src/mw4mercs/text/func_00566B60.c` | 46 |
| 0x00566B90 | `src/mw4mercs/text/func_00566b90.c` | 81 |
| 0x00566BF0 | `src/mw4mercs/text/func_00566BF0.c` | 20 |
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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00407B30 | `src/mw4mercs/text/func_00407b30.c` | 168 |
| 0x00407BE0 | `src/mw4mercs/text/func_00407be0.c` | 1857 |
| 0x00562F10 | `src/mw4mercs/text/func_00562f10.c` | 22 |
| 0x00562F30 | `src/mw4mercs/text/func_00562f30.c` | 1 |
| 0x00563470 | `src/mw4mercs/text/func_00563470.c` | 1 |
| 0x005637C0 | `src/mw4mercs/text/func_005637C0.c` | 54 |
| 0x00564950 | `src/mw4mercs/text/func_00564950.c` | 330 |
| 0x00566CA0 | `src/mw4mercs/text/func_00566ca0.c` | 592 |
| 0x00580640 | `src/mw4mercs/text/func_00580640.c` | 16 |
| 0x00580660 | `src/mw4mercs/text/func_00580660.c` | 16 |
| 0x005813C0 | `src/mw4mercs/text/func_005813c0.c` | 37 |
| 0x005813F0 | `src/mw4mercs/text/func_005813f0.c` | 37 |
| 0x0061EBC0 | `src/mw4mercs/text/func_0061ebc0.c` | 225 |
| 0x0061FA50 | `src/mw4mercs/text/func_0061fa50.c` | 45 |
| 0x0061FC80 | `src/mw4mercs/text/func_0061fc80.c` | 22 |
| 0x0061FCA0 | `src/mw4mercs/text/func_0061fca0.c` | 39 |
| 0x0061FE40 | `src/mw4mercs/text/func_0061fe40.c` | 276 |
| 0x00620020 | `src/mw4mercs/text/func_00620020.c` | 247 |
| 0x006205E0 | `src/mw4mercs/text/func_006205e0.c` | 104 |
| 0x00620650 | `src/mw4mercs/text/func_00620650.c` | 288 |
| 0x00620770 | `src/mw4mercs/text/func_00620770.c` | 111 |
| 0x006207E0 | `src/mw4mercs/text/func_006207e0.c` | 37 |
| 0x00620810 | `src/mw4mercs/text/func_00620810.c` | 64 |
| 0x00620850 | `src/mw4mercs/text/func_00620850.c` | 64 |
| 0x00620940 | `src/mw4mercs/text/func_00620940.c` | 162 |
| 0x00621280 | `src/mw4mercs/text/func_00621280.c` | 69 |
| 0x0064A220 | `src/mw4mercs/text/func_0064a220.c` | 322 |
| 0x0064A370 | `src/mw4mercs/text/func_0064a370.c` | 429 |
| 0x0064A520 | `src/mw4mercs/text/func_0064a520.c` | 164 |
| 0x0064A5D0 | `src/mw4mercs/text/func_0064a5d0.c` | 74 |
| 0x0064A620 | `src/mw4mercs/text/func_0064a620.c` | 131 |
| 0x0064A6B0 | `src/mw4mercs/text/func_0064a6b0.c` | 208 |
| 0x0064A820 | `src/mw4mercs/text/func_0064a820.c` | 20 |
| 0x0064A890 | `src/mw4mercs/text/func_0064a890.c` | 82 |
| 0x0064C950 | `src/mw4mercs/text/func_0064c950.c` | 5 |
| 0x0064D200 | `src/mw4mercs/text/func_0064d200.c` | 158 |
| 0x0064D2A0 | `src/mw4mercs/text/func_0064d2a0.c` | 293 |
| 0x0064D580 | `src/mw4mercs/text/func_0064d580.c` | 528 |
| 0x0064D7E0 | `src/mw4mercs/text/func_0064d7e0.c` | 461 |
| 0x0064D9F0 | `src/mw4mercs/text/func_0064d9f0.c` | 328 |
| 0x0064EA80 | `src/mw4mercs/text/func_0064ea80.c` | 513 |
| 0x0064ED00 | `src/mw4mercs/text/func_0064ed00.c` | 240 |
| 0x0064EDF0 | `src/mw4mercs/text/func_0064edf0.c` | 55 |
| 0x0064EE70 | `src/mw4mercs/text/func_0064ee70.c` | 494 |
| 0x0064F060 | `src/mw4mercs/text/func_0064f060.c` | 651 |
| 0x0064F320 | `src/mw4mercs/text/func_0064f320.c` | 400 |
| 0x0064F4B0 | `src/mw4mercs/text/func_0064f4b0.c` | 400 |
| 0x0064F640 | `src/mw4mercs/text/func_0064f640.c` | 264 |
| 0x0064F750 | `src/mw4mercs/text/func_0064f750.c` | 529 |
| 0x0064F970 | `src/mw4mercs/text/func_0064f970.c` | 313 |
| 0x0064FAB0 | `src/mw4mercs/text/func_0064fab0.c` | 142 |
| 0x0064FB40 | `src/mw4mercs/text/func_0064fb40.c` | 187 |
| 0x0064FF50 | `src/mw4mercs/text/func_0064ff50.c` | 97 |
| 0x006F3B80 | `src/mw4mercs/text/func_006f3b80.c` | 252 |
| 0x006F4850 | `src/mw4mercs/text/func_006f4850.c` | 230 |
| 0x006F4940 | `src/mw4mercs/text/func_006f4940.c` | 3 |
| 0x006F4B80 | `src/mw4mercs/text/func_006f4b80.c` | 117 |
| 0x006F4C10 | `src/mw4mercs/text/func_006f4c10.c` | 551 |
| 0x006F4E40 | `src/mw4mercs/text/func_006f4e40.c` | 115 |
| 0x006F5100 | `src/mw4mercs/text/func_006f5100.c` | 3 |
| ... | 530 more | |

## ai / brain

Core: 45, boundary: 53, shared: 67.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00414FD0 | `src/mw4mercs/text/func_00414fd0.c` | 72 |
| 0x004152B0 | `src/mw4mercs/text/func_004152b0.c` | 16 |
| 0x00415410 | `src/mw4mercs/text/func_00415410.c` | 42 |
| 0x00415BB0 | `src/mw4mercs/text/func_00415bb0.c` | 12 |
| 0x00415C40 | `src/mw4mercs/text/func_00415c40.c` | 38 |
| 0x00415CA0 | `src/mw4mercs/text/func_00415ca0.c` | 13 |
| 0x00416B80 | `src/mw4mercs/text/func_00416b80.c` | 54 |
| 0x00416E20 | `src/mw4mercs/text/func_00416e20.c` | 44 |
| 0x00416E50 | `src/mw4mercs/text/func_00416e50.c` | 67 |
| 0x00416F20 | `src/mw4mercs/text/func_00416f20.c` | 53 |
| 0x00417230 | `src/mw4mercs/text/func_00417230.c` | 46 |
| 0x00419F30 | `src/mw4mercs/text/func_00419f30.c` | 30 |
| 0x0041D780 | `src/mw4mercs/text/func_0041d780.c` | 61 |
| 0x004B6CA0 | `src/mw4mercs/text/func_004b6ca0.c` | 217 |
| 0x004D67D0 | `src/mw4mercs/text/func_004d67d0.c` | 16 |
| 0x004DA580 | `src/mw4mercs/text/func_004da580.c` | 8 |
| 0x004E27B0 | `src/mw4mercs/text/func_004e27b0.c` | 50 |
| 0x00500E00 | `src/mw4mercs/text/func_00500e00.c` | 44 |
| 0x00500E30 | `src/mw4mercs/text/func_00500e30.c` | 25 |
| 0x00500E50 | `src/mw4mercs/text/func_00500e50.c` | 105 |
| 0x005015F0 | `src/mw4mercs/text/func_005015f0.c` | 44 |
| 0x00501620 | `src/mw4mercs/text/func_00501620.c` | 25 |
| 0x00501640 | `src/mw4mercs/text/func_00501640.c` | 105 |
| 0x005CB670 | `src/mw4mercs/text/func_005cb670.c` | 68 |
| 0x005FD400 | `src/mw4mercs/text/func_005fd400.c` | 45 |
| 0x005FD430 | `src/mw4mercs/text/func_005fd430.c` | 160 |
| 0x0065E630 | `src/mw4mercs/text/func_0065e630.c` | 2127 |
| 0x00660010 | `src/mw4mercs/text/func_00660010.c` | 26 |
| 0x00660110 | `src/mw4mercs/text/func_00660110.c` | 26 |
| 0x00660210 | `src/mw4mercs/text/func_00660210.c` | 36 |
| 0x00660320 | `src/mw4mercs/text/func_00660320.c` | 75 |
| 0x00660460 | `src/mw4mercs/text/func_00660460.c` | 36 |
| 0x00660640 | `src/mw4mercs/text/func_00660640.c` | 71 |
| 0x00660700 | `src/mw4mercs/text/func_00660700.c` | 33 |
| 0x00660780 | `src/mw4mercs/text/func_00660780.c` | 71 |
| 0x00660830 | `src/mw4mercs/text/func_00660830.c` | 95 |
| 0x006608D0 | `src/mw4mercs/text/func_006608d0.c` | 33 |
| 0x006609A0 | `src/mw4mercs/text/func_006609a0.c` | 95 |
| 0x00660AA0 | `src/mw4mercs/text/func_00660aa0.c` | 95 |
| 0x00660B50 | `src/mw4mercs/text/func_00660b50.c` | 95 |
| 0x00660C40 | `src/mw4mercs/text/func_00660c40.c` | 79 |
| 0x00660D40 | `src/mw4mercs/text/func_00660d40.c` | 25 |
| 0x00660DA0 | `src/mw4mercs/text/func_00660da0.c` | 32 |
| 0x00660E10 | `src/mw4mercs/text/func_00660e10.c` | 71 |
| 0x00660EA0 | `src/mw4mercs/text/func_00660ea0.c` | 18 |
| 0x00661DA0 | `src/mw4mercs/text/func_00661da0.c` | 108 |
| 0x00662B40 | `src/mw4mercs/text/func_00662b40.c` | 241 |
| 0x00662C40 | `src/mw4mercs/text/func_00662c40.c` | 24 |
| 0x00662C60 | `src/mw4mercs/text/func_00662c60.c` | 227 |
| 0x00662E90 | `src/mw4mercs/text/func_00662e90.c` | 28 |
| 0x00662EB0 | `src/mw4mercs/text/func_00662eb0.c` | 37 |
| 0x00683D00 | `src/mw4mercs/text/func_00683d00.c` | 49 |
| 0x006A22A0 | `src/mw4mercs/text/func_006a22a0.c` | 13 |
| 0x006A2400 | `src/mw4mercs/text/func_006a2400.c` | 34 |
| 0x006A24C0 | `src/mw4mercs/text/func_006a24c0.c` | 25 |
| 0x006A2800 | `src/mw4mercs/text/func_006a2800.c` | 34 |
| 0x006A28D0 | `src/mw4mercs/text/func_006a28d0.c` | 25 |
| 0x006A2C30 | `src/mw4mercs/text/func_006a2c30.c` | 78 |
| 0x006A2E50 | `src/mw4mercs/text/func_006a2e50.c` | 102 |
| 0x006A3590 | `src/mw4mercs/text/func_006a3590.c` | 50 |
| ... | 7 more | |

## ai / combat

Core: 9, boundary: 14, shared: 69.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0040CB00 | `src/mw4mercs/text/func_0040cb00.c` | 31 |
| 0x0040CBB0 | `src/mw4mercs/text/func_0040cbb0.c` | 37 |
| 0x004114B0 | `src/mw4mercs/text/func_004114b0.c` | 76 |
| 0x00411670 | `src/mw4mercs/text/func_00411670.c` | 399 |
| 0x00547BC0 | `src/mw4mercs/text/func_00547bc0.c` | 18 |
| 0x00566570 | `src/mw4mercs/text/func_00566570.c` | 229 |
| 0x0058EA70 | `src/mw4mercs/text/func_0058ea70.c` | 25 |
| 0x005CB200 | `src/mw4mercs/text/func_005cb200.c` | 14 |
| 0x005D2900 | `src/mw4mercs/text/func_005d2900.c` | 26 |
| 0x005DA4B0 | `src/mw4mercs/text/func_005da4b0.c` | 14 |
| 0x00662F10 | `src/mw4mercs/text/func_00662f10.c` | 149 |
| 0x00662FB0 | `src/mw4mercs/text/func_00662fb0.c` | 801 |
| 0x006632E0 | `src/mw4mercs/text/func_006632e0.c` | 47 |
| 0x00663310 | `src/mw4mercs/text/func_00663310.c` | 117 |
| 0x00663390 | `src/mw4mercs/text/func_00663390.c` | 24 |
| 0x00664B10 | `src/mw4mercs/text/func_00664b10.c` | 9 |
| 0x00664B40 | `src/mw4mercs/text/func_00664b40.c` | 9 |
| 0x006651C0 | `src/mw4mercs/text/func_006651c0.c` | 12 |
| 0x00665910 | `src/mw4mercs/text/func_00665910.c` | 382 |
| 0x00665AA0 | `src/mw4mercs/text/func_00665aa0.c` | 14 |
| 0x00665AB0 | `src/mw4mercs/text/func_00665ab0.c` | 18 |
| 0x006A2340 | `src/mw4mercs/text/func_006a2340.c` | 178 |
| 0x006A2500 | `src/mw4mercs/text/func_006a2500.c` | 494 |
| 0x006A26F0 | `src/mw4mercs/text/func_006a26f0.c` | 269 |
| 0x006A4A40 | `src/mw4mercs/text/func_006a4a40.c` | 157 |
| 0x006A4B00 | `src/mw4mercs/text/func_006a4b00.c` | 37 |
| 0x006A4EA0 | `src/mw4mercs/text/func_006a4ea0.c` | 27 |
| 0x006A4EC0 | `src/mw4mercs/text/func_006a4ec0.c` | 27 |
| 0x006A5190 | `src/mw4mercs/text/func_006a5190.c` | 61 |
| 0x006A51D0 | `src/mw4mercs/text/func_006a51d0.c` | 71 |
| 0x006A5700 | `src/mw4mercs/text/func_006a5700.c` | 107 |
| 0x006A5770 | `src/mw4mercs/text/func_006a5770.c` | 63 |
| 0x006A57E0 | `src/mw4mercs/text/func_006a57e0.c` | 203 |
| 0x006A58C0 | `src/mw4mercs/text/func_006a58c0.c` | 1683 |
| 0x006A5F60 | `src/mw4mercs/text/func_006a5f60.c` | 574 |
| 0x006A61A0 | `src/mw4mercs/text/func_006a61a0.c` | 419 |
| 0x006A6350 | `src/mw4mercs/text/func_006a6350.c` | 97 |
| 0x006A63C0 | `src/mw4mercs/text/func_006a63c0.c` | 55 |
| 0x006A6400 | `src/mw4mercs/text/func_006a6400.c` | 452 |
| 0x006A6600 | `src/mw4mercs/text/func_006a6600.c` | 39 |
| 0x006A6940 | `src/mw4mercs/text/func_006a6940.c` | 267 |
| 0x006A6AA0 | `src/mw4mercs/text/func_006a6aa0.c` | 371 |
| 0x006A6CB0 | `src/mw4mercs/text/func_006a6cb0.c` | 32 |
| 0x006A7150 | `src/mw4mercs/text/func_006a7150.c` | 25 |
| 0x006A7510 | `src/mw4mercs/text/func_006a7510.c` | 50 |
| 0x006A7570 | `src/mw4mercs/text/func_006a7570.c` | 60 |
| 0x006A7CC0 | `src/mw4mercs/text/func_006a7cc0.c` | 24 |
| 0x006A7CE0 | `src/mw4mercs/text/func_006a7ce0.c` | 22 |
| 0x006A7D00 | `src/mw4mercs/text/func_006a7d00.c` | 227 |
| 0x006A7DF0 | `src/mw4mercs/text/func_006a7df0.c` | 53 |
| 0x006A7E30 | `src/mw4mercs/text/func_006a7e30.c` | 34 |
| 0x006A7E60 | `src/mw4mercs/text/func_006a7e60.c` | 193 |
| 0x006A7F30 | `src/mw4mercs/text/func_006a7f30.c` | 67 |
| 0x006A7F80 | `src/mw4mercs/text/func_006a7f80.c` | 93 |
| 0x006A7FE0 | `src/mw4mercs/text/func_006a7fe0.c` | 45 |
| 0x006A8010 | `src/mw4mercs/text/func_006a8010.c` | 45 |
| 0x006A8040 | `src/mw4mercs/text/func_006a8040.c` | 21 |
| 0x006A8060 | `src/mw4mercs/text/func_006a8060.c` | 14 |
| 0x006A8070 | `src/mw4mercs/text/func_006a8070.c` | 11 |
| 0x006A8080 | `src/mw4mercs/text/func_006a8080.c` | 80 |
| ... | 9 more | |

## ai / nav

Core: 15, boundary: 26, shared: 3.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0041ACB0 | `src/mw4mercs/text/func_0041acb0.c` | 226 |
| 0x004DB210 | `src/mw4mercs/text/func_004db210.c` | 40 |
| 0x004E2690 | `src/mw4mercs/text/func_004e2690.c` | 273 |

## ai / squad

Core: 5, boundary: 14, shared: 118.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0040D9D0 | `src/mw4mercs/text/func_0040d9d0.c` | 29 |
| 0x0040D9F0 | `src/mw4mercs/text/func_0040d9f0.c` | 397 |
| 0x0040DB80 | `src/mw4mercs/text/func_0040db80.c` | 285 |
| 0x0040DED0 | `src/mw4mercs/text/func_0040ded0.c` | 107 |
| 0x0040DF40 | `src/mw4mercs/text/func_0040df40.c` | 1293 |
| 0x0040E450 | `src/mw4mercs/text/func_0040e450.c` | 67 |
| 0x0040E550 | `src/mw4mercs/text/func_0040e550.c` | 653 |
| 0x0040E7E0 | `src/mw4mercs/text/func_0040e7e0.c` | 1098 |
| 0x0040EC30 | `src/mw4mercs/text/func_0040ec30.c` | 139 |
| 0x0040EDA0 | `src/mw4mercs/text/func_0040eda0.c` | 31 |
| 0x0040EDC0 | `src/mw4mercs/text/func_0040edc0.c` | 292 |
| 0x0040F080 | `src/mw4mercs/text/func_0040f080.c` | 17 |
| 0x0040F0A0 | `src/mw4mercs/text/func_0040f0a0.c` | 13 |
| 0x0040F0D0 | `src/mw4mercs/text/func_0040f0d0.c` | 13 |
| 0x0040F0E0 | `src/mw4mercs/text/func_0040f0e0.c` | 13 |
| 0x0040F0F0 | `src/mw4mercs/text/func_0040f0f0.c` | 45 |
| 0x0040F120 | `src/mw4mercs/text/func_0040f120.c` | 84 |
| 0x0040F180 | `src/mw4mercs/text/func_0040f180.c` | 14 |
| 0x0040F190 | `src/mw4mercs/text/func_0040f190.c` | 45 |
| 0x0040F220 | `src/mw4mercs/text/func_0040f220.c` | 45 |
| 0x0040F250 | `src/mw4mercs/text/func_0040f250.c` | 19 |
| 0x0040F270 | `src/mw4mercs/text/func_0040f270.c` | 35 |
| 0x0040F2A0 | `src/mw4mercs/text/func_0040f2a0.c` | 48 |
| 0x0040F2F0 | `src/mw4mercs/text/func_0040f2f0.c` | 16 |
| 0x0040F300 | `src/mw4mercs/text/func_0040f300.c` | 16 |
| 0x0040F310 | `src/mw4mercs/text/func_0040f310.c` | 78 |
| 0x0040F360 | `src/mw4mercs/text/func_0040f360.c` | 1139 |
| 0x0040F7E0 | `src/mw4mercs/text/func_0040f7e0.c` | 14 |
| 0x0040F7F0 | `src/mw4mercs/text/func_0040f7f0.c` | 200 |
| 0x0040F8C0 | `src/mw4mercs/text/func_0040f8c0.c` | 107 |
| 0x0040F930 | `src/mw4mercs/text/func_0040f930.c` | 78 |
| 0x0040F980 | `src/mw4mercs/text/func_0040f980.c` | 1139 |
| 0x0040FE00 | `src/mw4mercs/text/func_0040fe00.c` | 200 |
| 0x0040FED0 | `src/mw4mercs/text/func_0040fed0.c` | 107 |
| 0x0040FF40 | `src/mw4mercs/text/func_0040ff40.c` | 1139 |
| 0x004103C0 | `src/mw4mercs/text/func_004103c0.c` | 200 |
| 0x00410490 | `src/mw4mercs/text/func_00410490.c` | 107 |
| 0x00410500 | `src/mw4mercs/text/func_00410500.c` | 907 |
| 0x00410890 | `src/mw4mercs/text/func_00410890.c` | 50 |
| 0x004108D0 | `src/mw4mercs/text/func_004108d0.c` | 391 |
| 0x00410A60 | `src/mw4mercs/text/func_00410a60.c` | 71 |
| 0x00410AB0 | `src/mw4mercs/text/func_00410ab0.c` | 71 |
| 0x00410B00 | `src/mw4mercs/text/func_00410b00.c` | 549 |
| 0x00410D30 | `src/mw4mercs/text/func_00410d30.c` | 391 |
| 0x00410EC0 | `src/mw4mercs/text/func_00410ec0.c` | 549 |
| 0x004110F0 | `src/mw4mercs/text/func_004110f0.c` | 391 |
| 0x00411280 | `src/mw4mercs/text/func_00411280.c` | 549 |
| 0x00411500 | `src/mw4mercs/text/func_00411500.c` | 43 |
| 0x00411530 | `src/mw4mercs/text/func_00411530.c` | 43 |
| 0x00411560 | `src/mw4mercs/text/func_00411560.c` | 14 |
| 0x00411570 | `src/mw4mercs/text/func_00411570.c` | 43 |
| 0x004115A0 | `src/mw4mercs/text/func_004115a0.c` | 14 |
| 0x004115B0 | `src/mw4mercs/text/func_004115b0.c` | 22 |
| 0x004115D0 | `src/mw4mercs/text/func_004115d0.c` | 19 |
| 0x004115F0 | `src/mw4mercs/text/func_004115f0.c` | 22 |
| 0x00411610 | `src/mw4mercs/text/func_00411610.c` | 19 |
| 0x00411630 | `src/mw4mercs/text/func_00411630.c` | 22 |
| 0x00411650 | `src/mw4mercs/text/func_00411650.c` | 19 |
| 0x00411800 | `src/mw4mercs/text/func_00411800.c` | 30 |
| 0x00411820 | `src/mw4mercs/text/func_00411820.c` | 30 |
| ... | 58 more | |

## ai / targeting

Core: 15, boundary: 7, shared: 0.

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

Core: 31, boundary: 21, shared: 71.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0040D560 | `src/mw4mercs/text/func_0040d560.c` | 67 |
| 0x00411F20 | `src/mw4mercs/text/func_00411f20.c` | 43 |
| 0x00411FD0 | `src/mw4mercs/text/func_00411fd0.c` | 43 |
| 0x00412080 | `src/mw4mercs/text/func_00412080.c` | 43 |
| 0x00415C10 | `src/mw4mercs/text/func_00415c10.c` | 35 |
| 0x00415D40 | `src/mw4mercs/text/func_00415d40.c` | 37 |
| 0x00415E80 | `src/mw4mercs/text/func_00415e80.c` | 93 |
| 0x00416130 | `src/mw4mercs/text/func_00416130.c` | 15 |
| 0x00416470 | `src/mw4mercs/text/func_00416470.c` | 59 |
| 0x00417640 | `src/mw4mercs/text/func_00417640.c` | 34 |
| 0x004176A0 | `src/mw4mercs/text/func_004176a0.c` | 5 |
| 0x00417700 | `src/mw4mercs/text/func_00417700.c` | 20 |
| 0x00417890 | `src/mw4mercs/text/func_00417890.c` | 59 |
| 0x0041F230 | `src/mw4mercs/text/func_0041f230.c` | 57 |
| 0x0041F3A0 | `src/mw4mercs/text/func_0041f3a0.c` | 44 |
| 0x0041F430 | `src/mw4mercs/text/func_0041f430.c` | 80 |
| 0x0041F500 | `src/mw4mercs/text/func_0041f500.c` | 99 |
| 0x0041FC20 | `src/mw4mercs/text/func_0041fc20.c` | 35 |
| 0x0048C160 | `src/mw4mercs/text/func_0048c160.c` | 686 |
| 0x004C4140 | `src/mw4mercs/text/func_004c4140.c` | 67 |
| 0x004E1800 | `src/mw4mercs/text/func_004e1800.c` | 16 |
| 0x004E8DC0 | `src/mw4mercs/text/func_004e8dc0.c` | 66 |
| 0x004EBDE0 | `src/mw4mercs/text/func_004ebde0.c` | 97 |
| 0x004EBEE0 | `src/mw4mercs/text/func_004ebee0.c` | 57 |
| 0x004EC2E0 | `src/mw4mercs/text/func_004ec2e0.c` | 29 |
| 0x004EC5F0 | `src/mw4mercs/text/func_004ec5f0.c` | 215 |
| 0x004F29B0 | `src/mw4mercs/text/func_004f29b0.c` | 101 |
| 0x00502DF0 | `src/mw4mercs/text/func_00502df0.c` | 59 |
| 0x005564B0 | `src/mw4mercs/text/func_005564b0.c` | 68 |
| 0x00558AF0 | `src/mw4mercs/text/func_00558AF0.c` | 2045 |
| 0x00559BE0 | `src/mw4mercs/text/func_00559be0.c` | 4547 |
| 0x0055AF90 | `src/mw4mercs/text/func_0055AF90.c` | 214 |
| 0x0055B070 | `src/mw4mercs/text/func_0055b070.c` | 63 |
| 0x0055B0B0 | `src/mw4mercs/text/func_0055b0b0.c` | 122 |
| 0x0055B130 | `src/mw4mercs/text/func_0055b130.c` | 63 |
| 0x0055B170 | `src/mw4mercs/text/func_0055b170.c` | 93 |
| 0x0055B1D0 | `src/mw4mercs/text/func_0055b1d0.c` | 45 |
| 0x0055B200 | `src/mw4mercs/text/func_0055b200.c` | 120 |
| 0x0055B280 | `src/mw4mercs/text/func_0055b280.c` | 122 |
| 0x0055B300 | `src/mw4mercs/text/func_0055b300.c` | 45 |
| 0x0055B330 | `src/mw4mercs/text/func_0055b330.c` | 45 |
| 0x0055B360 | `src/mw4mercs/text/func_0055b360.c` | 45 |
| 0x0055B390 | `src/mw4mercs/text/func_0055B390.c` | 170 |
| 0x0055B440 | `src/mw4mercs/text/func_0055b440.c` | 63 |
| 0x0055B480 | `src/mw4mercs/text/func_0055b480.c` | 63 |
| 0x0055B4C0 | `src/mw4mercs/text/func_0055b4c0.c` | 63 |
| 0x0055B500 | `src/mw4mercs/text/func_0055b500.c` | 139 |
| 0x0055E240 | `src/mw4mercs/text/func_0055e240.c` | 22 |
| 0x005BA040 | `src/mw4mercs/text/func_005ba040.c` | 95 |
| 0x005BA2D0 | `src/mw4mercs/text/func_005ba2d0.c` | 216 |
| 0x00621FD0 | `src/mw4mercs/text/func_00621fd0.c` | 303 |
| 0x00627D40 | `src/mw4mercs/text/func_00627d40.c` | 701 |
| 0x00628000 | `src/mw4mercs/text/func_00628000.c` | 580 |
| 0x00628250 | `src/mw4mercs/text/func_00628250.c` | 35 |
| 0x00628280 | `src/mw4mercs/text/func_00628280.c` | 35 |
| 0x006282B0 | `src/mw4mercs/text/func_006282b0.c` | 35 |
| 0x006282E0 | `src/mw4mercs/text/func_006282e0.c` | 35 |
| 0x00628310 | `src/mw4mercs/text/func_00628310.c` | 21 |
| 0x00628330 | `src/mw4mercs/text/func_00628330.c` | 116 |
| 0x006283B0 | `src/mw4mercs/text/func_006283b0.c` | 484 |
| ... | 11 more | |

## net / gamespy

Core: 37, boundary: 16, shared: 0.

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

Core: 45, boundary: 41, shared: 149.

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
| 0x0070E390 | `src/mw4mercs/text/func_0070e390.c` | 42 |
| 0x0070E3C0 | `src/mw4mercs/text/func_0070e3c0.c` | 160 |
| 0x0070E460 | `src/mw4mercs/text/func_0070e460.c` | 106 |
| 0x0072DC20 | `src/mw4mercs/text/func_0072dc20.c` | 136 |
| 0x0072DCF0 | `src/mw4mercs/text/func_0072DCF0.c` | 124 |
| 0x0075DC60 | `src/mw4mercs/text/func_0075dc60.c` | 52 |

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0041EC50 | `src/mw4mercs/text/func_0041ec50.c` | 239 |
| 0x004EC300 | `src/mw4mercs/text/func_004ec300.c` | 75 |
| 0x0053A0C0 | `src/mw4mercs/text/func_0053a0c0.c` | 443 |
| 0x0053A4C0 | `src/mw4mercs/text/func_0053a4c0.c` | 258 |
| 0x0053A6C0 | `src/mw4mercs/text/func_0053a6c0.c` | 1190 |
| 0x005429E0 | `src/mw4mercs/text/func_005429e0.c` | 282 |
| 0x005444A0 | `src/mw4mercs/text/func_005444a0.c` | 60 |
| 0x005445F0 | `src/mw4mercs/text/func_005445f0.c` | 40 |
| 0x00544680 | `src/mw4mercs/text/func_00544680.c` | 7 |
| 0x006B4A90 | `src/mw4mercs/text/func_006b4a90.c` | 140 |
| 0x006B4B20 | `src/mw4mercs/text/func_006b4b20.c` | 25023 |
| 0x006BAF60 | `src/mw4mercs/text/func_006baf60.c` | 1894 |
| 0x006BF2C0 | `src/mw4mercs/text/func_006bf2c0.c` | 479 |
| 0x006BF6C0 | `src/mw4mercs/text/func_006bf6c0.c` | 903 |
| 0x006BFE50 | `src/mw4mercs/text/func_006bfe50.c` | 337 |
| 0x006BFFB0 | `src/mw4mercs/text/func_006bffb0.c` | 337 |
| 0x006C0230 | `src/mw4mercs/text/func_006c0230.c` | 185 |
| 0x006C02F0 | `src/mw4mercs/text/func_006c02f0.c` | 1225 |
| 0x006C07C0 | `src/mw4mercs/text/func_006c07c0.c` | 69 |
| 0x006C0870 | `src/mw4mercs/text/func_006c0870.c` | 194 |
| 0x006C0940 | `src/mw4mercs/text/func_006c0940.c` | 2464 |
| 0x006C12E0 | `src/mw4mercs/text/func_006c12e0.c` | 4774 |
| 0x006C2E70 | `src/mw4mercs/text/func_006c2e70.c` | 584 |
| 0x006C30C0 | `src/mw4mercs/text/func_006c30c0.c` | 317 |
| 0x006C3200 | `src/mw4mercs/text/func_006c3200.c` | 529 |
| 0x006C3420 | `src/mw4mercs/text/func_006c3420.c` | 34 |
| 0x006C3450 | `src/mw4mercs/text/func_006c3450.c` | 129 |
| 0x006C34E0 | `src/mw4mercs/text/func_006c34e0.c` | 9235 |
| 0x006C5A30 | `src/mw4mercs/text/func_006c5a30.c` | 45 |
| 0x006C5A60 | `src/mw4mercs/text/func_006c5a60.c` | 1552 |
| 0x006C6070 | `src/mw4mercs/text/func_006c6070.c` | 627 |
| 0x006C62F0 | `src/mw4mercs/text/func_006c62f0.c` | 432 |
| 0x006C64A0 | `src/mw4mercs/text/func_006c64a0.c` | 397 |
| 0x006C6630 | `src/mw4mercs/text/func_006c6630.c` | 186 |
| 0x006C66F0 | `src/mw4mercs/text/func_006c66f0.c` | 3814 |
| 0x006C7600 | `src/mw4mercs/text/func_006c7600.c` | 24 |
| 0x006C7620 | `src/mw4mercs/text/func_006c7620.c` | 17 |
| 0x006C7640 | `src/mw4mercs/text/func_006c7640.c` | 24 |
| 0x006C7660 | `src/mw4mercs/text/func_006c7660.c` | 10 |
| 0x006C7670 | `src/mw4mercs/text/func_006c7670.c` | 10 |
| 0x006C7680 | `src/mw4mercs/text/func_006c7680.c` | 409 |
| 0x006C7900 | `src/mw4mercs/text/func_006c7900.c` | 106 |
| 0x006C7970 | `src/mw4mercs/text/func_006c7970.c` | 391 |
| 0x006C7B00 | `src/mw4mercs/text/func_006c7b00.c` | 149 |
| 0x006C7BA0 | `src/mw4mercs/text/func_006c7ba0.c` | 901 |
| 0x006C7F30 | `src/mw4mercs/text/func_006c7f30.c` | 102 |
| 0x006C7FA0 | `src/mw4mercs/text/func_006c7fa0.c` | 563 |
| 0x006C8280 | `src/mw4mercs/text/func_006c8280.c` | 515 |
| 0x006C8490 | `src/mw4mercs/text/func_006c8490.c` | 16 |
| 0x006C84A0 | `src/mw4mercs/text/func_006c84a0.c` | 16 |
| 0x006C84B0 | `src/mw4mercs/text/func_006c84b0.c` | 16 |
| 0x006C84C0 | `src/mw4mercs/text/func_006c84c0.c` | 57 |
| 0x006C8500 | `src/mw4mercs/text/func_006c8500.c` | 67 |
| 0x006C8550 | `src/mw4mercs/text/func_006c8550.c` | 57 |
| 0x006C8590 | `src/mw4mercs/text/func_006c8590.c` | 10 |
| 0x006C85A0 | `src/mw4mercs/text/func_006c85a0.c` | 27 |
| 0x006C85C0 | `src/mw4mercs/text/func_006c85c0.c` | 51 |
| 0x006C8630 | `src/mw4mercs/text/func_006c8630.c` | 17 |
| 0x006C8650 | `src/mw4mercs/text/func_006c8650.c` | 12 |
| 0x006C8660 | `src/mw4mercs/text/func_006c8660.c` | 10 |
| ... | 89 more | |

## net / transport

Core: 33, boundary: 0, shared: 0.

## net / zonematch

Core: 19, boundary: 28, shared: 13.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x006F5300 | `src/mw4mercs/text/func_006f5300.c` | 17 |
| 0x006F5320 | `src/mw4mercs/text/func_006f5320.c` | 15 |
| 0x006F5C10 | `src/mw4mercs/text/func_006f5c10.c` | 17 |
| 0x006F5F60 | `src/mw4mercs/text/func_006f5f60.c` | 71 |
| 0x006F6490 | `src/mw4mercs/text/func_006f6490.c` | 17 |
| 0x006F68C0 | `src/mw4mercs/text/func_006f68c0.c` | 24 |
| 0x006F6DB0 | `src/mw4mercs/text/func_006f6db0.c` | 125 |
| 0x006F75F0 | `src/mw4mercs/text/func_006f75f0.c` | 128 |
| 0x006F7940 | `src/mw4mercs/text/func_006f7940.c` | 10 |
| 0x006F8480 | `src/mw4mercs/text/func_006f8480.c` | 17 |
| 0x0074C710 | `src/mw4mercs/text/func_0074c710.c` | 784 |
| 0x0074D120 | `src/mw4mercs/text/func_0074d120.c` | 52 |
| 0x0075DB92 | `src/mw4mercs/text/func_0075db92.c` | 44 |

## render / 2d

Core: 8, boundary: 5, shared: 3.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x004151C0 | `src/mw4mercs/text/func_004151c0.c` | 58 |
| 0x0041A2C0 | `src/mw4mercs/text/func_0041a2c0.c` | 288 |
| 0x00482B50 | `src/mw4mercs/text/func_00482b50.c` | 44 |
| 0x00482BD0 | `src/mw4mercs/text/func_00482bd0.c` | 41 |
| 0x004A9720 | `src/mw4mercs/text/func_004a9720.c` |  |

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x004870D0 | `src/mw4mercs/text/func_004870d0.c` | 22 |
| 0x004870F0 | `src/mw4mercs/text/func_004870f0.c` | 22 |
| 0x004AC110 | `src/mw4mercs/text/func_004ac110.c` | 177 |

## render / animation

Core: 20, boundary: 40, shared: 11.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00604DF0 | `src/mw4mercs/text/func_00604df0.c` | 86 |
| 0x00605410 | `src/mw4mercs/text/func_00605410.c` | 80 |
| 0x00606AA0 | `src/mw4mercs/text/func_00606AA0.c` | 344 |
| 0x00606C00 | `src/mw4mercs/text/func_00606c00.c` | 151 |
| 0x00606CA0 | `src/mw4mercs/text/func_00606ca0.c` | 90 |
| 0x0066BE20 | `src/mw4mercs/text/func_0066be20.c` | 43 |
| 0x0066BEF0 | `src/mw4mercs/text/func_0066bef0.c` | 143 |
| 0x0066C320 | `src/mw4mercs/text/func_0066c320.c` | 79 |
| 0x0066C370 | `src/mw4mercs/text/func_0066c370.c` | 79 |
| 0x00699140 | `src/mw4mercs/text/func_00699140.c` | 30 |
| 0x00699190 | `src/mw4mercs/text/func_00699190.c` | 53 |

## render / camera

Core: 24, boundary: 35, shared: 35.

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
| 0x00713D10 | `src/mw4mercs/text/func_00713D10.c` | 90 |
| 0x00713D70 | `src/mw4mercs/text/func_00713d70.c` | 103 |
| 0x00717650 | `src/mw4mercs/text/func_00717650.c` | 596 |
| 0x00766050 | `src/mw4mercs/text/func_00766050.c` | 108 |

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0040CB70 | `src/mw4mercs/text/func_0040cb70.c` | 57 |
| 0x00412AB0 | `src/mw4mercs/text/func_00412ab0.c` | 115 |
| 0x00416970 | `src/mw4mercs/text/func_00416970.c` | 17 |
| 0x00422110 | `src/mw4mercs/text/func_00422110.c` | 237 |
| 0x00422510 | `src/mw4mercs/text/func_00422510.c` | 153 |
| 0x004801F0 | `src/mw4mercs/text/func_004801f0.c` | 136 |
| 0x004883E0 | `src/mw4mercs/text/func_004883e0.c` | 567 |
| 0x0048A8A0 | `src/mw4mercs/text/func_0048a8a0.c` | 26 |
| 0x0048B960 | `src/mw4mercs/text/func_0048b960.c` | 231 |
| 0x0048BA50 | `src/mw4mercs/text/func_0048ba50.c` | 258 |
| 0x0048BC10 | `src/mw4mercs/text/func_0048bc10.c` | 55 |
| 0x0048BDE0 | `src/mw4mercs/text/func_0048bde0.c` | 659 |
| 0x0048EFC0 | `src/mw4mercs/text/func_0048efc0.c` | 246 |
| 0x0048F0C0 | `src/mw4mercs/text/func_0048f0c0.c` | 67 |
| 0x0048F640 | `src/mw4mercs/text/func_0048f640.c` | 491 |
| 0x004906F0 | `src/mw4mercs/text/func_004906f0.c` | 138 |
| 0x00491B20 | `src/mw4mercs/text/func_00491b20.c` | 35 |
| 0x00491B50 | `src/mw4mercs/text/func_00491b50.c` | 63 |
| 0x00491D50 | `src/mw4mercs/text/func_00491d50.c` | 47 |
| 0x00491D80 | `src/mw4mercs/text/func_00491d80.c` | 41 |
| 0x004B83E0 | `src/mw4mercs/text/func_004b83e0.c` | 54 |
| 0x004C3590 | `src/mw4mercs/text/func_004c3590.c` | 20 |
| 0x004C39D0 | `src/mw4mercs/text/func_004c39d0.c` | 35 |
| 0x004C46B0 | `src/mw4mercs/text/func_004c46b0.c` | 23 |
| 0x004F0CE0 | `src/mw4mercs/text/func_004f0ce0.c` | 302 |
| 0x004F1050 | `src/mw4mercs/text/func_004f1050.c` | 35 |
| 0x004F1100 | `src/mw4mercs/text/func_004f1100.c` | 19 |
| 0x004F21B0 | `src/mw4mercs/text/func_004f21b0.c` | 92 |
| 0x005CBF80 | `src/mw4mercs/text/func_005cbf80.c` | 266 |
| 0x005CC0F0 | `src/mw4mercs/text/func_005cc0f0.c` | 51 |
| 0x005DDDB0 | `src/mw4mercs/text/func_005dddb0.c` | 258 |
| 0x005E1C30 | `src/mw4mercs/text/func_005e1c30.c` | 18 |
| 0x00625110 | `src/mw4mercs/text/func_00625110.c` | 57 |
| 0x0067B110 | `src/mw4mercs/text/func_0067b110.c` | 131 |
| 0x0067C040 | `src/mw4mercs/text/func_0067c040.c` | 98 |

## render / device

Core: 8, boundary: 2, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00714040 | `src/mw4mercs/text/func_00714040.c` | 6320 |
| 0x0074A670 | `src/mw4mercs/text/func_0074a670.c` | 91 |

## render / draw

Core: 7, boundary: 4, shared: 1.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00422FE0 | `src/mw4mercs/text/func_00422fe0.c` | 251 |
| 0x00423E00 | `src/mw4mercs/text/func_00423e00.c` | 13 |
| 0x004911E0 | `src/mw4mercs/text/func_004911e0.c` | 16 |
| 0x00491CD0 | `src/mw4mercs/text/func_00491cd0.c` | 4 |

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x004919A0 | `src/mw4mercs/text/func_004919a0.c` | 17 |

## render / font

Core: 4, boundary: 2, shared: 1.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x006C8950 | `src/mw4mercs/text/func_006c8950.c` | 200 |
| 0x006CB160 | `src/mw4mercs/text/func_006cb160.c` | 224 |

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x006C9210 | `src/mw4mercs/text/func_006c9210.c` | 63 |

## render / frame

Core: 1, boundary: 1, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x00495E30 | `src/mw4mercs/text/func_00495e30.c` | 41 |

## render / lighting

Core: 94, boundary: 41, shared: 22.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x0041E110 | `src/mw4mercs/text/func_0041e110.c` | 18 |
| 0x0041E720 | `src/mw4mercs/text/func_0041e720.c` | 52 |
| 0x0041F3D0 | `src/mw4mercs/text/func_0041f3d0.c` | 84 |
| 0x004225B0 | `src/mw4mercs/text/func_004225b0.c` | 108 |
| 0x0047EC00 | `src/mw4mercs/text/func_0047ec00.c` | 25 |
| 0x0047FEC0 | `src/mw4mercs/text/func_0047fec0.c` | 33 |
| 0x00480AB0 | `src/mw4mercs/text/func_00480ab0.c` | 148 |
| 0x0048F830 | `src/mw4mercs/text/func_0048f830.c` | 426 |
| 0x00490780 | `src/mw4mercs/text/func_00490780.c` | 153 |
| 0x00491C20 | `src/mw4mercs/text/func_00491c20.c` | 92 |
| 0x00492C20 | `src/mw4mercs/text/func_00492c20.c` | 200 |
| 0x00717A10 | `src/mw4mercs/text/func_00717a10.c` | 72 |
| 0x0072E000 | `src/mw4mercs/text/func_0072E000.c` | 1278 |
| 0x00735F00 | `src/mw4mercs/text/func_00735f00.c` | 177 |
| 0x00735FC0 | `src/mw4mercs/text/func_00735FC0.c` | 743 |
| 0x007362D0 | `src/mw4mercs/text/func_007362D0.c` | 1529 |
| 0x00753980 | `src/mw4mercs/text/func_00753980.c` | 91 |
| 0x00753BC0 | `src/mw4mercs/text/func_00753bc0.c` | 193 |
| 0x00753CC0 | `src/mw4mercs/text/func_00753cc0.c` | 699 |
| 0x0075BA00 | `src/mw4mercs/text/func_0075ba00.c` | 305 |
| 0x0075BB60 | `src/mw4mercs/text/func_0075BB60.c` | 1249 |
| 0x0075C150 | `src/mw4mercs/text/func_0075c150.c` | 233 |

## render / mesh

Core: 187, boundary: 118, shared: 59.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00412020 | `src/mw4mercs/text/func_00412020.c` | 83 |
| 0x00415BC0 | `src/mw4mercs/text/func_00415bc0.c` | 1 |
| 0x004169C0 | `src/mw4mercs/text/func_004169c0.c` | 41 |
| 0x004172A0 | `src/mw4mercs/text/func_004172a0.c` | 32 |
| 0x004174D0 | `src/mw4mercs/text/func_004174d0.c` | 30 |
| 0x004176C0 | `src/mw4mercs/text/func_004176c0.c` | 12 |
| 0x00417740 | `src/mw4mercs/text/func_00417740.c` | 14 |
| 0x0041F480 | `src/mw4mercs/text/func_0041f480.c` | 125 |
| 0x004555E0 | `src/mw4mercs/text/func_004555e0.c` | 93 |
| 0x00480890 | `src/mw4mercs/text/func_00480890.c` | 387 |
| 0x00480A20 | `src/mw4mercs/text/func_00480a20.c` | 137 |
| 0x004B8420 | `src/mw4mercs/text/func_004b8420.c` | 5439 |
| 0x004B99A0 | `src/mw4mercs/text/func_004b99a0.c` | 30 |
| 0x004C6A50 | `src/mw4mercs/text/func_004c6a50.c` | 1157 |
| 0x004CC130 | `src/mw4mercs/text/func_004cc130.c` | 26 |
| 0x004CC1D0 | `src/mw4mercs/text/func_004cc1d0.c` | 163 |
| 0x004CC8E0 | `src/mw4mercs/text/func_004cc8e0.c` | 72 |
| 0x004CCAA0 | `src/mw4mercs/text/func_004ccaa0.c` | 87 |
| 0x004CDFF0 | `src/mw4mercs/text/func_004cdff0.c` | 416 |
| 0x004CE5A0 | `src/mw4mercs/text/func_004ce5a0.c` | 904 |
| 0x004CE9D0 | `src/mw4mercs/text/func_004ce9d0.c` | 108 |
| 0x004CEC10 | `src/mw4mercs/text/func_004cec10.c` | 86 |
| 0x004CED60 | `src/mw4mercs/text/func_004ced60.c` | 35 |
| 0x004DFBB0 | `src/mw4mercs/text/func_004dfbb0.c` | 64 |
| 0x004DFCD0 | `src/mw4mercs/text/func_004dfcd0.c` | 48 |
| 0x004FC100 | `src/mw4mercs/text/func_004fc100.c` | 100 |
| 0x004FD3C0 | `src/mw4mercs/text/func_004fd3c0.c` | 352 |
| 0x004FD730 | `src/mw4mercs/text/func_004fd730.c` | 236 |
| 0x00502E50 | `src/mw4mercs/text/func_00502e50.c` | 151 |
| 0x00502F80 | `src/mw4mercs/text/func_00502f80.c` | 126 |
| 0x005052A0 | `src/mw4mercs/text/func_005052a0.c` | 115 |
| 0x0050A730 | `src/mw4mercs/text/func_0050a730.c` | 995 |
| 0x0050B260 | `src/mw4mercs/text/func_0050b260.c` | 93 |
| 0x0050CE70 | `src/mw4mercs/text/func_0050ce70.c` | 24 |
| 0x0050DE50 | `src/mw4mercs/text/func_0050de50.c` | 165 |
| 0x00531F40 | `src/mw4mercs/text/func_00531f40.c` | 227 |
| 0x00532030 | `src/mw4mercs/text/func_00532030.c` | 230 |
| 0x00607E80 | `src/mw4mercs/text/func_00607e80.c` | 257 |
| 0x00608070 | `src/mw4mercs/text/func_00608070.c` | 13 |
| 0x00608740 | `src/mw4mercs/text/func_00608740.c` | 430 |
| 0x006088F0 | `src/mw4mercs/text/func_006088f0.c` | 214 |
| 0x00609590 | `src/mw4mercs/text/func_00609590.c` | 120 |
| 0x00609700 | `src/mw4mercs/text/func_00609700.c` | 117 |
| 0x006097F0 | `src/mw4mercs/text/func_006097f0.c` | 639 |
| 0x00609D10 | `src/mw4mercs/text/func_00609d10.c` | 4 |
| 0x00614210 | `src/mw4mercs/text/func_00614210.c` | 208 |
| 0x006B4950 | `src/mw4mercs/text/func_006b4950.c` | 310 |
| 0x006FB800 | `src/mw4mercs/text/func_006fb800.c` | 124 |
| 0x006FB880 | `src/mw4mercs/text/func_006fb880.c` | 124 |
| 0x006FB900 | `src/mw4mercs/text/func_006fb900.c` | 27 |
| 0x006FB920 | `src/mw4mercs/text/func_006fb920.c` | 389 |
| 0x006FBAB0 | `src/mw4mercs/text/func_006fbab0.c` | 385 |
| 0x006FBC40 | `src/mw4mercs/text/func_006fbc40.c` | 27 |
| 0x0070E4D0 | `src/mw4mercs/text/func_0070e4d0.c` | 2247 |
| 0x0070EDA0 | `src/mw4mercs/text/func_0070eda0.c` | 74 |
| 0x0070EDF0 | `src/mw4mercs/text/func_0070edf0.c` | 79 |
| 0x0070EE40 | `src/mw4mercs/text/func_0070ee40.c` | 37 |
| 0x0070EE70 | `src/mw4mercs/text/func_0070ee70.c` | 49 |
| 0x007224D0 | `src/mw4mercs/text/func_007224d0.c` | 220 |

## render / present

Core: 22, boundary: 43, shared: 11.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00417430 | `src/mw4mercs/text/func_00417430.c` | 63 |
| 0x00417530 | `src/mw4mercs/text/func_00417530.c` | 58 |
| 0x004B6D80 | `src/mw4mercs/text/func_004b6d80.c` | 184 |
| 0x004BF010 | `src/mw4mercs/text/func_004bf010.c` | 136 |
| 0x004CEC70 | `src/mw4mercs/text/func_004cec70.c` | 44 |
| 0x004CECD0 | `src/mw4mercs/text/func_004cecd0.c` | 28 |
| 0x004DA360 | `src/mw4mercs/text/func_004da360.c` | 97 |
| 0x004DC260 | `src/mw4mercs/text/func_004dc260.c` | 251 |
| 0x004FCB90 | `src/mw4mercs/text/func_004fcb90.c` | 70 |
| 0x004FCBE0 | `src/mw4mercs/text/func_004fcbe0.c` | 23 |
| 0x006D2C10 | `src/mw4mercs/text/func_006d2c10.c` | 72 |

## render / records

Core: 5, boundary: 7, shared: 0.

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

Core: 12, boundary: 9, shared: 3.

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

**Shared**

| VA | Source | Size |
|----|--------|------|
| 0x00458360 | `src/mw4mercs/text/func_00458360.c` | 477 |
| 0x00458610 | `src/mw4mercs/text/func_00458610.c` | 63 |
| 0x00458B50 | `src/mw4mercs/text/func_00458b50.c` | 83 |

## render / texture

Core: 10, boundary: 4, shared: 0.

**Outbound boundary**

| VA | Source | Size |
|----|--------|------|
| 0x006BFA50 | `src/mw4mercs/text/func_006bfa50.c` | 303 |
| 0x00728EB0 | `src/mw4mercs/text/func_00728eb0.c` | 282 |
| 0x00728FD0 | `src/mw4mercs/text/func_00728fd0.c` | 16 |
| 0x00729560 | `src/mw4mercs/text/func_00729560.c` | 1100 |

## render / vertex

Core: 9, boundary: 5, shared: 0.

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
| `ZlogLib.dll` | `GetngLogAPI` (0x10001C6E) | 8-slot log-method table; lifecycle, emit, MD5, memory. |
| `Language.dll` | module handle + string IDs | Codepage-aware string-table lookup; no named exports. |
| `MissionLang_MERCS.dll` | module handle + string IDs | Mission/string-table lookup mirroring Language.dll. |
| `blade.dll` | DirectDraw exports (0x5E001040+) | Lazy `ddraw.dll` loader, COM wrappers, facade, caps, software rasterizer. |
| `GunDll.dll` | `DllGetClassObject` (0x100010B0) | COM class factory -> lobby object model -> HTTP/sockets/hash-list/crypto. |
| `MW4Stats.dll` | `MW4StatsDll_*` exports | Recording -> XML serializer -> Zone upload -> Gun auth ticket. |

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
