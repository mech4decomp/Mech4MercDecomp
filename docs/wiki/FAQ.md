# FAQ

**Is this the original source?**
No. It is disassembly transcription in MSVC6 inline assembly; it recompiles to
the original bytes.

**Why not clean C++?**
Byte identity is the gate. Reconstructed C++ would compile to different bytes,
so the oracle transcribes the original machine code.

**Does it include the game or assets?**
No. Supply your own reference binaries and verify them against
`reference/SHA256.txt`.

**Why are data sections missing, but in-`.text` tables included?**
In-`.text` tables (switch/jump/pointer tables) are part of the function layout
and are required to reproduce the `.text` bytes; they are small and
code-structural. `.rdata`/`.data`/`.rsrc`/`.txt2` are whole PE data sections
containing bulk game data, strings, resources, and the SafeDisc leftover.
Committing them would redistribute a large part of the original binary; they
are regenerated from your reference by `nmake data`.

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

**Does the build need an external analysis database?**
No. The committed sources and function inventories are sufficient.
