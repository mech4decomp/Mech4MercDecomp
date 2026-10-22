# NFMEditor.exe — .NFM Multiplayer/Server Config Editor (deep-dive)

> Reference record; not an oracle target. See the [editor-tools overview](README.md).

## 1. Binary facts

| | |
|---|---|
| File | `reference\NFMEditor.exe` |
| Size | 471,040 B (0x73000) |
| SHA-256 | `173db0b5f7c7000febf86e7c21519c24f8e11cdab41730d049a1fd22aaf3aa21` |
| Toolchain | MSVC6, Linker 6.0, TimeDateStamp 2003-02-15 19:57:40Z |
| Machine / Subsystem | x86 (0x014C) / GUI (2) |
| ImageBase | 0x00400000 |
| Sections | `.text` RVA 0x1000 VSize 0x5CFDE · `.rdata` RVA 0x5E000 · `.data` RVA 0x6E000 VSize 0x775B0 · `.rsrc` RVA 0xE6000 |
| Entry | 0x0045BE5F |
| Imports | MFC42 (138), MSVCRT (66), KERNEL32 (84), USER32 (63), GDI32 (12), ADVAPI32 (12), ole32 (3), MSACM32 (7), VERSION (3), WINMM (5) |
| Rich header | XOR key 0x72BAA77B, DanS @ 0x80 (Linker 6.00 SP6 + C7 toolset) |
| Functions | 1,129 (Ghidra) |

MFC42 is imported dynamically (no static MFC in `.text`), unlike the game EXE.
The tool **must run from the game install root** — it loads GameOS resources and
`Language.dll` from `assets\binaries\`, and reads/writes
`resource\Missions\*.nfm` / `resource\UserMissions\*.nfm`.

## 2. Purpose

NFMEditor edits the **`.nfm` "network/multiplayer mission" files** that define a
map's multiplayer rulesets and scenarios (see `docs/editor_tools/README.md` for
the file's place in the game data set). Each map in `resource\Missions\` /
`resource\UserMissions\` has one `.nfm` describing:

- `[info]` — author / blurb / link / long display name,
- `[ruleset]` — the list of game-type rules that may be launched on the map,
  each rule = a `type=$(<GameType>)` macro entry + optional `team` / `alignment`,
- `[scenarios]` — named scenario blocks (`Name={ ... }`), each with a `[server]`
  sub-section of per-scenario settings (game type, teams, kill/respawn limits,
  night/weather/radar, tonnage/C-Bill caps, game length, script name) and
  optional `team_N`/`bot_N` sub-blocks for per-team and per-bot constraints.

It also edits the **Server Cycle List** (`servercycle.txt`, via `-cycle <file>`):
a rotation of `map=Name.nfm::ScenarioName` entries the game server walks to cycle
maps.

The `.nfm`/`servercycle.txt` text format is GameOS's generic **"info file"**
parser (a C-preprocessor-like key/value grammar) — see §4.

## 3. Layout — .text regions

| Range | Size | Content |
|---|---|---|
| 0x401000–0x4072xx | ~25 KB | Editor app code (dialog, .nfm load/save, cycle list) |
| 0x408xxx–0x44Exxx | ~290 KB | Bundled **GameOS** framework (same engine code as MW4Mercs.exe) |
| 0x44F000–0x458xxx | ~40 KB | The **"info file" parser/serializer library** (pure, reusable) |
| 0x459000–0x45BE00 | ~12 KB | MFC glue + GameOS helpers + Ordinal thunks (0x45BBxx–0x45BExx) |
| 0x45EA00+ | — | Class vtables in `.rdata` (PTR_LAB_0045ea00 = app vtable) |

The Ghidra inventory names most MFC imports by Ordinal_XXXX (jmp-thunk table at
0x45BB80+); e.g. `Ordinal_2864` = the frame/app singleton accessor, `Ordinal_6907`
= list-control "set item text", `Ordinal_3996` = list-control "insert column",
`Ordinal_3302` = list-control "get item text", `Ordinal_2642` = MFC "invalidate"
family, `Ordinal_6199` = string lowercase, `Ordinal_3998` = list "insert item".

## 4. The "info file" format (GameOS generic key/value text)

`.nfm`, `servercycle.txt`, `Content\GameTypes.h` (the include), and the
`resource\missions\*.txt` scenario-text files are all read by one parser family.
Ground truth: the shipped files (see §5/§6) plus the parser below.

### 4.1 Grammar

Read line by line (`\r\n` or `\n`), 512-byte line buffer, 0x200 max per line:

- **Comments**: `//` to end of line; `/* ... */` block (multi-line; error
  `"There is a missing */ in %s"` on EOF). `/* */` is stripped inline.
- **Line-continuation/escape**: a line beginning with `@` has the `@` removed
  (used to force literal interpretation / preserve case on an otherwise
  lowercased line). Lines that do not start with `@` are **lowercased**
  (`_strlwr`) unless `!preservecase=true` is in effect.
- **Whitespace**: leading/trailing spaces and tabs on a line are trimmed; keys
  are right-trimmed.
- **`[SectionName]`** — section header (name trimmed). A `]`-less header is
  rejected (incomplete).
- **`key=value`** — key/value pair in the *current* section. Keys may repeat
  (all occurrences are kept; lookups return the first, case-insensitive).
- **`Name={`** — a **block**: `Name` becomes a key whose value is a nested
  section list. Contents are parsed recursively until a lone `}` line closes the
  block. Serializer re-emits `Name={` + nested sections + `}`. A missing `}` at
  EOF is an error (`"There is a missing } in %s"`).
- **`!directive`** — control directives (see 4.2).
- **`#define name value`** — C-preprocessor-style macro definition (this is how
  `Content\GameTypes.h` works).
- **`$(name)`** — macro reference, expanded recursively at parse time (the
  `$(StockBattle)` in the shipped files becomes `0`). Any `key=value` line whose
  value contains `$(` is macro-expanded. Recursive expansion is cycle-guarded.
- **Bare lines** — a line with no `=` and no `[` creates a key with an empty
  value (harmless).

Macros are resolved from the **macro table** (name → value). `#define` lines add
to it; unknown `$(...)` references resolve to the empty string.

### 4.2 Directives (`!...`)

| Directive | Effect |
|---|---|
| `!include=<path>` | Parse `<path>` as another info file **into the same tree**; relative paths resolve against the including file's directory. Quoted paths allowed. Include files are **deduped via an include cache** (a file is parsed once). |
| `!concatenate=true\|yes\|1` | Toggle concatenation mode (parser flag). |
| `!preservecase=true\|yes\|1` | Toggle case preservation (default: keys/values lowercased). The shipped .nfm files set `!preservecase=true`. |
| `!<name>=<value>` | Define a custom macro/directive `name` → `value`. |

### 4.3 In-memory tree

- **Root/tree object**: `+0x00` first-section, `+0x05` concatenate flag, `+0x06`
  preservecase flag, `+0x0c` include list, `+0x44` sorted section list (doubly
  linked, head at `+0x44`), `+0x48` count, `+0x4c` parser context. Created by
  `FUN_00451390`, freed by `FUN_00451510`.
- **Section node** (0x20 B, `FUN_004524b0`): `+0x00` vtable, `+0x04` parent,
  `+0x14` name, `+0x18` key list. Sections are kept sorted by name.
- **Key node** (0x1C B, `FUN_00453c40`): `+0x00` vtable, `+0x04` owning section,
  `+0x14` key name, `+0x18` value string (or block). Every parse creates a new
  node (duplicate keys retained); `FUN_00453b50` returns the **first**
  case-insensitive match.
- Block contents are a nested section list hung off the block key (assembled by
  `FUN_00454f20`, serialized by `FUN_00451b40`).

### 4.4 Parser/serializer function map (the reusable library)

| VA | Size | Role |
|---|---|---|
| 0x00451390 | 171 | Parse-file entry: open + parse + missing/empty check (`"%s is missing or empty!"`) |
| 0x00450960 | 295 | File open/read wrapper (mode 0 read / 1 write) |
| 0x00450900 / 0x00450940 | 60/23 | File wrapper ctor / close |
| 0x004515c0 | 107 | Parse setup → calls parse loop |
| 0x00451630 | 1293 | **Parse loop** (line reader, comment/`@`/trim handling) |
| 0x00451c40 | 653 | **Line handler**: `[section]`, `key=value`, `key={` block recursion |
| 0x00451ed0 | 1098 | `!` directive handler (`include`/`concatenate`/`preservecase`/custom) |
| 0x00452320 | 139 | `#define` handler |
| 0x00451270 | 285 | `$(macro)` resolver (recursive, cycle-guarded) |
| 0x004510e0 | 397 | Macro-table define |
| 0x004523b0 / 0x00452490 | 147/31 | Section lookup / find-or-create (block mode) |
| 0x004524b0 | 292 | Create/insert section node |
| 0x00453c40 | 116 | Append key node (duplicates allowed) |
| 0x00453b50 | 62 | Key lookup (first match, case-insensitive) |
| 0x00453d30 / 0x00453df0 | 80/83 | Read string / int value (required flag → `"%s: [%s]%s is a required entry!"`) |
| 0x00453dc0 / 0x00453e80 | 40/25 | Set string / int value |
| 0x004544d0 / 0x00454d80 | 83/416 | Read sub-tree (block contents) |
| 0x00454f20 | 277 | Block attach/serialize (`Name={` … `}`) |
| 0x00451b90 | 84 | Serialize entry: write tree to its file |
| 0x00451b40 | 67 | Recursive section serializer |
| 0x00453a80 | 205 | Section serializer (`[name]\r\n`, blank line after) |
| 0x00454610 | 161 | Key serializer (`key` / `key=value\r\n`) |
| 0x004578a0 | 174 | Include-file registration |
| 0x00450310 / 0x004505b0 | 558/54 | `FindFirstFile`/`FindNextFile`-style directory scan wrapper |

Output is written with `\r\n` line endings; a blank line separates sections.

## 5. The .nfm format spec

Ground truth = the 21 shipped files (`resource\MISSIONS\*.nfm`) + the editor's
reader (`FUN_00404f00`) + writer (`FUN_004060b0`).

### 5.1 Top-level layout

```
!include=Content\GameTypes.h
!preservecase=true

[info]
author=...
info=...            (e.g. "Standard Mission")
link=...            (e.g. www.microsoft.com/games/mechwarrior4)
longname=...        (display name, e.g. "Alpine")

[ruleset]
type=$(StockBattle)         <- one line per allowed rule
type=$(StockTeamBattle)
team=8                      <- optional per-rule team count
alignment=6                 <- optional per-rule alignment

[scenarios]
ScenarioName={
[server]
	ruleset=$(StockDestruction)
	name=...                (optional)
	teamAllowed=0|1
	teamcount=<0..8>
	scenariotext=resource\missions\<file>.txt   (optional)
	... more optional keys (5.3) ...
	team_0={ teamdata{ ... } }   (optional, see 5.4)
	bot_0={ botdata{ ... } }     (optional, see 5.5)
}
```

The shipped files use a **tab** to indent the `[server]` block's keys (the
parser trims whitespace, so indentation is cosmetic).

### 5.2 Game-type macros (`Content\GameTypes.h`)

`!include=Content\GameTypes.h` is a **preprocessor file**, not a tree section:
`#define` lines feed the macro table. Values:

| Macro | Value | | Macro | Value |
|---|---|---|---|---|
| `$(StockBattle)` | 0 | | `$(CustomBattle)` | 6 |
| `$(StockTeamBattle)` | 1 | | `$(CustomTeamBattle)` | 7 |
| `$(StockDestruction)` | 2 | | `$(CustomDestruction)` | 8 |
| `$(StockTeamDestruction)` | 3 | | `$(CustomTeamDestruction)` | 9 |
| `$(StockMissionPlay)` | 4 | | `$(CustomMissionPlay)` | 10 |
| `$(StockCampaign)` | 5 | | `$(CustomCampaign)` | 11 |
| | | | `$(CustomUndefined)` | 12 |
| | | | `$(SinglePlayer)` | 13 |

`GameTypeCount = CustomUndefined + 1 = 13` (the editor's per-type arrays are
sized 13; index 13/SinglePlayer is a separate flag). Note the **editor's
display strings** are the `$(...)` forms — the shipped `defianceholds.nfm` uses
`ruleset=$(StockMissionPlay)` inside `[server]`, which resolves to `4`.

### 5.3 `[server]` keys, types and validation ranges (from the editor)

| Key | Type | Range / values | Written if |
|---|---|---|---|
| `ruleset` | int | 0..12 (game-type index) | always |
| `name` | string | — | always (map name) |
| `teamAllowed` | int | 0 or 1 | always |
| `teamcount` | int | 1..8 (if teamAllowed); else forced 0/0 | always |
| `scenariotext` | string | path (e.g. `resource\missions\des.txt`) | non-empty |
| `killLimit` | int | 0 or 1 | non-empty |
| `killLimitNumber` | int | 1..99 (default `10`) | killLimit==1 |
| `respawnLimit` | int | 0 or 1 | non-empty |
| `respawnWaveNumber` | int | 1..9 (default `1`) | respawnLimit==1 |
| `isNight` | int | 0 or 1 | non-empty |
| `weather` | int | 0 or 1 | non-empty |
| `radarmode` | int | 0..2 | always (0 default) |
| `onlyStockMech` | int | 0 or 1 | non-empty |
| `maximumtonnage` | int | 25..100 | non-empty |
| `maximumCBills` | int | 2,000,000..34,999,999 | non-empty |
| `gameLength` | int | 1..120 (minutes) | non-empty |
| `scriptName` | string | custom script name | non-empty |

(The `[server]` keys are case-insensitive — the shipped files mix `teamAllowed`
and `teamcount` casing; the writer emits `teamcount` lower-case.)

### 5.4 `team_N` block (`teamdata` sub-key)

Written per team index `N` while `teamAllowed==1`:

```
team_0={
teamdata{
maximumTonnage=25..100
minimumTonnage=25..100
maximumTotalTonnage=100..1600
maximumCBills=2000000..35000000
maximumTotalCBills=2000000..500000000
maxPlayersOnTeam=1..16
skin=<single char '0'-'9' or 'a'-'z'>
alignment=0..7
}
}
```

Each field is emitted only when set (a non-default value). Constraint checked:
max ≥ min (else both invalidated).

### 5.5 `bot_N` block (`botdata` sub-key)

```
bot_0={
botdata{
botCount=1..14
team=<1..teamcount>        (only meaningful when teamAllowed==1)
maximumTonnage=25..100
minimumTonnage=25..100
maximumLevel=0..9
minimumLevel=0..9
}
}
```

### 5.6 `[ruleset]` details

Repeated `type=$(...)` entries are the mechanism for a multi-rule map: each
`type=` line is one allowed game type. Per-rule optional keys follow their
`type` line: `team=<1..8>` (team count) and `alignment=<0..6>`. The stock
alpine.nfm declares two rule groups (destruction + team-destruction, and battle
+ team-battle). The editor's per-type arrays (`+0x4e8` flags, `+0x554` team
count, `+0x588` alignment) mirror these. If the single-player flag is set, the
writer emits a `type=$(SinglePlayer)` line in `[ruleset]`.

### 5.7 Round-trip behavior

- **Load** (`FUN_00404f00`): parse `<dir>\<map>.nfm`, populate ruleset flags +
  scenario list + per-scenario server/team/bot rows; out-of-range values are
  clamped or dropped (defaults shown above).
- **Save** (`FUN_004060b0`): rebuild the tree from the UI and serialize. Only
  non-default fields are written (except the always-written keys). The output is
  normalized: `!include` / `!preservecase` first, then `[info]`, `[ruleset]`,
  `[scenarios]`. The original file's own formatting/comment/order is **not**
  preserved (parse→modify→re-serialize).

## 6. The Server Cycle List (`servercycle.txt`)

- CLI: `NFMEditor.exe -cycle <file>` (also `-cycle <file> ` with a trailing
  space). `FUN_00401210` validates the argument (`"INVALID PARAMETER - No
  parameter"`, `"INVALID PARAMETER - No space after"`); default file is
  `servercycle.txt` (`FUN_004012c0`, InitInstance).
- Format (ground truth: the shipped `ServerCycle.txt`):

```
[cycle]
map=Shoreline.nfm::Shoreline3
map=Alpine.nfm::Alpine4
...
```

  Each entry: `map=<mapfile>::<ScenarioName>` (scenario = the `[scenarios]`
  block name in the map's `.nfm`). The editor list shows two columns (map name,
  scenario/game-type) joined with `::`.
- Save: `FUN_00402720` (invoked from the OnClose handler `0x00402E80`, which
  prompts `"Do you want to save the Server Cycle List?"`). On exit with an
  empty list: `"The current Server Cycle List is empty.  ... will stay at its
  last saved state."`. Success message: `"Server Cycle List Saved."`.
- Row population from an `.nfm` is `FUN_004023a0` (reads a scenario's
  `[server]` ruleset/teamAllowed/teamcount into one list row).

## 7. Editor UI structure (main dialog object offsets)

The main window object (thiscall `param_1` throughout the handlers) layout:

| Offset | Control / field |
|---|---|
| +0x20 / +0x24 | parent handles (frame access via `Ordinal_2864`) |
| +0x2c0 | Server-cycle list control (columns: map, scenario) |
| +0x340 | Missions/UserMissions folder combo (0=`resource\Missions\`, 1=`resource\UserMissions\`) |
| +0x380 | Map listbox (populated from `*.nfm` by `FUN_00401e00`) |
| +0x3c0 | Rules list (18 columns, see below) |
| +0x180 | Bot list (7 columns) |
| +0x400 | longname edit | +0x440 | link edit |
| +0x480 | info edit | +0x4c0 | author edit |
| +0x3a8 | "has current file" flag | +0x3ac | dirty flag |
| +0x4dc | app icon (ID 0x80) |
| +0x4e8 | 13 × game-type enabled flag (one per GameTypeCount) |
| +0x51c | 13 × per-type custom script-name list head |
| +0x554 | 13 × per-type team count (default 8) |
| +0x588 | 13 × per-type alignment (default 6) |
| +0x550 | SinglePlayer flag (game-type index 13) |

List columns (from `FUN_00404b60`):

- **Rules** (+0x3c0, 18): Rule Name, Rule Set, Scenario Name, Team Allowed,
  Team Count, Scenario Text File Name, Kill Limit Allowed, Kill Limit Count,
  # of Waves Allowed, # of Waves Count, Night, Weather, Radar Mode, Stock
  'Mechs Only, Max Tonnage, Max C-Bills, Game Length, Custom Script Name.
- **Teams** (+0x380, 9): Team #, Max Tonnage, Min Tonnage, Max Total Tonnage,
  Max C-Bills, Max Total C-Bills, Max # of Players, Skin, Alignment.
- **Bots** (+0x180, 7): Rule #, # of Bots, Team #, Max Tonnage, Min Tonnage,
  Max AI Level, Min AI Level.

Handlers: `FUN_00404b60` = New/Open (sets columns, default file `new.nfm` or
loads current via `FUN_00404f00`); `FUN_00404f00` = load; `FUN_004060b0` =
save; `FUN_00406ee0/00406fe0` = populate team/bot lists; `FUN_00406eb0/00406fb0`
= per-scenario team/bot data accessors; `FUN_00407120/00407160` = ruleset
helpers; `0x00402E80` = OnClose (cycle-list save prompt).

## 8. Bundled GameOS framework (0x408xxx–0x44Exxx)

The tool links a large slice of the **GameOS** engine (the same framework the
game EXE uses), which is why it must run from the game root:

- DirectSound init/caps dump (`FUN_0041a0b0`, 16.7 KB — the big
  `SECONDARYMONO/SECONDARYSTEREO/MaxHwMixing*/FreeHw3D*` report builder over
  the `DAT_00470810` caps table), GameOS memory manager (heap tags
  `DAT_004e4a38`/`004e4b48`, "GameOS_Memory*", "GameOS Parent Heap"),
  file/mapped-file I/O (`CreateFileMappingA`, `UnmapViewOfFile`),
- Direct3D/DirectDraw/DirectInput/DirectPlay wrapper error tables
  (D3DERR_*, DDERR_*, DIERR_*, DPERR_*), texture codecs (BMP/TGA/JPG loading,
  mipmap rules — the "Only power of 2..." diagnostics), registry helpers
  (`\Config\Platform`, `Config Manager\Enum`), AGP miniport detection,
- `Language.dll` / `blade.dll` / `gundll.dll` / `dbghelp.dll` / `dsetup.dll` /
  `ijl10.dll` loader strings, `GameOS.vxd`, MAPI (MAPISendMail), a SQL
  connection string (`DRIVER={SQL Server};...`), `VideoCard.txt` dump.

This is the same subsystem family as the game EXE's bundled engine code; the
`.nfm` reader/writer and the info-file library (§4) are the parts unique to this
tool's workflow (the game EXE reads `.nfm` with its own copy of the same info
parser — see `src\mw4mercs`).

## 9. Notable strings (VA → value)

`0x46E108` `servercycle.txt` · `0x46E61C`/`0x46E634` `resource\Missions\*.nfm` /
`resource\UserMissions\*.nfm` · `0x46EBC4` `new.nfm` · `0x46E1D4` `NFM File` ·
`0x46EEA0` `Content\GameTypes.h` · `0x46EEB4` `!include` · `0x46EEC8`
`!preservecase` · `0x46EE74`/`0x46EE88` `resource\Missions\` /
`resource\UserMissions\` · `0x46E738` `cycle` · `0x46E744` `map` · `0x46E740`
`::` · `0x46E764` `Do you want to save the Server Cycle List?` · `0x46E7B4`
`The current Server Cycle List is empty.  ...` · `0x46E74F` `Server Cycle List
Saved.` · `0x46ED4C` `Not enough memory to view the current NFO file.` (sic)

Field strings (`[server]`/blocks): `ruleset` `0x46EC24/0x46EC68` · `scenarios`
`0x46EC54` · `server` `0x46EC60` · `teamAllowed` `0x46EC78` · `teamCount`
`0x46EC84` · `scenarioText` `0x46EC90` · `killLimit` `0x46ECA0` ·
`killLimitNumber` `0x46ECAC` · `respawnLimit` `0x46ECBC` ·
`respawnWaveNumber` `0x46ECCC` · `isNight` `0x46ECE0` · `weather` `0x46ECE8` ·
`radarMode` `0x46ECF0` · `onlyStockMech` `0x46ECFC` · `maximumTonnage`
`0x46ED0C` · `maximumCBills` `0x46ED1C` · `gameLength` `0x46ED2C` ·
`scriptName` `0x46ED38` · `team_%d` `0x46ED7C` · `teamdata` `0x46ED84` ·
`maximumTotalTonnage` `0x46EDB0` · `maximumTotalCBills` `0x46EDD4` ·
`maxPlayersOnTeam` `0x46EDE8` · `skin` `0x46EDFC` · `alignment` `0x46EE04` ·
`bot_%d` `0x46EE10` · `botdata` `0x46EE18` · `botCount` `0x46EE20` · `team`
`0x46EE2C` · `maximumLevel` `0x46EE54` · `minimumLevel` `0x46EE64` · `info`
`0x46EED8` · `author` `0x46EEE0` · `link` `0x46EEF0` · `longname` `0x46EEF8` ·
`type` `0x46EF0C` · `name` `0x46EF6C` · `$(SinglePlayer)` `0x46EF34`

## 10. Key data-structure take-aways

1. `.nfm` and `servercycle.txt` share one grammar: the GameOS **info file**
   format (sections, `key=value`, `Name={` blocks, `#define`/`!` directives,
   `$(macro)` expansion, `//`/`/* */` comments).
2. The format is **case-insensitive** by default; `.nfm` files opt out with
   `!preservecase=true`. Keys are lowercased on read otherwise.
3. **Duplicate keys are meaningful** — a map's `[ruleset]` is a list of repeated
   `type=` lines; the parser retains every occurrence and readers take the
   first match.
4. Game types are a **13-entry enum** (0..12, 13 = SinglePlayer) defined by
   `Content\GameTypes.h`; the editor's state arrays are sized exactly 13.
5. The writer normalizes output and only emits non-default optional fields —
   a hand-edited `.nfm`'s formatting/comments are not preserved on save.
