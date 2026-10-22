# Subsystem Documentation

Each subsystem has its own page: what it is responsible for, how the main path works, its key entry points, and the VAs that implement it. Start with the subsystem you care about; the exhaustive per-binary indexes are linked from every page.

Shared VAs are described once in [shared.md](shared.md). Boundary calls are in [../SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md).

## EXE subsystems

| Subsystem | VAs | What it covers |
|-----------|-----|----------------|
| [Render](render.md) | 2708 | Owns the MidLevelRenderer (MLR) scene pipeline and the D3D7 immediate-mode device boundary. It turns game state into sorted draw records, evaluates animation and lighting, streams terrain and textures, and hands final primitives to the device and present paths. |
| [Runtime](runtime.md) | 2626 | Engine/runtime services: memory, reference counting, threads and locks, object lifetime, and virtual/command dispatch. |
| [Gameplay](gameplay.md) | 2525 | Simulation state and rules: mechs, movers, pilots, missions, objectives, teams, sensors, vehicles, and the collision and geometry queries they use. |
| [AI](ai.md) | 1308 | AI decision layer, ABL script runtime, navigation, targeting, squad control, and AI combat decisions. |
| [Database](database.md) | 691 | Object/container model: binary-search trees, linked lists, iterators, hash tables, object tables, and database wrappers. |
| [UI](ui.md) | 672 | gosScript-driven 2D UI: HUD, menus, dialogs, cursor, and screen state. |
| [Network](net.md) | 385 | Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking. |
| [Archive](archive.md) | 285 | `#VBD` archives, streams, file I/O, and path handling. |
| [Platform](platform.md) | 255 | Win32/COM/DLL/registry glue, DirectDraw/D3D wrappers, import thunks, and the SafeDisc wrapper. |
| [Log](log.md) | 192 | Logging, assertions, error reporting, and diagnostic output. |
| [Combat](combat.md) | 141 | In-mission weapon fire, launch/guidance, hit resolution, and damage application. |
| [C Runtime](crt.md) | 21 | C/C++ runtime helpers: strings, memory primitives, formatting, and math. |
| [Config](config.md) | 13 | options.ini/config-file framework, option registry, and persistence. |
| [Input](input.md) | 11 | Keyboard/mouse/joystick state and command bindings. |
| [Audio](audio.md) | 8 | Sound, music, and audio-device delivery. |
| [Codec](codec.md) | 3 | LZW compression/decompression and related byte codecs. |
| [Crypto](crypto.md) | 3 | MD5, hashing, and base64 helpers. |

## Reference categories

| Category | VAs | What it covers |
|----------|-----|----------------|
| [Data Sections and Tables](data.md) | 638 | Non-code sections and in-.text jump/pointer tables. |
| [Unclassified Helpers](unclassified.md) | 1137 | Helpers that could not be assigned to a system from the available evidence. |

## Modules

| Module | VAs | What it covers |
|--------|-----|----------------|
| [GunDll.dll](gundll.md) | 3213 | COM lobby/account client: registration, string/GUID and hash tables, crypto, HTTP, sockets, and the lobby object model. |
| [MW4Stats.dll](mw4stats.md) | 1091 | Stats recording, XML serialization, Zone upload, and Gun authentication. |
| [blade.dll](blade.md) | 739 | DirectDraw proxy DLL with COM exports, a large facade state machine, caps/accessor wrappers, and a software rasterizer. |
| [Language.dll](language.md) | 104 | Codepage-aware localizable string-table loader. |
| [MissionLang_MERCS.dll](missionlang.md) | 69 | Mission/string-table loader mirroring Language.dll. |
| [ZlogLib.dll](zloglib.md) | 33 | Logging API (`GetngLogAPI`) with lifecycle, emit, MD5, and memory helpers. |

## Common references

- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Master index](../MASTER_INDEX.md)
- [Subsystem catalog](../SUBSYSTEM_CATALOG.md)

## How to read a page

The narrative comes first; the VA inventory is at the bottom, grouped by detail. `Evidence` records whether the VA came from a committed surface label, an address range, a header keyword, a broad band, or a structural rule. If a VA is shared, the page links to [shared.md](shared.md) instead of repeating it.
