# Network Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 382 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Multiplayer transport, lobby/session state, GameSpy discovery, and ZoneMatch matchmaking.

## How it works

The transport layer is a DirectPlay8 COM wrapper. Session and lobby code owns roster, join/leave, mission accept, broadcast, and countdown state; it exposes that state to gameplay.

GameSpy uses winsock queries (the 0x004D7xxx/0x004FFxxx clusters). ZoneMatch has its own client around 0x00700000-0x00709FFF. The subsystem boundary is the session/roster state consumed by gameplay and the UI.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00700000-0x00709FFF | zonematch | ZoneMatch client |
| 0x004D7000-0x004D8FFF | gamespy | GameSpy/winsock query cluster |
| 0x004FF000-0x0050DFFF | gamespy | GameSpy/winsock query cluster |

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
