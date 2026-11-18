# Mech Models and Animation

Mechs are assembled from per-part indexed meshes, a per-chassis joint armature,
and keyframed animation clips. An `.animscript` state machine selects and blends
the clips; the resulting local joint transforms are composed through the
skeleton and applied to the part vertices before rendering.

This page documents the skeleton and its three index spaces, the part-mesh
records, the `.mw4anim` container, the `.animscript` state graph, the overlap
curves, the playback semantics, and the runtime animation records. Asset
locations are in [Asset Loading and Archive Formats](assets.md); the
animation-to-render bridge is in
[Scene Construction and Object Rendering](scene_rendering.md). Saved player
variants and their subsystem/loadout streams are in
[Mech Variants and Loadout Data](mech_variants.md).

The data layouts below come from the shipped retail assets, the runtime
animation records, and the reference binary. Offsets are measured from the
start of the named record unless stated otherwise; all integers are
little-endian.

## How to read this page

A mech is a **skeleton** (a hierarchy of joints) with rigid **part meshes**
attached to the joints. Animation stores, for each joint, how its rotation
changes over time. The renderer composes the joint transforms from the root down
to each part and moves that part's vertices accordingly.

The animation data comes in two layers:

- `.mw4anim` files contain the keyframed motion and the clip-local joint slot
  table;
- `.animscript` files are a state machine that chooses which clip to play and
  how to blend between clips.

The layouts below describe bytes in shipped files and fields in runtime
records, not C++ source structures. The oracle's runtime side is the MLR
animation/mesh path and the fixed joint-cage name table; the files themselves
are data contracts.

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
| slot | One entry in a clip's own animation-joint order. |
| interpolation | Estimating values between two keys. |
| state machine | Rules that decide which state/clip is active and when to switch. |
| transition | A rule for blending from one state to another. |
| overlap curve | A curve that controls how much of each state is mixed during a transition. |
| blend | Mixing two poses or clips by a weight. |
| cycle / phase | A looping animation and the position within one loop. |
| root motion | The clip's own forward travel, stored in the root cycle channel. |
| foot planting | Advancing the cycle by distance travelled so the feet do not slide. |
| holder chain | The runtime tree of animation holders whose values distribute the blend weights. |

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
mech's animation set. The shipped Argus script, for example, takes its
stand/walk/run clips from the Catapult set and its fall/get-up clips from the
Argus set. The clips are retargeted by joint name, not by a global joint
number.

## 2. Skeleton and armature

### 2.1 Joint names and the three index spaces

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

The cage table is a **name index**, not the armature member list and not the
channel order. Three different index spaces appear in the animation data:

1. **Cage index** - the alphabetical 47-entry index above. It is used by the
   `#<b>` token encoding and by runtime name lookups.
2. **Clip slot index** - the joint byte in a chunk-4 channel record. It indexes
   the clip's own chunk-1 slot table, whose order is per clip and is resolved by
   joint name.
3. **Pose keyframe index** - the first dword of a chunk-0 base-pose entry. It
   advances by the entry's key count and indexes the base-pose keyframe data;
   it is not a joint name and not a clip slot.

A clip can therefore play on a chassis with a different armature: the slot
table carries the names, and the runtime binds each name to the target
chassis's joint. The 47-entry cage table is the shared name vocabulary for the
encoded `#<b>` tokens.

The armature members can also carry joints that are not in the cage table.
The Hunchback, Wolfhound, and Sunder, for example, carry
`joint_luarmabove`/`joint_ruarmabove` members. The armature child records, not
the cage table, define which joints exist and how they are parented.

### 2.2 Armature member layout

The armature is stored as one member per joint:

```text
mechs\<name>\<name>.contents[joint_<joint>]{armature}
```

A member is a two-byte prefix followed by a sequence of **280-byte child
records**. Each record is:

```text
+0x00  12-byte record header (18 01 00 00 02 00 00 00 02 00 00 00)
+0x1C  child's parent-local 3x4 rest matrix (12 floats)
+0x98  child's NUL-terminated name
+0x118 next record
```

The first child record begins at member offset `+0x02`, so its matrix is at
`+0x1E`. That matrix is the **first child's** rest relative to the member
joint, not the member's own rest. For a non-root joint, the member's own rest
is the matrix in its parent's member; the root's rest is the model/world
transform. The name at `+0x98` pairs with the matrix at `+0x1C` of the same
record; pairing a name with the next record's matrix shifts every joint one
node.

The stored matrix is a 3x4 transform: three rows of rotation/scale plus a
translation column. Expand it to a 4x4 matrix and set the homogeneous bottom
row to `0 0 0 1` before composing the chain. The shipped bytes leave the
homogeneous term zero.

The child records are the true transform children. The parent links are not
stored separately; they are implied by which member contains the child record.
For example, the `joint_root` member contains records for `joint_luleg`,
`joint_ruleg`, and `joint_hipbelow`; the `joint_vel` member contains
`joint_root`; the `joint_world` member contains `joint_vel`. The
`joint_torsoabove` member contains the arms, missiles, head, cage, and torso
sites. The `joint_lbelowankle` member contains the toe joints and the footstep
site.

### 2.3 True transform hierarchy

The shipped transform tree is:

```text
joint_world
  joint_vel
    joint_root
      joint_luleg -> joint_lmleg -> joint_ldleg -> joint_lankle
        -> joint_lbelowankle
          -> joint_lotoe / joint_litoe / joint_lbtoe / joint_lfoot
          -> site_lfoot
      joint_ruleg -> joint_rmleg -> joint_rdleg -> joint_rankle
        -> joint_rbelowankle
          -> joint_rotoe / joint_ritoe / joint_rbtoe / joint_rfoot
          -> site_rfoot
      joint_hipbelow
        joint_hip
          joint_hipabove
            joint_torsobelow
              joint_torso
                joint_torsoabove
                  joint_luarm -> joint_lgunabove -> joint_lgun
                  joint_ruarm -> joint_rgunabove -> joint_rgun
                  joint_lmissile
                  joint_rmissile
                  joint_head
                  joint_cage
                  site_eyepoint
```

The legs are children of `joint_root`, the spine is under `joint_hipbelow`,
and the arms hang from `joint_torsoabove`. The footstep sites
(`site_lfoot`/`site_rfoot`) are children of the below-ankle joints and carry a
rest rotation of `R_x(90)`; they are ground/step markers, not the foot mesh
parent. A chassis may omit joints (for example, a mech without a middle-leg
joint); a missing part is skipped rather than failing the whole model.

### 2.4 Part-to-joint attachment

The part-file suffix usually names the joint. The attachment is resolved per
chassis from the armature child records, with these rules:

| Part suffix | Attaches to |
|---|---|
| `torso` | `joint_torso` |
| `hip` / `hips` | `joint_hip`; `hips` prefers `joint_hips` when present |
| `luarm` / `ruarm` | `joint_luarm` / `joint_ruarm` |
| `luleg` / `ruleg` | `joint_luleg` / `joint_ruleg` |
| `lmleg` / `rmleg` | `joint_lmleg` / `joint_rmleg` |
| `ldleg` / `rdleg` | `joint_ldleg` / `joint_rdleg` |
| `lfoot` / `rfoot` | `joint_lbelowankle` / `joint_rbelowankle` (the foot mesh is authored in the below-ankle space) |
| `ltoe` / `rtoe` | `joint_ltoe` / `joint_rtoe` when present, else the below-ankle joint |
| `litoe` / `lotoe` / `lbtoe` / `lftoe` | their own toe joint when present, else `joint_ltoe`, else the below-ankle joint |
| `ritoe` / `rotoe` / `rbtoe` / `rftoe` | their own toe joint when present, else `joint_rtoe`, else the below-ankle joint |
| `lgun` / `rgun` | `joint_lgun` / `joint_rgun` when present, else `joint_lgunabove` / `joint_rgunabove` |
| `lmissile` / `rmissile` | `joint_lmissile` / `joint_rmissile` |
| `specialone` / `specialtwo` | the matching special joint when present, else `joint_missile` |
| `head` | `joint_head` |
| `cage` | `joint_cage` |

If the chosen joint has no armature rest, the attachment walks up the parent
chain to the nearest ancestor that does. A part whose joint is absent is
skipped.

The foot rule matters: attaching the foot mesh to the footstep site applies
the site's `R_x(90)` rest and opens the toe gaps; attaching it to
`joint_lankle` is also wrong because the below-ankle joint is the foot's parent.
The toe pieces attach to their own toe joint when the chassis has one, else to
the below-ankle parent.

### 2.5 Footstep sites

The `{sites}` members store site records as six floats (Euler xyz and position
xyz), a 32-bit name length, and the NUL-terminated site name. The position is
in the member joint's parent space. The shipped `site_lfoot` position is
`(-0.05, -1.0, 0.05)` under `joint_lbelowankle`, with rest `R_x(90)`.

The footstep site is animated separately from the foot mesh. A clip's site
channel is a **delta** on the site's rest, not an absolute replacement. Clips
that omit the site channels (the fall/get-up set) get the stand clip's t=0 site
quaternions injected so the site nodes do not revert to the bare rest. The
site channels drive footstep/ground queries; the foot mesh follows the leg
chain through the below-ankle joint.

### 2.6 Pose composition

The retail runtime uses two local-transform paths:

- **Base-pose path** (chunk 0): the joint's local rest transform followed by a
  rotation about the joint's local X axis,
  `local = rest_local * R_x(2 * asin(quat_x))`. The `quat_x` value is a signed
  `sin(theta/2)` value in 1/32768 units. Values outside `(-0.9999, 0.9999)`
  are not applied.
- **Clip channel path** (chunk 4): for an ordinary bone, the rest translation
  is kept and the rest rotation is replaced by the clip's absolute local
  quaternion, `local = T(rest_translation) * R(quat)`. For a footstep site,
  the clip quaternion is a delta on the site's rest,
  `local = rest_local * R(quat)`.

The world transform is the parent chain:

```text
world = parent_world * local
```

A position channel replaces the joint's local translation. The root cycle
channel carries two vectors per key: the root position and the root velocity.
The root rotation/scale channel carries the body root quaternion and scale.

The retail playback path is the chunk-4 absolute local quaternion. The chunk-0
base-pose table is a separate static pose path used to initialize or fall back
to the stand/walk/run base pose. A combined form that applies the base pose and
then the chunk-4 delta appears in reconstruction tooling, but it is not the
shipped runtime playback path; do not add the base pose to a chunk-4 rotation
unless reproducing the static pose path.

## 3. Part meshes

### 3.1 Shape records and LODs

Part meshes use the same `#FRE`/`#RLM` shape-record family as static props. A
part `.erf` is a version-14 `#FRE` stream containing `#RLM` version-18 shape
records. Each LOD is introduced by the 13-byte marker:

```text
[u32 0x0000004B][u8 type][u8 0x66][u8 reserved[3]][u32 vertex_count]
```

The first LOD is the drawable model; later LODs repeat it at lower detail.
Some chassis carry degenerate cull records in the later slots, so the
close-range model is LOD0. Within a LOD, each material group owns its vertex
and UV buffers (or shares the LOD's first buffers):

```text
[verts N*12][u32 uv_count][uvs uv_count*8][4-byte group value]
[29-byte material block][counted page name][u32 page word][u8 flag]
[u32 index_count][u8 indices][u32 triangle_count][normals]
```

Mech part indices are one byte per index. The part UV block is a counted array
(`u32 uv_count` followed by `uv_count` pairs) when the count matches the
vertex count. Mech part UVs are used in stored order; static prop shape
records store UV pairs as `(v, u)` and need a swap.

The material sub-object carries a counted texture-page name such as `@aarg0`
(the shared skin atlas). Unlike the static prop material name, the mech page
name is a counted string: a 32-bit length followed by the characters. The name
resolves to `textures\<name>.tga`. A single
LOD can carry several material groups with different pages: the chassis skin
atlas (`@aarg0`), the `@team` team-color overlay, the `@pilot` cockpit figure,
and the cockpit cage's own page (`isdash1`). Each group is drawn with its own
page.

The `#FRE` header's bounding-sphere radius at `+0x1C` is the node's
far-distance cull radius. The runtime mesh path is the MLR mesh family (stream
loader `0x0047AC10`; per-frame update `0x0047ADA0`); there is no public
part-mesh header.

### 3.2 Material groups

A LOD's first material group starts at the vertex/UV block above. Additional
groups are located by the signature:

```text
01 ?? ?? ?? ?? ff ff 21 2f
```

The flag byte varies with the material state (`0x0c` for the main page,
`0x2c` for the Mad Cat Mk II pod's second group). For an additional group,
`N` is the highest index the group uses plus one. If the group owns its own
buffers, the vertex block starts at `group_value - (N * 20 + 4)`: `N` vertices
of 12 bytes each, then a `u32 uv_count` equal to `N`, then `N` UV pairs. If the
group shares the LOD's first vertex/UV buffers, its indices stay below the
first group's vertex count and only the index list is stored.

The group's counted page name follows the group value and material block; the
index count follows the page name, the page word, and the flag byte. The
triangle count and per-corner normals follow the index list. Records without a
normal array fall back to face normals.

### 3.3 Scale and culling

Placement matrices are unit scale; model scale is a property of the model. A
part is skipped when its joint is absent from the chassis. The model's `#FRE`
radius is the far-distance cull radius.

## 4. `.mw4anim` container

### 4.1 Header

The file is shipped data; the runtime playback side is the MLR animation
detail. The file header is byte-packed:

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

The five chunk offsets are strictly increasing and must lie inside the file.
The animation name is a diagnostic; clips are selected by path, not by this
name. Chunks 1..4 begin with a one-byte header; chunk 0 begins with a five-byte
header. The offsets point at those headers.

### 4.2 Chunk 1: clip-local slot table

Chunk 1 is the clip's own animation-slot table. It starts with a one-byte
header (a table flags byte), followed by NUL-terminated tokens in slot order:

```text
chunk1 + 0:   one-byte header
chunk1 + 1:   token for slot 0
              token for slot 1
              ...
chunk2:       end of the token table
```

A token of the form `#<b>` names cage entry `(b + 0x80) & 0xFF`; the retail
tag parser is `FUN_0066C4A0`. Any other token is a literal joint or site name.
The shipped Catapult stand/walk/run clips use 25 tokens:

```text
slot  0  #ad          joint_vel
slot  1  #a3          joint_root
slot  2  #96          joint_luleg
slot  3  #92          joint_lmleg
slot  4  #8a          joint_ldleg
slot  5  #87          joint_lankle
slot  6  #93          joint_lotoe
slot  7  #90          joint_litoe
slot  8  #89          joint_lbtoe
slot  9  site_lfoot   site_lfoot
slot 10  #a7          joint_ruleg
slot 11  #a2          joint_rmleg
slot 12  #9a          joint_rdleg
slot 13  #97          joint_rankle
slot 14  #a4          joint_rotoe
slot 15  #a0          joint_ritoe
slot 16  #99          joint_rbtoe
slot 17  site_rfoot   site_rfoot
slot 18  #84          joint_hip
slot 19  #aa          joint_torso
slot 20  #a1          joint_rmissile
slot 21  #91          joint_lmissile
slot 22  #95          joint_luarm
slot 23  #8e          joint_lgun
slot 24  #a6          joint_ruarm
```

The shipped fallback clip's table has 23 tokens (it omits the two site slots,
so its slots after the left toe chain shift down by two relative to the
25-token table). The chunk-4 joint byte indexes the table. A clip's table
length is its slot count, not a fixed 47. A channel index beyond the table (or
an empty token) falls back to the 47-entry animation-slot order below. The
fallback order is the Catapult/Argus order and is the source for clips with no
usable table:

```text
 0 joint_vel         1 joint_root        2 joint_luleg       3 joint_lmleg
 4 joint_ldleg       5 joint_lankle      6 joint_lotoe       7 joint_litoe
 8 joint_lbtoe       9 joint_lfoot      10 joint_ruleg      11 joint_rmleg
12 joint_rdleg      13 joint_rankle     14 joint_rotoe      15 joint_ritoe
16 joint_rbtoe      17 joint_rfoot      18 joint_hip        19 joint_torso
20 joint_rmissile   21 joint_lmissile   22 joint_luarm      23 joint_lgun
24 joint_ruarm      25 joint_rgun       26 joint_hipabove   27 joint_hipbelow
28 joint_torsobelow 29 joint_torsoabove 30 joint_head       31 joint_centertorsofront
32 joint_centertorsorear 33 joint_lefttorsofront 34 joint_righttorsofront
35 joint_rgunabove  36 joint_lgunabove  37 joint_cage       38 joint_lankle
39 joint_rankle     40 joint_litoe      41 joint_lftoe      42 joint_ltoe
43 joint_ritoe      44 joint_rftoe      45 joint_rtoe       46 joint_specialone
```

Slots 26..46 are fallback names used by other chassis/clips; several are
legacy duplicates. The first 26 slots are the order the shipped mech cycles
use. The Catapult token table uses the literal `site_lfoot`/`site_rfoot` in
slots 9/17, while the fallback order uses `joint_lfoot`/`joint_rfoot`; the
token table is authoritative when present.

### 4.3 Chunk 0: base-pose table

Chunk 0 is a table of static base-pose rotations. It starts with a 5-byte
header (the first byte is `0x42` or `0xFF` on the shipped clips; the other
four bytes are zero), then 12-byte entries:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | keyframe index |
| `+0x04` | 2 | key count (low byte) / flags (high byte) |
| `+0x06` | 2 | signed `quat_x` |
| `+0x08` | 4 | token end offset, relative to chunk 1 |

The first dword is an auxiliary index that advances by the entry's key count;
the observed gaps in its sequence occur exactly after the two-key entries, so
it is the base-pose keyframe index rather than a joint name. The second word's
low byte is the key count; the high byte is a flags byte whose meaning is not
decoded. The signed `quat_x` is `sin(theta/2)` in 1/32768 units.

The last dword is the offset of the NUL terminator of the entry's token,
relative to chunk 1. The tokens are stored sequentially after chunk 1's
one-byte header, so an entry's token is the segment from the previous entry's
token end plus one to this entry's token end. The entry's joint name is the
token at that position, resolved by the `#<b>` rule or kept as a literal site
name. The keyframe index is not used to name the joint; the token is
authoritative.

A shipped Catapult stand-pose excerpt:

| Keyframe index | Keys | `quat_x` | Token | Joint |
|---:|---:|---:|---|---|
| 0 | 1 | 0.000 | `#ad` | `joint_vel` |
| 1 | 2 | 0.369 | `#a3` | `joint_root` |
| 3 | 1 | 0.000 | `#96` | `joint_luleg` |
| 4 | 1 | 0.371 | `#92` | `joint_lmleg` |
| 6 | 1 | -0.628 | `#87` | `joint_lankle` |
| 7 | 1 | 0.000 | `#93` | `joint_lotoe` |
| 21 | 2 | 0.367 | `#aa` | `joint_torso` |
| 25 | 1 | 0.367 | `#95` | `joint_luarm` |

The base-pose path applies `R_x(2 * asin(quat_x))` after the joint's rest
transform. It supplies the static stand/walk/run base pose; it is not a
keyframed clip.

### 4.4 Chunks 2/3/4: key values, times, and channels

Chunk 2 holds key values and chunk 3 holds key times. Both have a one-byte
header:

```text
value = chunk2 + 1 + base + stride * key
time  = chunk3 + 1 + time_offset + 4 * key
```

The times are little-endian float seconds. Key times are cyclic and may start
mid-cycle; sorting by time preserves the cycle while giving a monotonic
interval sequence for sampling.

Chunk 4 starts at `chunk4 + 1` with 16-byte records:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | `stride`: bytes per key in chunk 2 |
| `+0x04` | 4 | `base`: key-value base in chunk 2 |
| `+0x08` | 4 | `time_offset`: key-time base in chunk 3 |
| `+0x0C` | 1 | key count |
| `+0x0D` | 1 | channel type |
| `+0x0E` | 1 | channel selector / auxiliary byte |
| `+0x0F` | 1 | clip slot index into the chunk-1 table |

The chunk offsets point one byte past the last key byte (the next chunk's
one-byte header), so the last key legitimately ends at `chunkN + 1`. A reader
that rejects that one-byte overlap drops the final channel.

The chunk-4 joint byte is a **slot index**, not a cage index. Resolve it
through the clip's chunk-1 table; if the slot is beyond the table or empty,
use the fallback animation-slot order in section 4.2. There is no public
header for the channel table; the layout is reconstructed from the shipped
clips and the runtime sampler.

### 4.5 Channel types

Observed channel types:

| Type | Key size | Meaning |
|---:|---:|---|
| 0 | 24 | root cycle: two 3-vectors per key (root position, root velocity) |
| 1 | 12 | position: one 3-vector per key; replaces the joint's local translation |
| 2 | 16 | quaternion: one 4-vector per key; absolute local rotation for bones, a delta on the site rest for footstep sites |
| 3 | 4 | weight: one scalar per key; step-sampled |
| 4 | 28 | quaternion + scale: 4-vector at `+0`, 3-vector scale at `+16` |

The root cycle channel is the clip's root motion. Its first vector is the root
position; its second vector is the root velocity. The velocity's Z component
is `travel / duration`, the clip's native speed in units per second. The root
cycle is emitted in addition to a type-4 quaternion/scale channel on the same
`joint_vel` slot; the type-4 channel carries the root rotation and scale.

A shipped Catapult walk clip has duration `1.066667`, root velocity
`(0, 0, 14.0625)`, and root position keys `(0, 5.3, 0)` at t=0 and
`(0, 5.3, 15.0)` at t=1.066667. The run clip has duration `0.8`, root velocity
`(0, 0, 22.0)`, and root position `(0, 5.3, 17.6)` at t=0.8. The fallback clip
has a negative root velocity (backward travel).

### 4.6 Sampling

Clip sampling wraps the time at the clip duration. For each track:

- find the last key whose time is at or before the sample time;
- use the next key as the segment end; if the sample is past the last key,
  wrap to the first key and add the duration to its time;
- linearly interpolate each component.

Quaternion keys use the retail dot-negation rule before the component lerp:
if the dot product of the two keys is negative, negate the second key's four
components. The interpolated quaternion is then normalized with the retail
normalization: the XYZ part defines the rotation and W is derived. If the XYZ
length squared is at most 1, W becomes `sqrt(1 - length_squared)` and the sign
of the interpolated W is used to flip the XYZ part when needed; otherwise the
XYZ part is normalized and W becomes 0. The interpolated W only supplies the
sign.

Weight channels are step-sampled: the segment start value is used until the
next key time is strictly passed.

Clip sampling is **not** spherical interpolation. The runtime uses component
lerp plus the W-from-XYZ normalization above. The quaternion slerp helper
exists in the binary but is not the clip-sampling path.

### 4.7 Clip speed, duration, and root motion

`duration` is the header float. `speed` is the root cycle channel's native
travel rate. The product `speed * duration` is the distance the clip travels in
one cycle. Playback advances the cycle by `|velocity| / travel` so the feet
stay planted.

A clip therefore has a duration, a native travel speed, and per-joint tracks.
Each rotation track is a list of keys (time plus quaternion); each position
track is a list of keys (time plus XYZ); weight tracks are scalar; scale
tracks are XYZ. The joint names used by the channels come from the clip's own
chunk-1 slot table.

## 5. `.animscript` state machine

An `.animscript` is shipped text. The loader walks `[Name]` and `Key=Value`
blocks. Clip paths resolve through the archive namespace, so they may point at
another mech's shared animation set. The file looks like this:

```text
!Name=Value                 // define (supports $(Name) expansion)
[StateName]                 // state block
    Key=Value
[FromState::ToState]        // transition block
    Key=Value
[::ToState]                 // transition from any source state
    Key=Value
```

`//` starts a comment. Defines are resolved recursively (for example,
`!PATH=content\mechs`, `!MECH=Catapult`,
`!Walk=$(PATH)\$(MECH)\animation\$(MC)_walk`). A section name containing `::`
is a transition; the left side is the source state and the right side the
destination. An empty left side (`::ToState`) matches any source state.

A transition block carries both the transition timing properties and its own
state-like properties (`AnimType`, `EvenAnim`, `Anim`, directional variants,
and so on). The transition clip is resolved from the transition block, not
from the destination state.

### 5.1 State types

The `AnimType` property selects the state's playback model:

| `AnimType` | Meaning |
|---|---|
| `FullHeightPoseHolderType` | static pose; `EvenAnim` plus optional `Up`/`Down`/`Left`/`Right` variants |
| `FullHeightSpeedBlenderCycleType` | two cycle sets (`Slow*` and `Fast*`) blended by `SpeedAttrib` |
| `FullHeightBlenderCycleType` | one cycle set with `Up`/`Down`/`Left`/`Right` variants and `SpeedAttrib` |
| `CycleType` | simple looping clip (`Anim`) |
| `LerpCycleType` | looping clip with a `LerpTime` blend |
| `PoseType` | fixed pose at `Position` (for example, a fall pose at `1.0`) |

A stand state is a pose holder that chooses among its even and directional
clips; a forward state is a speed blender that cross-fades walk and run
cycles; a fall state is a fixed pose taken from the end of the fall clip.

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
| `TransitionStart` | normalized source-state position at which the transition can fire (`any` allowed) |
| `PlayOldStateTill` | normalized transition position at which the old-state phase ends |
| `StartNewState` | normalized start position in the new/target state |
| `Position` | start position of the transition clip itself |
| `OverrideNewStatePosition` | overrides the target state's start position (`default` keeps it) |
| `StartOverlapCurve` | curve id and control values for the old-to-transition blend |
| `EndOverlapCurve` | curve id and control values for the transition-to-target blend |

The transition's own `AnimType` and clip properties select the clip that plays
during the transition. For example, `[StandState::ForwardState]` uses the
`StandWalk` clips and `[ForwardState::StandState]` uses the `WalkStand` clips.

### 5.4 Transition selection

The controller requests a desired state (Stand, Forward, Backward, Turn, Fall,
Fly, Gimp, and so on). The walker considers transitions whose destination
matches the desired state and whose source matches the current state (an empty
source matches any state). A transition whose destination is already current
does not fire.

`TransitionStart` is a normalized position in the **source** state, not a
separate trigger attribute:

- `any` always matches;
- a numeric value fires once the source state's normalized phase reaches the
  threshold;
- the 1/8-step stand variants use `0.125`, `0.250`, `0.375`, `0.500`, `0.625`,
  `0.750`, and `0.875` of the walk cycle.

The selection score is the authored start position (lower wins); `any`
transitions are the fallback. For cycle sources (Forward, Backward, Turn) the
score is the distance from the current source phase to the threshold, so the
nearest 1/8-step variant wins.

The 1/8-step transition blocks also carry a `Position` value (`0.0`, `0.250`,
`0.500`, or `0.700` in the shipped scripts). That value starts the transition
clip (the `WalkStand` cycle) at the matching foot phase; it is not the target
state's start position. The target state's start position comes from
`StartNewState`, optionally overridden by `OverrideNewStatePosition`.

### 5.5 Transition timing and weights

Let `t` be the transition position in `[0, 1]`, `P` be `PlayOldStateTill`, and
`S` be `StartNewState`. The transition duration is the transition clip's
duration (or one second when the clip is missing); `t` advances by
`delta_time / duration`.

Old-state phase (`P > 0` and `t < P`):

```text
u = clamp(t / P, 0, 1)
new = StartOverlapCurve(u)
current_weight = 1 - new
transition_weight = 0
target_weight = new
```

New-state phase (`P = 0`, or `t >= P`):

```text
u = clamp((t - S) / (1 - S), 0, 1)   when S < 1
new = EndOverlapCurve(u)
current_weight = 0
transition_weight = 1 - new
target_weight = new
```

When `S = 1`, the end curve is not evaluated; the transition clip remains at
full weight until the transition completes. When both `P = 0` and `S = 1`, the
transition clip plays at full weight until the transition completes, then the
target becomes current.

When the transition reaches `t = 1`, the target becomes the current state and
its position is the target position. The target position is `StartNewState`
when present (the evaluator's default is `1.0`), replaced by
`OverrideNewStatePosition` when that property is not `default`.

The shipped transitions illustrate the phases:

- `[StandState::ForwardState]` has `PlayOldStateTill=0.0`,
  `StartNewState=1.0`, and linear curves. The transition clip plays fully
  during the transition.
- `[ForwardState::Stand_1_8_thState]` has `TransitionStart=0.125`,
  `PlayOldStateTill=0.5`, `StartNewState=1.0`, and `Position=0.250`. The
  transition clip starts at phase 0.25 and the old state fades out over the
  first half of the transition.
- The fall transitions use `TransitionStart=any`, `PlayOldStateTill=0.0` or
  `0.2`, and the `CubedCurve`. The fall-to-stand transition uses
  `StartNewState=0.6` and the `GetUp` clip (or `GetUpRight` for the right
  fall).

### 5.6 Overlap curves

The curve property is written as the curve id followed by its control values,
for example `$(LinearUpCurve) 0.0 1.0 0.0 1.0 0 0`. The parsed fields are
`type c0 c1 c2 c3 invert flag`.

The shipped curve ids and script names are:

| Id | Script name | Curve |
|---:|---|---|
| 0 | `LinearUpCurve` | linear |
| 1 | `CubedCurve` | cubic |
| 2 | `EaseUpCurve` | `3t^2 - 2t^3` |
| 3 | `EdgeCurve` | `1 - abs(2 * (t - 0.5))` |
| 4 | `BumpCurve` | cubic Hermite control curve |
| 5 | `EaseUpSplineCurve` | cubic Hermite control curve |
| 6 | `CurveUpCurve` | cubic Hermite control curve |
| 7 | `SpikeUpCurve` | cubic Hermite control curve |
| 8 | `BellCurveCurve` | cubic Hermite control curve |
| 9 | `SpikeCurve` | cubic Hermite control curve |
| 10 | `LongBumpCurve` | cubic Hermite control curve |
| 11 | `BumpSpikeCurve` | cubic Hermite control curve |
| 12 | `SpikeBell` | cubic Hermite control curve |

The evaluator (`FUN_00604F30`) first maps the input through the curve's control
interval. Exact start/end hits map to 0/1; otherwise the input becomes
`(t - c2) / c3 - c2`. The invert flag then flips the result. Types 0..3 use the
closed forms above. Types 4..12 use the nine built-in cubic Hermite control
curves initialized by `FUN_00604E50`:

| Type | Control values (start value, start tangent, end tangent, end value) |
|---:|---|
| 4 | `0.0, 4.0, -4.0, 0.0` |
| 5 | `0.0, 0.0, 0.0, 1.0` |
| 6 | `0.0, 0.0, 2.0, 1.0` |
| 7 | `0.0, 0.8, 4.5, 1.0` |
| 8 | `0.0, -0.25, 0.0, 1.0` |
| 9 | `0.0, 0.0, 3.0, 1.0` |
| 10 | `0.0, 3.2, 0.0, 1.0` |
| 11 | `0.0, 2.0, 1.0, 1.0` |
| 12 | `0.0, 0.0, 1.0, 1.0` |

The Hermite basis is:

```text
h00 = 2t^3 - 3t^2 + 1
h10 = t^3 - 2t^2 + t
h01 = -2t^3 + 3t^2
h11 = t^3 - t^2
value = h00 * start_value + h10 * start_tangent
      + h01 * end_value + h11 * end_tangent
```

Types 8..12 feed the Hermite through the piecewise transform
`u = 2 - 2t` for `t < 0.5`, else `u = 2t`. The curve record itself is
`FUN_0066BD70` (0x18 bytes).

### 5.7 Runtime state tree and holder chain

The runtime state object is a tree of animation holders. The observable state
object fields are:

| Offset | Field |
|---|---|
| `+0x10` | engine pointer |
| `+0x1C` | current time / phase |
| `+0x20` | holder count |
| `+0x24` | holder table base |
| `+0x28` | status |
| `+0x2C` | transition weight |

The engine's holder table is at `+0x30`. Each holder carries:

| Offset | Field |
|---|---|
| `+0x00` | vtable |
| `+0x10` | value |
| `+0x20` | phase |
| `+0x24` | speed-blend weight |
| `+0x28` | blend weight |
| `+0x2C` | share |
| `+0x30` / `+0x34` | payload pointers |

The holder-chain weight recursion (`FUN_0066BC30` / `FUN_0066BC90`)
accumulates the whole chain's values from head to tail into one total, then
computes `share = value / total` when both the total and the value exceed the
epsilon, and back-propagates `weight = child.share + child.weight` for
non-leaves. A leaf's weight is 0; a single top-level leaf has share 1 and
weight 0. The runtime state trace exposes the state, transition, target,
current/transition/target weights, and source/transition phases.

## 6. Playback semantics

### 6.1 Stand and ground-slope selection

A stand state is a `FullHeightPoseHolderType` with `PitchAttrib=LocalGroundPitch`
and `RollAttrib=LocalGroundRoll`. The ground normal in the mech's local frame
selects the directional variants:

- ground rising ahead gives a positive pitch and selects `UpAnim`;
- ground rising to the right gives a positive roll and selects `LeftAnim`
  (the left side is the low side).

The directional weights are `ground_pitch / 0.5` and `ground_roll / 0.5`.
Positive pitch blends `UpAnim`, negative pitch blends `DownAnim`; positive
roll blends `LeftAnim`, negative roll blends `RightAnim`. The variants are
blended sequentially with accumulating normalized weights; a missing variant
is skipped, and the even clip remains the base. The authored left/right
mapping can be swapped for a specific chassis or gimp pose (for example, the
right-gimp pose uses the mirrored left pose names).

### 6.2 Move cycles and speed blending

A forward state is a `FullHeightSpeedBlenderCycleType`. The slow and fast sets
are sampled in a shared normalized phase, not at independent absolute times,
so their different durations do not drift apart:

```text
w = clamp((speed - slow_speed) / (fast_speed - slow_speed), 0, 1)
travel = slow_speed * slow_duration * (1 - w)
       + fast_speed * fast_duration * w
```

The slow clip is sampled at `phase * slow_duration`; the fast clip is sampled
at `phase * fast_duration`. Rotations, positions, and scales are cross-faded
by `w`; quaternions use the dot-sign before the lerp. Weight channels take the
dominant set (`w >= 0.5` uses the fast set, otherwise the slow set). If the
fast clip's native speed does not exceed the slow clip's, the blend collapses
to the slow set.

The cycle phase advances by `|speed| / travel` per second, where
`travel = native_speed * duration`; for a speed blend, `travel` is the blended
per-cycle distance above. This keeps the feet planted. A live walk capture at
`18.745 m/s` produced a walk/run blend weight of about `0.59`, matching the
formula for the shipped walk speed `14.0625` and run speed `22.0`. Backward
motion uses the backward clip set and its own travel.

### 6.3 Stand/move transitions

`StandState::ForwardState` and `ForwardState::StandState` use the authored
`StandWalk` / `WalkStand` transition clips with linear overlap curves. The
transition weight is driven by the transition timing and the overlap curve;
the speed magnitude and direction select the desired state and the transition
variant (accelerating, decelerating, forward, backward, or a 1/8-step stand
variant). The 1/8-step variants fire at the authored source-cycle thresholds
and start the `WalkStand` clip at the authored foot phase.

The same pattern applies to the backward states and the 1/8-step stand
variants. The `FullHeightBlenderCycleType` directional variants (up/down/
left/right) are blended by the ground pitch/roll exactly as in the stand
state.

### 6.4 Turn, fall, landing, and damaged-leg states

- Turn states are selected by the signed turn rate. Their clips have
  `carryover=false`, so the phase restarts when the turn begins; the clip has
  no root travel and advances at its authored rate.
- A fall state is a `PoseType` at `Position=1.0` (the clip's last key). The
  transition into the fall pose uses the cubed overlap curve. The four fall
  directions are distinct clips; the right fall uses `GetUpRight` on recovery.
- On landing, the fall-to-stand transition plays the get-up clip; the
  fly-to-ground transition plays the landing clip. `FlyState` plays the jump
  clip; `FlyState::ForwardState` and `FlyState::StandState` play the
  forward/standing landing clips.
- `GimpStandLeft/RightState` and `GimpForwardLeft/RightState` replace the
  stand/walk/turn clips when the matching leg is damaged. Their clips are
  selected by the damaged-leg state, not by the normal speed path.
- `PowerDownState` and `CrouchState` are pose holders. Their transitions use
  the power-down/up and squat-down/up clip sets, and the stand/move transitions
  back to `StandState`/`ForwardState` use the matching up clips.

### 6.5 Left/right mirroring

Some clips animate only the left side. When a clip omits a right-side rotation
channel, the runtime fills it from the mirrored left channel. The mirror is
across the skeleton's left/right (YZ) plane:

```text
mirror(q) = (q.x, -q.y, -q.z, q.w)
```

The fill is applied only when the right channel is absent. The shipped
walk/run clips already carry both legs and a constant right arm; the fall and
get-up clips animate the left arm and get the right arm from the mirror. There
is no half-cycle phase offset in the mirror; the right channel uses the same
sampled time as the left channel.

The mirrored mappings observed in the shipped clips are:

```text
joint_luleg  -> joint_ruleg
joint_luarm  -> joint_ruarm
joint_lgun   -> joint_rgun
```

### 6.6 Root motion and foot planting

The root cycle channel (`joint_vel`, type 0, stride 24) carries the clip's
root motion. The first vector is the root position; the second is the root
velocity. The velocity's Z component is `travel / duration`, the clip's native
speed. The root position advances along the clip; the root rotation/scale
channel (`joint_vel`, type 4) carries the body root's quaternion and scale.

The root joint (`joint_root`) carries the body root position and swing. The
root channel rotates the root node, which is the parent of both leg roots and
the spine; the standard composition is used. The cycle phase advances by
`|speed| / travel`; the site/footstep channels and the leg chain keep the feet
planted. A clip with no root travel advances at its authored duration rate.

## 7. Runtime animation data

### 7.1 Per-joint descriptor

The per-frame animation update builds a descriptor for each joint and
dispatches it through a callback. The descriptor layout is:

| Offset | Field |
|---|---|
| `+0x04` | flag byte: `0x02` position A, `0x04` position B, `0x08` scale, `0x10` quaternion, `0x20` weight |
| `+0x08` | position A (3 floats) |
| `+0x14` | position B / root velocity (3 floats) |
| `+0x20` | scale (3 floats) |
| `+0x2C` | quaternion (4 floats) |
| `+0x3C` | weight (float) |

The update reads the selected channels and builds the joint's local transform.
The descriptor's first four bytes are a per-record header used for diagnostics;
the channel-select byte is at `+0x04`.

### 7.2 Output buffers

The hierarchy-combine routine (`FUN_00605C80`) writes the sampled channels into
fixed buffers on the animation component:

| Offset | Buffer |
|---|---|
| `+0x04C` | position A |
| `+0x394` | position B / root velocity |
| `+0x6DC` | quaternion |
| `+0xB3C` | scale |
| `+0xE84` | weight |

The buffers are per joint and are read by the per-frame model update.

### 7.3 Node records

The runtime node record for a joint carries:

| Offset | Field |
|---|---|
| `+0x10` | parent node pointer |
| `+0x20` | current local 3x4 transform |
| `+0x50` | rest local 3x4 transform |
| `+0x80` | world 3x4 transform |

The animation component's record array is at `+0x2C0`; each record points to
its node at `+0xD8`. The node's rest matrix is the same parent-local rest
stored in the armature child record; the current local matrix is the animated
local transform; the world matrix is the composed parent chain.

### 7.4 Per-frame update

The per-frame update (`FUN_00605820`) iterates the record array, builds each
joint descriptor from the selected channels, and dispatches it through the
caller-supplied callback (the model-update callback is `0x005F8BE0`). The
hierarchy-combine routine (`FUN_00605C80`) samples the clip channels, applies
the interpolation and normalization rules above, and composes the local
transforms. The state-tree update is `0x00604780`; the transition update is
`0x00604C70`.

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

Mech part meshes are authored facing +Z, while the mover's forward is -Z at
yaw 0; the mech draw applies the retail 180-degree model yaw offset so the
chase camera sees the back and the front view sees the face. A part's draw
uses its material group's page; the skin atlas, team overlay, pilot figure,
and cockpit cage can be separate pages.

## 9. Invariants and failure modes

- The 47-entry cage table is a name index; it is not the armature member list
  and not the channel order. A `#<b>` token must resolve to a cage name; a
  literal token must be a joint/site name. A resolved channel name that is not
  present in the target chassis's armature is skipped.
- The clip's chunk-1 slot table is per clip. The chunk-4 joint byte is a slot
  index; it must be `< 47`, and it resolves through that table before falling
  back to the 47-entry animation-slot order.
- The armature member's first child record starts at `+0x02`; its matrix is at
  member offset `+0x1E` and its name at member offset `+0x9A` (record-relative
  `+0x1C` and `+0x98`). That matrix is the child's rest, not the member's own
  rest. Pair each name with its own record's matrix.
- The stored armature matrix is 3x4; expand it to 4x4 and set the homogeneous
  term to 1.
- The transform tree is `world -> vel -> root -> {luleg, ruleg, hipbelow}`;
  the spine is under `hipbelow`; the arms are under `torsoabove`. The legs are
  not under `hipabove`.
- Armature members may include names outside the cage table
  (`joint_luarmabove`/`joint_ruarmabove`).
- Foot meshes attach to the below-ankle joints, not to the footstep sites and
  not to the ankles. Toe pieces attach to their own toe joints when present.
- Footstep site channels are deltas on the site's `R_x(90)` rest. Clips that
  omit the site channels get the stand clip's t=0 site quaternions injected.
- Chunk 0's first dword is a keyframe index; the token end at `+0x08` names
  the joint. Do not treat the keyframe index as a cage index.
- Chunk 0's `quat_x` is a signed `sin(theta/2)` value in 1/32768 units; values
  outside `(-0.9999, 0.9999)` are not applied.
- Chunk offsets point one byte past the last key byte (the next chunk's
  one-byte header); the last key legitimately ends at `chunkN + 1`.
- Channel type 4 is quaternion + scale, not quaternion + position. Type 3 is a
  step-sampled weight scalar.
- Clip sampling uses component lerp plus the W-from-XYZ normalization, not
  slerp. Weight channels are step-sampled.
- The mirror fills a missing right channel with `(x, -y, -z, w)`; it does not
  sample the left channel half a cycle out of phase.
- The retail playback path uses the chunk-4 absolute local quaternion. The
  chunk-0 base-pose table is a separate static pose path; do not add the base
  pose to a chunk-4 rotation unless reproducing that static path.
- The transition weight is time/overlap-curve based. The speed magnitude
  selects the desired state and transition variant; it does not directly set
  the blend weight.
- The transition block's `Position` starts the transition clip, not the target
  state. The target start position is `StartNewState` or
  `OverrideNewStatePosition`.
- `TransitionStart` is a normalized position in the source state; `any`
  always matches. The 1/8-step thresholds are `0.125` through `0.875`.
- `carryover=false` restarts the cycle phase on state entry.
- The root cycle's second vector Z is `travel / duration`, not a position
  offset. The first vector is the root position.
- A speed blend samples slow and fast in a shared normalized phase and uses
  the blended per-cycle travel for the phase advance.
- Missing directional clips fall back to the even clip; missing clips fall
  back through the `.animscript` defines.
- The placement matrix carries no scale; model scale is a model property.
- A missing joint skips the part rather than failing the whole chassis.
- LOD0 is the drawable model; later LODs repeat it at lower detail, and some
  chassis carry degenerate later records.

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
| `0x0041B680` | quaternion normalization (W derived from XYZ) |
| `0x0041BB80` | quaternion slerp (not the clip-sampling path) |
| `0x0041BD00` | quaternion lerp (dot-negation before the lerp) |
| `0x0041C610` | quaternion from Euler angles |
| `0x0041A160` | quaternion-to-rotation-matrix conversion |
| `0x0041C7D0` | 3x4 matrix times vector |
| `0x005F8BE0` | per-frame model-update callback |
| `0x0060477B` | state-tree update path |
| `0x00604780` | state holder-chain update entry |
| `0x00604C61` | transition evaluation path |
| `0x00604C70` | transition update entry |
| `0x00604270` | transition timing/weight pipeline |
| `0x00604DF0` | cubic Hermite evaluation |
| `0x00604E50` | nine built-in overlap-curve initializers |
| `0x00604F30` | overlap-curve evaluator |
| `0x00605820` | per-frame animation record dispatch |
| `0x00605C80` | animation hierarchy combine / clip sampler |
| `0x0066BC30` / `0x0066BC90` | holder-chain weight recursion |
| `0x0066BD70` | overlap-curve record |
| `0x0066C4A0` | `#<b>` joint-tag parser |
