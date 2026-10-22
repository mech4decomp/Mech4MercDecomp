# Legal notice

This repository contains a disassembly-based, byte-identical recompilation of
MechWarrior 4: Mercenaries for study, preservation, and interoperability
purposes.

- **No original game binaries are hosted here.** The repository contains no
  `MW4Mercs.exe`, no game DLLs, and no art, audio, maps, or missions. The
  reference binaries are optional and are ignored by git.
- **The default build is self-contained.** Building and verifying use the
  committed code, data sections, and artifacts; you do not need to own the
  game. The canonical reference hashes are listed in `reference/SHA256.txt`.
- **Data sections are included.** The oracle's `.rdata`, `.data`, `.rsrc`, and
  `.txt2` byte runs are committed so the build is reproducible without a
  reference binary. `nmake data` / `nmake init` remain the optional
  regeneration path.
- **No affiliation.** This project is not affiliated with, sponsored by, or
  endorsed by Microsoft, FASA, Cyberlore, or any other rights holder.
- **Trademarks.** MechWarrior, MechWarrior 4, Mercenaries, and related marks
  are the property of their respective owners.
- **No warranty.** The source and tooling are provided "as is", without
  warranty of any kind. Use at your own risk.
- **Educational/interoperability use.** The recompiled source is a study of
  the original binary's behavior. It is not a license to the original game
  code or assets.

If you are a rights holder and believe this repository contains material that
should not be published, please open an issue or contact the maintainers
through the repository so the material can be reviewed and removed promptly.
