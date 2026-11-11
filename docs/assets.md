# Asset Loading and Archive Formats

This page documents how the engine finds and loads its content, and the
on-disk layouts of the shipped asset families. It summarizes the `#VBD`
archive container and documents the member layouts for maps, missions, mechs,
images, and effects.

The terrain-specific record layouts are in
[Map and Terrain Formats](terrain_formats.md); mech animation
is in [Mech Models and Animation](mech_animation.md); scene assembly and
rendering are in [Scene Construction and Object Rendering](scene_rendering.md).

The layouts below are derived from the shipped retail assets and the reference
binary. Byte offsets are relative to the start of the named record unless
stated otherwise. All integers are little-endian.

## How to read this page

The game ships its content in **archives**: single files that contain many
named **members**, similar in spirit to a zip file. At startup the engine mounts
several archives and then looks members up by name across all of them, so the
rest of the engine can treat them as one **virtual file system (VFS)**.

Most members fall into one of three groups:

- data tables and object descriptions (`.tbl`, `.instance`, `.data...`);
- render data (`.erf` streams, textures, `.material` and `.bid` layers);
- text or script (`.animscript`, `.abl`).

The oracle's public headers for the archive container are
`include/mw4/vbd.h` (on-disk header and entry) and `include/mw4/archive.h`
(runtime stream and loaded entry). For the map, mission, and mech formats the
layout is reconstructed from the shipped assets and the code that consumes
them; there is no single public header for those file families. The layouts
below describe bytes in shipped files, not C++ source structures.

### Key terms

| Term | Plain-language meaning |
|---|---|
| archive / member | One container file / one named file inside it. |
| VFS | The engine's single lookup namespace over all mounted archives. |
| stream | A cursor over a byte buffer or file: read, write, and seek operations. |
| directory | The archive's list of members: names, sizes, and where their bytes live. |
| LZW | A lossless compression scheme; repeated byte patterns become shorter codes. |
| TLV | Tag-length-value stream: each record carries a size and a type, so readers can skip what they do not understand. |
| NameTable | A mission-local dictionary that turns numeric name indices into strings. |
| aspect | An engine object serialized into its own archive member (for example a scene element or game model). |

Mesh, material, lighting, and terrain terms are defined in
[Scene Construction and Object Rendering](scene_rendering.md) and
[Map and Terrain Formats](terrain_formats.md).

### File families at a glance

| Extension | What it is |
|---|---|
| `.mw4` | Archive container (the `#VBD` format). |
| `.erf` | Structured render stream (`#FRE` container with `#RLM` records). |
| `.fgd` | Terrain material palette (compiler source data). |
| `.bid` | Raw image container for terrain lighting/source layers. |
| `.tga`, `.bmp` | Ordinary image files. |
| `.gaf` | Packed frame atlas. |
| `.mw4anim` | Mech animation clip. |
| `.animscript` | Mech animation state machine. |
| `.abl` | Mission script. |
| `.tbl` | Data table (chassis table, mission-name mapping, ...). |
| `.instance` | Serialized object instance. |
| `.contents` | Placed-scene or spawn-list stream. |
| `.data`, `.data{...}` | Serialized engine aspect (scene element, game model, ...). |

## 1. Install layout and archive roles

The game reads almost all content from `#VBD` archives under `RESOURCE\`. The
three global archives and the per-map/per-mission archives form one
case-insensitive namespace:

| Path | Role |
|---|---|
| `RESOURCE\core.mw4` | Object/instance tables, mech armatures, mech/mission tables, shared object data. |
| `RESOURCE\props.mw4` | Building/cultural prop meshes, mech part animation scripts and `.mw4anim` clips, effect frame data. |
| `RESOURCE\textures.mw4` | Texture pages (`.tga`), mech part meshes (`.erf`), HUD/effect atlases, effect definitions. |
| `RESOURCE\Maps\<map>.mw4` | Map root, terrain cells, baked terrain pages, water and sky textures. |
| `RESOURCE\Missions\<mission>.mw4` | Mission scene, name table, serialized aspects, ABL script, spawn lists, lights, sky nodes. |
| `RESOURCE\Missions\<mission>.nfm` | Loose multiplayer mission marker (selects the drop-team spawn path). |
| `tables\missionnames.tbl` | Mission archive path to scenario path mapping (inside an archive). |
| `tables\mechtable.tbl` | Chassis table: object path, flags, display name (inside an archive). |

A lookup walks the mounted archives in mount order and returns the first
case-insensitive, slash-normalized match. Archive member names use backslashes
and may contain braces from the WinFS-style `name.data{GameModel}` /
`{Element}` family; braces are opaque characters, not escaping.

## 2. Container and structured streams

### 2.1 `#VBD` archive summary

The container is a `#VBD` archive: a header, a directory of named members, and
the member bytes. The on-disk header and entry records, the two runtime hash
tables, lazy fetch, and the writer are documented in
[Archive Subsystem](subsystems/archive.md). The member compression codec is
documented in [Codec Subsystem](subsystems/codec.md).

For this page, the important rules are:

- a member is stored raw when `stored_size == uncompressed_size`; otherwise it
  is LZW-compressed;
- lookup is case-insensitive and slash-normalized across all mounted archives,
  and the first mounted match wins;
- the oracle's on-disk header/entry declarations are in `include/mw4/vbd.h`;
  the runtime stream/entry declarations are in `include/mw4/archive.h`.

### 2.2 `#FRE`/`#RLM` streams

Most structured members are `#FRE` version-14 containers whose children are
`#RLM` version-18 records:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | signature `#RLM` |
| `+0x04` | 4 | version (18) |
| `+0x08` | 4 | body size in bytes after the 20-byte header |
| `+0x0C` | 4 | record field (`f1`) |
| `+0x10` | 4 | record type (`f2`) |
| `+0x14` | var | body |

The next record starts at `+0x14 + body_size`. A zero-size `#RLM` record is a
separator/header and must be skipped. The common `f2` types are:

| `f2` | Meaning |
|---:|---|
| `0x6801` | terrain mesh record |
| `0x6701` | water surface record |
| `0x6601` / `0x6602` | static shape record (LOD/material groups) |
| `0x6603` | shape record, or the sky ring variant in a jungle sky node (context-dependent) |
| `0x6606` | sky node (mission `.erf`) |

Shape records use the 13-byte LOD marker and material-group layout described in
[Scene Construction and Object Rendering](scene_rendering.md#51-prop-shape-records).
Mech part records use the same format with a counted texture-page name; see
[Mech Models and Animation](mech_animation.md#31-shape-record). The terrain and
water record bodies are in [Map and Terrain Formats](terrain_formats.md).

The oracle consumes these streams through the MLR node-stream reader and the
terrain/mesh loaders; there is no public header for the individual record
bodies.

## 3. Map archive

A map is `RESOURCE\Maps\<name>.mw4`. Its members fall into four families:

| Family | Members | Role |
|---|---|---|
| root | `<name>.erf`, `.erf{zones}`, `.fgd`, `.instance`, `.data{Element}`, `.data{GameModel}`, `.data` | Map metadata, zone list, and serialized map aspects. |
| cells | `<cell>.material`, `<cell>.erf`, `<cell>.bsp` | Terrain/water records, collision data, and the editor material-index map. |
| textures | baked cell pages, level-1 quadrants, detail texture, water/underwater frames, sky faces | The render textures. |
| lightmap/source layers | `textures\composttexture\*.bid` | Baked lighting and compiler source masks/colors. |

The full member list, cell grid, page orientation, atlas layout, water/sky
records, and terrain record layouts are in
[Map and Terrain Formats](terrain_formats.md). The `.material` index map,
`.fgd` palette, and `.bid` source layers are terrain-compiler data; the runtime
terrain records reference only the baked cell page and the shared detail
texture. The oracle does not define one public "map" structure; the members are
read by the map/terrain loader, and the runtime terrain nodes are the MLR
classes described in
[Scene Construction and Object Rendering](scene_rendering.md#6-terrain-rendering).

## 4. Mission archive

A mission is `RESOURCE\Missions\<mission>.mw4`. The archive holds the placed
scene, its name table, serialized game aspects, the ABL script, spawn lists,
lights, and sky nodes. The `.contents` file is the mission's placed-object
list; the `.instance` and `.data...` members are serialized engine objects that
describe the mission itself. The oracle consumes the scene through the MLR
node-stream reader/factory, and the mission aspects through the mission
loader:

| Member pattern | Meaning |
|---|---|
| `missions\<mission>\<instance>.contents` | placed-scene TLV element stream |
| `<instance>{NameTable}` | mission name table (archive root) |
| `missions\<mission>\<instance>.instance` | class-1056 mission object; embeds the ABL script path |
| `missions\<mission>\<instance>.data{Element}` | mission MLR scene element |
| `missions\<mission>\<instance>.data{GameModel}` | mission model reference table |
| `missions\<mission>\<instance>.data` | mission root reference list |
| `missions\<mission>\mission.bounds` | playable-area bounds |
| `missions\<mission>\warning.bounds` | warning-area bounds |
| `missions\<mission>\<instance>graph.data` | AI rail/navigation graph |
| `missions\<mission>\dropzones\*.contents` | spawn-point matrices |
| `missions\<mission>\paths\*.contents` | AI path definitions |
| `skies\<sky>_sky\*.erf` | sky node (five-face selector, archive root) |
| `missions\<mission>\*.lights` | day/night ambient and look-up light records |
| `missions\<mission>\scripts\*.abl` | mission ABL source |
| `props.mw4` `missions\<mission>\*.mw4anim` | mission-specific texture-animation overrides |

The mission archive may be named after the mission family while the scenario
name carries a suffix (`exford04.mw4` for `exford04_backstab`).
`tables\missionnames.tbl` maps archive paths to scenario paths; its pairs are
`[u32 len][archive path][NUL][u32 1][u32 len][scenario path][NUL]` (the stored
length excludes the terminator).

### 4.1 `.contents` element stream

The `.contents` file is a flat TLV stream, not a nested tree:

```text
[u16 element_count][element...]
element = [u32 size][u32 type=2][u32 field=2][u32 flags=0][u32 class]
          [size - 20 bytes payload]
```

The 20-byte element header is five 32-bit words: size, type (2), field (2),
flags (0), and class id. The body length is `size - 20`. `size` includes the
20-byte header, and the stream is walked from offset 2. A mission typically
mixes these classes:

| Class | Meaning |
|---:|---|
| 1169 | placed drawable instance (props model, unit, editor object) |
| 1069 | editor layout group / grid cell (name + child list) |
| 1065 | AI unit (unit name + mech-table index) |
| 1145 | ABL script attachment for an AI unit |
| 1223 | NavPoint (`ena_N` event nav points) |
| 1176 | camera/ship point |
| 469 | DropZone |
| 1161 | objective line |
| 1179 | one shipped mission element; not decoded |

Only class-1169 elements are independent drawable placements. The other
classes reference class-1169 instances by name or index (grid membership, AI
links, script bindings) or carry non-render metadata.

The decoded scene therefore contains these groups of records: placed drawable
instances (class 1169), layout groups (class 1069), NavPoints (class 1223), AI
units and their script attachments (classes 1065/1145), drop zones (class
469), camera points (class 1176), and objectives (class 1161). The oracle does
not expose a public "scene graph" header; the stream is consumed by the MLR
node-stream reader and node-type factory (`0x004C1890`, `0x004C6960`,
`0x004C6920`; factory table `0x007B8C0C`), which construct the runtime node
objects. The field layout is reconstructed from the mission data.

### 4.2 class-1169 placement

A class-1169 payload is 80 bytes:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | flags (0x400 in the shipped missions) |
| `+0x04` | 4 | id/team/color word |
| `+0x08` | 48 | row-major 3x4 world matrix (translation at `+0x14`, `+0x24`, `+0x34`) |
| `+0x38` | 4 | 1 |
| `+0x3C` | 4 | 0 |
| `+0x40` | 4 | 0 |
| `+0x44` | 4 | class-ish tail word (`0x000005CA`) |
| `+0x48` | 3 | model-name index (u24, global NameTable) |
| `+0x4B` | 1 | tag `0x0C` |
| `+0x4C` | 4 | 1 |

Every placement matrix has unit-length rows; the placement carries no baked
scale. The model scale is a property of the model, not the placement. The
translation is already world-space.

### 4.3 class-1069 layout group

A class-1069 group is an editor layout anchor with a world matrix and a child
list:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | flags |
| `+0x04` | 4 | sub-id |
| `+0x08` | 48 | row-major 3x4 group/world matrix |
| `+0x48` | 4 | first child's class-1169 instance index |
| `+0x84` | 16 | group name (NUL-terminated unless exactly 16 characters) |
| after name | var | child list |

The bytes between the first-child index and the group name are not needed to
read the name or child list. The first child may be a plain NUL-terminated name;
later entries are `[u24 id][u8 kind][u32 len][name]`. `kind == 0x0C` is a
drawable props model; `id` indexes the class-1169 instance list and supplies the
child's transform. The group name and layout-reference children are anchors; a
child with its own class-1169 placement uses that transform, while an attached
child without one uses the group transform.

### 4.4 Name table

The mission's `<instance>{NameTable}` member resolves the numeric model-name
indices used by class-1169 and class-1069. The oracle does not expose a public
NameTable header; the mission loader reads the table and uses it to turn the
indices into strings:

The table starts with two 32-bit count words; the loader uses the second as the
number of entries in the first table. Each first-table entry is a 32-bit name
length, the name bytes, and a five-byte trailer (a zero byte, a 16-bit index,
and two more zero bytes). The remaining names follow as length-prefixed,
NUL-terminated strings appended in index order.

### 4.5 Spawn lists

`DropZones\playerstart.contents` (campaign) and
`DropZones\dropteam1.contents` / `dropteam2.contents` (wave and multiplayer)
are shipped mission members; the oracle does not expose a public spawn-list
header. They hold a `u32 count` followed by `count * 48-byte` row-major 3x4
matrices. The translation is at matrix offsets `+12`, `+28`, `+44`; the local
+Z column is at `+8`, `+24`, `+40` and gives the spawn facing. A `.nfm` file
marks a multiplayer mission and selects the drop-team path.

### 4.6 Mission lights

A `.lights` member is an `#RLM` file containing named light records. The oracle
does not expose a public light-record header; the MLR lighting path consumes
these records. The records used are `ambient_light0000` and `lookuplight`:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | intensity |
| `+0x04` | 12 | color RGB |
| `+0x30` | 12 | unit direction (points toward the light) |
| `+0x44` | var | NUL-terminated record name |

Day and night missions ship separate `.lights` files; the night file is chosen
by name.

### 4.7 Sky nodes

A mission's `skies\<sky>_sky\*.erf` member is an `#RLM` version-17/18 record
with `f2 = 0x6606` (and a `0x6603` ring variant). Its material list names the
five sky faces in front/up/left/back/right order; the bottom face reuses the
front texture. Version 17 stores indices as `u16`, version 18 as `u8`. The map
archive carries the texture faces; the mission node selects the set. The exact
geometry, UVs, and the camera-centred perspective-box draw are documented in
[Map and Terrain Formats](terrain_formats.md#sky-sets).

## 5. Mech asset layout

A mech is assembled from a chassis-table entry, per-part indexed meshes, a
joint armature, an animation script, and a skin atlas. The chassis table is the
catalog; the `.instance` names the object; the part meshes are the visible
pieces; the armature and animation script decide how those pieces move:

| Asset | Archive/member |
|---|---|
| chassis table | `tables\mechtable.tbl` |
| chassis instance | `mechs\<name>\<name>.instance` |
| part meshes | `mechs\<name>\<prefix>_<part>.erf` (textures archive) |
| armature | `mechs\<name>\<name>.contents[joint_*]{armature}` (core archive) |
| animation script | `mechs\<name>\<name>.animscript` (props archive) |
| animation clips | `mechs\<name>\animation\*.mw4anim` (props archive) |
| skin atlas | `textures\@aarg0.tga` (textures archive) |

`tables\mechtable.tbl` entries are:

```text
[u32 path_len][path bytes][NUL][u16 flags][u16 reserved]
[u32 display_len][display bytes][NUL]
```

The path names the chassis instance (`mechs\Argus\Argus.instance`). The part
prefix is discovered from the first `<prefix>_torso.erf` under
`mechs\<name>\`; the standard parts are torso, hip, left/right upper arm,
upper/middle/lower leg, foot, and toe. The armature members store local
rest-pose matrices; the animation script resolves the clip paths, which may
point at another mech's shared animation set. See
[Mech Models and Animation](mech_animation.md) for the skeleton, `.mw4anim`,
and `.animscript` layouts.

A chassis-table entry therefore has three pieces: the object path, a 16-bit
flags word, and a display name. A part mesh has a part suffix, the joint it is
attached to, per-vertex positions and UVs, a triangle index list, and a
material/texture-page name. The table is a shipped data file; the part mesh is
an `.erf` shape record (section 2.2), not a public oracle structure. The joint
names and armature members are described in
[Mech Models and Animation](mech_animation.md).

## 6. Image and effect formats

| Format | Use | Notes |
|---|---|---|
| TGA | most textures, sky faces, water frames, mech skin atlas | 24/32-bit, RLE allowed; decoded to BGRA/RGBA by `0x0072E000` |
| BMP | some UI/legacy images | decoder `0x007362D0` |
| GAF | packed frame atlases | loader `0x006C9920`; frame variants |
| `.bid` | terrain lightmaps/source layers | raw mip 0; ARGB1555 color or 8-bit mask; see [terrain_formats](terrain_formats.md#7-bid-image-format) |
| `.material` | terrain material-index map | 256x256 bytes into the `.fgd` palette; compiler source |
| `.fgd` | terrain material palette | compiler source; not referenced by runtime terrain records |
| `.mw4anim` | mech animation clip | see [mech_animation](mech_animation.md) |
| `#XFG` `mw.effects` | effect/material definitions | see below |

TGA and BMP are ordinary image files. GAF is a packed frame atlas. `.bid` is a
raw image container used for terrain lighting and source layers, not a general
texture. The texture pipeline converts source images to the surface's pixel
format (`0x006C8CF0`), caches textures with LRU eviction (`0x006CA9A0`), and
resolves names through the image table (`0x006D00F0`) and texture manager
(`0x00717A10` / `0x00753CC0`).

### 6.1 Effect definitions

`textures.mw4`'s `effects\mw.effects` is an `#XFG` version `0x19` file:

```text
#XFG header: u32 sig, u32 version=0x19, u32 string_count
string table: string_count * [u32 len][chars][NUL]
records: [u16 id][u16 flags][u32 name_len][name]
         [0x30-byte material block]
         [embedded MLR# version 0x12 effect node stream]
```

In plain terms, the file starts with a shared name list, then a list of effect
records; each record names a material and embeds a small render stream. The
12-float material block carries color/scale/UV-like terms. Per-effect
`.data` files under `effects\<family>\*.data` are small frame lists of
`[u16 1][u16 frame_id]` records; the frame ids are effect-material ids, not
indices into the `#XFG` string order. The render side of these records is in
[Scene Construction and Object Rendering](scene_rendering.md#10-effects). The
embedded effect node stream's frame timing and per-frame transform are only
partially decoded.

## 7. Load sequence and failure modes

A typical mission load is:

1. Mount `RESOURCE\core.mw4`, `RESOURCE\props.mw4`, and
   `RESOURCE\textures.mw4`.
2. Mount `RESOURCE\Maps\<map>.mw4` and read the map root, cells, baked pages,
   water records, sky set, and lightmap.
3. Mount `RESOURCE\Missions\<mission>.mw4` and read the mission `.contents`,
   NameTable, serialized aspects, ABL, spawn list, lights, and sky node.
4. Resolve every model/texture/animation name through the mounted namespace.

Invariants:

- The `#VBD` signature must match and the format version must be `<= 4`.
- A member is compressed only when `stored_size < uncompressed_size`; equal
  sizes mean raw storage.
- The on-disk bucket-count field is not the member count; parse directory
  records until `dir_file_offset`.
- Member lookup is case-insensitive and slash-normalized; the first mounted
  archive wins.
- `#FRE` cell streams contain zero-size `#RLM` separator records; only records
  with the expected `f2` type and a sane payload are meshes.
- Shape records are LOD-layered; the first (highest-detail) LOD is the
  drawable model. Later LODs repeat the model at lower detail.
- Static shape records store UV pairs as `(v, u)`; the renderer's `(u, v)`
  order needs the swap.
- Mission `.contents` element sizes include the 20-byte header; the walk starts
  at offset 2.
- A missing sky set or missing sky textures fall back to another complete set;
  a missing animation clip falls back through the `.animscript` defines.

## 8. Where to find the loading VAs

This page is about file formats; the loading code is inventoried by subsystem:

- archive container, streams, lazy fetch, writer:
  [Archive Subsystem](subsystems/archive.md);
- LZW codec: [Codec Subsystem](subsystems/codec.md);
- texture decoders, image table, texture manager:
  [Render Subsystem](subsystems/render.md#textures-and-image-tables);
- terrain manager: [Map and Terrain Formats](terrain_formats.md).
