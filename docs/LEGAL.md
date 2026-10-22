# Legal and scope

## Purpose

This is an educational and interoperability-focused study of the
MechWarrior 4: Mercenaries binaries. It records the machine code as
byte-exact, annotated MSVC6 assembly and provides the tooling to rebuild and
verify the canonical images.

It is **not** the original source code and is not a game distribution.

## What is not included

- No `MW4Mercs.exe` or game DLLs.
- No art, audio, maps, missions, localization data, or other game assets.
- No extracted `.rdata`/`.data`/`.rsrc`/`.txt2` byte dumps.
- No SafeDisc/DRM implementation.
- No fork/mod/hook implementation.

The non-`.text` sections are generated locally from the user's own reference by
`nmake data` / `nmake module-data`. The generated files are gitignored.

## User responsibility

You must own a legitimate copy of the game and comply with its license/EULA.
The reference binaries are not distributed here. Verify them against
`reference/SHA256.txt`.

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
