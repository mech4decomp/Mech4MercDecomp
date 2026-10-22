# Master Oracle Source Index

> **Start here:** [subsystems/README.md](subsystems/README.md) explains how each subsystem works, lists its key entry points, and gives the per-subsystem VA inventory. Shared VAs are listed once in [subsystems/shared.md](subsystems/shared.md).

> The per-binary tables below are exhaustive VA indexes kept for lookup; they are not the best starting point for understanding a subsystem. Every VA appears under exactly one subsystem/detail section; `role` is core/shared/boundary/data/unknown and `confidence`/`reason` record the evidence.

> Machine-readable table: `build/master_index.csv` (va, binary, section, source, size, subsystem, detail, role, confidence, reason). Boundary table: `build/subsystem_seams.csv`; surface labels: `docs/subsystem_surface.csv`.

## Exhaustive per-VA indexes

| Binary | VAs | Index |
|--------|-----|-------|
| MW4Mercs.exe | 13622 | [open](va_index/MW4Mercs_exe.md) |
| GunDll.dll | 3213 | [open](va_index/GunDll_dll.md) |
| MW4Stats.dll | 1091 | [open](va_index/MW4Stats_dll.md) |
| blade.dll | 739 | [open](va_index/blade_dll.md) |
| Language.dll | 104 | [open](va_index/Language_dll.md) |
| MissionLang_MERCS.dll | 69 | [open](va_index/MissionLang_MERCS_dll.md) |
| ZlogLib.dll | 33 | [open](va_index/ZlogLib_dll.md) |

## Common references

- [Subsystem documentation](subsystems/README.md) - how each system works and its VA inventory.
- [Shared VAs](subsystems/shared.md) - helpers used by more than one subsystem.
- [Subsystem catalog](SUBSYSTEM_CATALOG.md) - stable entry point.
- [Subsystem seams](SUBSYSTEM_SEAMS.md) - outbound boundary calls and cross-system dependencies.

## Regenerate

`python tools/gen_master_index.py` then `python tools/gen_subsystem_docs.py`
