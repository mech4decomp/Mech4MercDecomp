# Scope and legal

## What this project is

- A byte-identical recompilation (oracle) of `MW4Mercs.exe` and six game DLLs.
- 18,483 transcribed `func_*.c` sources, plus in-`.text` data tables.
- Build/verification tooling and reference documentation.

## What it is not

- Not the original source code.
- Not a game distribution: no binaries, art, audio, maps, or assets.
- Not the fork/mod project. Fork work is separate.
- Not accepting code changes; documentation corrections only.

## Reference binaries

You must own a legitimate copy of the game and supply the reference binaries
yourself. They are ignored by git. Verify them against
[`reference/SHA256.txt`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/reference/SHA256.txt).

## Data sections

The `.rdata`/`.data`/`.rsrc`/`.txt2` byte runs are original game data and are
not committed. They are generated locally from your reference by the build
tools.

## License

- Documentation: CC BY 4.0.
- Recompiled source: unlicensed; educational/interoperability use only.

See the repository's `LICENSE` and `NOTICE.md` for the full text.

## Takedown

If you are a rights holder and believe material here should not be published,
open an issue or contact the maintainers through the repository. Corrections
with evidence are welcome.
