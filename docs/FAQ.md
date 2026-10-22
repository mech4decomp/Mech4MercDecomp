# FAQ

**Is this the original source code?**
No. It is a disassembly transcription: every function is `__declspec(naked)`
MSVC6 inline assembly that recompiles to the original bytes. It is not a
source reconstruction.

**Why not write clean C++?**
Byte identity is the acceptance criterion. Reconstructed C++ would compile to
different bytes, so the oracle transcribes the original machine code instead.

**Does this repository include the game or its assets?**
No original executables, DLLs, art, audio, or maps are included. The repository
does include transcribed code and reference-derived data sections, so the
default build is self-contained.

**Do I need to supply the game EXE or DLLs?**
No. The generated non-`.text` data sources and the reference-derived `.bin`
artifacts are committed. You can build and verify the oracle without owning the
game. The reference binaries are optional and are needed only to regenerate
data/artifacts or to run byte diffs. See [the build guide](BUILD.md).

**Why are the data sections included now?**
The earlier layout regenerated them from a user-supplied reference. To make the
repository buildable as-is, the byte-exact data sources and artifacts are now
committed. `nmake data` and `nmake init` remain available as the optional
"how they were created" regeneration path.

**Which game version was used as the baseline?**
The official Microsoft **MechWarrior 4: Mercenaries Point Release 1 (PR1)**
build, file version `50.07.01.2105`, EXE SHA-256
`deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f`. This is
provenance; you do not need the file to build. Community builds such as MekTek
3.1 are different product builds and are not the baseline.

**Can I build a playable EXE?**
The build produces a byte-identical `MW4Mercs.exe` from the committed sources
and artifacts. You can deploy it with `nmake deploy` if your install is in the
expected location.

**Why MSVC6?**
The target binaries were built with MSVC6. The inline-assembly encoding and
the final image layout depend on that toolchain.

**Why are some functions missing?**
A few EXE IAT jump thunks and the `.txt2` SafeDisc leftover are out of scope.
They are listed in `src/mw4mercs/artifacts/extra_functions.csv`.

**How do I know the build is correct?**
`nmake verify` checks the built images against the canonical SHA-256 hashes
without needing the reference. `nmake exe`, `nmake dll-all MOD=...`, and the
per-function checks additionally compare bytes when the reference is present.
See `docs/VERIFICATION.md`.

**Can I contribute code?**
No. The oracle is frozen. Documentation corrections are welcome; see
`CONTRIBUTING.md`.

**Does the build need an external analysis database?**
No. The build uses the committed sources, the committed function inventories
in `reference/functions/`, and the committed data/artifacts. The reference
binaries are optional.
