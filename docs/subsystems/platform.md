# Platform Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 255 | **Exhaustive index:** [MW4Mercs.exe](../master_index/MW4Mercs_exe.md)

Win32/COM/DLL/registry glue, DirectDraw/D3D wrappers, import thunks, and the SafeDisc wrapper.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The IAT jump thunks occupy 0x0075DB4A-0x0076015C. The SafeDisc and anti-tamper wrapper occupies 0x0075DB4A-0x0076A381; representative functions include 0x00762410 (anti-tamper jump chains) and 0x00760530 (SafeDisc call setup).

COM, DLL loading, registry access, and DirectDraw/D3D glue also live here. This is the OS boundary used by render, audio, input, and net.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0075DB4A-0x0076015C | imports | IAT jump thunks |
| 0x0075DB4A-0x0076A381 | drm | SafeDisc/anti-tamper wrapper |
| 0x00762410 | drm | anti-tamper jump-chain function |
| 0x00760530 | drm | SafeDisc call setup |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| drm | 152 | SafeDisc wrapper, anti-tamper glue, and import thunks. |
| imports | 96 | IAT jump thunks and imported-function glue. |
| (general) | 7 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### drm

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0052A460 | core | 753 | `src/mw4mercs/text/func_0052a460.c` | keyword |
| 0x0052A770 | core | 753 | `src/mw4mercs/text/func_0052a770.c` | keyword |
| 0x0052AAB0 | core | 181 | `src/mw4mercs/text/func_0052aab0.c` | keyword |
| 0x0075DB62 | core | 6 | `src/mw4mercs/text/func_0075db62.c` | range |
| 0x0075DBD0 | core | - | `src/mw4mercs/text/func_0075DBD0.c` | range |
| 0x0075DBD6 | core | 6 | `src/mw4mercs/text/func_0075dbd6.c` | range |
| 0x0075DC2F | core | - | `src/mw4mercs/text/func_0075DC2F.c` | range |
| 0x0075DC3C | core | 6 | `src/mw4mercs/text/func_0075dc3c.c` | range |
| 0x0075DD60 | core | 170 | `src/mw4mercs/text/func_0075dd60.c` | range |
| 0x0075DE40 | core | 6 | `src/mw4mercs/text/func_0075de40.c` | range |
| 0x0075DE93 | core | 28 | `src/mw4mercs/text/func_0075de93.c` | range |
| 0x0075DEB4 | core | - | `src/mw4mercs/text/func_0075deb4.c` | range |
| 0x0075DF50 | core | 6 | `src/mw4mercs/text/func_0075df50.c` | range |
| 0x0075DF62 | core | 18 | `src/mw4mercs/text/func_0075df62.c` | range |
| 0x0075DF7D | core | 1 | `src/mw4mercs/text/func_0075df7d.c` | range |
| 0x0075DF7E | core | - | `src/mw4mercs/text/func_0075DF7E.c` | range |
| 0x0075DF9C | core | 6 | `src/mw4mercs/text/func_0075df9c.c` | range |
| 0x0075E028 | core | 6 | `src/mw4mercs/text/func_0075e028.c` | range |
| 0x0075E11E | core | 6 | `src/mw4mercs/text/func_0075e11e.c` | range |
| 0x00760120 | core | 6 | `src/mw4mercs/text/func_00760120.c` | range |
| 0x00760162 | core | 6 | `src/mw4mercs/text/func_00760162.c` | range |
| 0x007603E0 | core | 74 | `src/mw4mercs/text/func_007603e0.c` | range |
| 0x007604B0 | core | 121 | `src/mw4mercs/text/func_007604B0.c` | range |
| 0x00760530 | core | - | `src/mw4mercs/text/func_00760530.c` | range |
| 0x00760580 | core | - | `src/mw4mercs/text/func_00760580.c` | range |
| 0x007605D0 | core | - | `src/mw4mercs/text/func_007605D0.c` | range |
| 0x00760630 | core | 242 | `src/mw4mercs/text/func_00760630.c` | range |
| 0x00760730 | core | - | `src/mw4mercs/text/func_00760730.c` | range |
| 0x00760840 | core | - | `src/mw4mercs/text/func_00760840.c` | range |
| 0x00760930 | core | - | `src/mw4mercs/text/func_00760930.c` | range |
| 0x007609A0 | core | - | `src/mw4mercs/text/func_007609A0.c` | range |
| 0x00760A10 | core | 114 | `src/mw4mercs/text/func_00760A10.c` | range |
| 0x00760A90 | core | - | `src/mw4mercs/text/func_00760A90.c` | range |
| 0x00760AE0 | core | - | `src/mw4mercs/text/func_00760AE0.c` | range |
| 0x00760B40 | core | - | `src/mw4mercs/text/func_00760B40.c` | range |
| 0x00760BA0 | core | - | `src/mw4mercs/text/func_00760BA0.c` | range |
| 0x00760C00 | core | - | `src/mw4mercs/text/func_00760C00.c` | range |
| 0x00760C60 | core | - | `src/mw4mercs/text/func_00760C60.c` | range |
| 0x00760CC0 | core | - | `src/mw4mercs/text/func_00760CC0.c` | range |
| 0x00760D30 | core | - | `src/mw4mercs/text/func_00760D30.c` | range |
| 0x00760DA0 | core | 46 | `src/mw4mercs/text/func_00760da0.c` | range |
| 0x00760DD0 | core | 42 | `src/mw4mercs/text/func_00760dd0.c` | range |
| 0x00760E00 | core | 14 | `src/mw4mercs/text/func_00760e00.c` | range |
| 0x00760E0E | core | - | `src/mw4mercs/text/func_00760e0e.c` | range |
| 0x00760E30 | core | 18 | `src/mw4mercs/text/func_00760e30.c` | range |
| 0x00760E42 | core | - | `src/mw4mercs/text/func_00760e42.c` | range |
| 0x00760E50 | core | 22 | `src/mw4mercs/text/func_00760e50.c` | range |
| 0x00760E70 | core | 22 | `src/mw4mercs/text/func_00760e70.c` | range |
| 0x00760E86 | core | - | `src/mw4mercs/text/func_00760e86.c` | range |
| 0x00760E90 | core | 110 | `src/mw4mercs/text/func_00760e90.c` | range |
| 0x00760F00 | core | 139 | `src/mw4mercs/text/func_00760f00.c` | range |
| 0x00760F90 | core | 87 | `src/mw4mercs/text/func_00760f90.c` | range |
| 0x00760FF0 | core | 85 | `src/mw4mercs/text/func_00760ff0.c` | range |
| 0x00761050 | core | 51 | `src/mw4mercs/text/func_00761050.c` | range |
| 0x00761090 | core | 159 | `src/mw4mercs/text/func_00761090.c` | range |
| 0x00761140 | core | 78 | `src/mw4mercs/text/func_00761140.c` | range |
| 0x007611A0 | core | 422 | `src/mw4mercs/text/func_007611a0.c` | range |
| 0x00761360 | core | 167 | `src/mw4mercs/text/func_00761360.c` | range |
| 0x00761410 | core | 599 | `src/mw4mercs/text/func_00761410.c` | range |
| 0x00761690 | core | 558 | `src/mw4mercs/text/func_00761690.c` | range |
| 0x007618E0 | core | 715 | `src/mw4mercs/text/func_007618e0.c` | range |
| 0x00761BD0 | core | 609 | `src/mw4mercs/text/func_00761bd0.c` | range |
| 0x00761E50 | core | 564 | `src/mw4mercs/text/func_00761e50.c` | range |
| 0x007620A0 | core | 347 | `src/mw4mercs/text/func_007620A0.c` | range |
| 0x00762210 | core | 282 | `src/mw4mercs/text/func_00762210.c` | range |
| 0x00762340 | core | 190 | `src/mw4mercs/text/func_00762340.c` | range |
| 0x00762410 | core | 125 | `src/mw4mercs/text/func_00762410.c` | range |
| 0x007624A0 | core | 133 | `src/mw4mercs/text/func_007624a0.c` | range |
| 0x00762530 | core | 385 | `src/mw4mercs/text/func_00762530.c` | range |
| 0x007626D0 | core | 273 | `src/mw4mercs/text/func_007626d0.c` | range |
| 0x007627F0 | core | 314 | `src/mw4mercs/text/func_007627F0.c` | range |
| 0x00762940 | core | 215 | `src/mw4mercs/text/func_00762940.c` | range |
| 0x00762A30 | core | 350 | `src/mw4mercs/text/func_00762a30.c` | range |
| 0x00762BA0 | core | 302 | `src/mw4mercs/text/func_00762ba0.c` | range |
| 0x00762CE0 | core | 255 | `src/mw4mercs/text/func_00762ce0.c` | range |
| 0x00762DF0 | core | 1415 | `src/mw4mercs/text/func_00762df0.c` | range |
| 0x007633C0 | core | 93 | `src/mw4mercs/text/func_007633C0.c` | range |
| 0x00763430 | core | 852 | `src/mw4mercs/text/func_00763430.c` | range |
| 0x007637B0 | core | 362 | `src/mw4mercs/text/func_007637b0.c` | range |
| 0x00763930 | core | 58 | `src/mw4mercs/text/func_00763930.c` | range |
| 0x00763970 | core | 101 | `src/mw4mercs/text/func_00763970.c` | range |
| 0x007639E0 | core | 101 | `src/mw4mercs/text/func_007639E0.c` | range |
| 0x00763A50 | core | 101 | `src/mw4mercs/text/func_00763A50.c` | range |
| 0x00763AC0 | core | 200 | `src/mw4mercs/text/func_00763AC0.c` | range |
| 0x00763BA0 | core | 77 | `src/mw4mercs/text/func_00763ba0.c` | range |
| 0x00763C00 | core | 77 | `src/mw4mercs/text/func_00763c00.c` | range |
| 0x00763C60 | core | 77 | `src/mw4mercs/text/func_00763c60.c` | range |
| 0x00763CC0 | core | 224 | `src/mw4mercs/text/func_00763cc0.c` | range |
| 0x00763DC0 | core | 242 | `src/mw4mercs/text/func_00763dc0.c` | range |
| 0x00763EBA | core | - | `src/mw4mercs/text/func_00763EBA.c` | range |
| 0x00763EC0 | core | 340 | `src/mw4mercs/text/func_00763ec0.c` | range |
| 0x00764020 | core | - | `src/mw4mercs/text/func_00764020.c` | range |
| 0x00764090 | core | 424 | `src/mw4mercs/text/func_00764090.c` | range |
| 0x00764250 | core | 406 | `src/mw4mercs/text/func_00764250.c` | range |
| 0x00764400 | core | 534 | `src/mw4mercs/text/func_00764400.c` | range |
| 0x00764640 | core | - | `src/mw4mercs/text/func_00764640.c` | range |
| 0x00764650 | core | 48 | `src/mw4mercs/text/func_00764650.c` | range |
| 0x007646F0 | core | 46 | `src/mw4mercs/text/func_007646f0.c` | range |
| 0x00764720 | core | 1699 | `src/mw4mercs/text/func_00764720.c` | range |
| 0x00764DE0 | core | 340 | `src/mw4mercs/text/func_00764de0.c` | range |
| 0x00764F40 | core | - | `src/mw4mercs/text/func_00764F40.c` | range |
| 0x00764FB0 | core | 345 | `src/mw4mercs/text/func_00764FB0.c` | range |
| 0x00765120 | core | 399 | `src/mw4mercs/text/func_00765120.c` | range |
| 0x007652C0 | core | 383 | `src/mw4mercs/text/func_007652C0.c` | range |
| 0x00765460 | core | 48 | `src/mw4mercs/text/func_00765460.c` | range |
| 0x00765530 | core | 340 | `src/mw4mercs/text/func_00765530.c` | range |
| 0x00765690 | core | - | `src/mw4mercs/text/func_00765690.c` | range |
| 0x00765700 | core | 348 | `src/mw4mercs/text/func_00765700.c` | range |
| 0x00765870 | core | 399 | `src/mw4mercs/text/func_00765870.c` | range |
| 0x00765A10 | core | 383 | `src/mw4mercs/text/func_00765A10.c` | range |
| 0x00765BB0 | core | 48 | `src/mw4mercs/text/func_00765bb0.c` | range |
| 0x00765C80 | core | 434 | `src/mw4mercs/text/func_00765c80.c` | range |
| 0x00765E50 | core | 220 | `src/mw4mercs/text/func_00765e50.c` | range |
| 0x00765F40 | core | 16 | `src/mw4mercs/text/func_00765f40.c` | range |
| 0x00765F50 | core | 16 | `src/mw4mercs/text/func_00765f50.c` | range |
| 0x00765F60 | core | - | `src/mw4mercs/text/func_00765f60.c` | range |
| 0x007660BC | core | - | `src/mw4mercs/text/func_007660bc.c` | range |
| 0x00766290 | core | 117 | `src/mw4mercs/text/func_00766290.c` | range |
| 0x007663E0 | core | 44 | `src/mw4mercs/text/func_007663e0.c` | range |
| 0x00766410 | core | 750 | `src/mw4mercs/text/func_00766410.c` | range |
| 0x007669B0 | core | 91 | `src/mw4mercs/text/func_007669b0.c` | range |
| 0x00766C60 | core | 71 | `src/mw4mercs/text/func_00766c60.c` | range |
| 0x00766CB0 | core | 93 | `src/mw4mercs/text/func_00766cb0.c` | range |
| 0x00766D10 | core | 300 | `src/mw4mercs/text/func_00766d10.c` | range |
| 0x00766E40 | core | 394 | `src/mw4mercs/text/func_00766e40.c` | range |
| 0x00766FD0 | core | 403 | `src/mw4mercs/text/func_00766fd0.c` | range |
| 0x00767163 | core | - | `src/mw4mercs/text/func_00767163.c` | range |
| 0x00767400 | core | 43 | `src/mw4mercs/text/func_00767400.c` | range |
| 0x00767460 | core | 66 | `src/mw4mercs/text/func_00767460.c` | range |
| 0x007674A2 | core | - | `src/mw4mercs/text/func_007674a2.c` | range |
| 0x007678F0 | core | 224 | `src/mw4mercs/text/func_007678f0.c` | range |
| 0x007679D0 | core | 107 | `src/mw4mercs/text/func_007679d0.c` | range |
| 0x00767A40 | core | 17 | `src/mw4mercs/text/func_00767a40.c` | range |
| 0x00767A60 | core | 43 | `src/mw4mercs/text/func_00767a60.c` | range |
| 0x00767A8B | core | - | `src/mw4mercs/text/func_00767A8B.c` | range |
| 0x00767AF0 | core | 98 | `src/mw4mercs/text/func_00767af0.c` | range |
| 0x00767B60 | core | - | `src/mw4mercs/text/func_00767B60.c` | range |
| 0x00767BB0 | core | - | `src/mw4mercs/text/func_00767BB0.c` | range |
| 0x00767BD0 | core | - | `src/mw4mercs/text/func_00767BD0.c` | range |
| 0x00767CC0 | core | 18 | `src/mw4mercs/text/func_00767cc0.c` | range |
| 0x00767CE0 | core | 11 | `src/mw4mercs/text/func_00767ce0.c` | range |
| 0x00767CEB | core | - | `src/mw4mercs/text/func_00767ceb.c` | range |
| 0x00767D50 | core | 94 | `src/mw4mercs/text/func_00767d50.c` | range |
| 0x00767DAE | core | - | `src/mw4mercs/text/func_00767dae.c` | range |
| 0x00767F40 | core | 18 | `src/mw4mercs/text/func_00767f40.c` | range |
| 0x00767F60 | core | 11 | `src/mw4mercs/text/func_00767f60.c` | range |
| 0x00767F6B | core | - | `src/mw4mercs/text/func_00767f6b.c` | range |
| 0x00768020 | core | 30 | `src/mw4mercs/text/func_00768020.c` | range |
| 0x00768040 | core | 30 | `src/mw4mercs/text/func_00768040.c` | range |
| 0x00768060 | core | 30 | `src/mw4mercs/text/func_00768060.c` | range |
| 0x0076807E | core | - | `src/mw4mercs/text/func_0076807e.c` | range |
| 0x0076809E | core | - | `src/mw4mercs/text/func_0076809e.c` | range |

### imports

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004024B2 | core | - | `src/mw4mercs/text/func_004024B2.c` | keyword |
| 0x00402660 | core | 594 | `src/mw4mercs/text/func_00402660.c` | keyword |
| 0x004044E0 | core | 157 | `src/mw4mercs/text/func_004044e0.c` | keyword |
| 0x004060CC | core | - | `src/mw4mercs/text/func_004060CC.c` | keyword |
| 0x00408330 | core | 219 | `src/mw4mercs/text/func_00408330.c` | keyword |
| 0x004C8F70 | core | 188 | `src/mw4mercs/text/func_004c8f70.c` | keyword |
| 0x004CFCB0 | core | - | `src/mw4mercs/text/func_004cfcb0.c` | keyword |
| 0x004CFE40 | core | - | `src/mw4mercs/text/func_004CFE40.c` | keyword |
| 0x004D5ED0 | core | 81 | `src/mw4mercs/text/func_004d5ed0.c` | keyword |
| 0x004D7590 | core | - | `src/mw4mercs/text/func_004D7590.c` | keyword |
| 0x004D77F0 | core | 236 | `src/mw4mercs/text/func_004d77f0.c` | keyword |
| 0x004D8E10 | core | 63 | `src/mw4mercs/text/func_004d8e10.c` | keyword |
| 0x004DD360 | core | 78 | `src/mw4mercs/text/func_004dd360.c` | keyword |
| 0x004E7E60 | core | 327 | `src/mw4mercs/text/func_004e7e60.c` | keyword |
| 0x004F9F30 | core | 106 | `src/mw4mercs/text/func_004f9f30.c` | keyword |
| 0x004F9FA0 | core | 74 | `src/mw4mercs/text/func_004f9fa0.c` | keyword |
| 0x004FC6D0 | core | - | `src/mw4mercs/text/func_004FC6D0.c` | keyword |
| 0x004FCC40 | core | 137 | `src/mw4mercs/text/func_004fcc40.c` | keyword |
| 0x005003E0 | core | 77 | `src/mw4mercs/text/func_005003e0.c` | keyword |
| 0x005005F0 | core | 123 | `src/mw4mercs/text/func_005005f0.c` | keyword |
| 0x00500670 | core | 39 | `src/mw4mercs/text/func_00500670.c` | keyword |
| 0x005006A0 | core | 53 | `src/mw4mercs/text/func_005006a0.c` | keyword |
| 0x00500850 | core | 24 | `src/mw4mercs/text/func_00500850.c` | keyword |
| 0x00500870 | core | 29 | `src/mw4mercs/text/func_00500870.c` | keyword |
| 0x00502370 | core | 1257 | `src/mw4mercs/text/func_00502370.c` | keyword |
| 0x005028B0 | core | 882 | `src/mw4mercs/text/func_005028b0.c` | keyword |
| 0x005031A0 | core | 169 | `src/mw4mercs/text/func_005031a0.c` | keyword |
| 0x00507400 | core | - | `src/mw4mercs/text/func_00507400.c` | keyword |
| 0x0050D840 | core | 30 | `src/mw4mercs/text/func_0050d840.c` | keyword |
| 0x0050DC20 | core | 104 | `src/mw4mercs/text/func_0050dc20.c` | keyword |
| 0x00513C30 | core | 91 | `src/mw4mercs/text/func_00513c30.c` | keyword |
| 0x0051A1BB | core | - | `src/mw4mercs/text/func_0051a1bb.c` | keyword |
| 0x0051AA60 | core | 29 | `src/mw4mercs/text/func_0051aa60.c` | keyword |
| 0x0051AB20 | core | - | `src/mw4mercs/text/func_0051AB20.c` | keyword |
| 0x0051D5C0 | core | - | `src/mw4mercs/text/func_0051D5C0.c` | keyword |
| 0x005385D0 | core | - | `src/mw4mercs/text/func_005385D0.c` | keyword |
| 0x005631A0 | core | 314 | `src/mw4mercs/text/func_005631a0.c` | keyword |
| 0x00566690 | core | 63 | `src/mw4mercs/text/func_00566690.c` | keyword |
| 0x00607140 | core | 179 | `src/mw4mercs/text/func_00607140.c` | keyword |
| 0x00607AF0 | core | 241 | `src/mw4mercs/text/func_00607af0.c` | keyword |
| 0x0061FC60 | core | 27 | `src/mw4mercs/text/func_0061fc60.c` | keyword |
| 0x00620000 | core | - | `src/mw4mercs/text/func_00620000.c` | keyword |
| 0x00627300 | core | 137 | `src/mw4mercs/text/func_00627300.c` | keyword |
| 0x006486D0 | core | - | `src/mw4mercs/text/func_006486D0.c` | keyword |
| 0x006499C0 | core | 273 | `src/mw4mercs/text/func_006499c0.c` | keyword |
| 0x00649D70 | core | 92 | `src/mw4mercs/text/func_00649d70.c` | keyword |
| 0x00649DCC | core | - | `src/mw4mercs/text/func_00649DCC.c` | keyword |
| 0x00649E30 | core | 37 | `src/mw4mercs/text/func_00649e30.c` | keyword |
| 0x0064E9C0 | core | 40 | `src/mw4mercs/text/func_0064e9c0.c` | keyword |
| 0x0064E9F0 | core | 139 | `src/mw4mercs/text/func_0064e9f0.c` | keyword |
| 0x00658200 | core | 397 | `src/mw4mercs/text/func_00658200.c` | keyword |
| 0x0065D91D | core | - | `src/mw4mercs/text/func_0065d91d.c` | keyword |
| 0x0065DB20 | core | - | `src/mw4mercs/text/func_0065db20.c` | keyword |
| 0x0066B6E0 | core | - | `src/mw4mercs/text/func_0066B6E0.c` | keyword |
| 0x0067533E | core | - | `src/mw4mercs/text/func_0067533E.c` | keyword |
| 0x00677380 | core | 509 | `src/mw4mercs/text/func_00677380.c` | keyword |
| 0x00677E00 | core | 499 | `src/mw4mercs/text/func_00677e00.c` | keyword |
| 0x0068D210 | core | 112 | `src/mw4mercs/text/func_0068d210.c` | keyword |
| 0x006E3150 | core | - | `src/mw4mercs/text/func_006E3150.c` | keyword |
| 0x006E3190 | core | - | `src/mw4mercs/text/func_006E3190.c` | keyword |
| 0x006E31C0 | core | - | `src/mw4mercs/text/func_006E31C0.c` | keyword |
| 0x006E3AEC | core | - | `src/mw4mercs/text/func_006E3AEC.c` | keyword |
| 0x006E3ED0 | core | - | `src/mw4mercs/text/func_006E3ED0.c` | keyword |
| 0x006E4BBE | core | - | `src/mw4mercs/text/func_006e4bbe.c` | keyword |
| 0x006E6D80 | core | 544 | `src/mw4mercs/text/func_006e6d80.c` | keyword |
| 0x0070012C | core | - | `src/mw4mercs/text/func_0070012C.c` | keyword |
| 0x00700480 | core | 56 | `src/mw4mercs/text/func_00700480.c` | keyword |
| 0x007005D0 | core | 107 | `src/mw4mercs/text/func_007005d0.c` | keyword |
| 0x00706D80 | core | - | `src/mw4mercs/text/func_00706D80.c` | keyword |
| 0x00708B40 | core | 218 | `src/mw4mercs/text/func_00708b40.c` | keyword |
| 0x0070CEB0 | core | 396 | `src/mw4mercs/text/func_0070ceb0.c` | keyword |
| 0x0070D2F0 | core | 114 | `src/mw4mercs/text/func_0070d2f0.c` | keyword |
| 0x0070DD00 | core | 163 | `src/mw4mercs/text/func_0070dd00.c` | keyword |
| 0x007102ED | core | - | `src/mw4mercs/text/func_007102ED.c` | keyword |
| 0x0071DC90 | core | 316 | `src/mw4mercs/text/func_0071dc90.c` | keyword |
| 0x0072DACC | core | - | `src/mw4mercs/text/func_0072DACC.c` | keyword |
| 0x00730990 | core | 2853 | `src/mw4mercs/text/func_00730990.c` | keyword |
| 0x00731520 | core | 81 | `src/mw4mercs/text/func_00731520.c` | keyword |
| 0x007330E0 | core | 353 | `src/mw4mercs/text/func_007330E0.c` | keyword |
| 0x007368D0 | core | 619 | `src/mw4mercs/text/func_007368d0.c` | keyword |
| 0x00736B40 | core | 71 | `src/mw4mercs/text/func_00736b40.c` | keyword |
| 0x00737310 | core | - | `src/mw4mercs/text/func_00737310.c` | keyword |
| 0x00737D60 | core | 3072 | `src/mw4mercs/text/func_00737d60.c` | keyword |
| 0x00739B80 | core | - | `src/mw4mercs/text/func_00739B80.c` | keyword |
| 0x00739BA0 | core | - | `src/mw4mercs/text/func_00739BA0.c` | keyword |
| 0x00739BC0 | core | - | `src/mw4mercs/text/func_00739BC0.c` | keyword |
| 0x00739BE0 | core | 17 | `src/mw4mercs/text/func_00739be0.c` | keyword |
| 0x00739C30 | core | 15 | `src/mw4mercs/text/func_00739c30.c` | keyword |
| 0x0073A470 | core | - | `src/mw4mercs/text/func_0073A470.c` | keyword |
| 0x00755230 | core | 68 | `src/mw4mercs/text/func_00755230.c` | keyword |
| 0x00759930 | core | - | `src/mw4mercs/text/func_00759930.c` | keyword |
| 0x00759AB0 | core | 142 | `src/mw4mercs/text/func_00759ab0.c` | keyword |
| 0x0075AA10 | core | 529 | `src/mw4mercs/text/func_0075AA10.c` | keyword |
| 0x0075AC30 | core | 71 | `src/mw4mercs/text/func_0075ac30.c` | keyword |
| 0x0075AF00 | core | 317 | `src/mw4mercs/text/func_0075af00.c` | keyword |
| 0x0075CB40 | core | 96 | `src/mw4mercs/text/func_0075CB40.c` | keyword |

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00494050 | core | 76 | `src/mw4mercs/text/func_00494050.c` | keyword |
| 0x004CBF20 | core | 307 | `src/mw4mercs/text/func_004cbf20.c` | keyword |
| 0x00536060 | core | 298 | `src/mw4mercs/text/func_00536060.c` | keyword |
| 0x0064C620 | core | 244 | `src/mw4mercs/text/func_0064c620.c` | keyword |
| 0x006FCDD0 | core | 111 | `src/mw4mercs/text/func_006fcdd0.c` | keyword |
| 0x00708AE0 | core | 27 | `src/mw4mercs/text/func_00708ae0.c` | keyword |
| 0x007215A0 | core | 258 | `src/mw4mercs/text/func_007215a0.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/MW4Mercs_exe.md)
