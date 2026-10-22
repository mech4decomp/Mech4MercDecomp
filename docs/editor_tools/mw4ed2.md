# MW4Ed2.exe — Mission/Level Editor (deep-dive)

> Reference record; not an oracle target. See the [editor-tools overview](README.md).

## 1. Binary facts

| | |
|---|---|
| File | `reference\MW4Ed2.exe` |
| Size | 3,833,856 B (0x3A8000) |
| SHA-256 | `7b19a1cbc18b2f4c16fd8fdeb9e44c2861c97464e8275e28817b28bbdae03b60` |
| Toolchain | MSVC6, Linker 6.0, TimeDateStamp 2002-11-26 23:53:19Z |
| Machine / Subsystem | x86 (0x014C) / GUI (2) |
| ImageBase / Entry | 0x00400000 / 0x00727C54 (in `.text`) |
| Rich header | XOR key 0xF2BFBE51, DanS @ 0x80 (MSVC6 tools, ProdId 0x000C/0x000B/0x000A/0x0013/0x0001 mixes) |
| Functions | 11,388 (Ghidra) — the largest of the four editor tools by ~10× |

Sections (5 — note the SafeDisc `.txt2`, same as the game EXE):

| Section | RVA | VSize | RawSize | Notes |
|---|---|---|---|---|
| `.text`  | 0x1000   | 0x3393F2 | 0x33A000 | game + editor + framework code |
| `.txt2`  | 0x33B000 | 0x17C5   | 0x2000   | SafeDisc leftover (out of scope) |
| `.rdata` | 0x33D000 | 0x4F8B4  | 0x50000  | strings, vtables, IAT |
| `.data`  | 0x38D000 | 0x1059C8 | 0xA000   | initialized data + ~0x659C8 zero tail |
| `.rsrc`  | 0x493000 | 0x101F8  | 0x11000  | resources |

Imports (import dir at RVA 0x38A3F0, 15 DLLs, ~736 functions): **MFC42 356**
(dynamic MFC — the editor shell), KERNEL32 107, MSVCRT 111, USER32 90, GDI32
28, ADVAPI32 12, MSACM32 7, ole32 5, WINMM 5, SHELL32 4, VERSION 3, COMCTL32
2, WSOCK32 2, plus the DRM imports (ARTPCLNT 1, CdaC14BA 3). The binary also
**names** (LoadLibrary/delay-style references, not import-table) the full game
runtime: `blade.dll`/`bladed.dll` (renderer wrapper + its debug build),
`gundll.dll` (object library), `dplayx.dll`, `dinput`/`ddraw`/`d3dim`/
`dsound`, `amstream`/`quartz`/`msacm`/`Ir50_32`/`ijl10` (Indeo/JPEG codecs),
`Language.dll`/`MissionLang_MERCS.dll`/`ScriptStrings_MERCS.dll`
(localization), `machin16/32.dll`, `dbghelp`/`imagehlp`, debug CRTs
(`msvcrtd`/`msvcirtd`) alongside release — the tool was built against both
runtime flavors.

## 2. Purpose

MW4Ed2 is FASA's **Mission Editor 2** — a full in-house mission/level editor
that **embeds the complete game runtime** (renderer through `blade`, object
code through `gundll`, DirectPlay, the ABL scripting VM, localization). It
creates and edits the `Resource\Missions\*.mw4` mission archives: pick a map
(≈ `\Games\*.mw4` browser), lay out spawns/units/lights/drop-zones/skies,
bind ABL mission scripts and bot AI, and write the archive whose members are
the serialized `MechWarrior4::MWMission` object graph plus per-aspect binary
blobs. It is the companion to MapCreator (which builds the maps/mission
terrain) — MW4Ed2 builds what runs on top of a map.

## 3. Architecture — a game framework with an editor shell

Two layers:

- **MFC editor shell** (356 MFC42 imports): dialogs, toolbars, file dialogs,
  the `\Games\*.mw4` map browser and `Resource\Missions\*.nfm` /
  `Resource\UserMissions\*.nfm` scenario dialogs. Thin compared to the
  framework below.
- **Bundled game framework** (the bulk of `.text`): the same class/property
  system the MW4Mercs engine uses, driven headlessly:
  - **Class registry** — `FUN_0046a280(size, "Class::Name", base, ...)`
    registers serializable classes by name; `FUN_006d3d80(name, ...)` is a
    second registry flavor. Objects are identified in files by their class
    tag string (`Adept::Mission`, `MechWarrior4::MWMission`).
  - **Property system** — `FUN_00469910(index, "Name", type, offset)` +
    `FUN_00469c60(list)` register reflected, offset-addressed fields per
    class. This is the serialization contract (§5).
  - **Allocator/factory** — `FUN_00449aa0(size)` (calloc-like, returns 0 on
    failure); `FUN_00449ab0(p)` free.
  - **GameOS framework** (shared with the other editor tools + the game):
    file system finder (`FUN_0043d7e0` set path / `FUN_0043d850` next /
    `FUN_0043d9b0`), string table loader, the game console/message color
    helper (`FUN_005a4bf0(0xbb7ff, ...)` = blue "loading" text).
  - **ABL scripting VM** — `FUN_005a6270(path, ...)` compiles/loads an ABL
    script; mission and bot behavior is ABL (see §6).
  - **Full runtime side-loading** — the renderer (`blade`) and object
    library (`gundll`) DLLs are referenced by name, so the editor can
    actually run/render the level being edited.

## 4. The mission file format (`Resource\Missions\*.mw4`)

Ground truth from the shipped `coliseum.mw4` (58,948 B) and the sibling
mission archives (`0001.mw4`, `alpine.mw4`, `avalon01.mw4`, ...).

### 4.1 Container — #VBD v4 (see `include/mw4/vbd.h`)

Header (43 bytes + path): `#VBD` (4) · version 4 (4) · count=63 (4) ·
dir_off (4) · keys (4) · filetime (8) · flags1=0x1A (4) · flags2=0x1A (4) ·
reserved (6) · path-len (1) · path (`resource\missions\coliseum.mw4`, 30
chars). The `count=63` is a **capacity**, not the member count.

### 4.2 Directory — multi-group rows

The directory is a sequence of fixed-prefix rows grouped by a shared
FILETIME:

```
filetime (8)  u32  u32  u32  u16 index  u8 name-len  name[..]
```

All rows in a group carry the same filetime; consecutive groups differ (a
group = one filetime run, e.g. one save session). Member names observed for
coliseum:

```
missions\coliseum\coliseum.instance        (index 1)
missions\coliseum\coliseum.data{Element}
missions\coliseum\coliseum.data{GameModel}
missions\coliseum\coliseum.data
missions\coliseum\coliseum.lights
missions\coliseum\coliseumnight.lights
missions\coliseum\DropZones\DropTeam2.contents
missions\coliseum\DropZones\SecondaryLanceStart.contents
missions\coliseum\skies\colsm01_sky\colsm01_sky.erf
missions\coliseum\mission.bounds
missions\coliseum\coliseumgraph.data
missions\coliseum\scripts\Coliseum.abl
missions\coliseum\scripts\Coliseum_SinglePlayer.abl
missions\coliseum\scripts\Coliseum_Campaign.abl
missions\coliseum\scripts\player.abl
... (per-game-type script variants)
```

Member semantics: `.instance` (the serialized mission object, see §4.3),
`.data{...}` aspect sub-blobs, `.lights`/`...night.lights` (light lists),
`DropZones\*.contents` (spawn/drop-zone sets), `skies\<map>_sky\*.erf`
(environment resource), `mission.bounds` (bounds), `<name>graph.data`
(nav/unit graph), `scripts\*.abl` (mission scripts per game type).

### 4.3 First member — the serialized mission object

The first member's content begins directly with the map reference as a
NUL-terminated path, followed by binary object data:

```
"resource\maps\colsm01.mw4"   \0  <binary mission object serialization...>
```

i.e. the mission archive is an object graph whose first field is the backing
map. The exact directory → data-offset encoding is **not fully resolved**
(multiple groups, variable-length rows; maps decode cleanly at
`data_off = prev.data_off + prev.stored_size` relative to `dir_off`, but the
mission archives interleave group headers — see the #VBD follow-up note in
`include/mw4/vbd.h`).

## 5. The mission class + property table

### 5.1 Class registration

- `Adept::Mission` — registered by `FUN_00462610` (3,144 B) via
  `FUN_0046a280(0x1E6, "Adept::Mission", base, factory, ...)` → class size
  **0x1E6** (486 bytes). This is the mission **environment** base class.
- `MechWarrior4::MWMission` — registered by `FUN_00585f60` via
  `FUN_0046a280(0x420, "MechWarrior4::MWMission", ...)` → class size **0x420**
  (1056 bytes); also constructs the `StartMusicStatus` and `TransMusicStatus`
  helper objects. This is the MW4 concrete mission subclass (the `.instance`
  member's top-level type).
- `Mission` — registered by `FUN_006d3d80("Mission", ...)`.

### 5.2 Adept::Mission property table (the serialized environment)

`FUN_00462610` registers 55 reflected properties (index, name, type-code,
offset-in-class). Type codes seen: `1`=int, `2`=float, `0xE`=bool,
`0x10`=color/vector4, `0x231`=string/resource. The environment is organized
in **flavors** — base, `Underwater`, `Smoke` — each with fog start/end/
density + color, plus night/water/weather extras:

| idx | name | type | off | | idx | name | type | off |
|---|---|---|---|---|---|---|---|---|
| 6 | GeneralFogStart | f | 0x7C | | 0x25 | WeatherEffectResource | s | 0x24 |
| 7 | GeneralFogEnd | f | 0x80 | | 0x26 | AllowSearchLights | b | 0x105 |
| 8 | GeneralFogDensity | f | 0x84 | | 0x27 | AllowRunningLights | b | 0x106 |
| 9 | LightFogStart | f | 0x88 | | 0x28 | HeightFogStart | f | 0xE8 |
| 10 | LightFogEnd | f | 0x8C | | 0x29 | HeightFogEnd | f | 0xEC |
| 11 | LightFogDensity | f | 0x90 | | 0x2A | HeightFogOpacity | f | 0xF0 |
| 12 | CustomFogStart | f | 0x94 | | 0x2B | NearClip | f | 0xF4 |
| 13 | CustomFogEnd | f | 0x98 | | 0x2C | FarClip | f | 0xF8 |
| 14 | CustomFogDensity | f | 0x9C | | 0x2D | NightGroundColor | c | 0x6C |
| 15 | FogColor | c | 0x2C | | 0x2E | CanSetTime | b | 0x107 |
| 16 | GeneralFogStartUnderwater | f | 0xA0 | | 0x2F | NightFogColor | c | 0x5C |
| 17 | GeneralFogEndUnderwater | f | 0xA4 | | 0x30 | HeatSinkEfficiency | f | 0x114 |
| 18 | GeneralFogDensityUnderwater | f | 0xA8 | | 0x31 | NightWeatherEffectResource | s | 0x28 |
| 19 | LightFogStartUnderwater | f | 0xAC | | 0x32 | WaterSpecularFactor | f | 0xFC |
| 20 | LightFogEndUnderwater | f | 0xB0 | | 0x33 | WaterAtNightSpecularFactor | f | 0x100 |
| 21 | LightFogDensityUnderwater | f | 0xB4 | | 0x34 | WaterSpecularPower | i | 0x10C |
| 22 | CustomFogStartUnderwater | f | 0xB8 | | 0x35 | WaterAtNightSpecularPower | i | 0x110 |
| 23 | CustomFogEndUnderwater | f | 0xBC | | 0x36 | IsNightMission | b | 0x108 |
| 24 | CustomFogDensityUnderwater | f | 0xC0 | | | | | |
| 25 | FogColorUnderwater | c | 0x3C | | | | | |
| 26 | GeneralFogStartSmoke | f | 0xC4 | | | | | |
| 27 | GeneralFogEndSmoke | f | 0xC8 | | | | | |
| 28 | GeneralFogDensitySmoke | f | 0xCC | | | | | |
| 29 | LightFogStartSmoke | f | 0xD0 | | | | | |
| 30 | LightFogEndSmoke | f | 0xD4 | | | | | |
| 31 | LightFogDensitySmoke | f | 0xD8 | | | | | |
| 32 | CustomFogStartSmoke | f | 0xDC | | | | | |
| 33 | CustomFogEndSmoke | f | 0xE0 | | | | | |
| 34 | CustomFogDensitySmoke | f | 0xE4 | | | | | |
| 35 | FogColorSmoke | c | 0x4C | | | | | |
| 36 | AllowRespawn | b | 0x104 | | | | | |

(f=float type 2, c=color type 0x10, b=bool type 0xE, s=string type 0x231,
i=int type 1. Offsets are into the `Adept::Mission` class; indices 0–5 and
the `MusicStatus` properties belong to base classes.)

The `Adept::Mission` **constructor** (`FUN_00586a90`, 2,627 B) initializes
this state (all-zero spawn/bounds slots at `+0x894..+0x8B5`, two 0x2F8-byte
object slots at `+0x895`/`+0x897` via `FUN_00621990`, random fog
near/far/density via `FUN_006daa90`, default respawn count 0x1E) and applies
**per-map tuning flags** at `+0x13B3` by comparing the map path against
hard-coded names: `coliseum`→1, `factory`→2, `gladiatorpit`→1, `rubblepile`
→2, `jungle`→… (an editor-side special-case table, not a game rule).

## 6. ABL scripting integration

Mission behavior is bound through ABL scripts stored as archive members
(`scripts\*.abl`), one set per game type (Stock_MissionPlay, Campaign,
SinglePlayer, ...), plus shared library scripts:

- `content\ablscripts\miscfuncs.abl` — loaded by `FUN_00586090` (the ABL
  library bootstrap; blue "loading" console message, then
  `FUN_005a6270(path, ...)` — the ABL compile/load entry).
- `Content\ABLScripts\StockScripts\Stock_MissionPlay.abl` — referenced by
  the mission object (`FUN_00586a90`'s cluster) as the default stock mission
  script.
- `Content\ABLScripts\Bots\UberBot.abl` — the default bot AI script, loaded
  by the bot subsystem (`FUN_00616430`, `FUN_00616f80`, `FUN_00618d00`,
  `FUN_0061b540` — a 4-site bot-script family in the 0x61xxxx region).
- `scriptName` (0x00753954) — the per-mission script-name property binding
  (referenced from the 0x569xxx mission region).

## 7. Subsystem map / key functions

| VA | Size | Role |
|---|---|---|
| 0x00585F60 | 242 | Class registration `MechWarrior4::MWMission` + MusicStatus helpers |
| 0x005862A0 | (LAB) | MWMission vtable method (constructor cluster) |
| 0x00462610 | 3,144 | `Adept::Mission` registration + full property table (§5.2) |
| 0x00586A90 | 2,627 | `Adept::Mission` constructor (env init + per-map tuning) |
| 0x00586090 | 139 | ABL library bootstrap (`miscfuncs.abl` load) |
| 0x005FEE20 | 602 | Mission browser/loader (`content\missions\<name>.instance`) |
| 0x004574F0 | — | `Resource\Missions` path handler (save/browse) |
| 0x00572CF0 / 0x006197F0 / 0x00619960 | — | `\Games\*.mw4` map browser |
| 0x0061CC07 / 0x0060BE92 | — | `Resource\Missions\*.nfm` / `UserMissions\*.nfm` scenario dialogs |
| 0x00616430, 0x00616F80, 0x00618D00, 0x0061B540 | — | Bot AI script family (`UberBot.abl`) |
| 0x0046A280 | 279 | `RegisterClass` (size, name, base, factory, methods) |
| 0x00469910 | 74 | `RegisterProperty` (index, name, type, offset) |
| 0x00469C60 | 71 | publish property list |
| 0x00449AA0 | 13 | framework allocator (calloc-style) |
| 0x005A6270 | 231 | ABL compile/load entry |
| 0x0043D7E0 / 0x0043D850 / 0x0043D9B0 | — | GameOS file finder (set path / next / close) |
| 0x005A4BF0 | 1,878 | console/message color helper (0xbb7ff blue load text) |

The largest functions (framework dispatchers, not editor logic):
`FUN_005A94E0` (25,866 B), `FUN_006AD980` (25,018 B), `FUN_006C9920`
(16,743 B), `FUN_004EF280` (10,339 B), `FUN_004F2EC0` (10,312 B) — the
engine's big per-frame/update loops and the ABL VM.

## 8. Notable strings

`MechWarrior4::MWMission` (0x754B70) · `MW4Mission` (0x754B88) ·
`Adept::Mission` (0x748024) · `Mission` (0x78DAxx reg) · `Mission.Bounds`
(0x74819C) · `MissionBounds` (0x74818C) · `mission.bounds` ·
`StartMusicStatus` / `TransMusicStatus` · `GeneralFog*`/`LightFog*`/
`CustomFog*`/`HeightFog*` property names (0x78F4CC–0x78F64C) ·
`content\missions\` (0x761C88) · `content\ablscripts\miscfuncs.abl`
(0x7541B8) · `Content\ABLScripts\StockScripts\Stock_MissionPlay.abl`
(0x754D98) · `Content\ABLScripts\Bots\UberBot.abl` (0x763BC0) ·
`\Games\*.mw4` (0x754614) · `Resource\Missions\*.nfm` (0x763A1C) ·
`Resource\UserMissions\*.nfm` (0x763A00) · `MissionLang_MERCS.dll`
(0x753F95) · `MissionNames.tbl` (0x75479F) · `scriptName` (0x753954) ·
`UserMission` (0x7542B8) · `options.mw4` (0x763AA4) · `coliseum`/`factory`/
`gladiatorpit`/`rubblepile`/`jungle` (per-map tuning tags).

## 9. Open questions

- **#VBD directory encoding**: the mission archives' multi-group directory
  (shared-filetime row runs, 23-byte prefix) does not match the map archives'
  single-group layout captured in `include/mw4/vbd.h`. A dedicated decode pass
  of the mission directory and data-offset rule is still needed.
- **Mission object graph**: decoding the serialized
  `MechWarrior4::MWMission` graph is the highest-value follow-up; the game
  loads the same `Resource\Missions\*.mw4` files.
