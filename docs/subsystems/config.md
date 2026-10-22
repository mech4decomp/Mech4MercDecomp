# Config Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 13 | **Exhaustive index:** [MW4Mercs.exe](../master_index/MW4Mercs_exe.md)

options.ini/config-file framework, option registry, and persistence.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The option registry and options.ini load/save path sit at 0x00406ED7-0x00407BD8; the generic INI tree and section/key lookup are at 0x0040DCA0-0x0040E4A0.

Config feeds input bindings and render/gameplay settings, including LOD bias and display options.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00406ED7-0x00407BD8 | options | options.ini registry/load/save |
| 0x0040DCA0-0x0040E4A0 | ini | generic INI tree |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| options | 8 | options.ini load/save, option registry, and LOD bias persistence. |
| ini | 5 | Generic config-file tree, section/key lookup, and serialization. |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### options

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x00401D10 | core | 301 | `src/mw4mercs/text/func_00401d10.c` | keyword |
| 0x00402F90 | core | 956 | `src/mw4mercs/text/func_00402f90.c` | keyword |
| 0x00403350 | core | 1086 | `src/mw4mercs/text/func_00403350.c` | keyword |
| 0x00404620 | core | 389 | `src/mw4mercs/text/func_00404620.c` | keyword |
| 0x00406ED7 | core | - | `src/mw4mercs/text/func_00406ed7.c` | range |
| 0x0050C9D0 | core | 398 | `src/mw4mercs/text/func_0050c9d0.c` | keyword |
| 0x005290A0 | core | 966 | `src/mw4mercs/text/func_005290a0.c` | keyword |
| 0x006ED690 | core | 643 | `src/mw4mercs/text/func_006ed690.c` | keyword |

### ini

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0040DDB0 | core | 99 | `src/mw4mercs/text/func_0040ddb0.c` | range |
| 0x0040DEB8 | core | - | `src/mw4mercs/text/func_0040deb8.c` | range |
| 0x00560CFF | core | - | `src/mw4mercs/text/func_00560CFF.c` | keyword |
| 0x0067B020 | core | 225 | `src/mw4mercs/text/func_0067b020.c` | keyword |
| 0x0075C990 | core | 201 | `src/mw4mercs/text/func_0075c990.c` | keyword |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/MW4Mercs_exe.md)
