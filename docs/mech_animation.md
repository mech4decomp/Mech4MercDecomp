# Mech Models and Animation

Mechs are assembled from per-part indexed meshes, a fixed joint armature, and
keyframed animation clips. An `.animscript` state machine selects and blends
the clips; the resulting local joint transforms are composed through the
skeleton and applied to the part vertices before rendering.

This page documents the skeleton, the part-mesh shape records, the `.mw4anim`
container, the `.animscript` state graph, and the playback semantics. Asset
locations are in [Asset Loading and Archive Formats](assets.md); the
animation-to-render bridge is in
[Scene Construction and Object Rendering](scene_rendering.md).

The data layouts below come from the shipped retail assets and the reference
binary. Offsets are measured from the start of the named record unless stated
otherwise; all integers are little-endian.

## How to read this page

A mech is a **skeleton** (a small hierarchy of joints) with rigid **part
meshes** attached to the joints. Animation stores, for each joint, how its
rotation changes over time. The renderer composes the joint transforms from the
root down to each part and moves that part's vertices accordingly.

The animation data comes in two layers:

- `.mw4anim` files contain the actual keyframed motion;
- `.animscript` files are a small state machine that chooses which clip to play
  and how to blend between clips.

The layouts below describe bytes in shipped files, not C++ source structures.
The oracle's runtime side is the MLR animation/mesh path and the fixed joint
table; the files themselves are data contracts.

### Key terms

| Term | Plain-language meaning |
|---|---|
| skeleton / armature | The joint hierarchy and the rest-pose transforms of its joints. |
| joint | One pivot in the hierarchy (hip, knee, shoulder, ...). |
| rest pose | The model's default pose before animation. |
| local / world transform | A transform relative to the parent joint / relative to the model origin. |
| matrix | A compact way to store rotation, scale, and translation. |
| quaternion | A four-number rotation representation that avoids gimbal lock and interpolates smoothly. |
| keyframe / key | A stored value at a particular time. |
| chunk | A section of a file, located by a byte offset. |
| clip | A complete animation (stand, walk, run, fall, ...). |
| channel / track | One joint's animated values inside a clip. |
| interpolation | Estimating values between two keys. |
| state machine | Rules that decide which state/clip is active and when to switch. |
| transition | A rule for blending from one state to another. |
| overlap curve | A curve that controls how much of each state is mixed during a transition. |
| blend | Mixing two poses or clips by a weight. |
| cycle / phase | A looping animation and the position within one loop. |
| root motion | The clip's own forward travel, stored in the root joint's channel. |
| foot planting | Advancing the cycle by distance travelled so the feet do not slide. |

## 1. Asset graph

The chassis table, part meshes, armature, animation script, clips, and skin
atlas are located in
[Asset Loading and Archive Formats](assets.md#5-mech-asset-layout). For
animation, the important paths are:

- armature: `mechs\<name>\<name>.contents[joint_*]{armature}`;
- animation script: `mechs\<name>\<name>.animscript`;
- clips: `content\mechs\<dir>\animation\*.mw4anim` (the archive path drops the
  `content\` prefix).

The `.animscript` defines its own clip roots, so a mech can share another
mech's animation set (for example, a chassis that reuses a common walk/run
family).

## 2. Skeleton and armature

### 2.1 Joint names

The engine keeps a fixed 47-entry joint-cage name table at
`MW4Mercs.exe 0x007B5A9C`, in alphabetical order:

```text
joint_cage, joint_centertorsofront, joint_centertorsorear, joint_head,
joint_hip, joint_hipabove, joint_hipbelow, joint_lankle,
joint_lbelowankle, joint_lbtoe, joint_ldleg, joint_lefttorsofront,
joint_lfoot, joint_lftoe, joint_lgun, joint_lgunabove, joint_litoe,
joint_lmissile, joint_lmleg, joint_lotoe, joint_ltoe, joint_luarm,
joint_luleg, joint_rankle, joint_rbelowankle, joint_rbtoe, joint_rdleg,
joint_rfoot, joint_rftoe, joint_rgun, joint_rgunabove,
joint_righttorsofront, joint_ritoe, joint_rmissile, joint_rmleg,
joint_root, joint_rotoe, joint_rtoe, joint_ruarm, joint_ruleg,
joint_specialone, joint_specialtwo, joint_torso, joint_torsoabove,
joint_torsobelow, joint_vel, joint_world
```

`.mw4anim` chunk-4 channels index this table directly.

### 2.2 Armature members

The armature is stored as one member per joint:

```text
mechs\<name>\<name>.contents[joint_<joint>]{armature}
```

The member carries the joint's local 4x4 rest-pose matrix at `+0x1E`. A 4x4
matrix stores rotation and translation together; multiplying two matrices
combines their transforms. The stored bottom row is normally `0 0 0 1`, but
these files write it as zero, so a reader must restore the `1` in the
homogeneous term before composing the chain.

The armature members are shipped data; the oracle's runtime joint-name table is
the 47-entry cage table at `0x007B5A9C`. The armature blobs store only local
matrices, not parent links, so the joint names are the contract that ties the
blobs to the skeleton. The parent hierarchy is the fixed mech skeleton:

```text
joint_world
  joint_vel
    joint_root
      joint_torso
        joint_torsoabove
        joint_torsobelow
          joint_hip
            joint_hipabove
              joint_luleg -> joint_lmleg -> joint_ldleg
                joint_lankle -> joint_lbelowankle
              joint_ruleg -> joint_rmleg -> joint_rdleg
                joint_rankle -> joint_rbelowankle
            joint_hipbelow
        joint_luarm -> joint_lgunabove
        joint_ruarm -> joint_rgunabove
```

The standard part-to-joint map is:

| Part suffix | Joint |
|---|---|
| `torso` | `joint_torso` |
| `hip` | `joint_hip` |
| `luarm` / `ruarm` | `joint_luarm` / `joint_ruarm` |
| `luleg` / `ruleg` | `joint_luleg` / `joint_ruleg` |
| `lmleg` / `rmleg` | `joint_lmleg` / `joint_rmleg` |
| `ldleg` / `rdleg` | `joint_ldleg` / `joint_rdleg` |
| `lfoot` / `rfoot` | `joint_lankle` / `joint_rankle` |
| `litoe` / `ritoe` / `lbtoe` / `rbtoe` | `joint_lbelowankle` / `joint_rbelowankle` |

Some chassis omit joints (for example, a mech without a middle-leg joint); a
missing part is skipped rather than failing the whole model.

### 2.3 World transform

A joint's local transform is the rest matrix composed with the current
rotation; the world transform is the parent chain:

```text
local  = rest_local * rotation
world  = parent_world * local
```

The rotation can be the chunk-0 base-pose value, the chunk-4 channel
quaternion, or the combined base-plus-delta form described in section 7.

## 3. Part meshes

### 3.1 Shape record

Part meshes use the same shape-record format as static props. The full record
layout (LOD marker, vertex/UV buffers, material groups, and normals) is in
[Scene Construction and Object Rendering](scene_rendering.md#51-prop-shape-records).
The mech-specific points are:

- the material sub-object carries a counted texture-page name (for example
  `@aarg0`) instead of a NUL material name;
- the part index list is one byte per index;
- the part's material name resolves to `textures\<name>.tga`, the shared skin
  atlas (`@aarg0` is 512x512 RGBA on the shipped Argus);
- mech part UVs are used in stored order, while static prop shape records store
  UV pairs as `(v, u)` and need a swap;
- the part UV block is a counted array (`u32 uv_count` followed by `uv_count`
  pairs) when the count matches the vertex count;
- the `#FRE` header's bounding-sphere radius at `+0x1C` is the node's
  far-distance cull radius.

The oracle's runtime mesh path is the MLR mesh family (stream loader
`0x0047AC10`, per-frame update `0x0047ADA0`); there is no public part-mesh
header.

### 3.2 Scale and culling

Placement matrices are unit scale; model scale is a property of the model. A
part is skipped when its joint is absent from the chassis.

## 4. `.mw4anim` container

### 4.1 Header

The file is shipped data; the runtime playback side is the MLR animation detail,
and the joint-name table is the cage table at `0x007B5A9C`. The file header is
byte-packed:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | version/flags (`0x00000200` observed) |
| `+0x04` | 4 | `0x00000100` observed |
| `+0x08` | 4 | zero |
| `+0x0C` | 1 | flags/zero |
| `+0x0D` | 4 | float duration in seconds |
| `+0x11` | 4 | end offset (last byte of the file) |
| `+0x15` | 4 | zero |
| `+0x19` | 4 | chunk 0 offset |
| `+0x1D` | 4 | chunk 1 offset |
| `+0x21` | 4 | chunk 2 offset |
| `+0x25` | 4 | chunk 3 offset |
| `+0x29` | 4 | chunk 4 offset |
| `+0x2D` | var | NUL-terminated animation name |

The five chunk offsets are strictly increasing. The animation name is a
diagnostic; clips are selected by path, not by this name.

### 4.2 Base-pose chunk (chunk 0)

Chunk 0 starts with a 5-byte header and then 12-byte entries:

```text
[u32 joint_index][u16 key_count/flags][u16 quat_x][u32 keyframe_index]
```

`quat_x` is a signed 16-bit `sin(theta/2)` value in 1/32768 units; the base-pose
path treats it as a rotation around the joint's local X axis. The chunk-0 joint
index uses a 28-slot armature-member order with the three site slots skipped; it
is not the same index space as the 47-entry cage table used by chunk 4. This
table supplies the static stand/walk/run base pose.

### 4.3 Key values and times (chunks 2 and 3)

Chunk 2 holds key values and chunk 3 holds key times. Both have a one-byte
header:

```text
value = chunk2 + 1 + base + stride * key
time  = chunk3 + 1 + time_offset + 4 * key
```

The times are little-endian float seconds. Key times are cyclic and may start
mid-cycle; sorting by time preserves the cycle while giving a monotonic
interval sequence for sampling.

### 4.4 Channel table (chunk 4)

Chunk 4 starts at `chunk4 + 1` with 16-byte records:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | `stride`: bytes per key in chunk 2 |
| `+0x04` | 4 | `base`: key-value base in chunk 2 |
| `+0x08` | 4 | `time_offset`: key-time base in chunk 3 |
| `+0x0C` | 1 | key count |
| `+0x0D` | 1 | channel type |
| `+0x0E` | 1 | channel selector |
| `+0x0F` | 1 | joint index into the 47-entry cage table |

The oracle does not expose this as a public header; the layout is reconstructed
from the `.mw4anim` data and the animation path. The runtime joint-name table is
the 47-entry cage table at `0x007B5A9C`.

Observed channel types:

| Type | Key size | Meaning |
|---:|---:|---|
| 0 | 12 | xyz position |
| 1 | 12 | xyz position (alternate) |
| 2 | 16 | quaternion rotation |
| 3 | scalar | scalar channel |
| 4 | 28 | combined quaternion + xyz position |

A root cycle channel is `joint == 0`, `type == 0`, `stride == 24`: each key is
two 3-vectors, and the second vector's Z component is `travel / duration`, the
clip's native speed in units per second.

### 4.5 Clip speed and duration

`duration` is the header float. `speed` is the root cycle channel's native
travel rate. The product `speed * duration` is the distance the clip travels
in one cycle; playback advances the cycle by `|velocity| / travel` so the feet
stay planted.

A clip therefore has a duration, a native travel speed, and per-joint tracks.
Each rotation track is a list of keys (time plus quaternion); each position
track is a list of keys (time plus xyz). The oracle does not expose these as
public structures; the layout is the `.mw4anim` chunk table above, and the
runtime side is the MLR animation detail. The joint-name table used by the
channels is the 47-entry cage table at `0x007B5A9C`.

## 5. `.animscript` state machine

An `.animscript` is shipped text; the oracle's animation-script loader walks the
same `[Name]` and `Key=Value` blocks. Clip paths resolve through the archive
namespace, so they may point at another mech's shared animation set. The file
looks like this:

```text
!Name=Value                 // define (supports $(Name) expansion)
[StateName]                 // state block
    Key=Value
[FromState::ToState]        // transition block
    Key=Value
```

`//` starts a comment. Defines are resolved recursively (for example,
`!PATH=content\mechs`, `!MECH=Catapult`, `!Walk=$(PATH)\$(MECH)\animation\$(MC)_walk`).
A section name containing `::` is a transition; the left side is the source
state and the right side the destination.

### 5.1 State types

The `AnimType` property selects the state's playback model:

| `AnimType` | Meaning |
|---|---|
| `FullHeightPoseHolderType` | static pose; `EvenAnim` plus optional `Up`/`Down`/`Left`/`Right` variants |
| `FullHeightSpeedBlenderCycleType` | two cycle sets (`Slow*` and `Fast*`) blended by `SpeedAttrib` |
| `FullHeightBlenderCycleType` | one cycle with `Up`/`Down`/`Left`/`Right` variants and `SpeedAttrib` |
| `CycleType` | simple looping clip (`Anim`) |
| `LerpCycleType` | looping clip with a `LerpTime` blend |
| `PoseType` | fixed pose at `Position` (for example, a fall pose at `1.0`) |

For example, a stand state is a pose holder that chooses among its even and
directional clips; a forward state is a speed blender that cross-fades walk and
run cycles; a fall state is a fixed pose taken from the end of the fall clip.

### 5.2 State properties

| Property | Meaning |
|---|---|
| `Start` | start position within the clip/cycle |
| `Position` | pose position for `PoseType` |
| `SpeedAttrib` | speed source, e.g. `CurrentSpeedMPS` |
| `PitchAttrib` / `RollAttrib` | directional source, e.g. `LocalGroundPitch` / `LocalGroundRoll` |
| `EvenAnim` | base/even clip |
| `UpAnim` / `DownAnim` / `LeftAnim` / `RightAnim` | directional variants |
| `SlowEvenAnim` / `SlowUpAnim` / ... | slow cycle set |
| `FastEvenAnim` / `FastUpAnim` / ... | fast cycle set |
| `Anim` | single clip for `CycleType` / `PoseType` |
| `LerpTime` | blend time for `LerpCycleType` |
| `carryover` | whether the cycle phase carries across state entry (`false` restarts it) |

### 5.3 Transition properties

| Property | Meaning |
|---|---|
| `TransitionStart` | normalized position in the source state at which the transition can fire (`any` allowed) |
| `PlayOldStateTill` | how long the old state continues to play |
| `StartNewState` | normalized start position in the new state |
| `OverrideNewStatePosition` | overrides the new state's position (`default` keeps it) |
| `StartOverlapCurve` | curve id and control values for the transition-in blend |
| `EndOverlapCurve` | curve id and control values for the transition-out blend |

The shipped curve ids are:

| Id | Curve |
|---:|---|
| 0 | `LinearUpCurve` |
| 1 | `CubedCurve` |
| 2 | `EaseUpCurve` |
| 3 | `EdgeCurve` |
| 4 | `BumpCurve` |
| 5 | `EaseUpSplineCurve` |
| 6 | `CurveUpCurve` |
| 7 | `SpikeUpCurve` |
| 8 | `BellCurveCurve` |
| 9 | `SpikeCurve` |
| 10 | `LongBumpCurve` |
| 11 | `BumpSpikeCurve` |

A curve property is written as the curve id followed by its control values,
for example `$(LinearUpCurve) 0.0 1.0 0.0 1.0 0 0`.

## 6. Playback semantics

### 6.1 Stand and ground-slope selection

A stand state is a `FullHeightPoseHolderType` with `PitchAttrib=LocalGroundPitch`
and `RollAttrib=LocalGroundRoll`. The ground normal in the mech's local frame
selects the directional variants:

- ground rising ahead gives a positive pitch and selects `UpAnim`;
- ground rising to the right gives a positive roll and selects `LeftAnim`
  (the left side is the low side).

The variants are blended by the pitch/roll magnitude; a missing variant falls
back to the even clip.

### 6.2 Move cycles

A forward/backward state is a speed-blended cycle. The slow and fast sets are
sampled in a shared normalized phase, not at independent absolute times, so
their different durations do not drift apart. The walk/run weight is derived
from the current speed relative to the two clips' native speeds.

The cycle phase advances by `|speed| / travel` per tick, where
`travel = native_speed * duration`; this keeps the feet planted. Backward
motion uses the backward clip set and its own travel.

### 6.3 Stand/move transitions

`StandState::ForwardState` and `ForwardState::StandState` use the authored
`StandWalk` / `WalkStand` transition clips with linear overlap curves. The
stand-to-move weight is the speed magnitude clamped to `[0, 1]`; the
accelerating and decelerating transitions are selected by whether the speed
magnitude is rising or falling. The same pattern applies to the backward and
the 1/8-step stand variants.

### 6.4 Turn, fall, landing, and damaged-leg states

- Turn states are selected by the signed turn rate. Their clips have
  `carryover=false`, so the phase restarts when the turn begins; the clip has
  no root travel and advances at its authored rate.
- A fall state is a `PoseType` at `Position=1.0` (the clip's last key). The
  transition into the fall pose uses the cubed overlap curve. On landing, the
  fall-to-stand transition plays the get-up clip; the fly-to-ground transition
  plays the landing clip.
- `FlyState` plays the jump clip; `FlyState::ForwardState` and
  `FlyState::StandState` play the forward/standing landing clips.
- `GimpStandLeft/RightState` and `GimpForwardLeft/RightState` replace the
  stand/walk/turn clips when the matching leg is damaged. Their clips are
  selected by the damaged-leg state, not by the normal speed path.

### 6.5 Left/right mirroring

The authored cycles animate the left and center cage joints. The right upper
leg and upper arm are filled from the mirrored left channels sampled half a
cycle out of phase. A quaternion mirror across the skeleton's left/right (YZ)
plane flips the Y and Z axis components:

```text
mirror(q) = (q.x, -q.y, -q.z, q.w)
```

## 7. Pose composition

A pose can be built in three ways, matching the three animation data paths:

```text
base-pose path:     local = rest_local * rot_x(2 * asin(quat_x))
channel path:       local = translation(rest_local) * quat(channel)
combined path:      local = rest_local * rot_x(base_qx) * quat(delta)
world = parent_world * local
```

- The base-pose path uses the chunk-0 `quat_x` table (a static stand/walk/run
  pose).
- The channel path uses the chunk-4 absolute local rotation, keeping the
  armature's rest translation.
- The combined path applies the chunk-0 base pose and then the chunk-4 delta.

Quaternion channels are normalized after interpolation. The joint world
matrices then transform the part's local vertices into model space. The oracle's
quaternion and matrix helpers are listed in section 10.

## 8. Animation-to-render bridge

The render subsystem's animation detail evaluates curves and feeds node
transforms. In the per-frame path:

1. Each drawable producer builds a scene element carrying the drawable's view
   basis (the model/skeleton transform).
2. The scene-record builder composes that basis with the camera's world-to-clip
   matrix to produce the record's cull matrix (`0x0048E890`; the rich variant
   is `0x0048DD20`).
3. The drawable transforms its part vertices through the joint world matrices,
   applies per-vertex lighting and fog, and submits pre-transformed `XYZRHW`
   vertices through the device.

The material block init and blend are `0x004911E0` / `0x00491280` and
`0x00491670`; the per-frame draw driver is `0x00488BB0`. See
[Scene Construction and Object Rendering](scene_rendering.md) for the full
submission path.

## 9. Invariants and failure modes

- Joint names must match the 47-entry cage table and the armature member names.
- The armature's stored bottom row is zero; force the homogeneous term to `1`.
- `quat_x` is a signed `sin(theta/2)` value in 1/32768 units; normalize any
  composed quaternion.
- `.mw4anim` chunk offsets must be strictly increasing and inside the file.
- Chunk-4 joint indices must be `< 47`; chunk-0 indices use the 28-slot
  armature-member order, not the cage table.
- Key times are cyclic; wrap at `duration` and sort by time before sampling.
- The root cycle channel's second vector Z is `travel/duration`, not a
  position offset.
- Missing directional clips fall back to the even clip; missing clips fall
  back through the `.animscript` defines.
- The placement matrix carries no scale; model scale is a model property.
- A missing joint skips the part rather than failing the whole chassis.

## 10. Key entry points

| VA / table | Role |
|---|---|
| `0x007B5A9C` | 47-entry joint-cage name table |
| `0x007B8C0C` | node-type factory dispatch table |
| `0x0048E890` | scene-record builder (simple path) |
| `0x0048DD20` | rich scene-record builder (terrain family) |
| `0x004911E0` / `0x00491280` | scene-element material block init |
| `0x00491670` | material block blend |
| `0x00488BB0` | draw submission driver |
| `0x0041B320` | quaternion Hamilton product |
| `0x0041BB80` | quaternion slerp |
| `0x0041BD00` | quaternion lerp |
| `0x0041C610` | quaternion from Euler angles |
| `0x0041A160` | quaternion-to-rotation-matrix conversion |
| `0x0041C7D0` | 3x4 matrix times vector |
