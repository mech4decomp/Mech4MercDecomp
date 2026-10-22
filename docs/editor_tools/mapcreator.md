# MapCreator.exe — bitmap → .mw4 map authoring tool (deep-dive)

> Reference record; not an oracle target. Analyzed with Ghidra; the analysis
> project and dumps are not part of this repository. No source tree, no
> byte-identity gate.

## 1. Binary facts

| | |
|---|---|
| File | `reference\MapCreator.exe` |
| Size | 528,384 B (0x81000) |
| SHA-256 | `4f1a37548b352fd36e99a71aded94db13253f9ec84c6d350237b525f5936ea7d` |
| Toolchain | MSVC6, Linker 6.0, TimeDateStamp 2002-11-26 20:47:03Z |
| Machine / Subsystem | x86 (0x014C) / GUI (2) |
| ImageBase | 0x00400000 |
| Sections | `.text` RVA 0x1000 VSize 0x68ABB · `.rdata` RVA 0x6A000 · `.data` RVA 0x7C000 VSize 0x78358 (raw 0x3000 — most of `.data` is zero-fill; the tool's literal strings live in the raw part at 0x47C000–0x47C9xx) · `.rsrc` RVA 0xF5000 |
| Imports | MFC42 (135), MSVCRT (76), KERNEL32 (85), USER32 (63), GDI32 (12), ADVAPI32 (12), ole32 (3), MSACM32 (7), VERSION (3), WINMM (5) |
| Functions | 1,556 (Ghidra) |

Like NFMEditor, it bundles GameOS and must run from the game install root
(`Cannot find Language.dll in %s\assets\binaries or %s, this file is required`,
`GameOS build version`, `Exit:DestroyTextureManager`). It also links the
**`Stuff::`** engine classes (`Stuff::FileStream`, `Stuff::TreeNodeOf`) and a
full image-decoding library (TIFF/GIF/TGA/PNG/BMP + zlib + libpng).

## 2. Purpose and pipeline

MapCreator converts a **heightfield bitmap** + **textures** into a playable
map `.mw4`. The overall flow (from the writer/handlers):

```
bitmap (TIF/GIF/TGA/PNG)  ──>  heightfield (256..1024 wide × 256..2048 high,
                               multiple of 256, 24-bit for "interest data")
                                     │
            MapCreator writes (Content\ + Resource\ trees under the game root):
              Content\Maps\<name>                 map definition "info file"
              Content\Maps\<name>\<name>.build     build manifest
              Content\Maps\<name>\tctd.ini         Tctd input config
              Content\Maps\<name>\tctd.ini.bsp     Tctd BSP input config
              Content\textures\maps\...            copied/renamed textures
              Maps\<name>\<name>.instance          instance info
                                     │
            shell:  Tctd /f Content\Maps\<name>\tctd.ini
            shell:  Tctd /f Content\Maps\<name>\tctd.ini -bsp
                                     │
            Tctd.exe builds the final packed map:
              Resource\Maps\<name>.mw4             a #VBD archive (see §7)
```

`Tctd.exe` ("Terrain converter/compiler") is an **external tool that must be
present** (`Cannot Find Tctd.exe,Make sure this file exists and try again`);
MapCreator shells out to it with `system()`. Tctd is what produces the binary
terrain/BSP data packed into the final `.mw4`. The tool then reports
`Map created successfully. Run Mission Editor to create a mission with this map`
(or `There was an Error in Createing your map` [sic] on failure).

## 3. Layout — .text regions

| Range | Content |
|---|---|
| 0x401000–0x4072xx | Tool UI + map pipeline (heightfield load/validate, texture pickers, map create/save, Tctd launch) |
| 0x408xxx–0x44Exxx | Bundled GameOS / `Stuff::` engine (file system, textures, DirectX, DirectSound, image codecs) |
| 0x45xxxx–0x465xxx | GameOS config/profile + helpers |
| 0x466Bxx+ | Ordinal thunks (MFC/GameOS imports) |

The Ghidra inventory names imports `Ordinal_XXXX` (jmp-thunk table at
0x466B80+). Key ordinal semantics seen in the map code: `Ordinal_926`/`924`/
`922` = path-combine string ops, `Ordinal_858` = write/create, `Ordinal_800` =
close, `Ordinal_540` = push a "file op" guard, `Ordinal_5683` = `strrchr`,
`Ordinal_4277` = substring after last `\`, `Ordinal_4129` = `strrchr('.')`,
`Ordinal_2818` = `sprintf`, `Ordinal_941` = append to command line,
`Ordinal_860` = get app path, `Ordinal_6334` = `_ftol`-family.

## 4. The map definition "info file" (`Content\Maps\<name>`)

The map definition is written with the **same GameOS info-file format** that
NFMEditor uses (sections, `key=value`, case handling — see
`docs/editor_tools/nfmeditor.md` §4). The map file's root carries a `gamedata`
section (all keys below, written by `FUN_004021b0` / `FUN_004012b0`):

| Key | Value |
|---|---|
| `grid` | `<name>.erf` — the grid/terrain source file |
| `cull` | `nevercull` |
| `class` | **`mechwarrior4::mwmap`** — the map class tag |
| `texturedata` | `<name>.fgd` |
| `tcffilename` | `<name>.index.tcf` |
| `waterlevel` | float (water plane height) |
| `watertexture` | path to water texture |
| `underwatertexture` | path to underwater texture |
| `waterdetailtexture` | path to water detail texture |
| `HudMap` | path to the HUD/minimap texture |
| `InputPath` | input bitmap path |
| `MapCenter` | two floats, e.g. `"%.1f %.1f"` (grid center; `this+0x64` × 0x458280 scale const ×2) |
| `SmoothingPasses` | int (heightfield smoothing passes, `this+0xbc`) |
| `PolyCount` | int (target poly count, `this+0xc0`) |
| `HeightField` | heightfield file name |
| `DeltaY` | float (vertical scale, `this+0xb8`) |

Texture/geometry files referenced by the definition:
- `<name>.fgd` — the textured-terrain descriptor,
- `<name>.index.tcf` — the texture-collection/flag file,
- `<name>.erf` — the terrain grid source.

## 5. Heightfield input rules (from the validator at ~0x401480–0x401780)

| Rule | Message |
|---|---|
| exists | `HeightField Does Not Exist` / `Bad Height Field` |
| width 256..1024 | `HeightField Width is too small, must be at least 256` / `HeightField Width is too large, Cannot be larger than 1024` |
| height 256..2048 | `HeightField Height is too small, must be at least 256` / `HeightField Height is too large, must be at most 2048` |
| both multiple of 256 | `HeightField has incorrect size, must be a multiple of 256 i.e. 256,512,768,1024...` |
| 24-bit when "Interest data" used | `HeightField must be 24-bit while using "Interest data"` |

File dialog filter: `Bitmap Images (*.tif,*.gif,*.tga,*.png)|*.tif;*.gif;*.tga;*.png||`.
The image decoder handles TIFF (`Tiff Error-*`), GIF, TGA, PNG (libpng), BMP,
JPEG (via `ijl10.dll`).

## 6. Texture rules

| Texture | Constraint |
|---|---|
| Terrain texture | must exist, must be valid (`Terrain Texture Does Not Exist` / `Bad Terrain Texture`); size must equal the heightfield: `For a Heightfield of %ix%i Terrain Texture should be %ix%i` |
| Detail texture | `Detail Texture Does Not Exist` / `Bad Detail Texture`; `Detail Texture MUST be 256x256` |
| Water / water-detail / underwater | must exist; all `MUST be 256x256` (`Water Texture Texture MUST be 256x256` [sic], etc.) |
| Selection | `FGD Files (*.fgd)|*.fgd||` dialog for the FGD; textures written under `Content\textures\maps\` with the `%s\%s.Tga` / `%s\%c%c\%s_%c%c_0_0000.Tga` naming pattern |

## 7. The final map archive — `Resource\Maps\<name>.mw4` is a #VBD

The shipped maps (e.g. `carps01.mw4`, 7–27 MB) are **#VBD v4 archives** — the
container documented in `include/mw4/vbd.h`. Verified on
`carps01.mw4`: sig `#VBD`, version 4, key1==key2==0x108, filetime, flags 1/1,
archive path `resource\maps\carps01.mw4` (25 chars incl. extension).

Two observations beyond `vbd.h`:

- **The directory is multi-group.** After the header/path, the directory is
  organised as a sequence of blocks, each block = a path + its member entries:
  e.g. `maps\carps01\carps01.instance`, then entry rows
  `textures\composttexture\arctic01_color_rock_active.bid`,
  `textures\composttexture\alpine01_color_rockfaceshale_active.bid`, ... —
  one per map asset. `entry_count=63` in the header is a **capacity/count
  field, not the actual member count** of every archive.
- **Members are compressed binary.** The `.instance`/`.bid` members are binary,
  high-entropy (LZW-style, `uncompressed_size > stored_size`; the decompressor
  is the game's `FUN_006FC220`, see AGENTS.md "Compression codec — LZW").
  `data_off` is relative to `dir_file_offset` and members are laid out
  contiguously (`next.data_off == prev.data_off + prev.stored_size`).

So MapCreator itself never writes a #VBD — it writes the info-file definition +
textures and lets **Tctd.exe** produce the packed archive.

## 8. Key functions

| VA | Size | Role |
|---|---|---|
| 0x004012b0 | 514 | Map-definition metadata writer (InputPath, MapCenter, SmoothingPasses, PolyCount, HeightField, DeltaY) |
| 0x00401750 | — | Heightfield load (file dialog `*.tif;*.gif;*.tga;*.png`) |
| ~0x401480–0x401780 | — | **Heightfield validator** (size rules §5; not a Ghidra-recognised function) |
| 0x004021b0 | 1869 | **Map definition writer** (`gamedata` section: grid/cull/class/texturedata/tcffilename/water*/HudMap) |
| 0x00403720 | 1684 | **Create-map orchestrator**: writes definition + `.build` + `.instance`, copies textures, calls the Tctd launcher |
| 0x00403dc0 | 266 | `.build` manifest writer (`Content\Maps\<name>\<name>.build`) |
| 0x00403ed0 | ~900 | **Create-map command handler**: name sanitise/validate (`Give the map a valid name`), overwrite prompt (`A map by this name exists, OverWrite?`), success/error messages (region, not a Ghidra function) |
| 0x00404220 | 486 | **Tctd.exe launcher**: option flags (` /i`, ` /s`, ` /y`, ` /uid`, ` /p`) + `system("Tctd /f Content\Maps\<name>\tctd.ini")` + `system("Tctd /f Content\Maps\<name>\tctd.ini -bsp")`; missing-Tctd error |
| 0x00404cb0 / 0x00405790 / 0x00405870 / 0x00405970 | — | texture pickers (FGD / water / detail dialogs) |
| 0x004095c0 / 0x00409690 / 0x00409740 | 60/43/43 | info-tree set string / int / float |
| 0x0040a530 / 0x0040a6b0 / 0x0040ad30 | 171/152/84 | info-file open / close / free |
| 0x0040b6b0 / 0x0040b6d0 / 0x0040b890 | 31/301/218 | info-tree helpers (gamedata lookup, subtree) |
| 0x00415f00 | 161 | file-exists check (Tctd.exe) |

(The info-file parse/serialize library itself is the same GameOS family as
NFMEditor's §4 map — the parser here is the MapCreator's bundled copy.)

## 9. Bundled engine / libraries

- **GameOS**: file system (`Stuff::FileStream`, memory-mapped files, `Too many
  files`, `File '%s' is still open`), texture manager (`InitializeTextureManager
  called twice!`, `Exit:DestroyTextureManager`, texture filter/format diagnostics),
  Direct3D/DirectDraw/DirectSound/DirectInput error tables, driver/registry dump
  (`VideoCard.txt`, `Driver version`, `\Config\Platform`), Language.dll loader,
  DirectPlay (DPERR_*), sound (`acmStreamOpen`, MSADPCM/PCM only).
- **Image codecs**: TIFF (`(Is Tiff)Invalid File`, `Tiff Error-Wrong Version`),
  GIF, TGA (`Only 256 color palletized, 24 or 32 bit TGA files supported`), PNG
  (libpng — `Not a PNG file`, `Incompatible libpng version`), BMP (`"..." is an
  invalid .BMP file`), JPEG (ijl10). Plus zlib. The `(Create Fade)` /
  `(MaskTo)` / `(MakeRGB)` / `(UnDifference)` / `(Deinterlace)` strings are a
  generic image-processing helper library.
- **Stuff::** engine classes: `Stuff::FileStream`, `Stuff::TreeNodeOf`.
- **MAPI** support (`MAPISendMail`, `Bad MAPI32.DLL`) and the same
  `RAID`/SQL connection string as NFMEditor (`DRIVER={SQL Server};...`).

## 10. Notable strings (VA → value, all in `.data` raw 0x47C000+)

`0x47C2C0` `Content\Maps\` · `0x47C2C8` `Maps\` · `0x47C2D0` `HudMap` ·
`0x47C2D8`/`0x47C2EC`/`0x47C2F1` `waterdetailtexture`/`underwatertexture`/
`watertexture` · `0x47C310` `maps\` · `0x47C318` `waterlevel` · `0x47C324`
`tcffilename` · `0x47C33C` `texturedata` · `0x47C358` `mechwarrior4::mwmap` ·
`0x47C350` `class` · `0x47C374`/`0x47C36C` `nevercull`/`cull` · `0x47C380`/
`0x47C388` `grid`/`.erf` · `0x47C398` `gamedata` · `0x47C330` `.index.tcf` ·
`0x47C348` `.fgd` · `0x47C3F0` `textures.hint` · `0x47C400` `Content\Textures\`
(also `Content\Textures\Maps\`) · `0x47C450` `%s\%s.Tga` · `0x47C4B0`
`TexturePool` · `0x47C4E8` `.mw4` · `0x47C4F0` `Resource\Maps\` · `0x47C500`
`.build` · `0x47C508` `Content\` · `0x47C514` `Maps\%s\%s.build` · `0x47C444`/
`0x47C4DC` `.instance`/`instance` · `0x47C2B4` `\tctd.ini` · `0x47C68C`
`\tctd.ini -bsp` · `0x47C69C` `Tctd /f Content\Maps\` · `0x47C6B4` `Tctd.exe` ·
`0x47C6C0`/`C4`/`C8`/`CC`/`D4` ` /i` ` /s` ` /y` ` /uid` ` /p` ·
`0x47C0A0` `\` · `0x47C528` `There was an Error in Createing your map` ·
`0x47C564` `Map created successfully. Run Mission Editor to create a mission
with this map` · `0x47C5EC` `A map by this name exists, OverWrite?` · `0x47C628`
`Give the map a valid name` · `0x47C64C` `Cannot Find Tctd.exe,Make sure this
file exists and try again` · `0x47C244` `Bitmap Images
(*.tif,*.gif,*.tga,*.png)|*.tif;*.gif;*.tga;*.png||` · `0x47C81C`
`FGD Files (*.fgd)|*.fgd||`

Heightfield/texture rule strings: `0x47C14C`/`0x47C184`/`0x47C1BC`/`0x47C1F8`
height too large/small, width too large/small · `0x47C0C0` multiple-of-256 ·
`0x47C114` 24-bit-for-interest-data · `0x47C0A4`/`0x47C230` `HeightField Does
Not Exist`/`Bad Height Field` · `0x47C714`/`0x47C734` `Terrain Texture Does Not
Exist`/`Bad Terrain Texture` · `0x47C77C` `Detail Texture MUST be 256x256` ·
`0x47C7E0` `For a Heightfield of %ix%i Terrain Texture should be %ix%i` ·
`0x47C924` `Water Texture Texture MUST be 256x256`

## 11. Key data-structure take-aways

1. MapCreator writes an **info-file map definition** tagged
   `class=mechwarrior4::mwmap` (the `gamedata` section keys in §4) — the same
   GameOS key/value grammar as `.nfm`.
2. The heavy lifting (binary terrain/BSP + final packing into the `#VBD`
   `.mw4`) is **delegated to the external `Tctd.exe`**; MapCreator only stages
   inputs and textures. The shipped `Resource\Maps\*.mw4` are therefore
   Tctd's output, not MapCreator's.
3. Heightfields are strictly bounded: 256..1024 wide, 256..2048 high, both a
   multiple of 256, 24-bit when "interest data" is enabled.
4. Terrain texture must match the heightfield size; detail/water textures are
   fixed 256×256.
5. The `#VBD` map archives use a **multi-group directory** (each asset group
   has its own path prefix) — a layout detail not captured in `vbd.h`, whose
   `entry_count=63` field is not the member count. Worth a follow-up update to
   `include/mw4/vbd.h`.
