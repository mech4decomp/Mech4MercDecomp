# Editor Tools — reference records

The four authoring/config EXEs shipped with MW4:Mercenaries. These are
**record + RE-documentation assets only** — never oracle targets
(reference assets only). Hashes in `reference\SHA256.txt`;
Analyzed with Ghidra; the analysis projects and dumps are not part of this repository.

| Tool | File | Purpose | Functions | Doc |
|---|---|---|---|---|
| NFMEditor | `reference\NFMEditor.exe` | Edits `.nfm` multiplayer/server configs + `servercycle.txt` (GameOS "info file" grammar) | 1,129 | `nfmeditor.md` |
| MapCreator | `reference\MapCreator.exe` | Builds maps: heightfield/interest bitmap → info-file map def → Tctd.exe → `#VBD` `.mw4` map archive | 1,556 | `mapcreator.md` |
| MW4Ed2 | `reference\MW4Ed2.exe` | Mission editor embedding the full game runtime; writes `Resource\Missions\*.mw4` mission archives (serialized `MechWarrior4::MWMission` object graph + lights/drop-zones/sky/bounds/ABL scripts) | 11,388 | `mw4ed2.md` |
| autoconfig | `reference\autoconfig_MERCS.exe` | GameOS AutoConfig / driver diagnostics: probes hardware + D3D caps, tests renderers, writes `options.ini` + `VideoCard.txt` + `Microsoft Games\<game>` registry key | 1,128 | `autoconfig.md` |

## The data-file picture

| File | Producer | Consumer | Format |
|---|---|---|---|
| `Resource\Maps\*.mw4` | MapCreator | game | `#VBD` v4 archive (map def → Tctd.exe output) |
| `Resource\MISSIONS\*.mw4` | MW4Ed2 | game | `#VBD` v4 archive (multi-group directory; mission object + aspects + scripts) |
| `Resource\Missions\*.nfm` / `UserMissions\*.nfm` | NFMEditor (+ MW4Ed2 scenario dialogs) | game server | GameOS "info file" text |
| `servercycle.txt` | NFMEditor | game server | info-file rotation list (`map=Name::Scenario`) |
| `options.ini` | autoconfig (game startup autoconfig too) | game | INI with Graphics/Sound/Special options |

## Notes

- **Common base**: NFMEditor, MapCreator and autoconfig are thin MFC shells
  (dynamic MFC42) over the bundled GameOS framework; MW4Ed2 is the same but
  at ~10× the scale, embedding the full game runtime (blade/gundll/
  DirectPlay/ABL/localization) — 11,388 functions.
- **Format of record**: MW4Ed2's mission `#VBD` member layout is the deepest
  remaining open question (multi-group directory encoding — see the
  `include/mw4/vbd.h` follow-up note).
- **Cross-references**: the game's own CLI/option surface (`-noautoconfig`,
  option table `0x0076C918`) matches what autoconfig writes; these docs
  reference material for the oracle analysis only.
