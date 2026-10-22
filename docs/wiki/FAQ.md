# FAQ

**Is this the original source?**
No. It is disassembly transcription in MSVC6 inline assembly; it recompiles to
the original bytes.

**Why not clean C++?**
Byte identity is the gate. Clean reimplementations belong to a separate
fork/mod project.

**Does it include the game or assets?**
No. Supply your own reference binaries and verify them against
`reference/SHA256.txt`.

**Why are data sections missing?**
They are original game data and are not committed. `nmake data` regenerates
them from your reference.

**Can I build a playable EXE?**
Yes, if you own the game and supply the canonical reference.

**Why MSVC6?**
The target binaries were built with it; the inline assembly and image layout
depend on that toolchain.

**Are some functions missing?**
A few EXE IAT thunks and the `.txt2` SafeDisc leftover are out of scope. See
`src/mw4mercs/artifacts/extra_functions.csv`.

**Can I contribute code?**
No. Documentation corrections only.

**Does the build need Ghidra?**
No. Ghidra is optional for analysis.
