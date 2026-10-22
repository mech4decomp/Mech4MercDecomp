# Subsystem Catalog

> System-level map of the oracle binaries. The per-VA index is in [`master_index/`](master_index/); the boundary tables are in [`SUBSYSTEM_SEAMS.md`](SUBSYSTEM_SEAMS.md).

> Classification evidence: source headers, committed function inventories, vtable/data annotations, and address-island maps. Roles describe a function's relation to the system, not a calling convention.

## EXE subsystems

| Subsystem | VAs | Description |
|-----------|-----|-------------|
| render | 2708 | MidLevelRenderer scene graph, mesh/vertex pipeline, lighting, terrain, texture, camera, 2D/font, present, and device wrappers. |
| runtime | 2626 | Engine/runtime services: memory, reference counting, threads, locks, events, and object support. |
| gameplay | 2525 | Simulation and game rules: mechs, movers, pilots, missions, objectives, teams, sensors, and vehicles. |
| ai | 1308 | AI brains, navigation, targeting, squad control, ABL scripting, and combat behaviour. |
| database | 691 | Object/container model: trees, lists, iterators, hash tables, and database wrappers. |
| ui | 672 | GUI/HUD/menu/dialog/cursor presentation. |
| net | 385 | Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking. |
| archive | 285 | MW4 #VBD archives, streams, file I/O, and path handling. |
| platform | 255 | Win32, COM, DLL/registry, DirectDraw/D3D, and import-thunk glue. |
| log | 192 | Logging, assertions, error reporting, and diagnostic output. |
| combat | 141 | In-mission weapon fire, launch/guidance, hit resolution, damage application, and combat state. |
| crt | 21 | C/C++ runtime helpers: strings, memory primitives, formatting, and math. |
| config | 13 | options.ini/config-file framework, option registry, and persistence. |
| input | 11 | Keyboard/mouse/joystick state and command bindings. |
| audio | 8 | Sound, music, and audio-device delivery. |
| codec | 3 | LZW compression/decompression and related byte codecs. |
| crypto | 3 | MD5, hashing, and key/crypto helpers. |

## Coverage and confidence

Evidence is applied in this order: committed surface label, MLR category, specific address island, source-header keyword, broad address band, then structural rename. `confidence` is `high` for surface/module-map labels, `medium` for MLR/range/keyword, and `low` for band/structural inference. Unclassified helpers are listed honestly rather than forced into a system.

| Evidence | VAs |
|----------|-----|
| keyword | 4824 |
| band | 4463 |
| surface | 2474 |
| range | 1208 |
| text-data | 555 |
| section | 83 |
| mlr-category | 15 |

Confidence: high 1323, medium 7836, low 4463.

## render

MidLevelRenderer scene graph, mesh/vertex pipeline, lighting, terrain, texture, camera, 2D/font, present, and device wrappers.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 1110 |  |
| animation | 521 | Animation state, curves, and the animation/render bridge. |
| mesh | 364 | Mesh, primitive-base, and indexed mesh families. |
| lighting | 170 | Light objects, light maps, and light-slot selection. |
| camera | 129 | Camera projection, frustum, view setup, and visibility traversal. |
| texture | 129 | Texture decode, cache, pool, and upload. |
| present | 89 | Present/blit/flip and display-surface handoff. |
| 2d | 49 | In-mission 2D clouds/sprites and screen-space drawing. |
| device | 42 | D3D7-IM device wrappers and submission objects. |
| terrain | 37 | Streamed terrain manager, terrain nodes, and terrain mesh building. |
| display | 19 | Resolution/display-mode normalization and backbuffer setup. |
| vertex | 14 | Vertex buffers, transforms, and interpolation. |
| draw | 12 | Draw submission, sorting/clipping, and the drawable table. |
| records | 12 | Scene-record producers and rich record builders. |
| font | 9 | Font/log-text glyph rendering. |
| frame | 2 | Per-frame renderer update and node dispatch. |

## runtime

Engine/runtime services: memory, reference counting, threads, locks, events, and object support.

| Detail | VAs | Notes |
|--------|-----|-------|
| object | 2200 | Constructors, destructors, vtables, and object-lifetime helpers. |
| (general) | 296 |  |
| memory | 130 | Allocation, reference counting, and buffer ownership. |

## gameplay

Simulation and game rules: mechs, movers, pilots, missions, objectives, teams, sensors, and vehicles.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 2396 |  |
| physics | 91 | Collision, OBB/sphere tests, and geometric queries. |
| state | 38 | Game-state flags, save/load, and session state. |

## ai

AI brains, navigation, targeting, squad control, ABL scripting, and combat behaviour.

| Detail | VAs | Notes |
|--------|-----|-------|
| abl | 824 | ABL script runtime and script-visible AI hooks. |
| brain | 166 | Mech/unit AI decision layer and behaviour state. |
| squad | 137 | Squad/lance coordination. |
| combat | 92 | AI weapon/engagement decisions. |
| nav | 49 | Rail-graph navigation and path following. |
| targeting | 40 | Target selection, lock-on, and aim support. |

## database

Object/container model: trees, lists, iterators, hash tables, and database wrappers.

| Detail | VAs | Notes |
|--------|-----|-------|
| containers | 675 | Trees, lists, iterators, and hash containers. |
| (general) | 16 |  |

## ui

GUI/HUD/menu/dialog/cursor presentation.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 672 |  |

## net

Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking.

| Detail | VAs | Notes |
|--------|-----|-------|
| session | 236 | In-game lobby/session state, join/leave, mission accept, broadcast, and countdown. |
| zonematch | 60 | ZoneMatch matchmaking client and session registry. |
| gamespy | 53 | Winsock GameSpy query path and master-server discovery. |
| transport | 33 | DirectPlay8 COM transport wrapper and its session/roster operations. |
| (general) | 3 |  |

## archive

MW4 #VBD archives, streams, file I/O, and path handling.

| Detail | VAs | Notes |
|--------|-----|-------|
| vbd | 253 | #VBD archive directory, entry hashing, and member fetch. |
| stream | 30 | Stream vtable and memory/file stream implementations. |
| (general) | 2 |  |

## platform

Win32, COM, DLL/registry, DirectDraw/D3D, and import-thunk glue.

| Detail | VAs | Notes |
|--------|-----|-------|
| drm | 152 | SafeDisc wrapper, anti-tamper glue, and import thunks. |
| imports | 96 | IAT jump thunks and imported-function glue. |
| (general) | 7 |  |

## log

Logging, assertions, error reporting, and diagnostic output.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 192 |  |

## combat

In-mission weapon fire, launch/guidance, hit resolution, damage application, and combat state.

| Detail | VAs | Notes |
|--------|-----|-------|
| fire-damage | 141 | Weapon fire eligibility, launch transform, missile/guidance, hit resolution, and damage. |

## crt

C/C++ runtime helpers: strings, memory primitives, formatting, and math.

| Detail | VAs | Notes |
|--------|-----|-------|
| string | 18 | String copy/compare/format helpers. |
| math | 3 | Floating-point and trig helpers. |

## config

options.ini/config-file framework, option registry, and persistence.

| Detail | VAs | Notes |
|--------|-----|-------|
| options | 8 | options.ini load/save, option registry, and LOD bias persistence. |
| ini | 5 | Generic config-file tree, section/key lookup, and serialization. |

## input

Keyboard/mouse/joystick state and command bindings.

| Detail | VAs | Notes |
|--------|-----|-------|
| keyboard | 9 | Keyboard/mouse bitmap and action-state queries. |
| directinput | 1 | DirectInput device enumeration and GUID/name lookup. |
| window | 1 | Window procedure and message routing. |

## audio

Sound, music, and audio-device delivery.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 8 |  |

## codec

LZW compression/decompression and related byte codecs.

| Detail | VAs | Notes |
|--------|-----|-------|
| lzw | 3 |  |

## crypto

MD5, hashing, and key/crypto helpers.

| Detail | VAs | Notes |
|--------|-----|-------|
| (general) | 2 |  |
| md5 | 1 |  |

## Module subsystems

### GunDll.dll

COM lobby/account client: registration, string/hash tables, crypto, HTTP, sockets, and the lobby object model.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| gundll | objects | 1362 |
| gundll | seh | 614 |
| gundll | crt | 555 |
| gundll | sockets | 237 |
| gundll | hashlist | 81 |
| gundll | string | 60 |
| gundll | codec | 54 |
| gundll | parser | 36 |
| gundll | registry | 33 |
| gundll | http | 30 |
| gundll | object | 30 |
| gundll | crypto | 26 |
| gundll | locks | 26 |
| gundll | pool | 17 |
| gundll | unclassified | 14 |
| gundll | config | 11 |
| data | rdata | 7 |
| data | data | 6 |
| gundll | imports | 6 |
| gundll | com | 3 |
| gundll | exports | 3 |
| gundll | md5 | 1 |
| gundll | platform | 1 |

### Language.dll

Codepage-aware localizable string-table loader.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| language | crt | 36 |
| language | string | 20 |
| language | codepage | 17 |
| language | arena | 13 |
| language | locks | 10 |
| language | error | 4 |
| data | data | 3 |
| data | rdata | 1 |

### MW4Stats.dll

Stats recording, XML serialization, Zone upload, and Gun authentication.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| mw4stats | support | 860 |
| mw4stats | crt | 100 |
| mw4stats | recording | 69 |
| mw4stats | upload | 33 |
| mw4stats | gunauth | 23 |
| data | data | 3 |
| data | rdata | 3 |

### MissionLang_MERCS.dll

Mission/string-table loader mirroring Language.dll.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| missionlang | crt | 35 |
| missionlang | codepage | 9 |
| missionlang | string | 9 |
| missionlang | arena | 6 |
| missionlang | error | 4 |
| missionlang | locks | 4 |
| data | data | 1 |
| data | rdata | 1 |

### ZlogLib.dll

Logging API (GetngLogAPI) with lifecycle, emit, MD5, and memory helpers.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| zloglib | lifecycle | 8 |
| zloglib | md5 | 8 |
| zloglib | api | 5 |
| zloglib | emit | 4 |
| zloglib | mem | 4 |
| zloglib | crt | 2 |
| data | data | 1 |
| data | rdata | 1 |

### blade.dll

DirectDraw proxy DLL with a custom software rasterizer and a large facade state machine.

| Subsystem | Detail | VAs |
|-----------|--------|-----|
| blade | wrapper | 228 |
| blade | crt | 155 |
| blade | facade | 116 |
| blade | caps | 108 |
| blade | accessors | 53 |
| blade | render | 47 |
| blade | stubs | 17 |
| blade | exports | 9 |
| data | data | 3 |
| data | rdata | 3 |

## Data and unknown

| Subsystem | VAs | Meaning |
|-----------|-----|---------|
| data | 638 | Non-.text sections and in-.text jump/pointer tables. |
| unclassified | 1137 | Helpers that could not be assigned to a system from the available evidence. |

### Data details

| Detail | VAs | Notes |
|--------|-----|-------|
| text-table | 555 | In-.text jump/pointer tables and verbatim data blocks. |
| rdata | 71 | Read-only constants, vtables, and import tables. |
| data | 6 | Initialized .data section. |
| rsrc | 4 | PE resource directory. |
| txt2 | 2 | SafeDisc .txt2 section (out of scope). |

### Unclassified clusters

Small helpers with no committed surface label, no MLR category, and no matching header keyword. Address bands are listed so they can be inspected in bulk.

| Address band | VAs |
|--------------|-----|
| 0x00650000-0x0065FFFF | 97 |
| 0x00620000-0x0062FFFF | 96 |
| 0x00640000-0x0064FFFF | 92 |
| 0x00560000-0x0056FFFF | 90 |
| 0x006E0000-0x006EFFFF | 88 |
| 0x00550000-0x0055FFFF | 80 |
| 0x00510000-0x0051FFFF | 78 |
| 0x00750000-0x0075FFFF | 68 |
| 0x004C0000-0x004CFFFF | 64 |
| 0x00700000-0x0070FFFF | 61 |
| 0x00530000-0x0053FFFF | 59 |
| 0x00570000-0x0057FFFF | 51 |
