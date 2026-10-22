# Targets and status

| Target | Function sources | Status |
|---|---:|---|
| `MW4Mercs.exe` | 13,292 | byte-identical |
| `GunDll.dll` | 3,175 | byte-identical |
| `MW4Stats.dll` | 1,085 | byte-identical |
| `blade.dll` | 733 | byte-identical |
| `Language.dll` | 100 | byte-identical |
| `MissionLang_MERCS.dll` | 67 | byte-identical |
| `ZlogLib.dll` | 31 | byte-identical |

`ScriptStrings_MERCS.dll` is resource-only (no code) and is not an oracle
build target.

Out of scope: the 31 EXE IAT jump thunks, the `.txt2` SafeDisc leftover, DRM
components, CRT/middleware outside game logic, and the four shipped
editor/config tools (documented separately).

Hashes:
[`reference/SHA256.txt`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/reference/SHA256.txt).
