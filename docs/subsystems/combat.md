# Combat Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 141 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

In-mission weapon fire, launch/guidance, hit resolution, and damage application.

## How it works

The fire path starts with weapon eligibility and the launch transform, then missile/projectile guidance and hit tests. Damage is applied to gameplay state; the AI `combat` detail only decides when to engage.

The main fire/damage cluster is around 0x005523B0; 0x0058D930 is a representative damage-application entry. Combat is a boundary-heavy subsystem: it reads gameplay state and emits render effects.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x005523B0 | fire-damage | weapon fire/damage cluster |
| 0x0058D930 | fire-damage | damage application |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| fire-damage | 141 | Weapon fire eligibility, launch transform, missile/guidance, hit resolution, and damage. |

## Coverage

All 141 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence. 71 are shared ([shared.md](shared.md#combat)). 21 are outbound boundary calls ([SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md)).
