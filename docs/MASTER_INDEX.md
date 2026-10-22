# Master Oracle Source Index

One per-VA subsystem index per binary (EXE + each module). Every VA appears
under exactly one subsystem/detail section (no duplicates). `role` is
`core`, `shared`, `boundary`, `data`, or `unknown`; `confidence` and `evidence`
record how the classification was derived.

These are static documentation snapshots of the oracle binaries. Data-section
source paths refer to files generated locally from your own reference
(`nmake data` / `nmake module-data`); those files are not committed. See
[`BUILD.md`](BUILD.md).

## Per-binary subsystem indexes

| Binary | VAs | Index |
|--------|-----|-------|
| MW4Mercs.exe | 13622 | [open](master_index/MW4Mercs_exe.md) |
| GunDll.dll | 3213 | [open](master_index/GunDll_dll.md) |
| MW4Stats.dll | 1091 | [open](master_index/MW4Stats_dll.md) |
| blade.dll | 739 | [open](master_index/blade_dll.md) |
| Language.dll | 104 | [open](master_index/Language_dll.md) |
| MissionLang_MERCS.dll | 69 | [open](master_index/MissionLang_MERCS_dll.md) |
| ZlogLib.dll | 33 | [open](master_index/ZlogLib_dll.md) |

## System map

- [Subsystem catalog](SUBSYSTEM_CATALOG.md) - system descriptions, details, and counts.
- [Subsystem seams](SUBSYSTEM_SEAMS.md) - boundary and shared functions per system.
- [`subsystem_surface.csv`](subsystem_surface.csv) - committed surface labels used by the seam tables.

## Updating

These files are documentation. Corrections with disassembly/hex evidence are
welcome; see [`CONTRIBUTING.md`](../CONTRIBUTING.md).
