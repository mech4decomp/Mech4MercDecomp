# Legal and scope

## Purpose

This is an educational and interoperability-focused study of the
MechWarrior 4: Mercenaries binaries. It records the machine code as
byte-exact, annotated MSVC6 assembly and provides the tooling to rebuild and
verify the canonical images.

It is **not** the original source code and is not a game distribution.

## What is included

- Transcribed code (`func_*.c`) and in-`.text` data tables.
- Byte-exact non-`.text` data runs (`.rdata`, `.data`, `.rsrc`, `.txt2`) and
  the metadata artifacts needed to assemble the images.

These are derived from the original game and are included so the default
build is self-contained.

## What is not included

- No original `MW4Mercs.exe` or game DLLs.
- No art, audio, maps, missions, localization data, or other standalone game
  assets.
- No SafeDisc/DRM implementation.

The reference binaries are optional. They are not distributed here and are
only needed for regeneration or byte-diff checks; verify them against
`reference/SHA256.txt`.

## User responsibility

You do not need to own the game to build the oracle from the committed
sources and artifacts. If you supply reference binaries for regeneration or
verification, you must own a legitimate copy of the game and comply with its
license/EULA.

## Copyright and trademarks

Rights in the original MechWarrior 4: Mercenaries code and assets remain with
their respective owners. MechWarrior, MechWarrior 4, Mercenaries, and related
marks are trademarks of their respective owners. This project is not
affiliated with, sponsored by, or endorsed by any rights holder.

## License

- Documentation: CC BY 4.0. See `LICENSE`.
- Recompiled source: no license is granted; provided for educational and
  interoperability purposes only. See `NOTICE.md`.

## Takedown / corrections

If you are a rights holder and believe material here should not be published,
please open an issue or contact the maintainers through the repository. The
maintainers will review and remove material promptly. Corrections to factual
claims are welcome with evidence.
