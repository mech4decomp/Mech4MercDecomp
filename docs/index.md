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

## Engine reference map

| I want to understand... | Read |
|---|---|
| How content is stored, mounted, and found | [Asset loading and formats](assets.md) and the [archive subsystem](subsystems/archive.md) |
| Map/terrain geometry, pages, lightmaps, water, sky | [Map and terrain formats](terrain_formats.md) and the [render subsystem](subsystems/render.md) |
| Mech skeletons, part meshes, clips, state machines | [Mech models and animation](mech_animation.md) |
| How a frame is assembled, lit, and drawn | [Scene construction and rendering](scene_rendering.md) and the [render subsystem](subsystems/render.md) |
| Every VA and subsystem classification | [Subsystem guides](subsystems/README.md) and the [master index](MASTER_INDEX.md) |

## Reference

| Document | Purpose |
|---|---|
| [Master index](MASTER_INDEX.md) | Exhaustive per-VA subsystem indexes |
| [Subsystem seams](SUBSYSTEM_SEAMS.md) | Boundary calls and cross-system dependencies |
| [Asset loading and formats](assets.md) | Archive namespace, map/mission/mech member locations, image and effect formats |
| [Map and terrain formats](terrain_formats.md) | Shipped map/terrain asset formats, page orientation, lightmaps, water, and sky |
| [Mech models and animation](mech_animation.md) | Skeleton, part meshes, `.mw4anim` clips, and `.animscript` state machine |
| [Scene construction and rendering](scene_rendering.md) | Scene graph, static objects, materials, lighting/fog, and draw submission |
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
