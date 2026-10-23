# Gameplay Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2525 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Simulation state and rules: mechs, movers, pilots, missions, objectives, teams, sensors, vehicles, and the collision and geometry queries they use.

## Role and boundary

Gameplay owns the simulation state that AI, combat, UI, and render consume. It
is the largest subsystem by VA count, but most of it is object state and
mission plumbing rather than a single algorithm. The recognizable islands are:

- the collision/geometry island at `0x00418000`-`0x0041DFFF`;
- the mission, objective, team, pilot, and vehicle state in the general
  gameplay band;
- the game-state/save-load helpers grouped under `state`;
- the session/player table shared with the network layer;
- object and stream helpers that bridge gameplay data to the database and
  archive layers.

Gameplay is boundary-heavy. It calls render for presentation, AI for control,
combat for fire and damage resolution, and archive/database for content and
object storage. It should not be treated as a single self-contained module.

## Player and mech object graph

The in-mission player graph is shared by gameplay, combat, and network code:

```text
playerObj = [netinfo + slot*0x2038 + 0x3584]
mech      = [playerObj + 0x170]       // damage receiver
worldObj  = [playerObj + 0xD8]        // position/world entity
position  = [worldObj + 0x8C/+0x9C/+0xAC]
```

The player table is a fixed-stride array of `0x2038` bytes per slot. The
per-slot flags at `+0x3538`, `+0x353B`, and `+0x3544` control state sync,
player-event broadcast eligibility, and the state-sent marker. A slot can be
flagged active without a player object; the network layer relies on that.

The mech object is the damage receiver for the combat damage map. The world
object is the position/velocity source used by missile guidance and camera
code. The `+0x170` and `+0xD8` links are the stable gameplay-to-combat and
gameplay-to-render handoffs.

## Collision and geometry island

The `0x00418000`-`0x0041DFFF` island contains collision math and the geometry
queries used by movement, hit tests, and placement. It is mostly shared math,
not mission rules:

| VA | Role |
|----|------|
| `0x00418880` | transform a vector through the geometry helper |
| `0x004188E0` | sphere/OBB merge and bounds computation |
| `0x00418A80` | OBB-vs-OBB separating-axis collision test |
| `0x00418F00` | OBB-vs-OBB separating-axis test, second variant |
| `0x004194E0` | OBB/sphere cluster collision resolution |
| `0x00419AD0` | sphere-vs-sphere collision resolution |
| `0x00419C00` | sphere/point collision test |
| `0x00419F90` | Euler-angle to rotation-matrix conversion |
| `0x0041A070` | Euler-angle to rotation-matrix conversion, second form |
| `0x0041A160` | quaternion-to-rotation-matrix conversion |
| `0x0041A2C0` | 3x3 matrix inverse (adjugate + determinant) |
| `0x0041A460` | 4x4 matrix multiply |
| `0x0041AA10` | quaternion-to-Euler-angles conversion |
| `0x0041ABB0` | 3-component vector interpolation |
| `0x0041AFD0` | 4-vector normalization |
| `0x0041B140` | rotate a 4-vector by an angle |
| `0x0041B320` | Hamilton product of two 4-vectors |
| `0x0041B3B0` | 4x4 matrix multiply (rotation + translation) |
| `0x0041B680` | fast 4-vector normalization |
| `0x0041B720` | fast quaternion normalization |
| `0x0041BB80` | quaternion slerp |
| `0x0041BD00` | quaternion lerp |
| `0x0041C340` | quaternion from a 3-vector |
| `0x0041C540` | squared-distance comparison |
| `0x0041C610` | quaternion from Euler angles |
| `0x0041C680` | 3x3 matrix times vector |
| `0x0041C6E0` | transposed 3x3 matrix times vector |
| `0x0041C7D0` | 3x4 matrix times vector |
| `0x0041C830` | quaternion/matrix multiply |
| `0x0041C9B0` | quaternion Hamilton product |
| `0x0041CA30` | 4x4 matrix times quaternion |
| `0x0041CAC0` | 3x4 matrix times 3-vector |
| `0x0041CB30` | transform a 3-vector by a 4x4 matrix |
| `0x0041CFE0` | 4x4 matrix multiply |
| `0x0041D3B0` | 3x4 matrix multiply with translation |
| `0x0041D570` | 4x4 matrix construction from six floats |
| `0x0041D780` | angle normalization |
| `0x0041D810` | angle interpolation |

The collision tests are separating-axis and sphere-based; the matrix and
quaternion helpers are the shared transform layer used by gameplay, combat,
and camera code. This island does not contain the mission rules or the mech
damage model; those live in the gameplay state and combat paths.

## Gameplay state

The general gameplay band owns the mission and object state consumed by the
rest of the engine:

- mission and scenario state;
- objectives and completion flags;
- teams and affiliations;
- pilots and pilot-to-mech bindings;
- vehicles, movers, sensors, and other world objects;
- save/load and game-state flags;
- the database/session wrappers at `0x004D2B00`-`0x004D3200`.

The state is object-oriented and vtable-driven. Many objects are created
through the shared allocation wrappers and registered in the database; the
gameplay code holds pointers and IDs rather than a single global state block.
The network layer's player table is one view of that state; combat's damage
map and render's scene nodes are others.

## Object, stream, and serialization helpers

The upper end of the physics band and the following block contain shared
object and stream infrastructure used by gameplay data:

- `0x0041D890` - object/collection constructor;
- `0x0041DAC0` - destructor/cleanup;
- `0x0041DC10` - stream/transform helper;
- `0x0041DE50` - stream object constructor;
- `0x0041DE80`/`0x0041DEC0` - writer open/close;
- `0x0041E690` - StreamReader initializer;
- `0x0041E720`/`0x0041E950` - StreamReader read/write;
- `0x0041EA60`/`0x0041EAE0` - bit read/write;
- `0x0041EB40`/`0x0041EC50` - multi-bit read/write;
- `0x0041F230`/`0x0041F270`/`0x0041F290` - int/string/float serializers;
- `0x0041F3D0`/`0x0041F430` - vector serializers;
- `0x0041F480`/`0x0041F500` - yaw/pitch/roll serializers;
- `0x0041F570` - unit-quaternion parser;
- `0x0041F680`/`0x0041F6E0` - motion parser/writer;
- `0x0041F750`/`0x0041F7B0` - RGB color parser/writer;
- `0x0041F800` - RGBA color parser;
- `0x0041F8D0`/`0x0041FA70` - tree/section save-load.

These helpers are shared by the database and archive layers. They are not
gameplay rules, but they define how gameplay records are read and written.

## Invariants and failure modes

- The player table stride is `0x2038`; a slot's flags are independent of
  whether a player object is present.
- The mech is `[playerObj+0x170]`; the world object is `[playerObj+0xD8]`.
  Using one in place of the other produces wrong damage or guidance targets.
- Collision queries operate on transformed geometry; an uninitialized matrix
  or quaternion produces false hits or misses.
- The OBB tests use a separating-axis path; a degenerate axis (zero-length
  normal) is not a valid input.
- Sphere tests compare squared distances; the caller must not compare the
  result against a linear distance without squaring.
- The stream helpers are bit-oriented; a reader and writer must agree on the
  bit order and the flush state.
- The gameplay state is shared across subsystems; mutation must go through the
  owning object, not a cached pointer in another subsystem.
- The network player table and the gameplay object graph are views of the same
  state; they can diverge if one side is updated without the other.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x004188E0` | physics | sphere/OBB bounds merge |
| `0x00418A80` | physics | OBB-vs-OBB collision test |
| `0x00418F00` | physics | OBB-vs-OBB collision test variant |
| `0x004194E0` | physics | OBB/sphere cluster resolution |
| `0x00419AD0` | physics | sphere-vs-sphere resolution |
| `0x00419C00` | physics | sphere/point test |
| `0x0041A2C0` | physics | 3x3 matrix inverse |
| `0x0041A460` | physics | 4x4 matrix multiply |
| `0x0041BB80` | physics | quaternion slerp |
| `0x0041C540` | physics | squared-distance comparison |
| `0x0041CB30` | physics | transform 3-vector by 4x4 |
| `0x0041CFE0` | physics | 4x4 matrix multiply |
| `0x0041D570` | physics | matrix construction from six floats |
| `0x0041D890` | objects | object/collection constructor |
| `0x0041E690` | stream | StreamReader initializer |
| `0x0041E720` | stream | StreamReader read |
| `0x0041E950` | stream | StreamReader write |
| `0x0041EA60` | stream | bit read |
| `0x0041EAE0` | stream | bit write |
| `0x0041F230` | stream | integer serializer |
| `0x0041F290` | stream | float serializer |
| `0x0041F8D0` | stream | tree/section save-load |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 2396 | Simulation and mission-state helpers not assigned to a narrower gameplay detail. |
| physics | 91 | Collision, OBB/sphere tests, and geometric queries. |
| state | 38 | Game-state flags, save/load, and session state. |

## Coverage

All 2525 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
