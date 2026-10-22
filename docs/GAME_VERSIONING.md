# Game versioning in the reference (MW4Mercs.exe)

How the reference build identifies its version and how that identity is used to
keep multiplayer clients on the same version. All addresses are reference VAs;
function names are the oracle's `func_<VA>` names. This is reference (oracle)
RE.

## TL;DR

- **One version value, stored in two hardcoded copies**: `"50.07.01.2105"`
  (`.rdata` `0x0076CB3C`, loaded at startup into `g_game_version`
  `0x00858924`, and `0x00773040`, read by the join handshake and saved-data
  paths). This is the official Point Release 1 (PR1) build.
- **Hosts advertise it** as the DirectPlay session attribute `GameVersion`
  (and inside the session config blob as the `\v` directive).
- **The server browser compares** each enumerated session's `GameVersion`
  against the local one with whole-string lexicographic compares (`_stricmp`
  in the filter, `_mbscmp` in the sort — no numeric parsing; older = string
  less than local, newer = greater). Three UI toggles (`curveroff` /
  `newveroff` / `oldveroff`) and a 6-mode `versionsort` control filter and
  order the list; the UI shows the selected server's version as
  `ReferenceVersion` next to `LocalGameVersion`.
- **The Zone matchmaking layer has its own protocol-version gate**; its
  failure string is `"Incompatible Protocol version mismatch."`
  (`0x007A04DC`, ZoneTech error `0xC1120C05`).
- **There *is* an in-game join handshake** (net event `0x0A`, `FUN_0053F210`,
  §7): the joiner sends a packed 64-bit **version code** (derived from
  `"50.07.01.2105"`) and an 8-byte **content checksum**; the receiver compares
  both against its own computation and answers `0x0B` (reject + status) or
  `0x0C` (accept + checksum echo the joiner re-verifies in `FUN_0053F9B0`).
  Mismatches log `Player_Reject\t%d\t%d` (`0x0077B730`) with status `4`
  (content), `5` (version), `6` (banned IP) or `8` (duplicate player GUID).
  The content checksum covers the code bytes of the 15 resource-loader
  functions plus one mission archive entry (§8).
- The connect path's DirectPlay *application GUID* (`0x007A2E30` =
  `{36E95EE0-8577-11CF-960C-0080C7534E82}`) is game identity only, identical
  across builds. The advertisement + browser filter/sort is advisory; the join
  handshake is the actual same-build gate.
- The handshake and the variant self-digest are the game's two integrity
  checks; §10 describes what each one covers, and §11 lists the observed
  limitations.

## 1. The version value

| Item | Address | Notes |
|---|---|---|
| Build version string | `0x0076CB3C` | `"50.07.01.2105"` |
| Local version global | `0x00858924` | `char*` in BSS, zero-initialized |
| Option/config init | `FUN_00407BE0` | `0x00407BE0`: sets `g_858924 = 0x76CB3C` |
| Log/registry init | `FUN_00737020` | `0x00737020`: calls `FUN_00407BE0`, then a fallback |

`FUN_00737020` (called from the startup/log init `FUN_00709120` and
`FUN_007374B0`) calls the big option-init `FUN_00407BE0`, which assigns
`g_game_version = "50.07.01.2105"`. Only if that pointer were still null/empty
would `FUN_00737020` build a date-derived fallback
`wsprintfA(0x008AA390, "00.00.%02d.%02d00", month, day)` (format `0x007A6958`)
and point `g_858924` at it — dead in the normal path.

The version string doubles as a **per-version registry value name**: the
registry key is `"Software\Microsoft\Microsoft Games\%s"` (format `0x007A6918`)
and `FUN_007086D0` / `FUN_00708880` read/write a value named by `g_858924`
(window size, perf counter, exe date). So each build keeps its own settings.

### 1.1 The four fields (and the two hardcoded copies)

The string is four `.`-separated decimal fields of **2+2+2+4 digits**
(`50` `07` `01` `2105`). Nothing in the game assigns meaning to them
individually — the fallback format `"00.00.%02d.%02d00"` (month in field 3,
day×100 in field 4) is the only hint at the intended shape, and the shipped
family shows the convention:

| Binary | Version | Note |
|---|---|---|
| `MW4Mercs.exe` | `50.07.01.2105` | this target |
| `MW4Ed2.exe` | `50.06.10.0801` | mission editor (older) |
| `autoconfig_MERCS.exe` | `50.06.09.3002` | graphics config tool |

(`50` = MW4 family, field 2 = title/generation, field 3 = minor series,
field 4 = build number; see `docs/editor_tools/` for the tool versions.)

There are **two hardcoded copies**, both read-only literals, and they are read
by different subsystems:

| Copy | Address | Consumers |
|---|---|---|
| `g_858924` target | `0x0076CB3C` | UI (`LocalGameVersion`), browser filter/sort, session advertisement, gundll wide conversion, registry key, log init |
| `DAT_00773040` | `0x00773040` | join handshake version code (`FUN_00535F30`), GameSpy `gamever` (`FUN_004D8A80`, `FUN_004FF490`), log header (`FUN_00563800`), saved-game version compare (`FUN_00616830`), stats (`FUN_00564AA0`, `FUN_00565E00`), mission/save data (`FUN_00614A80`, `FUN_00615100`, `FUN_00615FF0`, `FUN_0061A510`) |

A third copy is the unreferenced what-string
`"@(#) Microsoft MechWarrior IV: Mercenaries Build 50.07.01.2105"`
(`0x007B4640`, no pointers into it). Both live copies have ~2 bytes of
zero-padding slack before the next literal (usable string length ≈ 14 chars +
NUL), so an in-place overwrite is possible; changing only one of them makes
the advertised version and the join version code disagree.

### Where the player sees it

The multiplayer UI (bound in `FUN_00404D60` / `FUN_00404AC5`) has three
version fields:

| UI field name | Name string | Backing global | Meaning |
|---|---|---|---|
| `GameVersion` | `0x0076C218` | `0x007B7C70` | version of the session currently selected/received (`FUN_00401E50` GetGameData) |
| `ReferenceVersion` | `0x0076C260` | `0x007B7E44` | version of the *selected server*, filled on demand |
| `LocalGameVersion` | `0x0076C274` | `0x00858924` | this client's own version |

`ReferenceVersion` is filled by the UI event `GetReferenceVersion`
(`0x0076C4E0`); its handler at `0x004010B0` (inside `func_00401006.c`) takes
the browser's current selection (`FUN_006F6350`, which returns the selected
entry or NULL), reads its `GameVersion` attribute (`FUN_006F5B80`) and
`strncpy`s it (0xFF bytes) into `0x007B7E44`. It is informational — the player compares the two strings on the
server-info panel.

The version also goes out in:

- the **log header** (`Game_Version` block at `0x0077EA3x`, writer
  `FUN_00563800` — game name/version/author/server info), and
- the **gundll (GunDll) interface init** (`FUN_006FCF00` / `FUN_00701030`
  convert `g_858924` to wide and pass it to the gundll vtable at `0x008589A4`).

## 2. How it is advertised (host side)

The session config is a backslash-directive blob parsed by `FUN_00705D80`
(`0x00705D80`):

```
\g<name>   -> session+0x1878   (game name)
\m<map>    -> session+0x1834   (map type)
\v<ver>    -> session+0x18B8   (GAME VERSION)
\a / \h / \r -> session+0x18F8 / +0x1938 / +0x1978 (UnlimitedAmmo / NoHeat / NoRespawn)
\p<xy>     -> session+0xC34 + idx*0x40  (per-player name, count at +0x1874)
\c<xy>     -> session+0x1234 + idx*0x40 (per-player clan)
```

Two registration paths publish the DirectPlay session attributes:

- **`FUN_00705FE0`** (`0x00705FE0`, "game creation / server info registration")
  copies the lobby record's config blob (`lobby+0x30`, 3000 bytes) into
  `session+0x7C`, parses it with `FUN_00705D80`, then sets
  `GameVersion = session+0x18B8` — i.e. the advertised version is whatever the
  host's `\v` directive says. It also sets `Mod Name`, `Product Name`,
  `IpAddr`, `ServerPort`, `GName`, player/bot counts, `MaxPlayers`, `MapType`,
  `PasswordProtected`, `Instance`, `Handle`, `Flags`, `Protocol`,
  `GameType`, `Update Time`, `ExpectRefresh="false"`, `UnlimitedAmmo`,
  `NoHeat`, `NoRespawn`, and one entry per player. `FUN_00705F9C` is the
  sibling variant of the same routine.
- **`FUN_007008E0`** (`0x007008E0`, `IGunHost::AddPlayer`) sets
  `GameVersion = g_858924` directly (wide), alongside `MaxPlayers`,
  `PasswordProtected` (`L"No"`/`L"Yes"`), `Instance`, `MapType` (`"-"`),
  `Flags`, `GameType` (`"0"`).

`Instance` is the **game-instance GUID** (a 16-byte game ID formatted with
`"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}"`, `0x007A1120`), not a
version derivative. `GameVersion` is the only build-version field on the wire
(a plain string).

## 3. Client-side matching (server browser)

Session attributes are read with `FUN_006F5B80(obj, "GameVersion")` and
compared as **whole strings** — `_stricmp` (`0x0076B2AC`, case-insensitive) in
the filter, `_mbscmp` (`0x0076B300`, case-sensitive) in the sort. **There is
no numeric/semantic version parsing anywhere**: "older" means the entry's
version string is lexicographically *less* than the local `g_858924` string,
"newer" means *greater* (argument order in the calls is `(entry, local)`).
That works only because the shipped string uses fixed-width zero-padded fields
(`50.07.01.2105`); an unpadded field breaks the order (`"50.7.x" > "50.10.x"`
lexicographically, although 50.7 < 50.10 numerically), and the filter
(`_stricmp`) and sort (`_mbscmp`) even disagree on case.

### 3.1 The filter callback

`FUN_006F6EB0` (`0x006F6EB0`, a method of the filter object vtable at
`0x0079FD24`) implements three version predicates against `g_858924`, enabled
by bytes of the filter object:

| Filter byte | Predicate (`_stricmp(entry, local)`, entry = session `GameVersion`) |
|---|---|
| `+0x40` (`curveroff`) | equal (`== 0`) |
| `+0x41` (`newveroff`) | entry **newer** (`entry > local`, `> 0`) |
| `+0x42` (`oldveroff`) | entry **older** (`entry < local`, `< 0`) |

(The UI names agree: `newveroff` = hide newer, `oldveroff` = hide older.)

The callback is invoked with a mode (1–4) that encodes the ZoneTech filter
engine's AND/OR polarity: mode 1 rejects when the predicate holds, mode 2
accepts when it fails, mode 3 accepts when it holds, mode 4 rejects when it
fails; unset bytes simply fall through. A missing `GameVersion` attribute is
treated as predicate-false. The remaining filter bytes cover the non-version
filters (ping/gametype/players/clan/available/active).

### 3.2 The UI filter parameters

`FUN_00402660` (`0x00402660`, SetFilterParam) / `FUN_004024B2` (`0x004024B2`,
GetFilterParam) map UI script parameter names to those globals:

| Parameter | String | Global | Filter byte |
|---|---|---|---|
| `curveroff` | `0x0076B890` | `0x007B7C60` | `+0x40` (equal) |
| `newveroff` | `0x0076B878` | `0x007B7C61` | `+0x41` (entry newer) |
| `oldveroff` | `0x0076B884` | `0x007B7C62` | `+0x42` (entry older) |
| `versionsort` | `0x0076B86C` | `0x007B7C64` (1–6) | sort mode |

All default to 0 (no version filtering, no version sort). A bad `versionsort`
value asserts with `"Invalid version sorting filter setting '%s'.  Should be a
number between 1 and 6."` (`0x0076B94C`).

`FUN_004022E0` (`0x004022E0`, ApplyFilters) pushes the three bytes onto the
filter object through the trivial setters `FUN_006F73B0` / `FUN_006F73D0` /
`FUN_006F73F0` (`+0x40`/`+0x41`/`+0x42`) and the sort mode through
`FUN_006F79E0`.

### 3.3 The version sort

- `FUN_00401140` (`0x00401140`, the `SortGameList` UI callback) dispatches on
  the sort-key name; when the key is `"GameVersion"` (`0x0079FA48`) it clamps
  `g_007B7C64` to 0–6 and passes it to `FUN_006F7BF0`.
- `FUN_006F7BF0` (`0x006F7BF0`) partitions the list into three groups by
  `_mbscmp(entry_version, g_858924)` (case-sensitive): **entry < local →
  older**, **entry == local → same**, **entry > local → newer** — the same
  lexicographic comparison as the filter, in the opposite call order and
  case-sensitively. The mode (1–6) then selects the resulting order/grouping
  of those three groups; mode 0 leaves the list unsorted by version.
- `FUN_006F7B10` (`0x006F7B10`) is the attribute-change callback: when an
  entry's `GameVersion` (or `Flags`) attribute arrives/updates, it re-runs the
  `FUN_006F7BF0` reorder.

### 3.4 List ingestion gate

Before an entry is even added to the list, `FUN_006FFC90` (`0x006FFC90`),
`FUN_006FEAB0` (`0x006FEAB0`) and `FUN_006FF640` (`0x006FF640`) require the
entry's `Protocol` attribute (`0x0079FAD4`) to equal `"0"` (`0x0079FB30`) and
its `ExpectRefresh` attribute (`0x0079FAFC`) to equal `"false"`. The `Protocol`
attribute is the lobby/browser protocol marker (set from `session+0x78` in
`FUN_00705F9C`), not the build version.

## 4. The lobby (ZoneTech) protocol gate

The matchmaking layer's error-code→string map is `FUN_006FCB40`
(`0x006FCB40`). Its ZoneTech error family `0xC1120xxx` includes:

- `0xC1120C05` → `"Incompatible Protocol version mismatch."` (`0x007A04DC`)

That is the hard "your client's protocol/version does not match the lobby"
rejection — the closest thing to a version gate in the matchmaking path. The
rest of the family (`0x007A03E8`–`0x007A0B8C`) covers session/GUID/lobby
errors such as `"The requested component version in not available."`
(`0x007A0B8C`) and `"Client is disconnected from the server."` (`0x007A0424`).

## 5. What is and is not version-gated

- **The connect path** `FUN_00703E60` (`0x00703E60`) verifies the DirectPlay
  application GUID at `0x007A2E30` = `{36E95EE0-8577-11CF-960C-0080C7534E82}`
  and rejects a mismatch. This identifies the *game* (MW4 Mercs) and is the
  same for every build, so it does not separate versions.
- **The advertised `GameVersion` attribute is not what the join handshake
  checks.** The handshake's version code is computed from the second hardcoded
  copy `DAT_00773040` (§1.1), not from the advertised string nor from
  `g_858924`; so a host can advertise an arbitrary `GameVersion` yet the
  in-session check still validates the real build (and vice versa).
- **The browser filter/sort is advisory.** A client can reach a session whose
  advertised version differs (join directly, or disable the browser version
  filters); the lobby protocol check and the join handshake (§7) are the
  enforcement, and the UI deliberately surfaces both versions
  (`ReferenceVersion` vs `LocalGameVersion`) so the player can decide.
- **What is not gated at all:** content outside the 15 hashed loader functions
  and the mission entry, the peer's actual variant files (only a local
  self-digest, §9), the peer's identity/IP fields (self-reported), and
  anything after join (no runtime re-validation, §10).

## 6. Related version checks (not multiplayer)

For contrast, the binary has many other version checks that are unrelated to
client compatibility:

- **Data-format magic+version asserts** for MLR/ERF/OBB/GFX/GAF assets —
  e.g. MLR `"MLR#"` + version `0x12` (`FUN_00421E60` / `FUN_00421EC0`),
  ERF (`FUN_004AF200`), OBB (`FUN_004FEC10`), with strings like
  `"Application must be rebuilt to use this version of MLR data"`
  (`0x0076DD24`).
- **Saved-game version** (`FUN_00616830`, message
  `"You are loading a game saved by a newer game version.  The saved game
  might not work correctly."`, `0x0078C310`) — single player.
- **Diagnostics**: `GetDLLVersions` (`0x007A4750`) reads file versions via
  `VERSION.dll` (`GetFileVersionInfoA`, `0x007B1318`); `"Executable version"`
  / `"DirectX version"` / `"GameOS build version"` report block
  (`0x007A4A59`+).
- **gundll/gun-auth** receives the version string at interface init
  (`FUN_006FCF00` / `FUN_00701030`).
- **DRM/anti-tamper (not multiplayer)**: `FUN_0052A460` is the SafeDisc CD
  check (`CdaSys*`, `"ScsHD.csa"`, anti-tamper verification);
  `FUN_0052AAB0` calls the registry/date checks `FUN_00536060` /
  `FUN_00536190` ("Date/time validation"); `FUN_005FCC80` is a local
  XOR-checksum/flag check. These are copy-protection/clock-tamper tripwires,
  unrelated to client compatibility.

## 7. Join-time validation — net event `0x0A` (`FUN_0053F210`)

This is the actual same-build/content gate, and it happens **in-session** (after
the DirectPlay connect). It corrects an earlier reading of this doc: there *is*
a join-time build check.

### 7.1 The message path

The in-game net dispatcher `FUN_00546C60` (`0x00546C60`) switches on an event id
(jump table `0x00547074`, index = `eventId - 0x0A`). The relevant events:

| Event | Handler | Role |
|---|---|---|
| `0x0A` | `FUN_0053F210` | player join/registration message — validate + accept/reject |
| `0x0B` | `FUN_0053F910` | join **reject** reply — sets local session state (`this+0x3514` = 2/3/4/5) |
| `0x0C` | `FUN_0053F9B0` | join **accept** reply — joiner re-verifies the echoed checksum; mismatch sets state 3 |

Flow:

1. The joiner's sender `FUN_0053FA70` (`0x0053FA70`) builds the `0x0A` payload
   (content checksum via `FUN_004D2AB0` + `FUN_0062DDC0` at `0x53FAC2` /
   `0x53FAEE`, version code via the `FUN_00535F30` family at `0x53FB0C`, plus
   the player record), calls `FUN_0053F210` on its own copy (loopback,
   `0x540021`), then transmits.
2. Every receiving peer runs `FUN_0053F210`, which recomputes the local
   reference values into `DAT_007DDD50/54` (content checksum), `DAT_007DDD58/5C`
   (`FUN_00535B40` = 0,0 — reserved), `DAT_007DDD60/64` (version code) and sets
   `DAT_007DDD48 = 1` (join-validation-in-progress).
3. The result goes back as `0x0B` (reject) with a 4-byte status, or `0x0C`
   (accept) with an 8-byte re-derived checksum pair; `FUN_0053F9B0` recomputes
   the pair locally and aborts the session (state 3) on mismatch, so the check
   is **mutual**.

### 7.2 The `0x0A` payload as read by `FUN_0053F210`

| # | Field | Size | Destination / check |
|---|---|---|---|
| 1 | content checksum | 8 | vs `DAT_007DDD50/54` → status **4** |
| 2 | version code | 8 | vs `DAT_007DDD60/64` → status **5** |
| 3 | flag bytes | 3×1 | scratch (one becomes slot `+0x353F` on accept) |
| 4 | name length + string | 4 + n | player slot `+0x358C` |
| 5 | dword | 4 | slot `+0x3590` |
| 6 | flag1 | 1 | slot `+0x355D` → triggers GUID1 search |
| 7 | flag2 | 1 | slot `+0x355E` → triggers GUID2 search |
| 8 | GUID1 | 8 | slot `+0x3594` |
| 9 | GUID2 | 8 | slot `+0x359C` |
| 10 | `data16` | 16 | sender's index word in dword 0 (seed for the accept echo) |
| 11 | `val5` | 4 | ban-list third key |
| 12 | `data16b` | 16 | ban-list IP key |
| 13 | content checksum again | 8 | re-checked vs `DAT_007DDD50/54` → status **4** |

Then:

- **GUID searches** (only when flag1/flag2 are set): scan the 0x2038-stride
  player table for a slot with the same GUID1/GUID2 (skipping the joining
  player's own slot, and slot 1 when a global flag is set); a match sets
  status **8**.
- **Ban check** `FUN_005450B0` (skipped for the local player index): the
  16-byte `data16`/`data16b` (IP address words) and `val5` are looked up in
  the three lists at `this+0x239D54/58/5C` (counts) / `+0x239D60/64/68`
  (data); found → status **6**.
- The status is logged via `FUN_00563550` with `"Player_Reject\t%d\t%d"`
  (`0x0077B730`) → `FUN_00563C80`, and returned as message `0x0B`.
- On accept (`status == 0`) the slot fields `+0x35B4`, `+0x35B8`, `+0x353F`,
  `+0x35DC` (16 bytes), `+0x35EC`, `+0x5558` (16 bytes) are filled, the MOTD
  chunks at `+0x309C` are re-broadcast (`this` vtable slot `+0x30`), and
  `FUN_00536DF0` / `FUN_00543EC0` / `FUN_00543BC0` run for non-self players.

### 7.3 The ban lists

`FUN_00544B60` (`0x00544B60`) rebuilds the three lists from the game config
(`ban.txt`): keys `ban` (`0x0077B7B4`), `ngban` (`0x0077B7B8`), `ispban`
(`0x0077B7C8`), values parsed with `"%d.%d.%d.%d"` (`0x0077B744`) into 16-byte
entries (first two lists) / 4-byte entries (third list), initialized from the
all-zero 16-byte constant `0x007AFAF0`. The lists are (re)built by
`FUN_00544B60` (called from `FUN_00536840` / `FUN_005449F0`, i.e. when the
config/MOTD side reloads) and torn down by `FUN_0052FA70`.

## 8. The content checksum — what the peers must match

`DAT_007DDD50/54 = FUN_004D2AB0(entry) ^ FUN_0062DDC0(entry)`, where
`entry = [game_object + 0x1804]` (the mission/archive entry index).

| Part | Function | Hash input | Output |
|---|---|---|---|
| mission entry | `FUN_004D2AB0` → `FUN_00414A70` | MD5 stream: 4-byte entry index + the archive entry's bytes | `digest[0] ^ digest[8]` (8 bits, `edx = 0`) |
| loader code | `FUN_0062DDC0` | MD5 stream: code bytes of the 15 resource loaders (addresses `0x007B55F8[i]`, sizes `0x007F2CE0[i]`) + 4-byte entry index | `d0^d1`, `d2^d3` (64 bits) |

The 15 hashed loader regions (sizes computed by `FUN_0062D5AB` /
`FUN_0062D67B` into `0x007F2CE0..0x007F2D18`; addresses from the pointer table
`0x007B55F8`):

| # | Address | Size | # | Address | Size |
|---|---|---|---|---|---|
| 0 | `0x0070E380` | `0x0B30` | 8 | `0x005ECBC0` | `0x1C50` |
| 1 | `0x004E5FD0` | `0x20B0` | 9 | `0x005ABD30` | `0x10D0` |
| 2 | `0x004C8E00` | `0x0160` | 10 | `0x005A61D0` | `0x0780` |
| 3 | `0x006212E0` | `0x3490` | 11 | `0x005EF590` | `0x03D0` |
| 4 | `0x005B6C20` | `0x0A90` | 12 | `0x0069D490` | `0x1410` |
| 5 | `0x00548F60` | `0x12820` | 13 | `0x00637F60` | `0x2DF0` |
| 6 | `0x005F2B00` | `0x4150` | 14 | `0x0062D750` | `0x06E0` |
| 7 | `0x00581480` | `0x0FA60` | | | |

(Entry 14 is the region that contains the checksum helpers themselves,
`FUN_0062DCD0`…`FUN_0062DE30`.)

`DAT_007DDD58/5C` = `FUN_00535B40` (`0x00535B40`, `xor eax,eax; xor edx,edx;
ret`) = 0,0 — a reserved/disabled third checksum slot.

The **version code** (`DAT_007DDD60/64`) is `FUN_00535F30` (`0x00535F30`): it
tokenizes `g_858924` on `'.'`, `atoi`s the components `c0..c3` and packs
`(((c0*100 + c1)*100 + c2)*10000 + c3)` as a 64-bit value (through the
`__allmul`-style `FUN_0075DC60`). For `"50.07.01.2105"` that is `5007012105`.

Notes:

- Both hashes are **unkeyed MD5 over public data** — the only "secret" is the
  algorithm, which ships in the binary.
- The mission-entry contribution is 8 bits; the loader-code part is 64 bits.
- The accept path re-derives the checksum with the peer's entry index
  (`data16[0] ^ 0`) and echoes the pair in `0x0C`; `FUN_0053F9B0` recomputes
  and compares, so the check is mutual.
- `FUN_0053F210` itself computes the pair twice (top of function and again on
  accept); `FUN_004D2AB0`/`FUN_0062DDC0` are also called by the sender
  `FUN_0053FA70` and by the joiner's verifier `FUN_0053F9B0`.

## 9. Variant (mech) file integrity and loadout validation

### 9.1 The variant self-digest

When a player-creation message is processed (`FUN_00534200` / `FUN_00533C30`),
the receiver:

1. reads the variant **name** from the message,
2. loads `Resource\VariantsMercs\<name>.mw4` **from its own local database**
   (path format `0x0077B368`, fetch `FUN_004D2E00`; mech resource id via
   `FUN_004D2CB0`),
3. reads the 16-byte digest stored inside the resource (`FUN_0041E720`,
   size 0x10),
4. recomputes `MD5(0xA1252388 + resource data)` (`FUN_0070E390` / `E3C0` /
   `E460`) — the same salted digest the variant loader `FUN_0060C12D`
   (`0x0060C12D`) computes and appends (`FUN_0041F030`) when building the
   resource,
5. `repe cmpsd`s the two digests; mismatch sets the per-player flag
   `+0x357C = 1` (and `+0x3578` holds the loaded mech resource pointer).

Consequences of the flag (both act on the **local player's own slot** — the
mechanism is self-enforcement, not peer enforcement):

- `FUN_005330C0` aborts the local player's mission entry (state `+0x3534` → 0,
  cleanup).
- `FUN_005405B5` pushes event code `1` into the player-event queue at
  `+0x204D2C` (count `+0x205524`); the queue is consumed through the accessor
  helpers in `FUN_00513B60`.

**Scope:** this is a *local self-consistency* check of the receiver's own copy
of the named variant — it catches hand-edited files whose stored digest was not
updated. It does **not** compare the sender's file against the receiver's (the
name is the only variant data on the wire), so two clients with different
`VariantsMercs` files still pass and simulate different mechs.

### 9.2 Loadout legality

`FUN_005FEEB0` → `FUN_00601EF0` validates weapon/armor slot counts against the
chassis (mount groups, `0x429` mech-type gate), and `FUN_00676EA0` validates
the GameData distributions (`ArmDistributive` / `LegDistributive` /
`SideFrontDistributive` / `CenterFrontDistributive` / `CenterRearDistributive`
in `0..1.0`, `PointsPerFerroTon` / `PointsPerReflectiveTon` /
`PointsPerReactiveTon` > 0). These run on the local copy only; they bound what
a legal mech is but are not cross-checked with peers.

## 10. Trust model — what actually happens to a modded client

| Scenario | Result |
|---|---|
| Different binary build / patched loader code / different mission entry | join rejected, status **4**, `Player_Reject` |
| Different hardcoded version string | join rejected, status **5** |
| IP listed in `ban.txt` (`ban`/`ngban`/`ispban`) | join rejected, status **6** |
| Duplicate player GUID | join rejected, status **8** |
| Variant file edited, stored digest not fixed | slot flagged `+0x357C`, mission entry aborted, event queued (self-enforcement) |
| Variant file edited, digest recomputed (salt `0xA1252388` is public) | passes — nothing cross-checks the file |
| Patch outside the 15 loader regions (damage/armor math, variant parser, validators) | passes — not hashed |
| Replay/spoof the stock checksum + version pair | passes — the pair is a pure function of shipped data, no nonce or secret |
| Spoof the IP fields in `0x0A` | ban list bypassed |
| Memory patch after join | invisible — no re-validation during play |

Runtime is peer-to-peer with no server authority: the net event table (`0x0A`–
`0x31`, `FUN_00546C60`) contains join/team/decal/mission/state handlers but
**no armor or damage message**; the integrity checks are concentrated at
join/load time, and each client simulates the shared world from its own local
data.

## 11. Observed limitations

1. **No secret, no challenge.** The handshake is a self-report of a constant:
   the expected pair is a pure function of the shipped binary and mission data.
   A client can compute or replay it regardless of the code it actually runs.
   Without a host nonce (and a keyed response) the check cannot attest to the
   sender's binary.
2. **Tiny hashed surface.** Only the 15 resource-loader functions and one
   mission archive entry are covered. The simulation, weapon/armor math, hit
   detection, damage application, the loadout validators, the variant parser,
   and the netcode itself are not.
3. **Weak mission-content contribution.** `FUN_00414A70` folds the mission
   digest to 8 bits (`digest[0] ^ digest[8]`), so the content side of the
   checksum has ≤ 256 effective values; the strength rests on the loader-code
   hash alone.
4. **Variant digest is local-only.** The salt is a constant in the binary, the
   digest is stored in the file it protects, and the check compares the
   receiver's own file with itself. A client that recomputes the digest is not
   detected.
5. **Ban lists are IP-only and self-reported.** The `0x0A` IP fields come from
   the peer; the ban list is a local `ban.txt`, with no server-side or shared
   enforcement.
6. **Identity is self-reported.** GUID1/GUID2 (the player identity used for the
   duplicate check) arrive in the message; a client can present arbitrary
   values.
7. **No runtime re-validation.** Once in, nothing re-checks the peer; a
   patched process passes forever. The `+0x357C` flag is computed locally and
   is self-enforced.
8. **Divergence is undetected.** Because variant data is not cross-checked,
   two clients can simulate different mechs and the game only notices when
   visible state conflicts.
9. **Reporting is opaque.** Failures surface as `Player_Reject <index>
   <code>`; there is no user-facing "modified files" message (the variant flag
   becomes event code 1 in an internal queue with no dedicated string).
