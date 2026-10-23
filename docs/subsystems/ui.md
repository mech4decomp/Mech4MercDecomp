# UI Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 672 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

gosScript-driven 2D UI: HUD, menus, dialogs, cursor, and screen state.

## Role and boundary

The UI subsystem is a custom, data-driven 2D framework. The game does not use
MFC for its interface; the only MFC-family code in the EXE is ATL
`CStringT<wchar_t>` string plumbing. The actual UI is built from gosScript
screens, control files, and a C++ widget/event layer.

The UI code clusters in three ranges:

- `0x00690000`-`0x0069FFFF` - shell/screen and control helpers;
- `0x006F0000`-`0x006F8FFF` - callback/update and HUD helpers;
- `0x00740000`-`0x0074FFFF` - input, window, and screen-state helpers.

The subsystem has two presentation paths:

- the frontend menus use a system-memory DIB and a GDI `StretchBlt` path
  (`g_008A9978` base, `GetDC`/`StretchBlt`);
- the in-mission scene/HUD uses the DirectDraw backbuffer and the blade
  software rasterizer, with the present path `FUN_0070B240` ->
  `FUN_007356B0`.

These paths are independent. A backbuffer composite does not appear on the
frontend menu, and a GDI/DIB overlay does not appear in the 3D scene.

## Frontend screen model

Frontend screens are defined by per-language
`content\Interfaces\Common\*interface.control` files. The loader is
`FUN_0050CED0`; the parsers/builders are `FUN_004D2000`, `FUN_0041EE70`,
`FUN_0050A5C0`, `FUN_0050BC30`, and `FUN_004D2680`.

A screen is a control file plus a region/button widget system. The event names
(`button_clicked`, `region_entered`, `key_*`) live in the data tables at
`0x0079C000` and `0x0079E000`. The shell registers 295 screen slots through the
MercsShell constructor `FUN_00630FE0`; the singleton is `g_007F2D1C`, set by
`FUN_00637AC0`. The frontend-to-mission state machine is `FUN_00535256`, with
a 16-entry jump table at `0x00535AA0` and the game object at `g_007DD268`.

The shell script `shell.script` reads
`currentScreen = callback($$GetStartScreen$$)` and runs the matching screen
script. Screens navigate by writing the SHELL VM globals
`@SHELL@currentScreen`, `@SHELL@lastScreen[33]`, and
`@SHELL@lastScreenDepth`, and by invoking `$$Shell_CallbackHandler$$` /
`$$SetShellCommand$$` plus `script_run`, `script_end`, or `terminate`.

### Main menu

`MainMenu.script` is the reference frontend contract. It has nine buttons:

| Index | Action |
|-------|--------|
| 0-2 | Training, Campaign, Instant Action -> their screen scripts |
| 3 | Multiplayer -> `START_NETWORK_SHELLS_COMMAND`, `currentScreen = LAUNCHGAME` |
| 4 | MechLab -> `ShellInitMechLabScreen`, `MECHBAY_SCREEN` |
| 5 | Options -> `OPTIONS` |
| 6 | Cinema -> `CreditsCinema.script` |
| 7 | Roster -> `PILOTENTRY` |
| 8 | Quit -> `terminate` (or `ClosingCinema.script` in demo builds) |

The screen also uses `framerate=10`, the `MMLoop.mpg` backdrop, the IS/Clan pak
panes, and the `localize$(IDS_MM_*)`/`localize$(DNL_*)` strings.

## HUD and in-mission UI

The in-mission HUD is a component table on the HUD object. The component getter
is `FUN_00629290` (`H+0x108+id*4`, 24 entries); component 3 is the zoom window.
The HUD window rect comes from the camera extents (`FUN_00644E40`), and the
target-arrow rect is `FUN_006430B0`. `FUN_00628D30` shows/hides the window
component; `FUN_00628ED0`/`FUN_006290A0` are the generic component
enable/disable pair used by `sethudcomponentenabled` (`FUN_0057DA20`).

Other HUD/control helpers:

- `FUN_0056C1E0` - `getzoomstate` script handler (returns `P+0x584 != 0`);
- `FUN_00553510` - `allowZoom` check from `options.ini`;
- `FUN_0054C5C0` - turn-speed modifier while zoom is active;
- `FUN_00559BE0` - sound trigger switch (`sfx_zoom.wav`);
- `FUN_006F0770` - callback/update helper for conditional screen updates;
- `FUN_0069A85C` - linked-list node insertion for UI objects.

The HUD uses the render 2D/font details for screen-space drawing. The UI layer
does not own the 3D scene; it draws over/alongside it.

## Input and cursor

Input is polled through DirectInput. The per-frame mouse update
`FUN_00723590` writes the normalized cursor to `g_0087DD38/3C/28/4C`; the
mouse delta is `g_00858A4C`. The keyboard ring is at `0x87E5F4`, and the
per-frame input entry is `FUN_00722730`.

The frontend consumes the cursor for control hit-testing; the in-mission HUD
uses the same normalized coordinates for component rectangles. The shell
script and the C++ event layer both see the resulting button/region/key events.

## Menu data and database reads

Menus read game data through the database and archive layers:

- database constructors `FUN_004D2D00` / `FUN_004D2E00`;
- archive fetch `FUN_004145E0`;
- pilot/savegame scanner `FUN_0051FB70`;
- MechLab counts `FUN_00609DE0` / `FUN_00609FB0` (`m_mechLabCount`);
- screen size globals `g_00858940/44`.

The menu layer does not own the data; it queries the database and displays the
result. The MechLab and pilot screens are the main consumers of the
count/scanner helpers.

## Invariants and failure modes

- The frontend and in-mission UI use different present paths; a fix or overlay
  on one does not affect the other.
- The shell screen state is stored in VM globals, not only in C++ objects;
  changing `currentScreen` without the callback/`script_run` path leaves the
  shell and the screen script out of sync.
- The screen registry has 295 slots; an unregistered screen id is not a valid
  target.
- Control files are per-language; the parser expects the active language's
  layout and string ids.
- HUD component ids are table indices; component 3 is the zoom window and
  component 1 is the target arrow.
- The HUD window is only meaningful while zoom is engaged; the component is
  shown/hidden by the zoom state machine.
- The normalized cursor globals are updated once per frame; reading them
  mid-frame gives the previous position.
- Menu data is read through the database/archive layer when the screen is
  built; the UI layer does not own the underlying records.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0050CED0` | frontend | interface.control loader |
| `0x004D2000` | frontend | control-file parser |
| `0x0041EE70` | frontend | control-file parser |
| `0x0050A5C0` | frontend | control-file builder |
| `0x0050BC30` | frontend | control-file builder |
| `0x004D2680` | frontend | control-file builder |
| `0x00630FE0` | shell | MercsShell constructor (295 screen slots) |
| `0x00637AC0` | shell | MercsShell singleton setter |
| `0x00535256` | shell | frontend-to-mission state machine |
| `0x006F0770` | screen | callback/update helper |
| `0x0069A85C` | screen | linked-list node insertion |
| `0x00629290` | HUD | component getter |
| `0x00644E40` | HUD | zoom window rect from camera extents |
| `0x006430B0` | HUD | target-arrow rect |
| `0x00628D30` | HUD | show/hide zoom window |
| `0x00628ED0` | HUD | generic component enable |
| `0x006290A0` | HUD | generic component disable |
| `0x0057DA20` | HUD | `sethudcomponentenabled` handler |
| `0x0056C1E0` | HUD | `getzoomstate` handler |
| `0x00553510` | HUD | `allowZoom` check |
| `0x0054C5C0` | HUD | zoom turn-speed modifier |
| `0x00559BE0` | HUD | zoom sound trigger |
| `0x00723590` | input | mouse update / normalized cursor |
| `0x00722730` | input | per-frame input entry |
| `0x0070B240` | present | backbuffer refresh |
| `0x007356B0` | present | flip wrapper |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 672 | UI screen/control helpers not assigned to a narrower UI detail. |

## Coverage

All 672 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
