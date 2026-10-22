# Master Oracle Source Index

> **Start here:** [subsystems/README.md](subsystems/README.md) explains how each
> subsystem works, lists its key entry points, and gives the per-subsystem VA
> inventory. Shared VAs are listed once in
> [subsystems/shared.md](subsystems/shared.md).

> The per-binary tables below are exhaustive VA indexes kept for lookup; they
> are not the best starting point for understanding a subsystem. Every VA
> appears under exactly one subsystem/detail section; `role` is
> core/shared/boundary/data/unknown and `confidence`/`evidence` record how the
> classification was derived.

These are static documentation snapshots of the oracle binaries. Data-section
source paths refer to files generated locally from your own reference
(`nmake data` / `nmake module-data`); those files are not committed. See
[`BUILD.md`](BUILD.md).

## Exhaustive per-VA indexes

| Binary | VAs | Index |
|--------|-----|-------|
| MW4Mercs.exe | 13622 | [open](master_index/MW4Mercs_exe.md) |
| GunDll.dll | 3213 | [open](master_index/GunDll_dll.md) |
| MW4Stats.dll | 1091 | [open](master_index/MW4Stats_dll.md) |
| blade.dll | 739 | [open](master_index/blade_dll.md) |
| Language.dll | 104 | [open](master_index/Language_dll.md) |
| MissionLang_MERCS.dll | 69 | [open](master_index/MissionLang_MERCS_dll.md) |
| ZlogLib.dll | 33 | [open](master_index/ZlogLib_dll.md) |

## Common references

- [Subsystem documentation](subsystems/README.md) - how each system works and
  its VA inventory.
- [Shared VAs](subsystems/shared.md) - helpers used by more than one subsystem.
- [Subsystem catalog](SUBSYSTEM_CATALOG.md) - stable entry point.
- [Subsystem seams](SUBSYSTEM_SEAMS.md) - outbound boundary calls and
  cross-system dependencies.
