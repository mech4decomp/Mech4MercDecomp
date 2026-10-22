# Combat Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 141 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

In-mission weapon fire, launch/guidance, hit resolution, and damage application.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

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

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

**Shared VAs:** 71. They are described once in [shared.md](shared.md#combat); this page does not repeat the list.

**Boundary VAs:** 21 outbound calls. The full table is in [SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
