# Map and Terrain Formats

This page records the map, terrain, water, and sky data formats and the
engine's terrain rendering behavior, derived from the shipped
`Resource\Maps\*.mw4` archives and the `MW4Mercs.exe` MidLevelRenderer (MLR)
terrain code. Byte offsets are
relative to the start of the named record unless stated otherwise. The
examples use `thark04.mw4` (16-cell alpine map) and `fact02.mw4` (4-cell flat
map).

The render subsystem's VA inventory is in [Render](subsystems/render.md); this
page is the data-format companion. Archive/member layouts are in
[Asset Loading and Archive Formats](assets.md), and scene assembly/material/
lighting are in
[Scene Construction and Object Rendering](scene_rendering.md).

## How to read this page

A map is a square world area split into **cells** (large squares), and each cell
is split into **tiles** (smaller squares). The terrain is a triangle mesh: each
record in a cell `.erf` stores the vertices around a patch of ground and an
index list that says which triples of vertices form triangles.

Terrain textures are **baked**: the lighting is already painted into the image,
so the runtime does not have to compute it. A **page** is one baked image for a
cell; an **atlas** packs several pages into one texture. The **detail texture**
is a small grain image tiled over the ground to add close-up detail, and the
**lightmap** is the separate lighting image used when the pages were baked.

**UV** coordinates say which part of a texture belongs at a vertex. **LOD**
(level of detail) means the engine can use a simpler mesh farther from the
camera. A **record** here means one tagged chunk of render data: `#RLM` records
carry a type code (`f2`) so the reader knows whether the body is terrain,
water, sky, or a static shape. The cell `.erf` is a `#FRE` container: a small
stream header followed by those `#RLM` records.

A **BSP** (binary space partition) is a tree structure used for collision and
visibility queries; the cell `.bsp` member holds that data. The `.material`
member is a 256x256 index map into the `.fgd` palette, which is the terrain
compiler's source data rather than a runtime texture.

## 1. Map archive contents

A shipped map is a `#VBD` version-4 archive. Its members follow the map's
cell grid and texture tree:

| Member pattern | Meaning |
|---|---|
| `maps\<name>\<cell>.material` | 256x256 byte material-index map (65,536 bytes) into the `.fgd` palette |
| `maps\<name>\<cell>.erf` | terrain mesh stream (`#FRE` v14 with `#RLM` v18 children) |
| `maps\<name>\<cell>.bsp` | collision/BSP data for the cell |
| `maps\<name>\<name>.erf` | root terrain stream (52 bytes for `thark04`) |
| `maps\<name>\<name>.erf{zones}` | map zone-id list |
| `maps\<name>\<name>.fgd` | terrain material palette (14,361 bytes for `thark04`, 8,155 for `fact02`) |
| `maps\<name>\<name>.instance` | instance/zone metadata (100 bytes for both maps) |
| `textures\maps\<name>\<cell>\<name>_<cell>_0_0000.tga` | level-0 baked cell page, 256x256 24-bit RGB |
| `textures\maps\<name>\<cell>\<name>_<cell>_1_<xx><yy>.tga` | level-1 baked cell quadrant, 256x256 24-bit RGB, `xx`/`yy` in 0..1 |
| `textures\maps\<name>\<detail>_active.tga` | shared detail texture, 256x256 32-bit RGBA |
| `textures\maps\<name>\*_waterNN.tga` | animated water-surface texture frames (64x64 24-bit in the observed sets) |
| `textures\maps\<name>\*_water_detailNN.tga` | animated water-detail texture frames (64x64 32-bit in the observed sets) |
| `textures\maps\<name>\*_underwater_detail_active.tga` | underwater detail texture, 256x256 32-bit RGBA |
| `textures\sky<prefix>{f,u,l,b,r}<variant>.tga` | five-face sky set; variant 1 is the observed mission default, sides and up face may differ in size |
| `textures\composttexture\<name>_lightmap_active.bid` / `<name>_light_active.bid` | per-cell lightmap atlas (1024x1024 for `thark04`) |
| `textures\composttexture\<name>_mask_<layer>_active.bid` | 1024x1024 8-bit source mask |
| `textures\composttexture\<set>_color_<layer>_active.bid` | 256x256 ARGB1555 source color layer |

Representative `thark04` cell `.erf` sizes are 131,740 to 292,862 bytes; the
matching `.bsp` files are 95,724 to 232,842 bytes. `fact02` has four cells;
its `.erf` files are 94,245 to 126,173 bytes and its `.bsp` files are 47,840
to 72,868 bytes.

The `.material` index map and the `.fgd` palette are the terrain compiler's
source data. The runtime terrain records reference only the baked cell page
and the shared detail texture; no `.fgd`, `.material`, or `.bid` layer name
appears in a terrain record. The map definition also references
`<name>.index.tcf` (the texture-collection/flag file); its format is not
decoded here.

## 2. Cell grid and page orientation

A cell id is two letters, `[z][x]`: the first letter is the Z quadrant and the
second is the X quadrant. The letters `A`..`D` map to the four quadrants in
increasing coordinate order. This is proven by the `.erf` vertex bounds, not
by the filename order.

For `thark04` the grid is 4x4 over x,z = -2560..2560, with 1280-unit cells:

| Cell | X range | Z range |
|---|---|---|
| `AA` | -2560..-1280 | -2560..-1280 |
| `AB` | -1280..0 | -2560..-1280 |
| `AC` | 0..1280 | -2560..-1280 |
| `AD` | 1280..2560 | -2560..-1280 |
| `BA` | -2560..-1280 | -1280..0 |
| `BB` | -1280..0 | -1280..0 |
| `BC` | 0..1280 | -1280..0 |
| `BD` | 1280..2560 | -1280..0 |
| `CA` | -2560..-1280 | 0..1280 |
| `CB` | -1280..0 | 0..1280 |
| `CC` | 0..1280 | 0..1280 |
| `CD` | 1280..2560 | 0..1280 |
| `DA` | -2560..-1280 | 1280..2560 |
| `DB` | -1280..0 | 1280..2560 |
| `DC` | 0..1280 | 1280..2560 |
| `DD` | 1280..2560 | 1280..2560 |

`fact02` is the same scheme on a 2x2 grid over -1280..1280: `AA` is
x,z = -1280..0, `AB` is x = 0..1280 with z = -1280..0, `BA` is x = -1280..0
with z = 0..1280, and `BB` is x,z = 0..1280.

The baked page is stored 180 degrees rotated relative to the world grid:

```text
world page W[row, col] = stored page A[N-1-row, N-1-col]
```

The world atlas therefore packs **row = Z** (`id[0]`) and **column = X**
(`id[1]`). Applying an anti-transpose (transpose plus 180-degree rotation)
instead of a plain 180-degree rotation rotates every cell 90 degrees against
the terrain mesh and produces square-patch seams at cell boundaries.

World-space seam scores (mean squared RGB difference across adjacent cell
borders; lower is better) for the 4x4 `thark04` page atlas:

| Transform | Seam score |
|---|---:|
| identity | 2926.41 |
| rotate 90 | 2524.99 |
| rotate 180 | **216.31** |
| rotate 270 | 2715.79 |
| identity + transpose | 2670.77 |
| rotate 90 + transpose | 1882.97 |
| rotate 180 + transpose (anti-transpose) | 2570.01 |
| rotate 270 + transpose | 1259.76 |

The 180-degree rotation is the best transform (216.31); the anti-transpose is
12x worse (2570.01) and rotates every cell 90 degrees against the terrain
mesh. The 180-degree rotation is the only orientation that makes roads and
terrain features continuous across cell borders.

## 3. Baked page resolution and atlas

`_0_0000` is the level-0 cell page at 256x256. `_1_<xx><yy>` are the four
level-1 quadrants of the same cell, each 256x256, with `xx` the column and
`yy` the row in the stored orientation. Mosaicking the four quadrants gives a
512x512 page with twice the level-0 resolution.

Downsampling the 512x512 mosaic reproduces the `_0_0000` page: mean absolute
difference 0.30/255, maximum 0.75/255, and normalized cross-correlation 1.000
per quadrant. The mosaic is not an upscale: nearest-neighbour upscaling of the
level-0 page leaves a 6.25/255 mean residual.

A world atlas is formed by placing each cell's page (level-0 or the 512x512
level-1 mosaic) in row = Z, column = X order after the 180-degree rotation.
The 4x4 `thark04` atlas is 1024x1024 for level-0 and 2048x2048 for the
level-1 mosaic; the 2x2 `fact02` atlas is 512x512 and 1024x1024 respectively.

FNV-1a (32-bit) over the assembled RGBA atlas:

| Map | Level-0 atlas | Level-1 atlas |
|---|---|---|
| `thark04` | 1024x1024, `83f5cfe2` | 2048x2048, `e1c55e6a` |
| `fact02` | 512x512, `2cdfccce` | 1024x1024, `e643a770` |

## 4. Terrain `.erf` stream and `#RLM` mesh records

The cell `.erf` is a `#FRE` version-14 stream. The first child is a `#RLM`
record at offset 16 that is not a terrain mesh; its payload header does not
match the terrain form (for example, the `thark04` first record ends in
`0xe0`). A zero-size `#RLM` v18 record precedes each mesh record; it is a
separator/header and must be skipped. Terrain mesh records carry
`f1 = 0x4B` and `f2 = 0x6801` and use a five-byte payload header of the form
`[0, vertex_count, 0, 0, 0]`; other `#RLM` records (lights, effects, cameras)
use different payload headers and must not be parsed as terrain.

A terrain `#RLM` version-18 mesh record has this layout. The record's `f2`
field at `+0x10` identifies the node type: `0x6801` is terrain, `0x6701` is a
water surface (section 8), and `0x6606` is the sky node in the mission sky
`.erf` (section 8):

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 4 | signature `#RLM` |
| `+0x04` | 4 | version (18) |
| `+0x08` | 4 | body size in bytes after the 20-byte header; the next record starts at `+0x14 + body_size` |
| `+0x0C` | 4 | record field (for example 75) |
| `+0x10` | 4 | record field (for example `0x6801`) |
| `+0x14` | 5 | payload header `[0, vertex_count, 0, 0, 0]` |
| `+0x19` | `12 * vertex_count` | float32 vertices `(x, y, z)` |
| then | 33 | per-record block (16 distinct values across the 1,806 `thark04` records; not decoded) |
| then | variable | base page name, NUL-terminated: `Maps\<map>\<cell>\<map>_<cell>_0_0000` |
| then | 4 | page word `0x420` |
| then | 4 | index count (multiple of 3) |
| then | `index_count` | one-byte triangle-list indices |
| then | 4 | triangle count |
| then | `16 * triangle_count` | per-triangle `(nx, ny, nz, scalar)` float32 records |
| then | 24 | per-record block (not decoded) |
| then | 4 | detail-name length (35 for `thark04`) |
| then | variable | detail texture name, NUL-terminated: `maps\<map>\<detail>_active` |
| then | 173 | terrain2 manager tail (section 5) |

The vertex array is a convex patch boundary loop, not a strip; the one-byte
triangle index list is the authoritative topology. A record without an index
list can be fanned from its boundary loop, but the shipped records carry the
index list. The vertex array is followed by the 33-byte block in all 1,806
`thark04` mesh records; the block has 16 distinct values across those records
(matching the 16 cells) and is not decoded. The 24-byte block before the
detail-name length is also constant in size and is not decoded.

`thark04` contains 1,806 mesh records with 64,257 source vertices and 78,378
triangles; all 1,806 carry an index list. Expanding the indexed triangles to
per-corner vertices for rendering gives 235,134 vertices. `fact02` contains
373 records with 8,182 source vertices and 9,506 triangles. The terrain Y
range is 58.0..234.7 for `thark04` and 44.1..112.1 for `fact02`.

The records are per-tile submeshes: each 1280-unit cell is split into an 8x8
grid of 160x160 tiles (64 tiles per cell), and a tile often has two records
split by geometry or material with different Y ranges. The cell `.erf` stream
contains the level-2 (highest-detail) tile meshes; it does not contain a
separate near-LOD mesh.

## 5. Terrain2 manager tail

The 173-byte tail after the detail texture name carries the serialized state
of the engine's `MLR_Terrain2` manager:

| Offset | Size | Field |
|---|---:|---|
| `+0x00` | 12 | three zero dwords |
| `+0x0C` | 4 | float32 12.0 |
| `+0x10` | 4 | float32 12.0 |
| `+0x14` | 4 | float32 0.015625 (1/64) |
| `+0x18` | 4 | float32 0.00390625 (1/256) |
| `+0x1C` | 4 | header bytes `[cell_x, cell_y, level_count, level_shift]`; for `thark04` mesh records this is `[tile_x, tile_y, 3, 3]` with `tile_x`/`tile_y` in 0..7 |
| `+0x20` | 128 | eight `(x0, y0, x1, y1)` float32 level rectangles |
| `+0xA0` | 13 | trailer; the manager consumes one discarded dword and one enable byte, and the final 8 bytes are not consumed |

The eight rectangles describe the level-of-detail regions for the tile. Think
of them as nested squares: the higher the level, the smaller and more detailed
the region.

- level 0: the whole 1280x1280 cell;
- level 1: the 640x640 quadrant containing the tile;
- levels 2..7: the 160x160 tile itself.

With `level_count = 3` in the tail header, the manager's active levels are
0..2; the level 3..7 rectangles repeat the level-2 tile rectangle.

For the first tile of cell `AA` (tile 0,0), the rectangles are
`(-2560, -2560, -1280, -1280)` for level 0,
`(-2560, -2560, -1920, -1920)` for level 1, and
`(-2560, -2560, -2400, -2400)` for levels 2..7.

The `MLR_Terrain2` manager (vtable `0x76E858`, type `0x68`, 0x190 bytes) reads
a four-byte header (`cell_x`, `cell_y`, `level_count`, `level_shift`), the
eight cell rectangles, the reciprocal extents, a discarded dword, and an
enable byte. It derives per-level mesh registry keys with
`sprintf("%s_%1d_%02x%02x", base, level, x, y)`, where `base` is the loaded
mesh name with the trailing `_<digit>_<xx><yy>` stripped and
`x = (7 - cell_x) / (1 << (level_shift - level))` (the same for `y`). It then
selects level 0. `select_level` clamps the requested level to `level_count`
and walks down to the nearest level that has a mesh. The constructor is
`0x4487D0`, the factory `0x448C70`, the stream loader `0x448CC0`,
`select_level` `0x448D80`, `set_level_mesh` `0x448E00`, and `map_vertex`
`0x448E40`/`0x448E50`.

Each terrain record carries its own world bounds, material/page, and triangle
count, so records can be batched and culled independently. The eight level
rectangles are the LOD selection input; the manager clamps the requested level
to `level_count` and walks down to the nearest level that has a mesh.

No `base_level_*` member exists in the shipped `core.mw4`, `props.mw4`,
`textures.mw4`, or `maps\<name>.mw4` archives. The keys are runtime registry
names derived from the loaded cell mesh name, not file names.

## 6. Baked lighting and the lightmap atlas

The baked page is pre-lit: `page` is the product of albedo and a per-cell
lightmap. In plain terms, the terrain artist tool took the surface color image
and multiplied it by a lighting image, so the runtime page already looks lit.
The `thark04_lightmap_active.bid` image is a 4x4 atlas of 256x256 per-cell
lighting tiles. Dividing the level-0 page by the matching lightmap
tile gives a world seam score of 0.01, versus 216.31 for the page alone, with
the page using the 180-degree rotation and the lightmap using the identity
orientation in the same cell order.

The terrain records never reference the lightmap; the lightmap is composited
into the page at bake time. The terrain data provides no separate lightmap
binding, so the page is the runtime terrain texture; the faint cell-boundary
lighting differences are part of the baked data, not a runtime projection
error.

The `.bid` layers under `textures\composttexture\` are the source layers used
to compose the page (for example `arctic01_color_snow_active.bid` and
`thark04_mask_grass_active.bid`), not separate runtime terrain passes.

The shared detail texture is `textures\maps\<map>\<detail>_active.tga`, a
256x256 32-bit RGBA image. Its RGB channels are grayish (mean roughly
160..170) and its alpha channel has a mean of roughly 14; the alpha is not a
simple opacity mask. The terrain2 tail carries both 1/64 and 1/256 scales; the
1/64 value is consistent with the detail texture's tiling scale.

## 7. `.bid` image format

The `.bid` files begin with a raw mip 0 image at offset 0:

- **Color pages:** little-endian ARGB1555 (A1R5G5B5), row-major, top-down.
  A 256x256 image is 131,072 bytes of pixels; the shipped color files are
  175,640 bytes including trailing mip/trailer data. `arctic01_color_snow_active`
  decodes to near-white (`0x7FFF`) and `arctic02_color_rock_active` to tan.
- **Lightmaps:** the 1024x1024 `thark04_lightmap_active.bid` starts with a
  2,097,152-byte ARGB1555 mip 0 and is 2,766,872 bytes in total. It decodes
  to a blue-lit snow relief.
- **Masks:** raw 8-bit mip 0. A 256x256 mask is 65,536 bytes of pixels
  (87,820-byte file); a 1024x1024 mask is 1,048,576 bytes of pixels
  (1,052,676-byte file). Examples are `thark04_mask_grass_active`,
  `thark04_mask_dirtroad_active`, `thark04_mask_riversbed_active`, and
  `thark04_mask_toprock_active`.

The trailing bytes are mip and trailer data; sampling mip 0 does not require
decoding them.

## 8. Water and sky

### Water surface records

Water is not a map-wide plane derived from a header field. The cell `.erf`
streams contain explicit `#RLM` v18 records with `f2 = 0x6701`; their
vertices carry the actual water level. A water-surface record has:

| Offset | Size | Field |
|---|---:|---|
| `+0x14` | 5 | payload header `[0, vertex_count, 0, 0, 0]` |
| `+0x19` | `12 * vertex_count` | float32 vertices `(x, y, z)` |
| then | `8 * vertex_count` | float32 `(u, v)` pairs |
| then | 33 | 29-byte material block + 4-byte name length |
| then | variable | water material name, NUL-terminated: `maps\<map>\<water>` |
| then | 4 | material word `0x10` |
| then | 4 | index count (multiple of 3) |
| then | `index_count` | one-byte triangle-list indices |
| then | 4 | triangle count |
| then | `16 * triangle_count` | per-triangle `(nx, ny, nz, scalar)` |
| then | 28 | 24-byte block + 4-byte name length |
| then | variable | water-detail material name: `maps\<map>\<water>_detail` |
| then | 40 | water tail: dword frame count (16), dword 0, dword 0, float 1.0, float 1.0, float UV scroll u (`0.00667` = 1/150 on `carps01`, `0.00500` = 1/200 on `styk01`), float UV scroll v (`0.00167` = 1/600), dword 0, dword 132, dword 1155 (last two not decoded) |

The vertices are a flat or sloped surface. `thark04` and `fact02` contain no
`f2=0x6701` records (no water); `carps01` has 139 surface records (4,448
triangles) all at y=24.0; `jung02` has 32 surface records (1,024 triangles)
all at y=49.0; `styk01` has 303 surface records (9,696 triangles) all at
y=5.0. The `*_underwater_detail_active` records are a separate underwater
layer, not the water surface.

**UVs.** The record UV array is a world-aligned ramp: `u` runs along Z and
`v` along X, with six repeats per 160 m tile (`du = dz * 6/160`,
`dv = dx * 6/160`). The first stored UV is a wrap anomaly at the tile origin;
the remaining values are the same linear ramp. Both the base and detail passes
sample this ramp (a live trace's base UVs are the unshifted 1.5-step grid and
its detail UVs are that grid plus the detail scroll), so sampling with
`vec2(world.z, world.x) * (6/160)` (plus the detail scroll) is equivalent
modulo the 6-unit repeat and is seamless across adjacent records. Rebuilding
the centered ramp from the vertex position also removes the compressed stripe
the stored wrap column would otherwise interpolate at every tile edge.

**Textures and animation.** The base set is
`textures\maps\<map>\<water>NN.tga` (64x64 24-bit in the observed sets; 16
frames per set, `01`..`16`, frame 16 looping to 1); the second material is a
matching `textures\maps\<map>\<water>_detailNN.tga` set (64x64 32-bit RGBA,
16 frames). The tail follows the detail material name: its first dword is the
frame count and the two scroll floats are the per-frame UV scroll increments
(1/150 and 1/600 on `carps01`; 1/200 and 1/600 on `styk01`). The base pass
advances by its frame swap; the detail pass advances by its frame swap plus
the scroll. The 29-byte water material block starts with a float scale of 3.0
(not a UV multiplier: the trace's detail UVs use the same 6/160 ramp). The
per-triangle `(nx, ny, nz, scalar)` is
the water-plane equation: the shipped surfaces use `n = (0, -1, 0)` and
`scalar = -water_level`. The underwater layer's shared detail texture is
`textures\maps\<map>\*_underwater_detail_active.tga` (256x256 RGBA in the
observed sets).

The map definition info file format, written by MapCreator into
`Content\Maps\<name>\`, defines the authoring fields `waterlevel`,
`watertexture`, `underwatertexture`, and `waterdetailtexture`, alongside
`grid`, `cull`, `class`, `texturedata`, `tcffilename`, `HudMap`, `MapCenter`,
`SmoothingPasses`, `PolyCount`, and `DeltaY`. The shipped map archives do not
include this info file; those fields are authoring metadata, and the runtime
water surface geometry and level are the cell `.erf` records above. The
map-info schema also registers `WaterSpecularFactor`, `WaterSpecularPower`,
`WaterAtNightSpecularFactor`, `WaterAtNightSpecularPower`, and
`IsNightMission` (EXE string table `0x77556c`..`0x7755c8`); these are
authoring values and are absent from the shipped map archives. For
`thark04`, the float at `+0x24` of the first `#RLM` child record is not a
water level: it varies per cell (for example 81.55 for `AA`, 72.32 for `AB`,
and 0.0 for `BC`) and does not define a map-wide water plane. The `_1_0000`
page is a level-1 texture quadrant, not a water texture.

Water rendering uses `MLR_Water` (vtable `0x36E13C`) and `MLR_BumpyWater`
(vtable `0x36DE4C`); the bumpy-water constructor is `0x424170`, the
render/lightmap vertex transform is `0x42C2C0`, and the lightmap lighting pass
is `0x4276E0`.

A live device trace of the shipped water draws shows the surface is submitted
as `FVF 0x1C4` (XYZRHW | DIFFUSE | SPECULAR | TEX1) in two passes:

| Pass | Stage 0 | Stage 1 |
|---|---|---|
| base | `COLOROP/ALPHAOP = MODULATE` (D3DTOP 4), args `(TEXTURE, DIFFUSE)` | disabled |
| detail | same stage 0 state | disabled |

Both passes use `SRCALPHA/INVSRCALPHA`, depth test `LESSEQUAL` with z-write
off, alpha test `NOTEQUAL 0`, and fog enabled with color `0x00EFEAEF`. The
base pass's vertex diffuse is white and its specular is 0 (no fog); its UVs
are the unshifted record ramp. The detail pass's diffuse alpha is observed
`~0x72..0xd1`, its specular alpha carries the per-vertex fog factor
(`~0x81..0xbf`), and its UVs are the same record ramp plus the tail scroll
(not cell page UVs). The texture transforms are identity. The underwater
detail draws use `SRCALPHA/ONE` (additive). The base and detail textures are
separate 16-frame sets, and different tiles can use different frames in the
same frame (observed base frames `01/06/07/11/12` and detail frames
`02/04/06/13/16`), i.e. the animation phase is per batch; the batch grouping
rule is not decoded.

### Sky sets

The map archive stores five sky faces per variant:
`textures\sky<prefix>{f,u,l,b,r}<variant>.tga`, where `f/u/l/b/r` are front,
up, left, back, and right. The observed mission sky nodes reference variant 1;
variants 2..5 are alternate sets. The sides are usually 256x256 and the up
face may be 512x512 (for example `fact02`'s `skyfcu1` is 512x512 while
`skyfcf1` is 256x256); the TGA may be RLE-compressed.

The mission archive contains the sky node in
`skies\<sky>_sky\<name>.erf`. Its `#RLM` record has `f2 = 0x6606`; versions 17
and 18 are observed. Version 17 stores indices as u16, version 18 as u8. The
node has an 8-vertex box and a material list in the order `sky<prefix>f1`,
`sky<prefix>u1`, `sky<prefix>l1`, `sky<prefix>b1`, `sky<prefix>r1`,
`sky<prefix>f1`; the bottom face reuses the front texture. The front face uses
the node's 8 vertices with 8 UVs and 12 indices (four triangles); the
up/left/back/right/bottom faces each store four local vertices, four UVs and
six indices. A side/up/bottom block contains `u32 0x66`, `u32 4`, four float3
vertices, `u32 4`, then four UV pairs; the front block stores its eight UVs
directly after the node vertices. The map archive contains the texture faces;
the mission archive selects the set.

A mission can carry both a day node and a `*night*.erf` node (for example the
`carps01` sky nodes ship `arctic01_sky.erf` using `skya1*` and
`arctic03_sky_night.erf` using `skyna3*`). The chosen node's material names map
directly to `textures\<name>.tga`, so the mission node is the exact selector.
Not every referenced set is present in every install: `jungle02`'s
`jung03_sky.erf` names `skyjg3r0`/`skyjg3u0`, while the `jung02` map archive
ships only `skyjgf*`/`skyjgu*`; a consumer must fall back to a set whose five
textures all exist.

The 8-vertex template is identical across missions apart from a uniform
scale (`10.02` for `thark04`, `9.94` for the `carps01` day sky, `125.0` for
the `carps01` night sky): four horizon corners, a nadir point at -scale/4,
and two top-back corners. The front face's eight UVs are `(1,1)`, `(0.5,1)`,
`(0,1)`, `(0,1)`, `(0,1)`, `(1,1)`, `(0,0)`, `(1,0)`; the side/up faces use
a full quad (`(0,1)`, `(1,1)`, `(0,0)`, `(1,0)`), and the bottom uses
`(0.5,1)`, `(1,1)`, `(1,1)`, `(0,1)`.

The retail draw submits the node as pre-transformed `XYZRHW` triangles (FVF
`0x1C4` = XYZRHW | DIFFUSE | SPECULAR | TEX1). A live vertex dump of the day
`skysk1` set on a 1280x1024 backbuffer resolves the transform: the
front/right corner lands at `(536.6, 512.0)` with `rhw = 0.071`, the visible
front-face UV range is `u = 0.698..1`, and the visible right-face range is
`u = 0..0.398`. The corner is 45 degrees from the box front and
`rhw = 1/view-depth`, so the node is a **camera-centred perspective box**
whose position follows the camera but whose orientation stays world-fixed
(the box does not rotate with the camera). Solving the four corner depths
gives an isotropic focal length of about 1185 px (about 47 degrees vertical
FOV) and a level camera in that capture; the screen positions are ordinary
perspective projections of the node vertices, clipped to the viewport. The
box front is 2:1 wide relative to tall, so a 256x256 face is stretched 2:1
horizontally at the face center. The painted moon's on-screen shape therefore
depends on where it sits on the face: `skyna3f1` paints a tall vertical oval
(bright core about 6x21 px) near the front-face center, so it stays tall; the
`trop02` set paints a round moon split across the front/right face boundary
(a half-disc at each edge, about 10x30 texels per half), and the perspective
box's local texel aspect at that boundary is about 1.4:1, so the two halves
join as a round disc. A map-archive set with no mission `.erf` node (for
example `trop02`) is drawn with the engine's built-in box: the same
camera-centred geometry with a 4-vertex front/up/left/back/right face and the
below-horizon bowl, each face sampling its 256x256 (or 512x512 up) texture
over `u,v = 0..1`. An earlier reading of the same `XYZRHW` stream as a flat
screen-space backdrop with a 28.8-degree side band and a ~3.1:1 horizontal
stretch is superseded by the vertex data. The face boundaries are texture
seams in the shipped art.

## 9. Engine terrain render path

The terrain family is split across three classes:

- `MLRLineCloud` (`0x76E808`, type `0x69`, 0xA4 bytes): cell/line terrain
  node;
- `MLRIndexedTriangleCloud` (`0x76E7C4`, type `0x6A`): live in-mission
  terrain mesh;
- `MLR_Terrain2` (`0x76E858`, type `0x68`, 0x190 bytes): stream-loaded
  terrain manager.

The terrain manager constructor is `0x4487D0`; its factory is `0x448C70`;
the streamed terrain node is `0x445320`; the render/cull path is `0x447040`.
The cull matrix is copied from the camera source into the terrain object at
`+0x54`; the cull pyramid is fixed at 45 degrees and is not recomputed from
the surface aspect ratio. The terrain material index is read from the base
chain's `+0x2C`, not from the detail constructor argument.

The MLR lightmap path is the render/lightmap vertex transform `0x42C2C0`
(lightmap perspective divide) and the `LightMapLighting` pass `0x4276E0`.
The terrain records themselves reference only the baked page and the shared
detail texture.

The in-mission 3D path transforms and lights vertices in the MLR and submits
pre-transformed `XYZRHW` vertices (FVF `0x1C4`/`0x2C4`) to the device. The D3D7
fog factor is written into the specular alpha; the terrain page is pre-lit, so
the terrain pass does not re-light its triangle normals. See
[Scene Construction and Object Rendering](scene_rendering.md#6-terrain-rendering).

## 10. Verification summary

| Property | `thark04` | `fact02` |
|---|---:|---:|
| Cells | 16 (4x4) | 4 (2x2) |
| Terrain mesh records | 1,806 | 373 |
| Source vertices | 64,257 | 8,182 |
| Triangles | 78,378 | 9,506 |
| Per-corner render vertices | 235,134 | 28,518 |
| Terrain Y range | 58.0..234.7 | 44.1..112.1 |
| Indexed records | 1,806 / 1,806 | 373 / 373 |
| Level-0 atlas | 1024x1024, `83f5cfe2` | 512x512, `2cdfccce` |
| Level-1 atlas | 2048x2048, `e1c55e6a` | 1024x1024, `e643a770` |

The seam scores, page hashes, and record counts above are reproducible from
the shipped map archives; they are data-derived, not renderer-dependent.

Water and sky checks on other shipped maps: `carps01` has 139 water-surface
records (4,448 triangles) all at y=24.0; `jung02` has 32 water-surface records
(1,024 triangles) all at y=49.0; `thark04` and `fact02` have no water-surface
records. Sky sets observed: `thark04` `skyth4`, `fact02` `skyfc` (256x256
sides, 512x512 up), `carps01` `skya1`, `jung02` `skyjg`.
