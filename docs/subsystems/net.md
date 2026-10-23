# Network Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 382 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking.

## Role and boundary

The EXE's multiplayer stack has four distinct layers:

| Layer | Address band | Role |
|-------|--------------|------|
| ZoneMatch client | `0x006FEC00`-`0x0070xxxx` | Zone matchmaking and the `mwmatch.zone.com` game list |
| DirectPlay8 transport | `0x00740Dxx`-`0x007423xx` | In-game send/receive, player/group data, session description |
| Session and lobby state | `0x0052xxxx`-`0x005Bxxxx` | Join/leave, roster, mission accept, broadcast, countdown |
| GameSpy sockets | `0x004D7xxx`-`0x004D8xxx`, `0x004FFxxx`-`0x0050Dxxx` | Winsock queries and `\queryid\` master-server discovery |

The first three layers are the live multiplayer path. GameSpy is a separate
server-discovery path. ZoneMatch is the matchmaking client; it is not the same
as the in-game DirectPlay8 session.

The address band `0x004D0000`-`0x004D6xxx` and the `0x004FE000`-`0x0050xxxx`
range are the 3D renderer, not networking. Only the specific socket functions
listed above belong to the network subsystem.

## DirectPlay8 transport

The transport is a COM wrapper around DirectPlay8. Each operation is a small
`__stdcall` wrapper that forwards the caller's arguments to the corresponding
vtable slot on the underlying object. The wrapper set covers 27 operations,
including:

| Operation | VA | Slot |
|-----------|----|------|
| `AddPlayerToGroup` | `0x00740DD0` | `0x0C` |
| `Close` | `0x00740EC0` | `0x10` |
| `DeletePlayerFromGroup` | `0x00741090` | `0x1C` |
| `EnumConnections` | `0x00741160` | `0x8C` |
| `GetCaps` | `0x007413A0` | `0x38` |
| `GetGroupData` | `0x00741450` | `0x3C` |
| `GetMessageCount` | `0x007415F0` | `0x44` |
| `GetPlayerData` | `0x007417A0` | `0x50` |
| `GetSessionDesc` | `0x007418A0` | `0x58` |
| `Open` | `0x00741980` | `0x60` |
| `Receive` | `0x007419D0` | `0x64` |
| `SetSessionDesc` | `0x00741E30` | `0x7C` |
| `SendLobbyMessage` | `0x00742150` | `0x2C` |

The wrappers forward arguments verbatim; they do not filter or translate
payloads. A failed call (`hr < 0`) is reported through the log subsystem.
`Receive` is special: `0x887700BE` is treated as a successful receive and is
returned without an error report.

The transport is connection-oriented and roster-aware. The session layer uses
the player/group data operations to keep a per-slot player table, and the
lobby-message operation for chat and control traffic. The transport does not
own game rules; it moves messages and exposes the roster.

## Session and lobby state

The in-game session is a peer-to-peer object with a fixed player table. The
per-slot records are at stride `0x2038`, with these flags:

| Offset | Meaning |
|--------|---------|
| `+0x3538` | active for state synchronization |
| `+0x353B` | eligible for player-event broadcast |
| `+0x3544` | state-sent marker |

The session object is reached through the game's XOR-obfuscated manager chain
(`0x007DAB44 ^ 0x007DAB40`); the local-player info is at `0x007DB094`. The
dispatcher's event jump table is at `0x00547074`.

### Broadcasts

`FUN_0053CE70` broadcasts a player event about a **subject slot**, not an
event id. The payload is the one-byte subject, the message type is `0x10`, and
the send set is every slot that:

- has a player object;
- is not the local slot;
- is not the subject slot;
- has the `+0x353B` flag.

The loop runs in ascending slot order. The subject is skipped even when it is
not the local player; the one caller of this function relays a received player
event through it.

`FUN_0053CF80` broadcasts state synchronization. It sends message type `0x1C`
with no payload to every slot with the `+0x3538` flag except the local slot.
The flag alone is sufficient; a reserved slot can be marked active without a
player object. It sets `+0x3544` before each send, then waits out a sync window
using the double at `0x0077B718` and 30 ms sleeps.

### Dispatch

`FUN_00546C60` dispatches an inbound event. Its arguments are the session
object, the source slot, the event id, the payload, and the payload size. A
pre-dispatch callback at `0x00546AF0` runs before the event-range check and may
consume the event, including out-of-range ids. Otherwise event ids `0x0A`-
`0x3C` route through the reference jump table; an out-of-range id reaches the
default case, which logs and asserts.

The event-to-handler mapping is defined by the jump table at `0x00547074`, not
by the source-file comments. The compiler laid out some case bodies out of
order, so a sequential reading of the comments is not reliable.

### Countdown

`FUN_005AAB90` is the pre-game countdown. It ticks only while the armed flag
(`+0x17FC`) is set and the timer is not the `-1` sentinel. A decrement below
zero clamps to zero. The reference function also performs game-specific side
effects (a lookup at `0x005F07C0`, a notify at `0x00559BE0`, and a
sub-object dispatch at `this+0x78`); those are game logic, not the timer state
machine.

## Host, join, and enumeration

The connection layer is the orchestration above DirectPlay8:

- **Host** (`FUN_00705FE0`) copies a 3000-byte configuration blob from the
  lobby object's `+0x30` into the session object's `+0x7C`, parses it with
  `FUN_00705D80`, builds the instance GUID and session handle
  (`"<prefix>: <name><guid>"`), registers the session, and sets its
  attributes. The attributes include `Mod Name`, `Product Name`,
  `GameVersion`, `IpAddr`, `ServerPort`, `GName`, player/bot counts,
  `MaxPlayers`, `MapType`, `PasswordProtected`, `Instance`, `Handle`, `Flags`,
  `Protocol`, `GameType`, `Update Time`, `ExpectRefresh`, `UnlimitedAmmo`,
  `NoHeat`, and `NoRespawn`. Each player is added as a `"%02d"` entry with a
  name, clan name, and update time.
- **Join** (`FUN_00703E60`) parses the target address, connects, verifies the
  16-byte application GUID (`0x007A2E30`), and rejects a mismatch. It sets the
  connection flags (including the password bit and the secondary flag),
  registers the connection, waits for the connect event with the timeout at
  `0x00785970`, reads the 80-byte player info into `0x008AAA68`, copies the
  player name (`+0x30`) and optional secondary string (`+0x34`), reads the
  host's group settings/data, installs the connection, and reinitializes the
  script net layer.
- **Enumeration** (`FUN_006FE690` and `FUN_00706570`) processes server-list
  entries. It resolves the `Rid` attribute to a handle, deduplicates against
  the registry, and creates a record with the `GName` at `+0x59`, the 16-byte
  GUID, and the `PasswordProtected` flag. The update path matches handles and
  refreshes `UpdateTime` under a mutex.

## ZoneMatch

The ZoneMatch client is the matchmaking path around `0x006FEC00`-
`0x0070xxxx`. It talks to `mwmatch.zone.com` and maintains a game-list/session
registry. It is separate from the DirectPlay8 transport: the transport carries
the in-game session, while ZoneMatch discovers and advertises games.

The client owns its own request/response state, session records, and
matchmaking callbacks. The in-game session does not call ZoneMatch for normal
roster or chat traffic.

## GameSpy discovery

The GameSpy path is a Winsock query client in the `0x004D7xxx`-`0x004D8xxx`
and `0x004FFxxx`-`0x0050Dxxx` bands. It sends `\queryid\`-style master-server
queries, parses the text responses, and updates the server list. It is
discovery only; it does not carry gameplay traffic.

Because the master-server service is obsolete, the GameSpy path is mostly a
historical/compatibility surface. The live multiplayer path uses DirectPlay8
and the in-game session.

## Data and invariants

- The session player table is a fixed-stride array at `0x2038` bytes per slot;
  the flags at `+0x3538`, `+0x353B`, and `+0x3544` are independent.
- The session object is obtained through the XOR manager chain, not a direct
  global pointer.
- The event dispatcher's valid range is `0x0A`-`0x3C`; the pre-dispatch
  callback can consume any id before the range check.
- Broadcasts skip the local slot; player-event broadcasts also skip the
  subject slot.
- State-sync broadcasts are controlled by the active flag alone, not by a player
  object.
- The countdown clamps at zero and ignores ticks while unarmed or at the `-1`
  sentinel.
- Host registration and join both depend on the application GUID; a mismatch
  aborts the join.
- The transport reports failures through the log subsystem; `Receive` treats
  `0x887700BE` as success.
- The GameSpy and ZoneMatch paths are separate from the DirectPlay8 transport;
  do not classify the renderer ranges as networking.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x00740DD0` | transport | `AddPlayerToGroup` wrapper |
| `0x00740EC0` | transport | `Close` wrapper |
| `0x00741980` | transport | `Open` wrapper |
| `0x007419D0` | transport | `Receive` wrapper |
| `0x00742150` | transport | `SendLobbyMessage` wrapper |
| `0x007418A0` | transport | `GetSessionDesc` wrapper |
| `0x00741E30` | transport | `SetSessionDesc` wrapper |
| `0x0053CE70` | session | player-event broadcast |
| `0x0053CF80` | session | state-sync broadcast |
| `0x00546AF0` | session | pre-dispatch callback |
| `0x00546C60` | session | event dispatcher |
| `0x005AAB90` | session | countdown timer |
| `0x00705FE0` | session | host registration |
| `0x00705D80` | session | host config parser |
| `0x00703E60` | session | join/connect |
| `0x006FE690` | zonematch | server-list update callback |
| `0x00706570` | zonematch | server-list refresh |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| session | 233 | In-game lobby/session state, join/leave, mission accept, broadcast, and countdown. |
| zonematch | 60 | ZoneMatch matchmaking client and session registry. |
| gamespy | 53 | Winsock GameSpy query path and master-server discovery. |
| transport | 33 | DirectPlay8 COM transport wrapper and its session/roster operations. |
| (general) | 3 | Transport/session helpers outside the named network details. |

## Coverage

All 382 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence. 162 are shared ([shared.md](shared.md#net)). 82 are outbound boundary calls ([SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md)).
