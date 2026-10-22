# Oracle status

All in-scope `.text` functions for the EXE and the six code-bearing game DLLs
are transcribed and verified. The full-image builds are byte-identical to the
canonical references.

## Inventory

| Target | Function sources | In-.text data sources | Status |
|---|---:|---:|---|
| `MW4Mercs.exe` | 13,292 | 496 | byte-identical |
| `GunDll.dll` | 3,175 | 25 | byte-identical |
| `MW4Stats.dll` | 1,085 | 0 | byte-identical |
| `blade.dll` | 733 | 0 | byte-identical |
| `Language.dll` | 100 | 0 | byte-identical |
| `MissionLang_MERCS.dll` | 67 | 0 | byte-identical |
| `ZlogLib.dll` | 31 | 0 | byte-identical |

Total: **18,483 `func_*.c` sources**.

`ScriptStrings_MERCS.dll` is a pure resource table with no code; it is not a
build target.

## Out of scope

- The 31 IAT jump thunks at the end of the EXE `.text` (`0x75DB4A`–`0x76015C`),
  listed in `src/mw4mercs/artifacts/extra_functions.csv`.
- The `.txt2` SafeDisc leftover (`FUN_00769000`). Its bytes are preserved only
  as generated data for layout; it is not decompiled.
- SafeDisc/DRM components and the bundled DRM DLLs.
- CRT/middleware code outside game logic.
- The four editor/config tools (`autoconfig_MERCS.exe`, `MapCreator.exe`,
  `NFMEditor.exe`, `MW4Ed2.exe`). They are documented as reference records
  under `docs/editor_tools/`, not oracle targets.
- `mcp.dll` (Borland/Delphi DRM helper).

## Reproduce

```bat
call tools\env.bat
nmake objs
nmake data
nmake init
nmake exe
nmake verify
```

Module builds are described in `BUILD.md`. The hashes are in
`reference/SHA256.txt`.

## Documentation indexes

- `docs/MASTER_INDEX.md` — per-VA subsystem index for every binary.
- `docs/data_annotation.md` — EXE data-run annotations.
- `docs/module_data_annotation/` — per-module data-run annotations.
- `docs/MODULE_NOTES.md` — concise module summaries.
- `docs/GAME_VERSIONING.md` — build/version identity and multiplayer gates.
- `docs/editor_tools/` — shipped authoring/config tool records.
