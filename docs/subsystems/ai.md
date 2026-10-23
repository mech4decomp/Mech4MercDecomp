# AI Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 1308 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

AI decision layer, ABL script runtime, navigation, targeting, squad control, and AI combat decisions.

## Role and boundary

The AI is a layered system:

- C++ primitives: per-unit controller, perception, targeting/aim, pathfinding,
  and squad coordination.
- ABL scripts: the high-level tactical behavior (attack, flee, cover, range)
  is script-driven and configured through the `0x0056xxxx` ABL opcode handlers.

The ABL interpreter is the largest detail. The C++ layer supplies the
perception, movement, targeting, and combat primitives that the scripts call.
The actual weapon resolution lives in the combat subsystem; AI only decides
when and how to engage.

## Core objects and globals

| Address | Object |
|---------|--------|
| `0x007F23B0` | `CombatAI` singleton (per-unit controller) |
| `0x00787980` | `CombatAI`/unit vtable (210 slots) |
| `0x007F243C` | `CRailGraph` global (pathfinding) |
| `0x007F251C` | `LancemateManager` global (squad coordination) |
| `0x00788634` | `LancemateManager` vtable |
| `0x007F22B8` | `PlayerAI` singleton |
| `0x007F2140` | `Sensor` singleton |
| `0x007F2468` | AI command block (0x19 dwords) |
| `0x00805908` / `0x00805918` | ABL interpreter opcode/token stream globals |
| `0x0080D970` | ABL module table base |

The `CombatAI` object is the per-unit controller. Its vtable has 210 slots,
covering state queries, target selection, movement, and weapon decisions. The
`LancemateManager` is a separate squad object with a 0x74-byte child node type.

## AI controller and brain

The main combat dispatch is `FUN_005C2790`. It builds the target list
(`FUN_005C3DA0`), runs the vector processor (`FUN_005C2960`), and performs the
visibility/target check (`FUN_005C77D0`). This is the single highest-level
combat decision path.

The controller lifecycle is:

- `FUN_005C0EE0` - global `CombatAI` singleton initializer;
- `FUN_005C0F50` - singleton destroyer;
- `FUN_005C0FE0` - `CombatAI` constructor (installs vtable `0x787980`);
- `FUN_005CD950` - base constructor (initializes float fields to `-1.0`
  sentinels);
- `FUN_005C9800` / `FUN_005C9900` / `FUN_005C9850` - boolean state/behavior
  getters.

The per-unit decision loop is split across several state machines:

- `FUN_005DC370` and `FUN_005DC4A0` - per-unit complex/large state-machine
  updates;
- `FUN_005A61E0` - execution-state handler with jump table `0x5A62FC`;
- `FUN_005A1040` - update switch on `this+0x528` cases 0-4;
- `FUN_005DF62B` - run a state machine.

`PlayerAI` has its own initialization pair at `FUN_005BFDF0`/`FUN_005BFCF0`.
The AI subsystem init/shutdown is `FUN_005DAAE0`/`FUN_005DAC30`; state
serialization is `FUN_005DAD30`/`FUN_005DAFE0`.

## Navigation and movement

The `CRailGraph` is a rail-graph pathfinder, not a full navmesh:

| VA | Role |
|----|------|
| `0x005D8030` | allocate the global rail graph (0x47C bytes) |
| `0x005D8350` | add a node |
| `0x005D8820` | closest node to a point within a radius |
| `0x005D8530` | candidate list near a point, filtered by radius |
| `0x005D8CC0` | grid-cell direction / walk line of cells |
| `0x005D9030` | line-of-sight check over grid cells |
| `0x005B2BB0` | LOS-gated movement (normalized direction + virtual method + `0x5D9030`) |
| `0x005B1AD0` | physics/aim update (clamps heading, integrates velocity, builds transform) |

The `Adept::Mover` motion state is updated by `0x004FACD0`/`0x004FAE10`;
integration is `0x004FAED0`/`0x004FAFC0`; velocity update is `0x004FB1E0`.

The rail graph is grid-based: nodes and candidate lists are filtered by radius,
and the LOS check walks the grid cells between endpoints. Movement is only
committed when the LOS check passes.

## Perception and targeting

The `Sensor` singleton is initialized by `FUN_005B9020`, constructed by
`FUN_005B9140`, and updated by `FUN_005B9390`. Its scan `FUN_005B9560` returns
the candidate list at `this+0x1D4`.

Target acquisition is a two-stage path:

- `FUN_005C72D0` scans the candidate list for visible objects and appends them
  to the target array;
- `FUN_005C77D0` selects a target with visibility/angle gating.

`FUN_005C7170` is the visibility/angle check; it returns `1` when the candidate
is inside the view cone. `FUN_005C8790` is the aim/angle and fire-mode decision
(returns `0`, `1`, or `2`). `FUN_005C8BE0` applies the random aim gate, and
`FUN_005C8DE0` blends the interpolated aim value. `FUN_005CAEB0` updates the
two aim angles.

The orientation/aim path also includes `FUN_005E5E30` (large orientation/aim
computation), `FUN_005E5280` (look-at basis), `FUN_005E4CF0` (missile target
tracking/lock-on), and `FUN_005E49F0` (missile homing/guidance).

## Weapon and combat behaviors

The AI weapon subsystems are shared with the combat subsystem:

| VA | Subsystem |
|----|-----------|
| `0x005E2DC0` | SRM weapon |
| `0x005E3240` | missile weapon |
| `0x005E6A40` | projectile weapon |
| `0x005B6850` | flare weapon |
| `0x005BA830` | narc weapon |
| `0x005E8A80` | beam entity |
| `0x005ECBD0` | weapon mover |
| `0x005E9DB0` | torso object initialization |
| `0x006A33A0` | virtual behavior selection |

The AI selects a behavior and weapon, but the projectile flight, hit test, and
damage application are combat-owned. The AI's `combat` detail is the
engagement decision, not the damage model.

## ABL script interface

ABL scripts configure the AI through opcode handlers. The main knobs are:

| VA | Opcode handler |
|----|----------------|
| `0x0056AC20` | set threat target |
| `0x0056A580` | find nearest/greatest threat |
| `0x0056A8B0` | find least threat |
| `0x0056A0E0` | nearest point on path |
| `0x0056B000` | set AI group skills |
| `0x0056B210` | set AI skills (pilot/gunnery/elite) |
| `0x0056B430` | set AI group id |
| `0x0056B5A0` | set AI attack throttle |
| `0x0056BA00` | set AI target priority |
| `0x0056BB80` | set AI firing delay (min/max) |
| `0x0056BD00` | set AI target position |
| `0x0056C300` | set AI team |
| `0x0056B920` | set ignore-friendly-fire |

These handlers write the per-unit/per-group state that the C++ controller reads.
The ABL runtime itself is the `0x0056xxxx` interpreter and module table; the
opcode handlers are the script-visible configuration surface.

## Squad and lance coordination

`FUN_005DDEF0` allocates the global 0x20-byte `LancemateManager`.
`FUN_005DDF60` is its constructor, `FUN_005DE000` its destructor, and
`FUN_005DE210` constructs a 0x74-byte lancemate child node (vtable
`0x788640`). `FUN_005DE750` reads the pilot/mech AI configuration fields.

The manager coordinates lancemates: it holds the child nodes, their group ids,
and the shared target/threat state. It does not own the per-unit controller;
each unit still runs its own `CombatAI` state machine.

## Invariants and failure modes

- The ABL script layer configures behavior; it does not replace the C++
  perception/movement/targeting primitives.
- `CombatAI` is a singleton at `0x007F23B0`; per-unit controllers are
  separate objects, not additional singletons.
- The sensor candidate list is at `this+0x1D4`; the target array is built from
  it, not directly from the world.
- Target acquisition requires both visibility and the view-cone angle check.
- The rail graph is grid-based; movement is committed only after the LOS walk
  succeeds.
- The `LancemateManager` child nodes are 0x74 bytes and use vtable `0x788640`.
- The AI's weapon selection is separate from combat's projectile/damage
  resolution.
- The AI state serializer reads/writes the same per-unit fields the controller
  uses; a partial save loses the state-machine phase.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x005C2790` | brain | top-level combat dispatch |
| `0x005C3DA0` | brain | target-list build |
| `0x005C2960` | brain | vector processor |
| `0x005C0FE0` | brain | `CombatAI` constructor |
| `0x005A1040` | brain | update state switch |
| `0x005A61E0` | brain | execution-state handler |
| `0x005DC370` | brain | per-unit state-machine update |
| `0x005D8030` | nav | rail-graph allocation |
| `0x005D8820` | nav | closest-node query |
| `0x005D9030` | nav | grid LOS check |
| `0x005B2BB0` | nav | LOS-gated movement |
| `0x005B1AD0` | nav | heading/velocity/transform update |
| `0x005B9020` | targeting | Sensor singleton init |
| `0x005B9560` | targeting | sensor scan |
| `0x005C72D0` | targeting | visible-object scan |
| `0x005C77D0` | targeting | target acquisition |
| `0x005C7170` | targeting | view-cone check |
| `0x005C8790` | targeting | aim/fire-mode decision |
| `0x005E5E30` | targeting | orientation/aim computation |
| `0x005E49F0` | targeting | missile guidance |
| `0x005DDEF0` | squad | `LancemateManager` allocation |
| `0x005DDF60` | squad | `LancemateManager` constructor |
| `0x005DE210` | squad | lancemate child constructor |
| `0x0056AC20` | abl | set threat target |
| `0x0056B210` | abl | set AI skills |
| `0x0056BB80` | abl | set firing delay |
| `0x0056C300` | abl | set team |

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
