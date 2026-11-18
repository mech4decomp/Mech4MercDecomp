# Mech Variants and Loadout Data

> **Binary:** `MW4Mercs.exe` | **Archives:** `RESOURCE\VariantsMercs\*.mw4`,
> `RESOURCE\core.mw4` | **Related:** [asset formats](assets.md),
> [mech models and animation](mech_animation.md),
> [MechLab UI](subsystems/ui.md),
> [variant self-digest](GAME_VERSIONING.md#91-the-variant-self-digest)

The retail Mech Lab stores player mech variants under
`RESOURCE\VariantsMercs`. A variant is a `#VBD` archive with a saved
`MechWarrior4::Mech` instance, a serialized subsystem/loadout stream, and a
self-digest. The stock chassis templates are members of `RESOURCE\core.mw4`.
This page documents the member layouts, the element stream, the table ids, and
the loader/validation path.

## 1. Variant archive layout

The container is the standard `#VBD` v4 archive (signature `#VBD`, version 4);
the header, directory records, data offsets, and LZW member compression are
documented in [Asset Loading and Archive Formats](assets.md) and the
[Archive Subsystem](subsystems/archive.md).

A shipped variant has three members:

| Member | Contents |
|---|---|
| `{Mech}` | 344-byte `MechWarrior4::Mech` instance (class `0x429`) |
| `<mech>{Subsystem}` | subsystem/loadout stream; the name uses the instance name (for example `argus{Subsystem}`) |
| `icuedbdii` | 16-byte integrity digest |

The `{Mech}` member is a single element, not a list with a count prefix. Its first
20 bytes are the usual element header (`size=344`, `type=2`, `field=2`,
`flags=0`, `class=0x429`). Offsets below are relative to the **member start**,
including that header.

## 2. `{Mech}` instance fields

| Offset | Size | Field | Evidence |
|---:|---:|---|---|
| `+0x00` | 4 | element size (`344`) | shipped archives |
| `+0x04` | 4 | element type (`2`) | shipped archives |
| `+0x08` | 4 | element field (`2`) | shipped archives |
| `+0x0c` | 4 | element flags (`0`) | shipped archives |
| `+0x10` | 4 | class (`0x429`, `MechWarrior4::Mech`) | shipped archives |
| `+0x98` | var | instance name, NUL-terminated (for example `argus`) | shipped archives |
| `+0x120` | 1 | skin/camo id byte (`_` = base atlas) | `FUN_005F8320` reads it into mech `+0x274` |
| `+0x124` | 4 | team decal | `FUN_005F8320` reads it into mech `+0x27c` |
| `+0x128` | 4 | pilot decal | `FUN_005F8320` reads it into mech `+0x278` |
| `+0x12c` | 4 | name index (`-1` when unused) | shipped archives |
| `+0x130` | 1 | `DoesHaveInstanceName` | shipped archives |
| `+0x134..+0x158` |  | runtime/template words (five ints, three floats, and a trailing word) | shipped archives; semantics not fully decoded |

The runtime mech constructor `FUN_005F8320` (`0x005F8320`) copies the skin byte
at `+0x120` to mech `+0x274`, the pilot decal at `+0x128` to `+0x278`, and the
team decal at `+0x124` to `+0x27c`.

The `icuedbdii` digest is:

```text
MD5(LE32(0xa1252388) || {Mech} member bytes)
```

`FUN_0060C12D` (`0x0060C12D`) computes and appends it while building the
variant resource. The multiplayer join path re-reads the stored digest and
compares it with the receiver's own `{Mech}` copy; the digest covers only
`{Mech}`, not the subsystem stream. See
[Variant (mech) file integrity and loadout validation](GAME_VERSIONING.md#9-variant-mech-file-integrity-and-loadout-validation).

## 3. Subsystem/loadout stream

The `<mech>{Subsystem}` member uses the same element stream with a leading count as
mission `.contents` data:

```text
[u16 element_count][element...]
element = [u32 size][u32 type=2][u32 field=2][u32 flags=0][u32 class]
          [size - 20 bytes payload]
```

`size` includes the 20-byte header; the first element starts at offset `2`, and
the next element starts at `offset + size`. The stream is walked until the
declared count is consumed.

Payload fields used by the loadout data:

| Payload offset | Field |
|---:|---|
| `+0x00..+0x3b` | common runtime block (flags, runtime id, transform/identity data) |
| `+0x42` | `u16` weapon/subsystem table id |
| `+0x58` | nine `float` armor values, class `0x4b1` only |

The `u16` at payload `+0x40` is not the table id; in the observed elements it
is a small count/flag (typically `1`). The id is the following `u16` at
`+0x42`.

The common block is 60 bytes (`0x3c`) in the shipped elements. Its exact
meaning is not fully decoded; the table id and the armor floats are the stable
fields used to read a loadout.

## 4. Element class ids

The element `class` word is a registered-class id. The base classes are
`MechWarrior4::Mech` (`0x429`), `MechWarrior4::Subsystem` (`0x427`), and
`MechWarrior4::Weapon` (`0x436`). The variant stream uses the concrete
subclasses:

| Class id | Registered class | Observed role |
|---:|---|---|
| `0x431` | `MechWarrior4::Engine` | engine |
| `0x4b1` | `MechWarrior4::Armor` | armor values |
| `0x485` | `MechWarrior4::Sensor` | sensor |
| `0x46a` | `MechWarrior4::Torso` | torso |
| `0x4a9` | `MechWarrior4::SearchLight` | searchlight |
| `0x46e` | `MechWarrior4::ProjectileWeapon` | AC, Gauss, MG, PPC, UltraAC, RTXAC (observed) |
| `0x452` | `MechWarrior4::BeamWeapon` | laser and pulse laser (observed) |
| `0x476` | `MechWarrior4::LRMWeaponSubsystem` | LRM launcher |
| `0x474` | `MechWarrior4::SRMWeaponSubsystem` | SRM launcher |
| `0x475` | `MechWarrior4::MRMWeaponSubsystem` | MRM launcher |
| `0x477` | `MechWarrior4::SSRMWeaponSubsystem` | SSRM launcher |
| `0x4c1` | `MechWarrior4::LBXWeaponSub` | LBX autocannon |
| `0x49d` | `MechWarrior4::HeatSink` | heat sink |
| `0x44c` | `MechWarrior4::JumpJet` | jump jet |
| `0x49f` | `MechWarrior4::AMS` | AMS/LAMS class |
| `0x486` | `MechWarrior4::ECM` | ECM |
| `0x487` | `MechWarrior4::Beagle` | Beagle probe |
| `0x4cc` | `MechWarrior4::IFF_Jammer` | IFF jammer |
| `0x4cb` | `MechWarrior4::EnhancedOptics` | enhanced optics |
| `0x4cd` | `MechWarrior4::AdvancedGyro` | advanced gyro |
| `0x49e` | `MechWarrior4::LongTomWeaponSubsystem` | Long Tom |
| `0x4a0` | `MechWarrior4::FlamerWeapon` | flamer |
| `0x48f` | `MechWarrior4::FlareWeapon` | flare |
| `0x483` | `MechWarrior4::NarcWeapon` | Narc |
| `0x4a4` | `MechWarrior4::ArtilleryWeapon` | artillery |
| `0x4c9` | `MechWarrior4::ClusterBombWeaponSubsystem` | cluster bomb |
| `0x4d0` | `MechWarrior4::ArrowWeaponSubsystem` | Arrow |
| `0x4a6` | `MechWarrior4::BombastWeapon` | Bombast |
| `0x473` | `MechWarrior4::MissileWeapon` | missile |

The table lists registered classes that can appear in the element stream; the
shipped `VariantsMercs` archives inspected use the Engine/Armor/Sensor/Torso/
SearchLight, HeatSink, JumpJet, AMS/ECM/Beagle/IFF/EnhancedOptics/AdvancedGyro,
and the observed weapon subclasses.

The class id and the table id are independent. For example, a
`ProjectileWeapon` element (`0x46e`) can carry a PPC (`0x0355`), an Ultra AC/5
(`0x033b`), or a Gauss rifle (`0x037c`); an `AMS` element (`0x49f`) can carry
the AMS data (`0x0327`) or the LAMS data (`0x0330`).

### 4.1 Weapon slot types

A weapon mount has one of four slot types. The enum order is fixed by the
retail dispatcher:

| Slot type | Enum | String |
|---|---:|---|
| Missile | `0` | `MissileSlot` |
| Projectile (ballistic) | `1` | `ProjectileSlot` |
| Beam | `2` | `BeamSlot` |
| Omni | `3` | `OmniSlot` |

`FUN_005B75C0` (`0x005B75C0`) maps the enum to its string;
`FUN_005B7620` (`0x005B7620`) parses a slot-type string back to the enum and
reports `That is a bad Slot Type String: %s` on failure. The strings are at
`0x78685C` (`OmniSlot`), `0x786868` (`BeamSlot`), `0x786874`
(`ProjectileSlot`), and `0x786884` (`MissileSlot`). The plural property names
`OmniSlots`/`BeamSlots`/`ProjectileSlots`/`MissileSlots` are at
`0x786808`/`0x786814`/`0x786820`/`0x786830`.

The slot counts are properties of a `DamageZone` object, not of the weapon
element:

- `DamageZone+0xa4..+0xb0` are the remaining Missile/Projectile/Beam/Omni
  slots.
- `DamageZone+0xb4..+0xc0` are the corresponding totals.
- `FUN_005B6F90` (`0x005B6F90`) allocates or releases slots by type from the
  `+0xa4..+0xb0` fields and returns the slot type (or `-1`/`-2` on failure).
- `FUN_005B6E50` (`0x005B6E50`) serializes the four totals at
  `+0xb4..+0xc0`.
- `FUN_005B6D70` (`0x005B6D70`) reads the four `DamageZone` properties
  `MissileSlots`/`ProjectileSlots`/`BeamSlots`/`OmniSlots` and serializes them.

The zone identity itself uses the part ids returned by `FUN_004E7E60`
(`0x004E7E60`): `NullZone=-1`, `LeftLeg=0`, `RightLeg=1`, `LeftArm=2`,
`RightArm=3`, `RightTorso=4`, `LeftTorso=5`, `CenterTorso=6`, `Head=7`,
`Special1=8`, `Special2=9`, `VehicleHull=10`, `VehicleWeapon=11`, and
`VehicleSpecial=12`. The `.damage` stream carries the zone/parent part ids and
armor/internal-damage values; the exact slot-count fields in the stream are not
yet decoded, but the runtime `DamageZone` fields and serializer are.

The weapon's element class determines its required slot type in the observed
data:

| Required slot | Element classes / weapons |
|---|---|
| Missile | `0x476` LRM, `0x474` SRM, `0x475` MRM, `0x477` SSRM, `0x483` Narc, `0x4c9`/`0x4d0` Arrow/cluster bomb |
| Projectile (ballistic) | `0x46e` AC/Gauss/MG/PPC/UltraAC/RTXAC, `0x4c1` LBX, `0x49e` Long Tom, `0x4a4` artillery |
| Beam | `0x452` laser and pulse laser |
| Omni | any weapon; Omni is a mount type, not a weapon class |

A weapon can mount when its required slot type matches the mount's slot type,
or when the mount is an Omni slot. The slot type is therefore a property of the
`DamageZone`/mount, while the element class is a property of the weapon
subsystem.

## 5. Table ids

The tables are members of `RESOURCE\core.mw4`:

| Member | Contents |
|---|---|
| `tables\weaponstable.tbl` | weapon definitions and ids |
| `tables\subsystemtable.tbl` | optional equipment definitions and ids |
| `tables\mechchassistable.tbl` | chassis data ids |
| `tables\mechtable.tbl` | chassis instance ids |
| `tables\skinstable.tbl` | camo/skin ids and display names |

The weapon, subsystem, chassis, and instance tables use the same record shape:

```text
[u32 path_len][path][NUL][u16 flags][u16 id][u32 display_len][display][NUL]
```

The second `u16` (the field called `reserved` in the chassis-table layout in
[Asset Loading and Archive Formats](assets.md#5-mech-asset-layout)) is the table
id. Examples:

| Table | Id | Display |
|---|---:|---|
| weapon | `0x0369` | LRM10 |
| weapon | `0x033b` | UltraAC5 |
| weapon | `0x0364` | MachineGun |
| weapon | `0x0379` | MediumLaser |
| weapon | `0x0355` | PPC |
| subsystem | `0x032f` | JumpJets |
| subsystem | `0x032e` | HeatSink |
| subsystem | `0x032d` | ECM |
| subsystem | `0x032c` | BeagleProble |
| subsystem | `0x032a` | IFF Jammer |
| subsystem | `0x0328` | EnhancedOptics |
| subsystem | `0x0329` | AdvancedGyro |

`tables\skinstable.tbl` uses a 14-byte record header:

```text
[u32 flags][u8 id][u8 unknown][u16 reserved][u16 unknown][u16 display_len]
[u16 unknown][display][NUL]
```

The `u8 id` is the skin/camo byte used in `{Mech}` `+0x120` (`_` = `0x5f`,
`0` = `0x30`, ...); `display` is the camo name (`None`, `01-OpsBlue`, ...).

The Engine, Armor, Sensor, Torso, and SearchLight element ids observed in the
variant streams (for example Argus `0x03b2`, `0x032b`, `0x0332`, `0x03b3`,
`0x0331`) are not in `weaponstable.tbl` or `subsystemtable.tbl`; their id space
is not fully decoded.

## 6. Stock templates in `core.mw4`

`RESOURCE\core.mw4` also contains the stock chassis data:

| Member | Contents |
|---|---|
| `mechs\<name>\<name>.instance` | 344-byte chassis instance |
| `mechs\<name>\<name>.subsystems` | stock subsystem/loadout stream |
| `mechs\<name>\<name>.damage` | stock damage/armor stream |
| `mechs\<name>\<name>.contents` | armature/contents stream |

The stock `.subsystems` stream uses the same element shape with a leading count and
the same class ids as the variant stream. In the inspected Argus and Atlas
archives, the variant stream and the core stock stream have the same element
order, sizes, class ids, table ids, and Armor floats. The common block and many
class-specific payload fields differ; those fields carry template asset paths
and runtime state, and their exact semantics are not decoded.

The stock `.subsystems` stream is not itself a variant archive: a variant needs
the `{Mech}` member and the `icuedbdii` digest as well.

## 7. Loader and validation path

| VA | Role |
|---:|---|
| `0x0060C12D` | variant loader/validator: reads the object list, validates entries, computes the salted MD5, and appends the `icuedbdii` digest |
| `0x005F8320` | runtime mech constructor; copies the `{Mech}` skin/team/pilot decal fields into the mech |
| `0x005FEEB0` -> `0x00601EF0` | weapon/armor slot-count validation against the chassis mount groups and the `0x429` mech-type gate |
| `0x00676EA0` | GameData distribution validation (`ArmDistributive`, `LegDistributive`, `SideFrontDistributive`, `CenterFrontDistributive`, `CenterRearDistributive`, and the ferro/reflective/reactive points-per-ton values) |
| `0x00609DE0` / `0x00609FB0` | MechLab counts (`m_mechLabCount`) |
| `0x004E6D10` | `DamageZone` application-core loader (zone/parent/armor/internal-damage properties) |
| `0x004E7E60` | part/location name to part id (`LeftLeg=0`, `RightArm=3`, ...) |
| `0x005B6D70` | serializes the four `DamageZone` slot properties |
| `0x005B6E50` | serializes the four `DamageZone` total-slot fields |
| `0x005B6F90` | allocates/releases Missile/Projectile/Beam/Omni slots |
| `0x005B75C0` / `0x005B7620` | slot enum to string / string to slot enum |

The MechLab screen entry is `ShellInitMechLabScreen` / `MECHBAY_SCREEN`; see
the [UI Subsystem](subsystems/ui.md#main-menu) and
[Menu data and database reads](subsystems/ui.md#menu-data-and-database-reads).

## 8. Example: Argus stock variant

`RESOURCE\VariantsMercs\Argus Variant1.mw4` has 11 subsystem elements:

| # | Class id | Class | Table id | Resolved |
|---:|---:|---|---:|---|
| 0 | `0x431` | Engine | `0x03b2` | engine id (not in the weapon/subsystem tables) |
| 1 | `0x4b1` | Armor | `0x032b` | armor values `28, 28, 24, 24, 30, 30, 40, 18, 18` |
| 2 | `0x485` | Sensor | `0x0332` | sensor id |
| 3 | `0x46a` | Torso | `0x03b3` | torso id |
| 4 | `0x4a9` | SearchLight | `0x0331` | searchlight id |
| 5 | `0x476` | LRMWeaponSubsystem | `0x0369` | LRM10 |
| 6 | `0x46e` | ProjectileWeapon | `0x033b` | UltraAC5 |
| 7 | `0x46e` | ProjectileWeapon | `0x033b` | UltraAC5 |
| 8 | `0x46e` | ProjectileWeapon | `0x0364` | MachineGun |
| 9 | `0x452` | BeamWeapon | `0x0379` | MediumLaser |
| 10 | `0x452` | BeamWeapon | `0x0379` | MediumLaser |

The corresponding `core.mw4` member `mechs\argus\argus.subsystems` has the same
11 elements, ids, and Armor floats; the payload bytes outside those fields are
not identical.

## 9. Invariants and failure modes

- The element `size` includes the 20-byte header. A zero or out-of-range size
  breaks the stream walk; the next element is at `offset + size`.
- The `{Mech}` member is 344 bytes and its class is `0x429`. The salted digest
  covers only the `{Mech}` member; modifying the subsystem stream does not
  change the stored digest.
- The digest is a local self-consistency check. It catches a hand-edited
  `{Mech}` whose stored digest was not updated; it does not compare peers'
  variant files.
- The table id is the `u16` at payload `+0x42`, not the `u16` at `+0x40`.
- The class id and table id are independent. Do not infer the weapon category
  from the table id alone: PPCs appear in `ProjectileWeapon` elements, and the
  AMS class carries both AMS and LAMS data.
- Slot types are Missile (`0`), Projectile/ballistic (`1`), Beam (`2`), and
  Omni (`3`). A weapon mounts only when its required slot type matches the
  mount, or the mount is Omni. The slot type is a `DamageZone` property; the
  element class is the weapon subsystem class.
- The `.damage` stream carries zone/parent part ids and armor/internal-damage
  values. The exact slot-count fields in that stream are not yet decoded; the
  runtime fields `+0xa4..+0xb0` (remaining) and `+0xb4..+0xc0` (totals) and the
  serializer/allocator functions are.
- The Armor class (`0x4b1`) has nine floats at payload `+0x58`. The exact retail
  location names for those nine slots are not confirmed.
- The `{Mech}` words at `+0x134..+0x158` are not decoded. Preserve them unless
  their semantics are confirmed.
- The stock `.subsystems` stream is not a variant archive. A valid variant
  needs `{Mech}`, `<mech>{Subsystem}`, and `icuedbdii`.
- Members whose stored size differs from their uncompressed size use the LZW
  codec; a reader must handle both stored and compressed members.

## 10. Related documentation

- [Asset Loading and Archive Formats](assets.md) - `#VBD`, member directories,
  LZW, and the mech asset layout.
- [Mech Models and Animation](mech_animation.md) - part meshes, armature,
  `.mw4anim`, and `.animscript`.
- [UI Subsystem](subsystems/ui.md) - MechLab screen entry and shell flow.
- [Game Versioning](GAME_VERSIONING.md#9-variant-mech-file-integrity-and-loadout-validation)
  - the variant self-digest and loadout legality checks.
- [Gameplay Subsystem](subsystems/gameplay.md) - mech/subsystem object model and
  stream helpers.
- [Combat Subsystem](subsystems/combat.md) - runtime damage pools and armor
  application.
