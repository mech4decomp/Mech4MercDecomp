# AI Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 1308 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

AI decision layer, ABL script runtime, navigation, targeting, squad control, and AI combat decisions.

## How it works

ABL is the largest detail (the 0x0056 cluster) and executes script-visible behavior. Brain code around 0x005A-0x005C selects goals and behaviors; squad code at 0x005DD coordinates lancemates.

Navigation and targeting produce movement and aim inputs. The `combat` detail decides when to engage; the actual weapon resolution lives in the combat subsystem.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00568EA0 | abl | ABL script runtime core |
| 0x005A1040 | brain | AI decision/brain entry |
| 0x005DDEF0 | squad | squad/lance coordination |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| abl | 824 | ABL script runtime and script-visible AI hooks. |
| brain | 166 | Mech/unit AI decision layer and behaviour state. |
| squad | 137 | Squad/lance coordination. |
| combat | 92 | AI weapon/engagement decisions. |
| nav | 49 | Rail-graph navigation and path following. |
| targeting | 40 | Target selection, lock-on, and aim support. |

## Coverage

All 1308 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence. 847 are shared ([shared.md](shared.md#ai)). 141 are outbound boundary calls ([SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md)).
