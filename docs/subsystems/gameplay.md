# Gameplay Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2525 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Simulation state and rules: mechs, movers, pilots, missions, objectives, teams, sensors, vehicles, and the collision and geometry queries they use.

## How it works

Gameplay owns the object state that AI, combat, UI, and render read. The physics island at 0x00418000-0x0041DFFF contains collision, OBB/sphere tests, and ray/geometric queries; mission, objective, team, pilot, and vehicle state sits in the general gameplay band.

The subsystem is boundary-heavy: it calls render for presentation, AI for control, combat for fire resolution, and archive/database for content and object storage. Save/load and game-state flags are grouped under `state`.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00418000-0x0041DFFF | physics | collision and geometry island |
| 0x004D2B00-0x004D3200 | state | database/session wrappers |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 2396 | Simulation and mission-state helpers not assigned to a narrower gameplay detail. |
| physics | 91 | Collision, OBB/sphere tests, and geometric queries. |
| state | 38 | Game-state flags, save/load, and session state. |

## Coverage

All 2525 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
