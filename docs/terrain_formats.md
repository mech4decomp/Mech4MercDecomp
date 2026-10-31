# Terrain Rendering and Map Asset Formats

This page records the map/terrain data formats and the engine's terrain
rendering behavior, derived from the shipped `Resource\Maps\*.mw4` archives
and the `MW4Mercs.exe` MidLevelRenderer (MLR) terrain code. Byte offsets are
relative to the start of the named record unless stated otherwise. The
examples use `thark04.mw4` (16-cell alpine map) and `fact02.mw4` (4-cell flat
map).

The render subsystem's VA inventory is in [Render](subsystems/render.md); this
page is the data-format companion.

## 1. Map archive contents

A shipped map is a `#VBD` version-4 archive. Its members follow the map's
cell grid and texture tree:

| Member pattern | Meaning |
|---|---|
| `maps\<name>\<cell>.material` | 256x256 byte material-index map (65,536 bytes) into the `.fgd` palette |
| `maps\<name>\<cell>.erf` | terrain mesh stream (`#FRE` v14 with `#RLM` v18 children) |
| `maps\<name>\<cell>.bsp` | collision/BSP data for the cell |
| `maps\<name>\<name>.erf` | root terrain stream (52 bytes for `thark04`) |
| `maps\<name>\<name>.fgd` | terrain material palette (14,361 bytes for `thark04`, 8,155 for `fact02`) |
| `maps\<name>\<name>.instance` | instance/zone metadata (100 bytes for both maps) |
| `textures\maps\<name>\<cell>\<name>_<cell>_0_0000.tga` | level-0 baked cell page, 256x256 24-bit RGB |
| `textures\maps\<name>\<cell>\<name>_<cell>_1_<xx><yy>.tga` | level-1 baked cell quadrant, 256x256 24-bit RGB, `xx`/`yy` in 0..1 |
| `textures\maps\<name>\<detail>_active.tga` | shared detail texture, 256x256 32-bit RGBA |
| `textures\composttexture\<name>_lightmap_active.bid` | per-cell lightmap atlas (1024x1024 for `thark04`) |
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
`0xe0`). Terrain mesh records use a five-byte payload header of the form
`[0, vertex_count, 0, 0, 0]`; other `#RLM` records (lights, effects, cameras)
use different payload headers and must not be parsed as terrain.

A terrain `#RLM` version-18 mesh record has this layout:

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

The vertex array is followed by the 33-byte block in all 1,806 `thark04` mesh
records; the block has 16 distinct values across those records (matching the
16 cells) and is not decoded. The 24-byte block before the detail-name length
is also constant in size and is not decoded.

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

The eight rectangles describe the level-of-detail regions for the tile:

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

No `base_level_*` member exists in the shipped `core.mw4`, `props.mw4`,
`textures.mw4`, or `maps\<name>.mw4` archives. The keys are runtime registry
names derived from the loaded cell mesh name, not file names.

## 6. Baked lighting and the lightmap atlas

The baked page is pre-lit: `page` is the product of albedo and a per-cell
lightmap. The `thark04_lightmap_active.bid` image is a 4x4 atlas of 256x256
per-cell lighting tiles. Dividing the level-0 page by the matching lightmap
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

## 8. Water metadata

The map definition info file, written by MapCreator into
`Content\Maps\<name>\`, carries the water fields: `waterlevel`,
`watertexture`, `underwatertexture`, and `waterdetailtexture`, alongside
`grid`, `cull`, `class`, `texturedata`, `tcffilename`, `HudMap`, `MapCenter`,
`SmoothingPasses`, `PolyCount`, and `DeltaY`. The shipped map archives do not
include this info file, so the water level and water textures cannot be
recovered from a `Resource\Maps\<name>.mw4` archive alone.

For `thark04`, the float at `+0x24` of the first `#RLM` child record is not a
water level. It varies per cell (for example 81.55 for `AA`, 72.32 for `AB`,
and 0.0 for `BC`) and does not define a map-wide water plane. The `_1_0000`
page is a level-1 texture quadrant, not a water texture.

Water rendering uses `MLR_Water` (vtable `0x36E13C`) and `MLR_BumpyWater`
(vtable `0x36DE4C`); the bumpy-water constructor is `0x424170`, the
render/lightmap vertex transform is `0x42C2C0`, and the lightmap lighting pass
is `0x4276E0`.

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
