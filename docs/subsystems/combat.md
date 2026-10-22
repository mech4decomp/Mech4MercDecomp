# Combat Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 141 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

In-mission weapon fire, launch/guidance, hit resolution, and damage application.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Shared VAs](#shared-vas)
- [Boundary VAs](#boundary-vas)
- [Related](#related)

## How it works

The fire path starts with weapon eligibility and the launch transform, then missile/projectile guidance and hit tests. Damage is applied to gameplay state; the AI `combat` detail only decides when to engage.

The main fire/damage cluster is around 0x005523B0; 0x0058D930 is a representative damage-application entry. Combat is a boundary-heavy subsystem: it reads gameplay state and emits render effects.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x005523B0 | fire-damage | weapon fire/damage cluster |
| 0x0058D930 | fire-damage | damage application |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| fire-damage | 141 | Weapon fire eligibility, launch transform, missile/guidance, hit resolution, and damage. |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### fire-damage

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004E6480 | core | 159 | `src/mw4mercs/text/func_004e6480.c` | keyword |
| 0x004E6520 | core | 526 | `src/mw4mercs/text/func_004e6520.c` | keyword |
| 0x004E69E0 | core | 59 | `src/mw4mercs/text/func_004e69e0.c` | keyword |
| 0x004E6A50 | core | 564 | `src/mw4mercs/text/func_004e6a50.c` | keyword |
| 0x004E7D60 | core | 151 | `src/mw4mercs/text/func_004e7d60.c` | keyword |
| 0x004E7E00 | core | 59 | `src/mw4mercs/text/func_004e7e00.c` | keyword |
| 0x005404A0 | core | 133 | `src/mw4mercs/text/func_005404a0.c` | keyword |
| 0x00540530 | core | 133 | `src/mw4mercs/text/func_00540530.c` | keyword |
| 0x005523B0 | core | 743 | `src/mw4mercs/text/func_005523B0.c` | surface |
| 0x005526A0 | core | 218 | `src/mw4mercs/text/func_005526A0.c` | surface |
| 0x00552780 | core | 114 | `src/mw4mercs/text/func_00552780.c` | surface |
| 0x00553BC0 | core | 149 | `src/mw4mercs/text/func_00553bc0.c` | surface |
| 0x00553D20 | core | 134 | `src/mw4mercs/text/func_00553d20.c` | surface |
| 0x00553DB0 | core | 358 | `src/mw4mercs/text/func_00553db0.c` | surface |
| 0x00553F20 | core | 111 | `src/mw4mercs/text/func_00553f20.c` | surface |
| 0x00553F90 | core | 552 | `src/mw4mercs/text/func_00553f90.c` | surface |
| 0x005541C0 | core | 695 | `src/mw4mercs/text/func_005541c0.c` | surface |
| 0x00554B90 | core | 90 | `src/mw4mercs/text/func_00554b90.c` | surface |
| 0x00554BF0 | core | 124 | `src/mw4mercs/text/func_00554bf0.c` | surface |
| 0x00554C70 | core | 124 | `src/mw4mercs/text/func_00554c70.c` | surface |
| 0x00554CF0 | core | 124 | `src/mw4mercs/text/func_00554cf0.c` | surface |
| 0x005553D0 | core | 418 | `src/mw4mercs/text/func_005553d0.c` | surface |
| 0x00555590 | core | 414 | `src/mw4mercs/text/func_00555590.c` | surface |
| 0x00555E30 | core | 117 | `src/mw4mercs/text/func_00555e30.c` | surface |
| 0x00556D80 | core | 117 | `src/mw4mercs/text/func_00556d80.c` | surface |
| 0x00564CA0 | core | 1126 | `src/mw4mercs/text/func_00564ca0.c` | keyword |
| 0x00565110 | core | 1285 | `src/mw4mercs/text/func_00565110.c` | keyword |
| 0x005878CB | core | - | `src/mw4mercs/text/func_005878CB.c` | keyword |
| 0x005A3890 | core | 447 | `src/mw4mercs/text/func_005a3890.c` | keyword |
| 0x005A8EF0 | core | 158 | `src/mw4mercs/text/func_005a8ef0.c` | keyword |
| 0x005E3E50 | core | 358 | `src/mw4mercs/text/func_005e3e50.c` | keyword |
| 0x005E3FC0 | core | 39 | `src/mw4mercs/text/func_005e3fc0.c` | keyword |
| 0x005E4080 | core | 608 | `src/mw4mercs/text/func_005e4080.c` | surface |
| 0x005E43D0 | core | 40 | `src/mw4mercs/text/func_005e43d0.c` | keyword |
| 0x005E45E0 | core | 1002 | `src/mw4mercs/text/func_005e45e0.c` | surface |
| 0x005E5700 | core | 426 | `src/mw4mercs/text/func_005e5700.c` | surface |
| 0x005E58B0 | core | 248 | `src/mw4mercs/text/func_005e58b0.c` | surface |
| 0x005E59B0 | core | 153 | `src/mw4mercs/text/func_005e59b0.c` | surface |
| 0x005E5A50 | core | 153 | `src/mw4mercs/text/func_005e5a50.c` | surface |
| 0x005E5AF0 | core | 220 | `src/mw4mercs/text/func_005e5af0.c` | surface |
| 0x005E5BD0 | core | 51 | `src/mw4mercs/text/func_005e5bd0.c` | surface |
| 0x005EF680 | core | 93 | `src/mw4mercs/text/func_005ef680.c` | surface |
| 0x0061ACF0 | core | 6 | `src/mw4mercs/text/func_0061acf0.c` | surface |
| 0x0061AD00 | core | 14 | `src/mw4mercs/text/func_0061ad00.c` | surface |
| 0x0061AD10 | core | 11 | `src/mw4mercs/text/func_0061ad10.c` | surface |
| 0x0061AD20 | core | 15 | `src/mw4mercs/text/func_0061ad20.c` | surface |
| 0x0063C520 | core | - | `src/mw4mercs/text/func_0063C520.c` | keyword |
| 0x00641880 | core | - | `src/mw4mercs/text/func_00641880.c` | keyword |
| 0x006747E0 | core | 175 | `src/mw4mercs/text/func_006747e0.c` | surface |

## Shared VAs

This subsystem references **71 shared VAs**. They are described once in [shared.md](shared.md#combat); the table below shows a few representative entries.

| VA | Detail | Source |
|----|--------|--------|
| 0x00559BE0 | fire-damage | `src/mw4mercs/text/func_00559be0.c` |
| 0x00558AF0 | fire-damage | `src/mw4mercs/text/func_00558AF0.c` |
| 0x00627D40 | fire-damage | `src/mw4mercs/text/func_00627d40.c` |
| 0x0048C160 | fire-damage | `src/mw4mercs/text/func_0048c160.c` |
| 0x00628000 | fire-damage | `src/mw4mercs/text/func_00628000.c` |
| 0x0063FBC0 | fire-damage | `src/mw4mercs/text/func_0063fbc0.c` |
| 0x006283B0 | fire-damage | `src/mw4mercs/text/func_006283b0.c` |
| 0x00621FD0 | fire-damage | `src/mw4mercs/text/func_00621fd0.c` |

## Boundary VAs

This subsystem has **21 outbound boundary VAs**. The full table is in [SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md); representative entries are below.

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

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
