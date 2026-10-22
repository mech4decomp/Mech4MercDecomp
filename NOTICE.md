# Legal notice

This repository contains a disassembly-based, byte-identical recompilation of
MechWarrior 4: Mercenaries for study, preservation, and interoperability
purposes.

- **No game binaries or assets are hosted here.** The repository contains no
  `MW4Mercs.exe`, no game DLLs, no art, audio, maps, missions, or other game
  content. The reference binaries are supplied by the user and are ignored by
  git.
- **You must own the game.** Building or verifying this project requires a
  legitimate copy of MechWarrior 4: Mercenaries. The canonical reference
  hashes are listed in `reference/SHA256.txt`.
- **Data sections are generated locally.** The oracle's `.rdata`, `.data`,
  `.rsrc`, and `.txt2` byte runs are intentionally not committed. They are
  regenerated from the user's own reference by the build tools.
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
