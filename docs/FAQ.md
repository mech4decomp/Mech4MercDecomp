# FAQ

**Is this the original source code?**
No. It is a disassembly transcription: every function is `__declspec(naked)`
MSVC6 inline assembly that recompiles to the original bytes. It is not a
source reconstruction.

**Why not write clean C++?**
Byte identity is the acceptance criterion. Reconstructed C++ would compile to
different bytes. Clean reimplementations belong to a separate fork/mod project.

**Does this repository include the game or its assets?**
No. You must own the game and supply the reference binaries. No art, audio,
maps, missions, or other assets are hosted here.

**Why are the data sections missing?**
The `.rdata`/`.data`/`.rsrc`/`.txt2` byte runs are original game data and are
intentionally not committed. `nmake data` generates them from your own
reference. The build remains fully reproducible.

**Can I build a playable EXE?**
If you own the game and supply the canonical reference, the build produces a
byte-identical `MW4Mercs.exe`. You can deploy it with `nmake deploy` if your
install is in the expected location.

**Why MSVC6?**
The target binaries were built with MSVC6. The inline-assembly encoding and
the final image layout depend on that toolchain.

**Why are some functions missing?**
A few EXE IAT jump thunks and the `.txt2` SafeDisc leftover are out of scope.
They are listed in `src/mw4mercs/artifacts/extra_functions.csv`.

**How do I know the build is correct?**
`nmake exe`, `nmake dll-all MOD=...`, and `nmake verify` check byte identity
and the canonical SHA-256 hashes. See `docs/VERIFICATION.md`.

**Can I contribute code?**
No. The oracle is frozen. Documentation corrections are welcome; see
`CONTRIBUTING.md`.

**Can I use this for my own fork/mod?**
This repository is the oracle source of truth. Fork/mod work is a separate
project; see `LICENSE` and `NOTICE.md` for the licensing position.

**Why is the fork/mod work not here?**
The goal is a clean public oracle that others can use as a reference. Fork
code, hook implementations, and design plans are intentionally kept separate.

**Does the build need Ghidra?**
No. Ghidra is optional for RE and for the optional analysis tools. The build
and verification pipeline uses the committed source, metadata, and the
reference binaries.
