# MechWarrior 4: Mercenaries - Oracle Documentation

This site documents the **oracle recompilation**: a byte-identical reproduction
of `MW4Mercs.exe` and the six code-bearing game DLLs, produced by transcribing
the original machine code into MSVC6 inline assembly.

The target is the PR1 `MW4Mercs.exe` build identified by the SHA-256 in
`reference/SHA256.txt`; see [the build guide](BUILD.md#provenance). The
repository contains the transcribed source, the generated data sections,
build/verification tooling, and research notes. It does **not** contain the
original game executables, DLLs, art, audio, or maps. The default build does
not need the game binaries.

## Start here

| Document | Purpose |
|---|---|
| [Architecture](ARCHITECTURE.md) | How the oracle recompilation is structured |
| [Build guide](BUILD.md) | Prerequisites, build order, module builds, troubleshooting |
| [Verification](VERIFICATION.md) | Byte gates, diff/no-mask verification, hashes |
| [Subsystem and module guides](subsystems/README.md) | How each EXE subsystem and game DLL works, with key entry points |
| [Shared VAs](subsystems/shared.md) | Helpers used by more than one subsystem |
| [Oracle status](ORACLE_STATUS.md) | Target inventory and completeness status |

## Reference

| Document | Purpose |
|---|---|
| [Master index](MASTER_INDEX.md) | Exhaustive per-VA subsystem indexes |
| [Subsystem seams](SUBSYSTEM_SEAMS.md) | Boundary calls and cross-system dependencies |
| [Data annotation](data_annotation.md) | EXE data-section annotation index |
| [Module data annotation](module_data_annotation/blade.md) | Per-module data annotation indexes |
| [Editor tools](editor_tools/README.md) | Shipped editor/config tool RE records |
| [Game versioning](GAME_VERSIONING.md) | Build/version identity and multiplayer version gates |

## Project

| Document | Purpose |
|---|---|
| [FAQ](FAQ.md) | Common questions |
| [Legal](LEGAL.md) | Scope, copyright, and takedown information |
| [Contributing](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/CONTRIBUTING.md) | How to submit documentation corrections |
| [Changelog](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/CHANGELOG.md) | Repository changes |

This site is built from [`docs/`](https://github.com/mech4decomp/Mech4MercDecomp/tree/main/docs)
with MkDocs and published through GitHub Pages. Edit the Markdown in a pull
request; maintainers publish the merged changes with `tools/publish_docs.ps1`.
