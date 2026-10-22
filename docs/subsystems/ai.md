# AI Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 1308 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

AI decision layer, ABL script runtime, navigation, targeting, squad control, and AI combat decisions.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Shared VAs](#shared-vas)
- [Boundary VAs](#boundary-vas)
- [Related](#related)

## How it works

ABL is the largest detail (the 0x0056 cluster) and executes script-visible behavior. Brain code around 0x005A-0x005C selects goals and behaviors; squad code at 0x005DD coordinates lancemates.

Navigation and targeting produce movement and aim inputs. The `combat` detail decides when to engage; the actual weapon resolution lives in the combat subsystem.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00568EA0 | abl | ABL script runtime core |
| 0x005A1040 | brain | AI decision/brain entry |
| 0x005DDEF0 | squad | squad/lance coordination |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| abl | 824 | ABL script runtime and script-visible AI hooks. |
| brain | 166 | Mech/unit AI decision layer and behaviour state. |
| squad | 137 | Squad/lance coordination. |
| combat | 92 | AI weapon/engagement decisions. |
| nav | 49 | Rail-graph navigation and path following. |
| targeting | 40 | Target selection, lock-on, and aim support. |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### abl

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00402EC0 | core | 204 | `src/mw4mercs/text/func_00402ec0.c` | keyword |
| 0x00404D60 | core | 4474 | `src/mw4mercs/text/func_00404d60.c` | keyword |
| 0x00510A70 | core | 3014 | `src/mw4mercs/text/func_00510a70.c` | keyword |
| 0x00511640 | core | 157 | `src/mw4mercs/text/func_00511640.c` | keyword |
| 0x005116E0 | core | 123 | `src/mw4mercs/text/func_005116e0.c` | keyword |
| 0x00511760 | core | 123 | `src/mw4mercs/text/func_00511760.c` | keyword |
| 0x00511AA0 | core | 54 | `src/mw4mercs/text/func_00511aa0.c` | keyword |
| 0x00511BB0 | core | 116 | `src/mw4mercs/text/func_00511bb0.c` | keyword |
| 0x00552C10 | core | 2147 | `src/mw4mercs/text/func_00552c10.c` | keyword |
| 0x00562F40 | core | 272 | `src/mw4mercs/text/func_00562f40.c` | keyword |
| 0x00568EA0 | core | 95 | `src/mw4mercs/text/func_00568ea0.c` | surface |
| 0x00569CB0 | core | 281 | `src/mw4mercs/text/func_00569cb0.c` | surface |
| 0x00569FF0 | core | 236 | `src/mw4mercs/text/func_00569ff0.c` | keyword |
| 0x0056A0E0 | core | 734 | `src/mw4mercs/text/func_0056a0e0.c` | surface |
| 0x0056A3C0 | core | 32 | `src/mw4mercs/text/func_0056a3c0.c` | surface |
| 0x0056A3E0 | core | 405 | `src/mw4mercs/text/func_0056a3e0.c` | surface |
| 0x0056A580 | core | 368 | `src/mw4mercs/text/func_0056a580.c` | surface |
| 0x0056A6F0 | core | 32 | `src/mw4mercs/text/func_0056a6f0.c` | surface |
| 0x0056A710 | core | 405 | `src/mw4mercs/text/func_0056a710.c` | surface |
| 0x0056A8B0 | core | 381 | `src/mw4mercs/text/func_0056a8b0.c` | surface |
| 0x0056AC20 | core | 157 | `src/mw4mercs/text/func_0056ac20.c` | surface |
| 0x0056B000 | core | 521 | `src/mw4mercs/text/func_0056b000.c` | surface |
| 0x0056B210 | core | 534 | `src/mw4mercs/text/func_0056b210.c` | surface |
| 0x0056B430 | core | 364 | `src/mw4mercs/text/func_0056b430.c` | surface |
| 0x0056B5A0 | core | 256 | `src/mw4mercs/text/func_0056b5a0.c` | surface |
| 0x0056B7B0 | core | 356 | `src/mw4mercs/text/func_0056b7b0.c` | surface |
| 0x0056B920 | core | 219 | `src/mw4mercs/text/func_0056b920.c` | surface |
| 0x0056BA00 | core | 374 | `src/mw4mercs/text/func_0056ba00.c` | surface |
| 0x0056BB80 | core | 382 | `src/mw4mercs/text/func_0056bb80.c` | surface |
| 0x0056BD00 | core | 394 | `src/mw4mercs/text/func_0056bd00.c` | surface |
| 0x0056C300 | core | 368 | `src/mw4mercs/text/func_0056c300.c` | surface |
| 0x00576120 | core | 516 | `src/mw4mercs/text/func_00576120.c` | keyword |
| 0x005765B0 | core | 374 | `src/mw4mercs/text/func_005765b0.c` | keyword |
| 0x00576730 | core | 640 | `src/mw4mercs/text/func_00576730.c` | keyword |
| 0x00576AB0 | core | 482 | `src/mw4mercs/text/func_00576ab0.c` | keyword |
| 0x00576CA0 | core | 282 | `src/mw4mercs/text/func_00576ca0.c` | keyword |
| 0x00576E30 | core | 855 | `src/mw4mercs/text/func_00576e30.c` | keyword |
| 0x00577450 | core | 214 | `src/mw4mercs/text/func_00577450.c` | keyword |
| 0x0058F230 | core | 288 | `src/mw4mercs/text/func_0058f230.c` | keyword |
| 0x005DCD40 | core | 113 | `src/mw4mercs/text/func_005dcd40.c` | keyword |
| 0x005DD7A0 | core | 578 | `src/mw4mercs/text/func_005dd7a0.c` | keyword |
| 0x005FE060 | core | 2630 | `src/mw4mercs/text/func_005fe060.c` | keyword |
| 0x0061C960 | core | 2665 | `src/mw4mercs/text/func_0061c960.c` | keyword |
| 0x0061E080 | core | 563 | `src/mw4mercs/text/func_0061e080.c` | keyword |
| 0x0061E770 | core | 418 | `src/mw4mercs/text/func_0061e770.c` | keyword |
| 0x006202E0 | core | 457 | `src/mw4mercs/text/func_006202e0.c` | keyword |
| 0x006212F0 | core | 422 | `src/mw4mercs/text/func_006212f0.c` | keyword |
| 0x006215D0 | core | 16 | `src/mw4mercs/text/func_006215d0.c` | keyword |
| 0x00621610 | core | 51 | `src/mw4mercs/text/func_00621610.c` | keyword |
| 0x00621650 | core | 70 | `src/mw4mercs/text/func_00621650.c` | keyword |
| 0x00621910 | core | 29 | `src/mw4mercs/text/func_00621910.c` | keyword |
| 0x00621930 | core | 358 | `src/mw4mercs/text/func_00621930.c` | keyword |
| 0x00621BA0 | core | 63 | `src/mw4mercs/text/func_00621ba0.c` | keyword |
| 0x00622100 | core | 203 | `src/mw4mercs/text/func_00622100.c` | keyword |
| 0x006221D0 | core | 1003 | `src/mw4mercs/text/func_006221d0.c` | keyword |
| 0x00622710 | core | 301 | `src/mw4mercs/text/func_00622710.c` | keyword |
| 0x00622910 | core | 32 | `src/mw4mercs/text/func_00622910.c` | keyword |
| 0x00622930 | core | 32 | `src/mw4mercs/text/func_00622930.c` | keyword |
| 0x00622C30 | core | 353 | `src/mw4mercs/text/func_00622c30.c` | keyword |
| 0x00622DA0 | core | 461 | `src/mw4mercs/text/func_00622da0.c` | keyword |
| 0x006230F0 | core | 375 | `src/mw4mercs/text/func_006230f0.c` | keyword |
| 0x006234B0 | core | 77 | `src/mw4mercs/text/func_006234b0.c` | keyword |
| 0x00623550 | core | 7 | `src/mw4mercs/text/func_00623550.c` | keyword |
| 0x00624420 | core | 101 | `src/mw4mercs/text/func_00624420.c` | keyword |
| 0x00624510 | core | 4 | `src/mw4mercs/text/func_00624510.c` | keyword |
| 0x00624520 | core | 10 | `src/mw4mercs/text/func_00624520.c` | keyword |
| 0x00624530 | core | 203 | `src/mw4mercs/text/func_00624530.c` | keyword |
| 0x00624600 | core | 7 | `src/mw4mercs/text/func_00624600.c` | keyword |
| 0x00626520 | core | 717 | `src/mw4mercs/text/func_00626520.c` | keyword |
| 0x006270D0 | core | 431 | `src/mw4mercs/text/func_006270d0.c` | keyword |
| 0x00627290 | core | 61 | `src/mw4mercs/text/func_00627290.c` | keyword |
| 0x006272D0 | core | 36 | `src/mw4mercs/text/func_006272d0.c` | keyword |
| 0x00627420 | core | 50 | `src/mw4mercs/text/func_00627420.c` | keyword |
| 0x00627460 | core | 208 | `src/mw4mercs/text/func_00627460.c` | keyword |
| 0x006275A0 | core | 291 | `src/mw4mercs/text/func_006275a0.c` | keyword |
| 0x006276D0 | core | 30 | `src/mw4mercs/text/func_006276d0.c` | keyword |
| 0x006276F0 | core | 444 | `src/mw4mercs/text/func_006276f0.c` | keyword |
| 0x006278B0 | core | 334 | `src/mw4mercs/text/func_006278b0.c` | keyword |
| 0x00627B40 | core | 40 | `src/mw4mercs/text/func_00627b40.c` | keyword |
| 0x00627B70 | core | 20 | `src/mw4mercs/text/func_00627b70.c` | keyword |
| 0x00627BC0 | core | 371 | `src/mw4mercs/text/func_00627bc0.c` | keyword |
| 0x00628A70 | core | 12 | `src/mw4mercs/text/func_00628a70.c` | keyword |
| 0x00628E70 | core | 27 | `src/mw4mercs/text/func_00628e70.c` | keyword |
| 0x00628E90 | core | 20 | `src/mw4mercs/text/func_00628e90.c` | keyword |
| 0x00628EB0 | core | 20 | `src/mw4mercs/text/func_00628eb0.c` | keyword |
| 0x006290A0 | core | 356 | `src/mw4mercs/text/func_006290a0.c` | keyword |
| 0x00629270 | core | 30 | `src/mw4mercs/text/func_00629270.c` | keyword |
| 0x00629880 | core | 181 | `src/mw4mercs/text/func_00629880.c` | keyword |
| 0x0062B620 | core | 951 | `src/mw4mercs/text/func_0062b620.c` | keyword |
| 0x0062B9E0 | core | 20 | `src/mw4mercs/text/func_0062b9e0.c` | keyword |
| 0x0062BA00 | core | 21 | `src/mw4mercs/text/func_0062ba00.c` | keyword |
| 0x0062BA20 | core | 22 | `src/mw4mercs/text/func_0062ba20.c` | keyword |
| 0x0062BAA0 | core | 24 | `src/mw4mercs/text/func_0062baa0.c` | keyword |
| 0x0062BAC0 | core | 14 | `src/mw4mercs/text/func_0062bac0.c` | keyword |
| 0x0062BC10 | core | 17 | `src/mw4mercs/text/func_0062bc10.c` | keyword |
| 0x0062BC30 | core | 24 | `src/mw4mercs/text/func_0062bc30.c` | keyword |
| 0x0062C5F0 | core | 13 | `src/mw4mercs/text/func_0062c5f0.c` | keyword |
| 0x0062F6E0 | core | 799 | `src/mw4mercs/text/func_0062f6e0.c` | keyword |
| 0x00630CD0 | core | 444 | `src/mw4mercs/text/func_00630cd0.c` | keyword |
| 0x00637EF0 | core | 64 | `src/mw4mercs/text/func_00637ef0.c` | keyword |
| 0x00637F30 | core | 39 | `src/mw4mercs/text/func_00637f30.c` | keyword |
| 0x0063AD60 | core | 52 | `src/mw4mercs/text/func_0063ad60.c` | keyword |
| 0x0063AF40 | core | 105 | `src/mw4mercs/text/func_0063af40.c` | keyword |
| 0x0063AFB0 | core | 125 | `src/mw4mercs/text/func_0063afb0.c` | keyword |
| 0x0063B0A0 | core | 233 | `src/mw4mercs/text/func_0063b0a0.c` | keyword |
| 0x0063B2E0 | core | 141 | `src/mw4mercs/text/func_0063b2e0.c` | keyword |
| 0x0063B370 | core | 703 | `src/mw4mercs/text/func_0063b370.c` | keyword |
| 0x0063B840 | core | 183 | `src/mw4mercs/text/func_0063b840.c` | keyword |
| 0x0063B9E0 | core | 1001 | `src/mw4mercs/text/func_0063b9e0.c` | keyword |
| 0x006487E0 | core | - | `src/mw4mercs/text/func_006487e0.c` | band |
| 0x00648910 | core | - | `src/mw4mercs/text/func_00648910.c` | keyword |
| 0x00649E60 | core | 68 | `src/mw4mercs/text/func_00649e60.c` | keyword |
| 0x00649EC0 | core | 71 | `src/mw4mercs/text/func_00649ec0.c` | keyword |
| 0x00649F20 | core | 100 | `src/mw4mercs/text/func_00649f20.c` | keyword |
| 0x00649FB0 | core | 94 | `src/mw4mercs/text/func_00649fb0.c` | keyword |
| 0x0064A040 | core | 71 | `src/mw4mercs/text/func_0064a040.c` | keyword |
| 0x0064A0E0 | core | 312 | `src/mw4mercs/text/func_0064a0e0.c` | keyword |
| 0x0064A8F0 | core | 567 | `src/mw4mercs/text/func_0064a8f0.c` | keyword |
| 0x0064AD90 | core | 289 | `src/mw4mercs/text/func_0064ad90.c` | keyword |
| 0x0064AFF0 | core | 710 | `src/mw4mercs/text/func_0064aff0.c` | keyword |
| 0x0064B7B0 | core | 31 | `src/mw4mercs/text/func_0064b7b0.c` | keyword |
| 0x0064B7D0 | core | 61 | `src/mw4mercs/text/func_0064b7d0.c` | keyword |
| 0x0064CB90 | core | 742 | `src/mw4mercs/text/func_0064cb90.c` | keyword |
| 0x0064DDA0 | core | 54 | `src/mw4mercs/text/func_0064dda0.c` | keyword |
| 0x0064DE10 | core | 3 | `src/mw4mercs/text/func_0064de10.c` | keyword |
| 0x0064DE20 | core | 30 | `src/mw4mercs/text/func_0064de20.c` | keyword |
| 0x0064DED0 | core | 31 | `src/mw4mercs/text/func_0064ded0.c` | keyword |
| 0x0064DF20 | core | 13 | `src/mw4mercs/text/func_0064df20.c` | keyword |
| 0x0064DF30 | core | 22 | `src/mw4mercs/text/func_0064df30.c` | keyword |
| 0x0064DF60 | core | 7 | `src/mw4mercs/text/func_0064df60.c` | keyword |
| 0x0064DFC0 | core | 315 | `src/mw4mercs/text/func_0064dfc0.c` | keyword |
| 0x0064E100 | core | 4 | `src/mw4mercs/text/func_0064e100.c` | keyword |
| 0x0064E320 | core | 347 | `src/mw4mercs/text/func_0064e320.c` | keyword |
| 0x0064E6E0 | core | 14 | `src/mw4mercs/text/func_0064e6e0.c` | keyword |
| 0x0064E6F0 | core | 18 | `src/mw4mercs/text/func_0064e6f0.c` | keyword |
| 0x0064E8B0 | core | 19 | `src/mw4mercs/text/func_0064e8b0.c` | keyword |
| 0x0064FC30 | core | 20 | `src/mw4mercs/text/func_0064fc30.c` | keyword |
| 0x0064FE70 | core | 11 | `src/mw4mercs/text/func_0064fe70.c` | keyword |
| 0x00650060 | core | 20 | `src/mw4mercs/text/func_00650060.c` | keyword |
| 0x00650080 | core | 157 | `src/mw4mercs/text/func_00650080.c` | keyword |
| 0x00650580 | core | 21 | `src/mw4mercs/text/func_00650580.c` | keyword |
| 0x00652E00 | core | 366 | `src/mw4mercs/text/func_00652e00.c` | keyword |
| 0x00653B60 | core | 608 | `src/mw4mercs/text/func_00653b60.c` | keyword |
| 0x00654150 | core | 155 | `src/mw4mercs/text/func_00654150.c` | keyword |
| 0x00654860 | core | 2902 | `src/mw4mercs/text/func_00654860.c` | keyword |
| 0x00655F10 | core | 2836 | `src/mw4mercs/text/func_00655f10.c` | keyword |
| 0x00656B60 | core | 1428 | `src/mw4mercs/text/func_00656b60.c` | keyword |
| 0x00657140 | core | 1034 | `src/mw4mercs/text/func_00657140.c` | keyword |
| 0x00657700 | core | 639 | `src/mw4mercs/text/func_00657700.c` | keyword |
| 0x00658630 | core | 16 | `src/mw4mercs/text/func_00658630.c` | keyword |
| 0x00659EF0 | core | 645 | `src/mw4mercs/text/func_00659ef0.c` | keyword |
| 0x0065A180 | core | 568 | `src/mw4mercs/text/func_0065a180.c` | keyword |
| 0x0065A840 | core | 198 | `src/mw4mercs/text/func_0065a840.c` | keyword |
| 0x0065AB50 | core | 255 | `src/mw4mercs/text/func_0065ab50.c` | keyword |
| 0x0065AE10 | core | 873 | `src/mw4mercs/text/func_0065ae10.c` | keyword |
| 0x0065C320 | core | 281 | `src/mw4mercs/text/func_0065c320.c` | keyword |
| 0x0065D750 | core | 10 | `src/mw4mercs/text/func_0065d750.c` | keyword |
| 0x0065D760 | core | 4 | `src/mw4mercs/text/func_0065d760.c` | keyword |
| 0x0065D770 | core | 10 | `src/mw4mercs/text/func_0065d770.c` | keyword |
| 0x0065D7C0 | core | 11 | `src/mw4mercs/text/func_0065d7c0.c` | keyword |
| 0x0065D850 | core | 23 | `src/mw4mercs/text/func_0065d850.c` | keyword |
| 0x0065D870 | core | 7 | `src/mw4mercs/text/func_0065d870.c` | keyword |
| 0x0065D880 | core | 28 | `src/mw4mercs/text/func_0065d880.c` | keyword |
| 0x0065D8A0 | core | 7 | `src/mw4mercs/text/func_0065d8a0.c` | keyword |
| 0x0065D8B0 | core | 13 | `src/mw4mercs/text/func_0065d8b0.c` | keyword |
| 0x006613F0 | core | 816 | `src/mw4mercs/text/func_006613f0.c` | keyword |
| 0x00661760 | core | 1223 | `src/mw4mercs/text/func_00661760.c` | keyword |
| 0x00661EA0 | core | 238 | `src/mw4mercs/text/func_00661ea0.c` | keyword |
| 0x00661F90 | core | 22 | `src/mw4mercs/text/func_00661f90.c` | keyword |
| 0x00661FC0 | core | 174 | `src/mw4mercs/text/func_00661fc0.c` | keyword |
| 0x006620B0 | core | 113 | `src/mw4mercs/text/func_006620b0.c` | keyword |
| 0x006621D0 | core | 184 | `src/mw4mercs/text/func_006621d0.c` | keyword |
| 0x00662290 | core | 31 | `src/mw4mercs/text/func_00662290.c` | keyword |
| 0x00662D70 | core | 18 | `src/mw4mercs/text/func_00662d70.c` | keyword |
| 0x00663D50 | core | 210 | `src/mw4mercs/text/func_00663d50.c` | keyword |
| 0x00664680 | core | 451 | `src/mw4mercs/text/func_00664680.c` | keyword |
| 0x00664940 | core | 404 | `src/mw4mercs/text/func_00664940.c` | keyword |
| 0x00664B50 | core | 636 | `src/mw4mercs/text/func_00664b50.c` | keyword |
| 0x00665090 | core | 292 | `src/mw4mercs/text/func_00665090.c` | keyword |
| 0x006651D0 | core | 815 | `src/mw4mercs/text/func_006651d0.c` | keyword |
| 0x00665670 | core | 667 | `src/mw4mercs/text/func_00665670.c` | keyword |
| 0x00665B40 | core | 115 | `src/mw4mercs/text/func_00665b40.c` | keyword |
| 0x00665BC0 | core | 110 | `src/mw4mercs/text/func_00665bc0.c` | keyword |
| 0x00665CE0 | core | 92 | `src/mw4mercs/text/func_00665ce0.c` | keyword |
| 0x00665D40 | core | 192 | `src/mw4mercs/text/func_00665d40.c` | keyword |
| 0x006A3AA0 | core | 30 | `src/mw4mercs/text/func_006a3aa0.c` | keyword |
| 0x006A3BC0 | core | 30 | `src/mw4mercs/text/func_006a3bc0.c` | keyword |
| 0x006A4340 | core | 30 | `src/mw4mercs/text/func_006a4340.c` | keyword |
| 0x006A4670 | core | 30 | `src/mw4mercs/text/func_006a4670.c` | keyword |
| 0x006A5020 | core | 368 | `src/mw4mercs/text/func_006a5020.c` | keyword |
| 0x006A5420 | core | 437 | `src/mw4mercs/text/func_006a5420.c` | keyword |
| 0x006A6FE0 | core | 18 | `src/mw4mercs/text/func_006a6fe0.c` | keyword |
| 0x006A8C40 | core | 19 | `src/mw4mercs/text/func_006a8c40.c` | keyword |
| 0x006A9550 | core | 19 | `src/mw4mercs/text/func_006a9550.c` | keyword |
| 0x006A9760 | core | 32 | `src/mw4mercs/text/func_006a9760.c` | keyword |
| 0x006AA3D0 | core | 19 | `src/mw4mercs/text/func_006aa3d0.c` | keyword |
| 0x006AE250 | core | 14 | `src/mw4mercs/text/func_006ae250.c` | keyword |
| 0x006B0310 | core | 324 | `src/mw4mercs/text/func_006b0310.c` | keyword |
| 0x006B3BD0 | core | 389 | `src/mw4mercs/text/func_006b3bd0.c` | keyword |
| 0x006BBE80 | core | 77 | `src/mw4mercs/text/func_006bbe80.c` | keyword |
| 0x006BBED0 | core | 46 | `src/mw4mercs/text/func_006bbed0.c` | keyword |
| 0x006BBF80 | core | 93 | `src/mw4mercs/text/func_006bbf80.c` | keyword |
| 0x006BBFE0 | core | 82 | `src/mw4mercs/text/func_006bbfe0.c` | keyword |
| 0x006BC0B0 | core | 3153 | `src/mw4mercs/text/func_006bc0b0.c` | keyword |
| 0x006BEB70 | core | 600 | `src/mw4mercs/text/func_006beb70.c` | keyword |
| 0x006BF090 | core | 369 | `src/mw4mercs/text/func_006bf090.c` | keyword |
| 0x006BF210 | core | 171 | `src/mw4mercs/text/func_006bf210.c` | keyword |

### brain

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x005A1040 | core | 700 | `src/mw4mercs/text/func_005a1040.c` | surface |
| 0x005A61E0 | core | 281 | `src/mw4mercs/text/func_005a61e0.c` | surface |
| 0x005BFCF0 | core | 77 | `src/mw4mercs/text/func_005bfcf0.c` | surface |
| 0x005BFDF0 | core | 104 | `src/mw4mercs/text/func_005bfdf0.c` | surface |
| 0x005C0C90 | core | 114 | `src/mw4mercs/text/func_005c0c90.c` | surface |
| 0x005C0E80 | core | 29 | `src/mw4mercs/text/func_005c0e80.c` | surface |
| 0x005C0EA0 | core | 63 | `src/mw4mercs/text/func_005c0ea0.c` | surface |
| 0x005C0EE0 | core | 104 | `src/mw4mercs/text/func_005c0ee0.c` | surface |
| 0x005C0F50 | core | 39 | `src/mw4mercs/text/func_005c0f50.c` | surface |
| 0x005C0FE0 | core | 1118 | `src/mw4mercs/text/func_005c0fe0.c` | surface |
| 0x005C24D0 | core | 204 | `src/mw4mercs/text/func_005c24d0.c` | surface |
| 0x005C25A0 | core | 492 | `src/mw4mercs/text/func_005c25a0.c` | surface |
| 0x005C2790 | core | 459 | `src/mw4mercs/text/func_005c2790.c` | surface |
| 0x005C2960 | core | 690 | `src/mw4mercs/text/func_005c2960.c` | surface |
| 0x005C3380 | core | 373 | `src/mw4mercs/text/func_005c3380.c` | surface |
| 0x005C36B0 | core | 1044 | `src/mw4mercs/text/func_005c36b0.c` | surface |
| 0x005C3DA0 | core | 1415 | `src/mw4mercs/text/func_005c3da0.c` | surface |
| 0x005C5650 | core | 143 | `src/mw4mercs/text/func_005c5650.c` | surface |
| 0x005C6900 | core | 702 | `src/mw4mercs/text/func_005c6900.c` | surface |
| 0x005C6D90 | core | 164 | `src/mw4mercs/text/func_005c6d90.c` | surface |
| 0x005C72D0 | core | 724 | `src/mw4mercs/text/func_005c72d0.c` | surface |
| 0x005C75B0 | core | 278 | `src/mw4mercs/text/func_005c75b0.c` | surface |
| 0x005C80E0 | core | 42 | `src/mw4mercs/text/func_005c80e0.c` | surface |
| 0x005C8110 | core | 561 | `src/mw4mercs/text/func_005c8110.c` | surface |
| 0x005C8F30 | core | 182 | `src/mw4mercs/text/func_005c8f30.c` | surface |
| 0x005C9800 | core | 73 | `src/mw4mercs/text/func_005c9800.c` | surface |
| 0x005C9850 | core | 80 | `src/mw4mercs/text/func_005c9850.c` | surface |
| 0x005C9900 | core | 67 | `src/mw4mercs/text/func_005c9900.c` | surface |
| 0x005CBE00 | core | 41 | `src/mw4mercs/text/func_005cbe00.c` | surface |
| 0x005CC0C0 | core | 37 | `src/mw4mercs/text/func_005cc0c0.c` | surface |
| 0x005CD950 | core | 1113 | `src/mw4mercs/text/func_005cd950.c` | surface |
| 0x005DAAE0 | core | 326 | `src/mw4mercs/text/func_005daae0.c` | surface |
| 0x005DAC30 | core | 151 | `src/mw4mercs/text/func_005dac30.c` | surface |
| 0x005DAD30 | core | 681 | `src/mw4mercs/text/func_005dad30.c` | surface |
| 0x005DAFE0 | core | 749 | `src/mw4mercs/text/func_005dafe0.c` | surface |
| 0x005DC370 | core | 298 | `src/mw4mercs/text/func_005dc370.c` | surface |
| 0x005DC4A0 | core | 1347 | `src/mw4mercs/text/func_005dc4a0.c` | surface |
| 0x005DF420 | core | 177 | `src/mw4mercs/text/func_005df420.c` | surface |
| 0x005DF62B | core | - | `src/mw4mercs/text/func_005DF62B.c` | surface |
| 0x005DF7A0 | core | 101 | `src/mw4mercs/text/func_005df7a0.c` | surface |
| 0x005DF940 | core | 149 | `src/mw4mercs/text/func_005df940.c` | surface |
| 0x005DF9E0 | core | 78 | `src/mw4mercs/text/func_005df9e0.c` | surface |
| 0x00664490 | core | 482 | `src/mw4mercs/text/func_00664490.c` | keyword |
| 0x00683050 | core | 198 | `src/mw4mercs/text/func_00683050.c` | surface |
| 0x00683120 | core | 274 | `src/mw4mercs/text/func_00683120.c` | surface |
| 0x00683240 | core | 81 | `src/mw4mercs/text/func_00683240.c` | surface |

### targeting

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0055289C | core | - | `src/mw4mercs/text/func_0055289C.c` | keyword |
| 0x005B9020 | core | 140 | `src/mw4mercs/text/func_005b9020.c` | surface |
| 0x005B9140 | core | 353 | `src/mw4mercs/text/func_005b9140.c` | surface |
| 0x005B9390 | core | 217 | `src/mw4mercs/text/func_005b9390.c` | surface |
| 0x005B9560 | core | 497 | `src/mw4mercs/text/func_005b9560.c` | surface |
| 0x005C7170 | core | 342 | `src/mw4mercs/text/func_005c7170.c` | surface |
| 0x005C77D0 | core | 1402 | `src/mw4mercs/text/func_005c77d0.c` | surface |
| 0x005C8790 | core | 874 | `src/mw4mercs/text/func_005c8790.c` | surface |
| 0x005C8BE0 | core | 506 | `src/mw4mercs/text/func_005c8be0.c` | surface |
| 0x005C8DE0 | core | 144 | `src/mw4mercs/text/func_005c8de0.c` | surface |
| 0x005C8E70 | core | 126 | `src/mw4mercs/text/func_005c8e70.c` | surface |
| 0x005CAEB0 | core | 329 | `src/mw4mercs/text/func_005caeb0.c` | surface |
| 0x005E49F0 | core | 765 | `src/mw4mercs/text/func_005e49f0.c` | surface |
| 0x005E4CF0 | core | 1384 | `src/mw4mercs/text/func_005e4cf0.c` | surface |
| 0x005E5280 | core | 1000 | `src/mw4mercs/text/func_005e5280.c` | surface |
| 0x005E5C10 | core | 148 | `src/mw4mercs/text/func_005e5c10.c` | keyword |
| 0x005E5CB0 | core | 365 | `src/mw4mercs/text/func_005e5cb0.c` | keyword |
| 0x005E5E30 | core | 1888 | `src/mw4mercs/text/func_005e5e30.c` | surface |
| 0x005EA33B | core | - | `src/mw4mercs/text/func_005EA33B.c` | keyword |
| 0x005F3FF0 | core | 1573 | `src/mw4mercs/text/func_005f3ff0.c` | keyword |
| 0x0065B520 | core | 275 | `src/mw4mercs/text/func_0065b520.c` | keyword |
| 0x006832A0 | core | 645 | `src/mw4mercs/text/func_006832a0.c` | keyword |
| 0x006836F0 | core | 642 | `src/mw4mercs/text/func_006836f0.c` | keyword |
| 0x006839E0 | core | 355 | `src/mw4mercs/text/func_006839e0.c` | keyword |
| 0x00683BC0 | core | 119 | `src/mw4mercs/text/func_00683bc0.c` | keyword |
| 0x00684150 | core | 452 | `src/mw4mercs/text/func_00684150.c` | keyword |
| 0x006847E0 | core | 88 | `src/mw4mercs/text/func_006847e0.c` | keyword |
| 0x00684840 | core | 423 | `src/mw4mercs/text/func_00684840.c` | keyword |
| 0x00684AB0 | core | 603 | `src/mw4mercs/text/func_00684ab0.c` | keyword |
| 0x00685B20 | core | 239 | `src/mw4mercs/text/func_00685b20.c` | keyword |
| 0x00686140 | core | 623 | `src/mw4mercs/text/func_00686140.c` | keyword |
| 0x006864D0 | core | 368 | `src/mw4mercs/text/func_006864d0.c` | keyword |
| 0x00689410 | core | 1228 | `src/mw4mercs/text/func_00689410.c` | keyword |

### nav

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004DAF00 | core | 21 | `src/mw4mercs/text/func_004daf00.c` | surface |
| 0x004F9D00 | core | 451 | `src/mw4mercs/text/func_004f9d00.c` | keyword |
| 0x004FACD0 | core | 317 | `src/mw4mercs/text/func_004facd0.c` | surface |
| 0x004FAE10 | core | 187 | `src/mw4mercs/text/func_004fae10.c` | surface |
| 0x004FAED0 | core | 229 | `src/mw4mercs/text/func_004faed0.c` | surface |
| 0x004FAFC0 | core | 538 | `src/mw4mercs/text/func_004fafc0.c` | surface |
| 0x004FB1E0 | core | 88 | `src/mw4mercs/text/func_004fb1e0.c` | surface |
| 0x004FB240 | core | 843 | `src/mw4mercs/text/func_004fb240.c` | surface |
| 0x005B1AD0 | core | - | `src/mw4mercs/text/func_005B1AD0.c` | surface |
| 0x005B2BB0 | core | 203 | `src/mw4mercs/text/func_005b2bb0.c` | surface |
| 0x005D8030 | core | 59 | `src/mw4mercs/text/func_005d8030.c` | surface |
| 0x005D8070 | core | 39 | `src/mw4mercs/text/func_005d8070.c` | keyword |
| 0x005D80B0 | core | 239 | `src/mw4mercs/text/func_005d80b0.c` | keyword |
| 0x005D8350 | core | 158 | `src/mw4mercs/text/func_005d8350.c` | surface |
| 0x005D8530 | core | 742 | `src/mw4mercs/text/func_005d8530.c` | surface |
| 0x005D8820 | core | 451 | `src/mw4mercs/text/func_005d8820.c` | surface |
| 0x005D8A30 | core | 483 | `src/mw4mercs/text/func_005d8a30.c` | keyword |
| 0x005D8C20 | core | 160 | `src/mw4mercs/text/func_005d8c20.c` | keyword |
| 0x005D8CC0 | core | 870 | `src/mw4mercs/text/func_005d8cc0.c` | surface |
| 0x005D9030 | core | 610 | `src/mw4mercs/text/func_005d9030.c` | surface |

### combat

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x005B6850 | core | 116 | `src/mw4mercs/text/func_005b6850.c` | surface |
| 0x005BA830 | core | 116 | `src/mw4mercs/text/func_005ba830.c` | surface |
| 0x005E2DC0 | core | 116 | `src/mw4mercs/text/func_005e2dc0.c` | surface |
| 0x005E3240 | core | 193 | `src/mw4mercs/text/func_005e3240.c` | surface |
| 0x005E6A40 | core | 555 | `src/mw4mercs/text/func_005e6a40.c` | surface |
| 0x005E8A80 | core | 486 | `src/mw4mercs/text/func_005e8a80.c` | surface |
| 0x005E9DB0 | core | 868 | `src/mw4mercs/text/func_005e9db0.c` | surface |
| 0x005ECBD0 | core | 598 | `src/mw4mercs/text/func_005ecbd0.c` | surface |
| 0x006A33A0 | core | 483 | `src/mw4mercs/text/func_006a33a0.c` | surface |

### squad

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x005DDEF0 | core | 59 | `src/mw4mercs/text/func_005ddef0.c` | surface |
| 0x005DDF60 | core | 114 | `src/mw4mercs/text/func_005ddf60.c` | surface |
| 0x005DE000 | core | 37 | `src/mw4mercs/text/func_005de000.c` | surface |
| 0x005DE210 | core | 404 | `src/mw4mercs/text/func_005de210.c` | surface |
| 0x005DE750 | core | 1223 | `src/mw4mercs/text/func_005de750.c` | surface |

## Shared VAs

This subsystem references **847 shared VAs**. They are described once in [shared.md](shared.md#ai); the table below shows a few representative entries.

| VA | Detail | Source |
|----|--------|--------|
| 0x00630FE0 | squad | `src/mw4mercs/text/func_00630fe0.c` |
| 0x00719B10 | abl | `src/mw4mercs/text/func_00719b10.c` |
| 0x006F91D0 | abl | `src/mw4mercs/text/func_006f91d0.c` |
| 0x0071F310 | abl | `src/mw4mercs/text/func_0071f310.c` |
| 0x007189C0 | abl | `src/mw4mercs/text/func_007189c0.c` |
| 0x00754700 | abl | `src/mw4mercs/text/func_00754700.c` |
| 0x0072A770 | abl | `src/mw4mercs/text/func_0072a770.c` |
| 0x0074ED60 | abl | `src/mw4mercs/text/func_0074ed60.c` |

## Boundary VAs

This subsystem has **141 outbound boundary VAs**. The full table is in [SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md); representative entries are below.

| VA | Source | Size |
|----|--------|------|
| 0x004084D0 | `src/mw4mercs/text/func_004084d0.c` | 13 |
| 0x004084E0 | `src/mw4mercs/text/func_004084e0.c` | 11 |
| 0x0040C410 | `src/mw4mercs/text/func_0040c410.c` | 25 |
| 0x0040C5D0 | `src/mw4mercs/text/func_0040c5d0.c` | 25 |
| 0x0040C9E0 | `src/mw4mercs/text/func_0040c9e0.c` | 37 |
| 0x0040CA10 | `src/mw4mercs/text/func_0040ca10.c` | 37 |
| 0x0040D030 | `src/mw4mercs/text/func_0040d030.c` | 26 |
| 0x00411BF0 | `src/mw4mercs/text/func_00411bf0.c` | 80 |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
