# Scene Construction and Object Rendering

The in-mission renderer is the MidLevelRenderer (MLR). It builds a scene graph
from terrain, static props, cultural cards, mechs, water, sky, and effects,
evaluates lighting and fog, transforms vertices on the CPU, and submits
pre-transformed primitives to the device. The device is the D3D7 immediate-mode
surface implemented by `blade.dll`, whose software rasterizer writes the final
pixels into the attached framebuffer.

The behavior below is derived from the reference renderer and the shipped
retail data. This page documents scene assembly, static-object rendering,
materials, lighting/fog, and the draw path. Archive and member layouts are in
[Asset Loading and Archive Formats](assets.md); map/terrain formats are in
[Map and Terrain Formats](terrain_formats.md); mech models and animation are in
[Mech Models and Animation](mech_animation.md).

## How to read this page

A 3D frame is built in stages:

1. The game describes what exists in the world: terrain, buildings, trees,
   mechs, water, sky, and effects. This description is the **scene**.
2. The renderer decides what is visible and turns each drawable into a compact
   **draw record** (what to draw, where, with which material).
3. The MidLevelRenderer (MLR) transforms the object's vertices into screen
   space, computes per-vertex lighting and fog, and submits them.
4. A **rasterizer** turns the resulting triangles into pixels in a framebuffer.
5. The framebuffer is presented to the window.

In this game the MLR does the transform-and-lighting itself, so the vertices it
submits are already in screen space. Those are called **pre-transformed
vertices**. The rasterizer then only clips and fills them.

### Key terms

| Term | Plain-language meaning |
|---|---|
| scene / scene graph | The set of objects to draw and how they relate to each other. |
| drawable | Anything that can produce a draw: terrain, a prop, a mech, a card, water, sky. |
| draw record | A compact per-frame instruction: object, transform, sort key, material, children. |
| vertex | A corner point of a triangle, usually with position, UV, normal, and color. |
| index | A number that tells a triangle which vertices to use. |
| UV | Which part of a texture belongs at a vertex. |
| normal | The direction a surface faces; used for lighting. |
| material | Texture plus render state (alpha test, blend, two-sided, depth write). |
| texture atlas | One image containing many smaller images. |
| culling | Skipping objects that are outside the view or too far away. |
| LOD | Level of detail: a simpler model used at a distance. |
| billboard | A flat card that turns to face the camera. |
| lighting | How light and surface direction combine into a color. |
| lightmap / baked page | Lighting stored in a texture instead of computed per frame. |
| fog | Fading distant geometry toward a fog color. |
| alpha test / blend | Discard fully transparent pixels / mix with what is behind. |
| depth buffer / depth write | Remembers the nearest pixel so hidden surfaces are not drawn / whether a draw updates that memory. |
| rasterizer | The code that converts triangles into pixels. |
| pre-transformed | The engine already computed screen coordinates and depth. |
| XYZRHW | A screen-space vertex position plus `rhw`, the reciprocal homogeneous W used for perspective-correct interpolation. |
| FVF | Flexible Vertex Format: a code that says which fields each vertex contains and in what order. |
| specular | An extra per-vertex color channel; this engine stores the fog factor in its alpha byte. |

The renderer works in several coordinate spaces. **Local** space is relative to
a model's own origin; **world** space is the shared map space; **view** space is
relative to the camera; **clip** space is what the projection produces; and
**screen** space is the final pixel position. The MLR composes these transforms
and submits screen-space vertices.

The layouts below describe runtime data and shipped-file bytes, not C++ source
structures. Where a layout has no public oracle header, the page says which
functions or data files define it.

## 1. Render path overview

The full per-frame MLR flow is in
[Render Subsystem](subsystems/render.md#frame-flow). For scene construction,
the important stages are:

```text
drawable producer -> per-drawable input -> scene record -> slot list
                  -> draw driver -> device -> rasterizer
```

The MLR performs its own transform-and-lighting. In the in-mission 3D path,
primitives are submitted as pre-transformed `XYZRHW` vertices (FVF `0x1C4`,
8 floats: `x, y, z, rhw, diffuse, specular, u, v`) or as `XYZRHW` + second UV
set (FVF `0x2C4`). For those formats the rasterizer only clips and rasterizes
the geometry; the device also has separate lit and in-place-transform formats
for other callers.

The camera update walks the node list with a distance cull and per-node camera
setup. Culling means skipping objects that cannot contribute to the frame. The
camera source copies near/far/fov/cull fields from `[arg+0x28..0x68]`; the
16-dword cull matrix is copied into the terrain object at `+0x54`. The terrain
render culls with a six-bit **outcode** on transformed corners (a bitmask saying
which clip planes a corner is outside) and a fixed 45-degree pyramid
(`tan 45 = 1`), matching the 4:3 horizontal field of view. The camera lens
builders derive the horizontal and vertical edge pairs; the reference
projection is fixed to the 4:3 horizontal field of view and is not derived from
the surface aspect.

## 2. Scene graph and node types

A **scene graph** is the renderer's list/tree of drawable nodes. Each node owns
a transform and a drawable object; the renderer walks the list every frame,
updates the node, culls it if possible, and turns it into draw records.

The MLR node types and vtables are inventoried in
[Render Subsystem](subsystems/render.md#role-and-boundary). For scene
construction, the important families are:

- terrain: `MLRLineCloud`, `MLRIndexedTriangleCloud`, `MLR_Terrain2`;
- mesh/shape: the primitive base and indexed mesh variants;
- clouds/cards: point, card, ngon, triangle, line, sprite;
- water: `MLR_Water` and `MLR_BumpyWater`;
- lights: ambient, infinite, point, spot, and lookup lights.

The four per-node-type dispatch tables map node types to update/render methods;
the tables and their counts are listed in the render subsystem page.

## 3. Scene elements and draw records

Each frame the MLR device walks the frame's drawables. A drawable's producer
assembles a **scene element**: the per-drawable record input.

The per-drawable input record has these pieces:

| Field | Meaning |
|---|---|
| drawable identity | A pointer/handle used to recognize the source object. |
| material/state block | Six dwords holding two masked channel triplets; the blend merges the drawable's state with the frame's. |
| destination flags | The producer's `arg & 0x3F` flags. |
| view basis (M1) | A pointer to the drawable's 3x4 transform; this is what the record builder projects. |
| rich-path extras | Visible child list/count, light-list slot, and primary light (used by the terrain-family rich producer). |

The oracle does not expose this as a public header. The layout is reconstructed
from the element initializers `0x0048BCF0` (simple) and
`0x0048BCA0`/`0x0048BCD0` (rich), the material block init
`0x004911E0`/`0x00491280`, and the masked blend `0x00491670`.

In plain terms, the producer says "this object, this material, this transform",
and the record builder projects that transform through the camera. The
"masked channel triplets" are the engine's compact way of merging a drawable's
material state with the frame's state; the blend is shown at the end of this
section.

The **scene record** is the draw driver's per-drawable command snapshot. It
carries:

| Field | Meaning |
|---|---|
| drawable identity | The object the record was built from. |
| sort value | The value used to order records within a slot. |
| flags | The record's flags dword. |
| element flags | The source element's flags (used for color/state). |
| record kind | Composite, direct, or record (the driver's dispatch class). |
| cull matrix | The drawable's view basis composed with the camera's world-to-clip matrix; in other words, the object's transform projected into the camera's clip space. |
| default basis | The engine's default orientation basis template. |
| sub-record count/list | The visible children the record will draw. |
| color key | The packed color state, or `-1`. |
| frame defaults | Frame-level defaults and the unit scale. |

The record kind tells the driver whether the record is a composite, a direct
draw through the light transform, or a normal record. The oracle does not expose
this as a public header. The simple record builder is `0x0048E890`; the rich
terrain-family builder is `0x0048DD20`. The rich path applies the light matrix
first:

```text
light basis = default orientation basis scaled per axis by the light extents
light matrix = light basis * element basis (M1)
cull = light matrix * camera world-to-clip
```

The original code used the x87 floating-point unit, and the order of additions
changes the stored bytes. The record builder reproduces that grouping exactly:
per output `((k1 + k0) + k2)`, with the w row adding the camera translation.
The record is published into one of 16 slot lists; a slot list is one of the
per-slot entry lists the driver sorts before drawing, and only the low 14 bits
of the sort value are kept (`0x3FFF`). The draw driver walks the records,
selects the per-frame light-slot records, and dispatches through the drawable
method table at `0x7B2450` (ten entries).

The material blend `0x00491670` merges a drawable's block with the frame's:
each triplet has a mask word, and for each channel the drawable's value is used
where its mask bit is set, otherwise the frame's value is kept. The result is
the record's per-draw state.

## 4. Mission scene assembly

A mission's placed scene is the `.contents` TLV stream. The element classes and
payload layouts are in
[Asset Loading and Archive Formats](assets.md#41-contents-element-stream).
For scene construction:

- class-1169 elements are the independent drawable placements; each carries a
  world matrix and a model-name index into the mission NameTable;
- class-1069 layout groups are anchors whose children reference class-1169
  instances for their transforms;
- the mission NameTable resolves the numeric indices to model names.

Placement matrices have unit-length rows; they carry no baked scale. The
model's own shape record supplies its geometry, material groups, cull radius,
and any authored scale.

The oracle does not expose a public mission-scene structure; the `.contents`
stream is consumed by the MLR node-stream reader and node-type factory
(`0x004C1890`, `0x004C6960`, `0x004C6920`; factory table `0x007B8C0C`).

The mission also supplies:

- spawn points from `DropZones\*.contents` (`u32 count` + 48-byte 3x4 matrices);
- day/night lights from the mission `.lights` records;
- the sky node from `skies\<sky>_sky\*.erf`;
- AI units, nav points, drop zones, camera points, and objectives as
  non-drawable metadata.

## 5. Static objects and cultural cards

### 5.1 Prop shape records

A static prop is a `#FRE` version-14 stream containing `#RLM` version-18 shape
records. A shape record is a sequence of LODs, each introduced by the 13-byte
marker:

```text
[u32 0x0000004B][u8 type][u8 0x66][u8 reserved[3]][u32 vertex_count]
```

The first LOD is the drawable model; later LODs repeat it at lower detail.
Within a LOD, each material group owns its vertex and UV buffers:

```text
[verts N*12][uvs N*8][4-byte group value][29-byte material block]
[NUL material name][u32 page word][u32 index_count][u8 indices]
[u32 triangle_count][triangle_count * 9 floats per-corner normals]
```

The material block's packed state dword is at block offset `+1` (record offset
`+5` from the group value; the block starts with a version byte). Static shape
records store UV pairs as `(v, u)`; the renderer's
`(u, v)` order needs the swap. Per-corner normals are index-aligned and keep
hard edges hard; records without a normal array fall back to face normals.

The `#FRE` header's bounding-sphere radius at `+0x1C` is the node's
far-distance cull radius. The reference scene traversal (`0x00494440`) culls
each node by that radius against the camera position.

Mech part meshes use the same shape record, but their material sub-object
carries a counted texture-page name and their UVs are used in stored order; see
[Mech Models and Animation](mech_animation.md#31-shape-record).

### 5.2 Cultural cards

The map archive's `<map>culturals.mlr` is an `#RLM` `MLRCulturShape` record. It
holds a shared card basis and a packed card atlas; each record carries its own
material, a card footprint triangle, UV bounds, and a list of card-instance
offsets (two signed 16-bit values per instance). The cards are camera-facing
billboards:

- the card centre is the shape matrix translation plus the instance offset;
- the card width/height comes from the stored triangle footprint;
- the texture region comes from the stored UV bounds;
- the card is drawn with alpha cutout so the packed atlas's black background
  does not render as an opaque strip.

Mission vegetation props (`tree_*`, `veg_*`, palms, shrubs) are authored card
clouds, not camera-facing billboards: their geometry is crossed vertical
quads and crown triangles that already form a 3D clump.

### 5.3 Placed static object

A placed static object pairs a mission placement with a prop model:

- the **placement** is the class-1169 world matrix (position, orientation, and
  no baked scale);
- the **model** is a props `.erf` shape record: per-material vertex/UV/index
  buffers, an optional normal array, and a material name;
- the **cull radius** comes from the model's `#FRE` header;
- a **billboard** card additionally stores its footprint size and the texture
  sub-rectangle it samples.

The oracle does not expose a public "static object" structure; the placement is
a class-1169 `.contents` element, the model is an `.erf` shape record, and the
runtime node cull is `0x00494440`. The material word is decoded by
`FUN_004916D0`.

### 5.4 Culling and materials

The reference scene traversal culls each node by the model's reference cull
radius against the camera position; per-record world bounds can additionally
be used for batching and culling. The packed material state word selects the
alpha-test/blend pair (see section 8). Opaque props, alpha-tested foliage, and
additive cards share the same state path.

## 6. Terrain rendering

The terrain family is `MLRLineCloud` (cell/line node),
`MLRIndexedTriangleCloud` (live mesh), and `MLR_Terrain2` (streamed manager).
The full data formats, record layout, LOD selection, baked pages, lightmaps,
water, and sky are in [Map and Terrain Formats](terrain_formats.md).

For scene construction, two details matter:

- the terrain material index is the base chain's `+0x2C`, not the detail
  constructor argument;
- the terrain node culls with the camera source's 16-dword matrix at `+0x54`
  and a fixed 45-degree pyramid; `MLR_Terrain2` selects a level by its
  serialized level rectangles and walks down to the nearest available mesh.

Terrain records are submitted as pre-transformed vertices, like the rest of the
in-mission 3D path.

## 7. Water and sky

Water and sky are separate `#RLM` record families in the map and mission data:

- **water** is a cell `.erf` `f2 = 0x6701` record; its vertices carry the
  water level, and its base/detail materials drive the two water passes. The
  runtime objects are `MLR_Water` and `MLR_BumpyWater`.
- **sky** is a mission `.erf` `f2 = 0x6606` node (or the `0x6603` ring variant);
  it selects the five sky faces and is drawn as a camera-centred perspective
  box.

The record layouts, water passes, UV ramp, frame animation, sky face geometry,
and projection evidence are in
[Map and Terrain Formats](terrain_formats.md#8-water-and-sky). For scene
construction, both are submitted as pre-transformed vertices through the same
device as terrain and props.

## 8. Materials and render state

A shape record's packed material-state dword is decoded by
`FUN_004916D0`. Bits `0x1C000` select the alpha-test/blend pair:

| Bits `0x1C000` | Alpha test | Blend | Blend factors |
|---:|---|---|---|
| `0x00000` | no | no | opaque |
| `0x04000` | no | yes | `ONE` / `ONE` (additive) |
| `0x08000` | yes | yes | `SRCALPHA` / `ONE` (additive) |
| `0x10000` | yes | yes | `SRCALPHA` / `INVSRCALPHA` |
| `0x14000` | no | yes | `ONE` / `INVSRCALPHA` |
| `0x18000` | yes | no | alpha test with the default opaque pair |

The global alpha function is `D3DCMP_NOTEQUAL` with reference `0`, i.e. discard
only `alpha == 0`. Blended materials typically use depth writes disabled so
they do not occlude later transparent draws. Vegetation and cultural cards are
flat cards, so they must be drawn two-sided.

The material state has two layers:

- the **packed dword** stored in the `.erf` material block, which selects the
  texture/material index and the alpha-test/blend mode;
- the **derived draw flags**: texture, detail texture, diffuse color, alpha
  test, blend/additive, source/destination blend factors, two-sided, depth
  write, detail, lit, fog, and the detail scale/scroll.

The oracle does not expose this as a public header; the packed dword is read
with the material block and decoded by `FUN_004916D0`.

The texture stage for the normal path is
`COLOROP/ALPHAOP = MODULATE` with arguments `(TEXTURE, DIFFUSE)`. "Modulate"
means multiply the texture color by the vertex diffuse color. The terrain detail
pass uses a second stage. Texture transforms are identity; the UVs are already
in texture space.

## 9. Lighting and fog

The mission `.lights` records supply the ambient and look-up lights. A light
record has intensity at `+0x00`, RGB color at `+0x04`, a unit direction at
`+0x30` (pointing toward the light), and its name at `+0x44`. The oracle's
light objects, light-map color path, and lookup-light table are in the render
subsystem (`0x00434D00`, `0x004906F0`, `0x00430F10`).

The per-vertex diffuse term is:

```text
diffuse = ambient + lookup_color * max(0, N . L)
```

The result is packed as `alpha << 24 | R << 16 | G << 8 | B`. Terrain uses the
baked page and lightmap instead of re-lighting the triangle normals. The
mission's day/night `.lights` records and the map's baked lightmap are the
lighting data sources; the selected mission set determines the scene's
lighting state.

Fog is a distance fade: near geometry keeps its color, while far geometry
approaches the fog color. The D3D7 fog factor is written into the **specular
alpha** of each pre-transformed vertex, not into a separate fog channel. The
engine computes a linear camera-distance visibility ramp:

```text
d = |vertex - camera|
factor = clamp(255 * (1 - (d - near) / (far - near)), 0, 255)
```

The rasterizer interpolates the specular alpha and the pixel pass mixes the fog
color. A water capture used near/far `250/900`; the values come from the
mission GameData. The base water pass is unfogged; the detail pass carries the
per-vertex visibility.

## 10. Effects

Effect definitions live in `textures.mw4`'s `effects\mw.effects` (`#XFG`
version `0x19`) with per-effect `.data` frame lists. The file layout is in
[Asset Loading and Archive Formats](assets.md#61-effect-definitions).

The effect atlas `textures\fx2_1.tga` is a packed sprite sheet. Effect quads
are camera-facing sprites; the atlas cell selects a flare/glow, explosion
flash, or beam/trail sprite. The effect records supply the material state; the
embedded node stream supplies the frame sequence and per-frame transform. The
oracle's effect path is the `MLREffect`
family (`MLREffect` vtable `0x76FC38`, effect factory `0x004871C0`).

## 11. Draw submission and software raster

A **draw call** is one instruction to the rasterizer: a primitive type plus a
vertex array and the current render state. The draw driver `0x00488BB0` walks
the slot records, selects the light-slot records, and dispatches through the
drawable method table at `0x7B2450`. The device wrappers
`0x00713A70`-`0x00713C80`, dispatcher `0x00713CC0`, and flush `0x00713DE0`
translate the MLR submission into device calls. The present/blit handoff is
`0x004B6C10`.

[`blade.dll`](subsystems/blade.md#the-software-rasterizer) implements the actual
raster path:

- `FUN_5E0057C0` is `DrawPrimitive`; `FUN_5E0093A0` is
  `DrawIndexedPrimitive`;
- both require an active `BeginScene` and reject unknown primitive types with
  `E_NOTIMPL`;
- primitive types are point list, line list, line strip, triangle list,
  triangle strip, and triangle fan;
- FVF `0x1C4` is the pre-transformed D3D TLVERTEX (8 floats, stride 0x20;
  "TLVERTEX" means a vertex whose position is already transformed and includes
  `rhw`); FVF `0x112` is the lit `xyz + normal + uv` path (8 floats); FVF
  `0x1E2` is the in-place transform path;
- the rasterizer builds a 0x34-byte / 13-float working record: screen x,
  screen y, z, rhw, diffuse ARGB, specular ARGB, tu, tv, and six clip/attribute
  words;
- the clip code is the low six bits of word 8; fully-inside primitives take the
  fast path, straddling primitives take the clipped path;
- the framebuffer globals are `0x5E77A844` (base), `0x5E77A840` (row pitch),
  and `0x5E77A834` (16/32-bit output mode).

Because the MLR submits already-transformed vertices, the animation, terrain,
object, and lighting transforms all happen before the rasterizer.

## 12. Invariants and failure modes

Terrain-specific invariants (material index, cull matrix/pyramid, page
rotation, `#FRE` separator records, shape UV order, and LOD selection) are in
[Map and Terrain Formats](terrain_formats.md) and section 5.1 above.

- The scene-record cull composition uses the reference x87 grouping; a
  different grouping changes the record bytes.
- The rich path's light matrix is the default orientation basis scaled by the
  light extents, then multiplied by the element basis; the cull is that light
  matrix times the camera view-projection.
- Pre-transformed vertices use FVF `0x1C4` (or `0x2C4` with a second UV set);
  a mismatched FVF/stride reads the wrong vertex layout.
- The per-vertex fog factor lives in the specular alpha; the diffuse alpha is
  material/vertex color.
- Draw calls require an active `BeginScene`; the device wrappers do not
  validate caller arguments. Device/texture-format invariants are in
  [Render Subsystem](subsystems/render.md#invariants-and-failure-modes).

## 13. Key entry points

Frame, camera, terrain, water, and lighting VAs are listed in
[Render Subsystem](subsystems/render.md#key-entry-points) and
[Map and Terrain Formats](terrain_formats.md). The scene/draw VAs are:

| VA | Detail | What it does |
|---|---|---|
| `0x0048E890` | records | scene-record builder |
| `0x0048DD20` | records | rich-record builder |
| `0x004911E0` / `0x00491280` | records | scene-element material block init |
| `0x00491670` | records | material block blend |
| `0x00488BB0` | draw | draw submission driver |
| `0x004887C0` | draw | context notify |
| `0x00713A70` | device | D3D7-IM primitive submit |
| `0x00713C80` | device | batched primitive submit |
| `0x00713CC0` | device | device dispatcher |
| `0x00713DE0` | device | device flush |
| `0x004B6C10` | present | present/blit handoff |
| `0x0070A6A0` | display | resolution/display normalizer |
| `0x0070B6C0` | display | backbuffer/surface setup |
| `0x005E0057C0` | blade | `DrawPrimitive` software raster path |
| `0x005E0093A0` | blade | `DrawIndexedPrimitive` software raster path |
