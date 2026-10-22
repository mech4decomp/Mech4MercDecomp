# MechWarrior 4: Mercenaries — Oracle Recompilation

A complete, byte-identical recompilation of the MechWarrior 4: Mercenaries
binaries, produced by transcribing the original machine code into MSVC6 inline
assembly and verifying every function against the reference bytes.

This repository is the **oracle recompilation**: the byte-matching
decompilation source, its build/verification tooling, and the research
documentation. It is not a rebuilt original-source tree.

## What this is

- A source-level, byte-identical reproduction of:
  - `MW4Mercs.exe`
  - `blade.dll`, `GunDll.dll`, `MW4Stats.dll`, `ZlogLib.dll`,
    `Language.dll`, `MissionLang_MERCS.dll`
- 18,483 transcribed `func_*.c` sources (plus in-`.text` data tables).
- A reference-free image assembler and a per-function diff / no-mask verifier.
- Documentation of the binary layout, data annotations, editor tools, and
  verification methodology.

## What this is not

- **Not the original source code.** Every function is a disassembly
  transcription, not a reconstructed C++ implementation.
- **Not a game distribution.** No original executables, DLLs, art, audio, or
  maps are included. The repository does include transcribed code and
  reference-derived data sections.
- **Not accepting code changes.** The oracle is complete and frozen; only
  documentation corrections are accepted.

## Status

| Target | Function sources | Status |
|---|---:|---|
| `MW4Mercs.exe` | 13,292 | byte-identical |
| `GunDll.dll` | 3,175 | byte-identical |
| `MW4Stats.dll` | 1,085 | byte-identical |
| `blade.dll` | 733 | byte-identical |
| `Language.dll` | 100 | byte-identical |
| `MissionLang_MERCS.dll` | 67 | byte-identical |
| `ZlogLib.dll` | 31 | byte-identical |

The canonical hashes are in [`reference/SHA256.txt`](reference/SHA256.txt).
`ScriptStrings_MERCS.dll` is a resource-only DLL with no code; it is not an
oracle build target.

## Quick start

Requirements: Windows, Microsoft Visual C++ 6.0 (SP6), the DirectX 8.1 SDK,
and Python 3.8+. The reference binaries are **not** required for the default
build; the generated data sources and `.bin` artifacts are committed.

```bat
call tools\env.bat
nmake objs
nmake data-objs
nmake exe
```

For a module:

```bat
nmake dll-all MOD=gundll
```

The full build order, troubleshooting, and per-module commands are in
[`docs/BUILD.md`](docs/BUILD.md). The default build is reference-free. The
reference binaries are only needed for optional regeneration
(`nmake data`, `nmake init`, `nmake dll-init`) and optional byte diffs
(`nmake exe`, `nmake dll`, `nmake diff`).

## Verification

`nmake exe` and `nmake dll-all MOD=...` print a byte-for-byte diff when the
reference is present. `nmake verify` checks the built images against the
canonical hashes without needing the reference. Optional per-function gates
(they need the reference):

```bat
nmake one SRC=src\mw4mercs\text\func_00401000.c
nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

See [`docs/VERIFICATION.md`](docs/VERIFICATION.md) for the methodology.

## Documentation

- [`docs/ARCHITECTURE.md`](docs/ARCHITECTURE.md) — how the oracle works
- [`docs/BUILD.md`](docs/BUILD.md) — prerequisites and build guide
- [`docs/VERIFICATION.md`](docs/VERIFICATION.md) — byte gates and tooling
- [`docs/ORACLE_STATUS.md`](docs/ORACLE_STATUS.md) — target inventory
- [`docs/subsystems/`](docs/subsystems/) — how each subsystem works and its key entry points
- [`docs/MASTER_INDEX.md`](docs/MASTER_INDEX.md) — exhaustive per-VA indexes
- [`docs/SUBSYSTEM_SEAMS.md`](docs/SUBSYSTEM_SEAMS.md) — boundary and cross-system seams
- [`docs/data_annotation.md`](docs/data_annotation.md) — data-section annotations
- [`docs/editor_tools/`](docs/editor_tools/) — shipped editor/config tools
- [`docs/FAQ.md`](docs/FAQ.md) — common questions

The documentation site is generated from `docs/` with MkDocs and published at
**https://mech4decomp.github.io/Mech4MercDecomp/**.

## Contributing

Documentation corrections are welcome. Code changes are not accepted: the
oracle is frozen to preserve byte identity. Please read
[`CONTRIBUTING.md`](CONTRIBUTING.md) before opening an issue or pull request.

## Legal

This project is for educational and interoperability purposes. It contains no
original game executables, DLLs, art, audio, or maps; it does include
transcribed code and derived data sections. MechWarrior, MechWarrior 4, and
Mercenaries are trademarks of their respective owners. This project is not
affiliated with or endorsed by any rights holder. See [`NOTICE.md`](NOTICE.md)
and [`LICENSE`](LICENSE).
