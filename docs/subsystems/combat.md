# Combat Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 141 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

In-mission weapon fire, launch/guidance, hit resolution, and damage application.

## Role and boundary

Combat owns the player-mech fire pipeline and the damage path it feeds:

```text
input -> command -> fire eligibility -> weapon update
      -> missile spawn -> flight/guidance -> hit resolution
      -> damage application -> combat state
```

The AI uses the same missile, guidance, and damage primitives; the AI combat
detail only decides when to engage. Combat publishes events to the renderer
for muzzle flashes and explosions but does not own presentation. The network
layer owns the wire carriers; combat owns the payload semantics those carriers
transport.

## Input and command layer

The input path starts at the window procedure `FUN_0072E580`, which maintains
a 256-bit key/mouse bitmap at `0x0087DDC4`. `FUN_007238D0`/`FUN_007239A0`
set and clear bits; `FUN_007239F0` copies the bitmap to `0x0087DDA4` once per
frame. `FUN_00723A30`/`FUN_00723B40` query the action state for a virtual key.

Commands are dispatched through the generic dispatcher `FUN_004D5B70`. It
reads the table object at `[this+4]`, whose entries are 12 bytes
`{id, name, handler}` and are indexed by `event[+4] - 1`; it calls the handler
with the receiver in `ECX`. The command table is at `0x0077B9D8`: 131 entries
with ids 6 through 136.

The fire-related command handlers are state trackers, not firing code:

| Command (id) | Handler | Counter |
|--------------|---------|---------|
| `FireWeapon` (82) | `0x00556D80` | `[this+0x46C]` |
| `WeaponGroup1` (42) | `0x00554BF0` | `[this+0x470]` |
| `WeaponGroup2` (43) | `0x00554C70` | `[this+0x474]` |
| `WeaponGroup3` (44) | `0x00554CF0` | `[this+0x478]` |
| fourth group | - | `[this+0x47C]` |
| `ToggleGroupWeaponMode` (143) | `0x00554B90` | - |
| `NextWeaponGroup` / `PrevWeaponGroup` (48/49) | `0x005553D0` / `0x00555590` | - |
| `NextEnemy` (67) | `0x00555E30` | target designator |

The group handlers test the byte at `[this+0x589]`. When it is zero they apply
the weapon-control gate (`FUN_0061ACF0`/`FUN_0061AD20`, mask `8` of the object
at `0x007F2938`) and increment/decrement the counter; when it is non-zero they
take the ungated decrement/clamp path. The byte is only cleared by the
init/reset functions `FUN_0054A880` and `FUN_00549A70`.

## Fire driver

`FUN_005541C0` is the per-frame fire driver. For each group counter greater
than zero it calls `FUN_00553F20(group)`. That function dispatches through
`[this+0x8E0 + group*4]`: zero selects `FUN_00553F90`, one selects
`FUN_00553DB0`.

The driver is gated by `FUN_00553D20` ("any trigger active") and by the update
chain in `FUN_0054E988`:

- `[+0x4AC] != 0`;
- low byte of `[+0x4B0] == 0`;
- `FUN_00553D20() != 0`;
- `[*(+0xE0)+0x14] == 2`;
- `[*(+0x384)+0x10] & 0x80000 == 0`;
- `[*(+0x384)+0x2F8] == 0`;
- low byte of `[+0x5AC] == 0`.

`FUN_00553BC0` is the group-select action. If any gate fails, the counters
remain set but no missile is spawned.

## Launch transform and missile spawn

The launch transform is `FUN_005E219B` (`__thiscall`, `RET 8`; `this` is the
weapon entity). It builds a launch configuration on a 0x1C4-byte frame and
dispatches the spawn. Its inputs are:

- the weapon record from the pool at `[this+0x198]` (via `0x00507F90`);
- the target reference at `[this+0x214]` (via `0x0041FD80`; target id at
  `+0x14`/`+0x16`);
- the cached target position at `[this+0x228..0x230]`;
- the launcher object at `[this+0x1D4]` for the no-target fallback (position
  from the launcher frame `+0xC` and scalar `+0x18` via `0x0040CA40` and
  `0x0040CBB0`);
- the fire-mode flag at `[this+0x224]`, which selects config flag `2` or
  `0x800002`;
- the sub-object via `0x005F07C0`.

The spawn dispatch is `FUN_004D9910` (34 bytes). It takes the config object
from `[param_1]`'s vtable `+4`, reads the type id at `+0x10`, the aim point at
`+0xB8..+0xC4`, and the pool key at `+0x54`, maps the type id through the
global table at `0x007B8C0C`, and calls the registered factory at
`[descriptor+0x20]`.

The missile factory is `FUN_005E3FF0` (registered id `0x43D` through
`0x005E3E3E`). It looks up the pool by `config+0x54`: a hit reuses the object
through `FUN_005E4400`, a miss allocates `0x2D4` bytes and calls
`FUN_005E4080`.

`FUN_005E4080` is the missile constructor. It copies the aim block
`+0xB8/+0xBC/+0xC0` into the missile's target-position cache
`+0x26C..+0x274`, copies the timer `+0xC4` into `+0x294`, and reads the id
pair `+0xB4` (u8) / `+0xB6` (u16). When the pair equals the default sentinel
pair at `0x007DC694`/`0x007DC696`, the constructor skips target resolution:
a no-lock missile has no target link. A real pair resolves through the roster
lookup `0x004CDFA0` -> `0x004CEEB0`, copies the target's world position from
`[object+0xD8]+0x80`, and registers the link through `0x005E6590`.

The aim point is therefore the target position when locked, or the
launcher-derived muzzle point when not. The config carries the target id pair,
the aim point, the timer, and the fire-mode flag.

## Missile flight and guidance

`FUN_005E45E0` is the per-frame missile tick (`__thiscall`, `RET 8`, one
double `now`). It updates the timer at `+0x290` by adding
`(float)(now - +0xE4)`, then dispatches on `[[missile+0xE0]+0x14] - 6` through
the table at `0x005E49CC`:

| Type | Step bodies |
|------|-------------|
| 6 | `0x5E5700` + `0x5E5280` + `0x5E49F0` + `0x5E4CF0` -> terminal |
| 7 | `0x5E5BD0` -> after-switch |
| 8 | `0x5E58B0` -> after-switch |
| 9 | `0x5E5AF0` -> after-switch |
| 10 | timed body: if `+0x290 < lifetime` (`[owner+0x7C]` via the `+0x78` getter) -> `0x5E5BD0` + after-switch; otherwise vtable `+0x18` (destroy) and return |
| 11 | `0x5E59B0` -> after-switch |
| 12 | `0x5E5A50` -> after-switch |
| other | straight to the terminal block |

The after-switch path is `0x5E5280` + `0x5E49F0`: look-at and guidance.
`FUN_005E49F0` is gated on `[missile+0x299] == 0` and
`[missile+0x290] < [missile+0x294]`; it steers toward
`[[missile+0xD8]+0x8C/+0x9C/+0xAC]`.

The terminal detonation gates are:

1. `[+0x299] != 0` -> return.
2. `0x0041FD80(+0x258) != 0` (a guidance container is present) -> return.
3. `|ref.y (+0x270) - prev.y (+0x288)| > 1e-4` -> return (the reference
   point must be stable this tick).
4. `|len^2(ref - targetPos)| <= 1e-4` -> skip.
5. `|vel^2| <= 1e-4` -> skip.
6. `dot(dir, velDir) < 0.999` -> return.

On detonation, `[+0x299]` is set to one; the exit point
`targetPos + dir*1000` is written to both `+0x26C..+0x274` and
`+0x284..+0x28C`; the impact snapshot copies 48 bytes from `[target+0x20]`,
builds the offset vector from `prevRef - targetPos`, and calls
`0x0041FDE0` and `0x004DAA20`. The rate fields are frozen:
`+0x168/+0x16C = 0`, `+0x170 = approxSqrt(len^2(+0x168..))`,
`+0x174..+0x17C = 0`, `+0x180/+0x184 = 0`, and
`+0x188 = approxSqrt(len^2(+0x180..))`, where
`approxSqrt(x) = (bits(x) >> 1) + 0x1FC00000`.

## Hit resolution and damage

`FUN_0058D930` is the mech's damage-mode event handler. It is reached through
the generic dispatcher `FUN_004D5B70` with the mech as the dispatcher's
`this`. It switches on the signed byte at `msg[0x1C] - 5` over types 5..12
through the jump table at `0x0058DC5C`.

The handler resolves the event against the mech's damage map at
`mech+0x370`. The map is a sorted keyed list of damage-target parts; the part
data is at node `+0xC` and the key at node `+0x18`. `FUN_00416B60` is the
lookup. The types select the keys in this order:

| Type | Keys |
|------|------|
| 5 | 8, 5, 4, 6 (all appended) plus the ABL notify `0x00621FD0` when `[netinfo+0x17] == 1` |
| 6 | 1, 0 |
| 7 | 2 (else 5), then 0 |
| 8 | 3 (else 4), then 1 |
| 9 | 6, 4, 5 when present |
| 10 | 7 when present |
| 11 | none |
| 12 | 1, 0 |
| other | none |

The tail looks up keys 9 and 10, counts the appended entries
(`FUN_00417A40`), and when the count is positive divides the event amount
`msg+0x14` by the count in place. It then walks the entries and calls
`entry->vtable[0x10](msg, 0)`. If `entry->[0x34] == part9->[0x50]` it also
applies part 9; the same applies for part 10. A null entry stops the walk but
still counts toward the split. The list is destroyed with `FUN_00417980`.

The part objects are armor-attribute pools with vtable `0x7740BC`:

- `+0x10` max, `+0x14` current;
- `+0x18` type-3 scale, `+0x20` incoming-damage scale;
- `+0x24` owner/zone object, `+0x28` parent object;
- `+0x2C`/`+0x30` strings, `+0x34` id;
- `+0x38`/`+0x3C`/`+0x40` mirror out-pointers;
- `+0x44` state, `+0x48` fraction, `+0x4C` armor class.

The apply method `FUN_004E6520` (`__thiscall`, `RET 8`) mutates the amount in
place:

1. `msg+0x14 *= [part+0x20]`; clamp to `0.1` if below `0.1`.
2. Notify the owner through `[part+0x24]->vtable[0x80](msg, part)`.
3. On the gated path, if armor remains and the type/class pair matches the
   damage-reduction matrix, scale by `0.667`; set the parent hit-flash time
   when `cur == max`; apply the type-3 scale; subtract the amount from
   `cur`; on underflow, forward the excess to the parent; then notify the
   owner through `vtable[0x8C]`.
4. Recompute the state with `FUN_004E6480` and the fraction (including the
   parent's current/max when present).

`FUN_004E6480` maps the current/max fraction to a damage tier: `max == 0` or
`frac < 0.01` is wrecked/destroyed (`5` when both this zone and its parent are
dead, else `4`); `frac < 0.1` is `3`; `frac < 0.5` is `2`; `frac < 0.75` is
`1`; otherwise `0`.

`FUN_006747E0` is the subsystem status readout. It exposes
`ExecutionState`, `CriticalHitsTaken` (`+0x168`), `SubsystemIndex` (`+0x16C`),
and `InternalLocation` (`+0x170`); the class constructor `0x005F0740` copies
those from a 0x6C-byte record and `0x005F06F0` serializes them back.

## Combat state replication

Combat state rides the network session carriers:

| Wire | Carrier | Send | Apply |
|------|---------|------|-------|
| `0x59` | per-frame element replication | `FUN_005BD3D0` -> `FUN_006805F0` | `FUN_00680B30` -> `FUN_00680730` -> `FUN_0067FDF0` |
| `0x58` | per-slot world update | `FUN_0067D5E0` | `FUN_0067E930` |
| `0x18` | entity state update | `FUN_0053D160` | `FUN_0053D0B0` (mech entity type `0x429`) |
| `0x47` | presence sync | - | `FUN_00539160` / `FUN_005BE210` |

The damage record is written by the mech element writer `FUN_005F79D0` and
read by the loader `FUN_005F7ED0`. A pool record carries the class tag, max,
current, name, id, state, class, and group; a component record carries the
class tag, type id, name, key, pool key, auxiliary table, target id pair, and
aim point. Both sections are framed as `[u32 count][records]` and are gated on
the mech's damage/engaged bytes.

## Invariants and failure modes

- Fire handlers only change counters; the per-frame driver is the only path
  that spawns missiles.
- The `[this+0x589]` byte selects the gated or ungated counter path; it is
  cleared only by init/reset.
- A no-lock missile has no target link; the sentinel id pair suppresses
  resolution.
- The launch aim point is target-derived when locked and launcher-derived when
  not; the two cases must not be mixed.
- The missile timer is a float updated from a double delta; the type table
  selects the per-tick step plan.
- Terminal detonation requires a stable reference Y, non-zero relative
  distance and velocity, and a direction dot of at least `0.999`.
- Damage is split across the selected parts; the amount is divided in place
  and a null entry stops the walk.
- Armor class and type select the damage-reduction matrix; the parent receives
  only overflow.
- Damage tiers are fraction-based; `max == 0` is always wrecked/destroyed.
- The wire carriers are owned by the network layer; combat owns the payload
  field meanings.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0072E580` | input | WndProc and key/mouse bitmap |
| `0x004D5B70` | command | generic command dispatcher |
| `0x0077B9D8` | command | 131-entry command table |
| `0x00556D80` | command | `FireWeapon` counter |
| `0x00554BF0`/`0x00554C70`/`0x00554CF0` | command | weapon-group counters |
| `0x005541C0` | fire | per-frame fire driver |
| `0x00553F20` | fire | per-group fire dispatch |
| `0x005E219B` | launch | launch transform |
| `0x004D9910` | launch | spawn dispatch |
| `0x005E3FF0` | launch | missile factory |
| `0x005E4080` | launch | missile constructor |
| `0x005E45E0` | flight | missile tick |
| `0x005E49F0` | flight | missile guidance |
| `0x005E49CC` | flight | missile type table |
| `0x0058D930` | damage | mech damage-mode handler |
| `0x004E6520` | damage | armor-pool apply |
| `0x004E6480` | damage | damage-tier state |
| `0x006747E0` | damage | subsystem status readout |
| `0x005F79D0` | replication | damage/component record writer |
| `0x005F7ED0` | replication | damage/component record loader |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| fire-damage | 141 | Weapon fire eligibility, launch transform, missile/guidance, hit resolution, and damage. |

## Coverage

All 141 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence. 71 are shared ([shared.md](shared.md#combat)). 21 are outbound boundary calls ([SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md)).
