# FAQ

**Is this the original source code?**
No. It is a disassembly transcription: every function is `__declspec(naked)`
MSVC6 inline assembly that recompiles to the original bytes. It is not a
source reconstruction.

**Why not write clean C++?**
Byte identity is the acceptance criterion. Reconstructed C++ would compile to
different bytes, so the oracle transcribes the original machine code instead.

**Does this repository include the game or its assets?**
No. You must own the game and supply the reference binaries. No art, audio,
maps, missions, or other assets are hosted here.

**Why are the data sections missing, but in-`.text` tables included?**
In-`.text` tables (switch/jump/pointer tables) are part of the function layout
and are required to reproduce the `.text` bytes; they are small and
code-structural. `.rdata`/`.data`/`.rsrc`/`.txt2` are whole PE data sections
containing bulk game data, strings, resources, and the SafeDisc leftover. They
are not needed as source, and committing them would redistribute a large part
of the original binary. `nmake data` regenerates them from your own reference,
so the build remains fully reproducible.

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

**Does the build need an external analysis database?**
No. The build and verification pipeline uses the committed sources, the
committed function inventories in `reference/functions/`, and the reference
binaries.
