# Render Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2708 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Owns the MidLevelRenderer (MLR) scene pipeline and the D3D7 immediate-mode device boundary. It turns game state into sorted draw records, evaluates animation and lighting, streams terrain and textures, and hands final primitives to the device and present paths.

## Role and boundary

The render subsystem is the EXE's MidLevelRenderer plus the D3D7 immediate-mode
device layer. It consumes scene nodes, camera state, animation, lighting, and
terrain/texture data, produces sorted draw records, and submits primitives to
the device. It does not own the DirectDraw proxy (`blade.dll`); blade provides
the surface/facade, while this subsystem owns the scene and draw pipeline above
it.

The MLR is not a single class. It is a class hierarchy with several vtable
families and four large per-node-type dispatch tables. The main families are:

- `MLRPrimitiveBase` and `MLRIndexedPrimitiveBase` (vtable `0x36F628`, 39
  slots), plus `MLRShape`, `MLRCulturShape`, `MLREffect`, `MLRSorter`,
  `MLRClipper`, `MLRTexture`, `MLRTexturePool`, `MLRLightMap`, and
  `MLRMovieTexture`.
- Twenty indexed mesh variants (`MLR_I_<C|L|DT|DeT>_P/TMesh` and the
  `MLR_I_TMesh`/`MLR_I_PMesh` bases) at vtables `0x36E330`-`0x36F4FC`, with
  41-45 slots each. The name encodes cull, light, and detail-texture flags.
- Cloud families: `MLRPointCloud`, `MLRCardCloud`, `MLRNGonCloud`,
  `MLRTriangleCloud`, `MLRLineCloud`, `MLRSpriteCloud`, `MLRFootStep`, and
  `MLRIndexedTriangleCloud`.
- Light families: `MLRLight`, `MLRAmbientLight`, `MLRInfiniteLight`,
  `MLRPointLight`, `MLRCenterPointLight`, `MLRSpotLight`, `MLRProjectLight`,
  `MLRShadowLight`, and `MLRLookUpLight`.
- Water: `MLR_Water` (vtable `0x36E13C`) and `MLR_BumpyWater`
  (vtable `0x36DE4C`).
- Terrain: `MLRLineCloud` (vtable `0x76E808`, type `0x69`),
  `MLRIndexedTriangleCloud` (vtable `0x76E7C4`, type `0x6A`), and
  `MLR_Terrain2` (vtable `0x76E858`, type `0x68`).
- Device/camera/manager: the MLR device at `0x772994`/`0x7729A0`, the terrain
  manager at `0x7708AC`, and the `MLR::Terrain2` class descriptor.

The four dispatch tables at `0x3B3270` (143 entries), `0x3B34B0` (210),
`0x3B3800` (71), and `0x3B3920` (226) map node types to update/render
methods. They contain repeated paired entries and are the main path by which
terrain and mesh methods are reached.

## Frame flow

The per-frame MLR update occupies `0x0049622B`-`0x00496C71`; `0x00496280` is a
commonly cited interior point. The flow is:

```text
device per-frame update (0x0049622B)
    -> camera update + visibility traversal (0x00494440)
    -> per-node setup (0x004941D0)
    -> node dispatch through the 0x3B3270/0x3B34B0/0x3B3800/0x3B3920 tables
    -> per-node update/render methods (terrain, mesh, clouds, lights, sorter)
```

The camera source is assembled from the main camera's projection echoes. The
camera-source copy `FUN_00446ED0` copies near/far/fov/cull fields from
`[arg+0x28..0x68]`; the cull matrix is at `+0x28` and is copied as 16 dwords
into `[terrain+0x54]`. The terrain render `FUN_00447040` culls by a six-bit
outcode on transformed corners; the reference pyramid is a fixed 45-degree
pyramid (`tan 45 = 1`), matching the 4:3 horizontal field of view.

The lens builders `FUN_004F03C0`/`FUN_004F04A0` derive the horizontal and
vertical lens edges from the camera region. The camera element update
`FUN_004C35B0` composes the view matrix and transforms the six sub-elements;
`FUN_004C40E0` builds the tan-frustum head. The camera-element family at
`0x4C32D0`-`0x4C46B0` supplies the state machine, primitives, and view setup.

## Geometry and animation

The `mesh` detail contains the primitive-base and indexed mesh families. The
PMesh construction chain includes `0x47A680`/`0x47A4C0`, the PMesh base at
`0x47FEC0`, the build path `0x47FB90`, and the indexed-base helpers
`0x480890`/`0x480AB0`/`0x47FE80`/`0x480A20`/`0x4801F0`. The stream loader is
`0x47AC10`; the per-frame update is `0x47ADA0`. Geometry builders include the
vertex-list bounds/self-intersection test `0x47CFE0`, the vector store
`0x47EC00`, and the cube builder `0x47EC20`.

The `animation` detail evaluates curves and feeds node transforms. The scene
record producers (`0x48E890` for the scene-element record path and `0x48DD20`
for the rich-record path) turn node state into render records. The `vertex`
detail handles vertex buffers, transforms, and interpolation.

## Lighting

The `lighting` detail covers the light classes, light maps, and light-slot
selection. `FUN_00434D00` computes light-map color; `FUN_004906F0` registers and
creates lights; `FUN_00430F10` builds the lookup-light table. The light-slot
array is used by the draw driver:

- `0x48AA60`, `0x48ABF0`, `0x48AD90`, and `0x48B230` manage the slot records.
- The drawable method table at `0x7B2450` has ten entries
  (`0x4897A0`, `0x4897D0`, `0x489820`, `0x489970`, `0x4899A0`, `0x489A00`,
  `0x489E70`, `0x48A420`, `0x48A440`, `0x48A460`).
- The context vtable is at `0x76FCF8`.

The reference chooses which light-slot records reach the device per frame; that
selection is part of the draw pipeline, not the light-object constructors.

## Draw submission and device

`FUN_00488BB0` is the draw submission driver. `FUN_004887C0` is the context
notify. The driver walks the drawable records, selects the light-slot records,
and dispatches through the drawable table.

The D3D7 immediate-mode wrappers are at `0x713A70`-`0x713C80`, with the
dispatcher `0x713CC0` and flush `0x713DE0`. These wrappers translate the MLR
submission into device calls; the device state cache owns the current
primitive/texture/render-state bindings. The present/blit handoff is
`0x004B6C10`; display-mode normalization and backbuffer setup are
`0x0070A6A0` and `0x0070B6C0`.

The `2d` detail draws screen-space clouds, sprites, and HUD-adjacent primitives.
The `font` detail (`0x6CB0E0` family) renders glyphs and log text.

## Terrain

The terrain family is split across three classes:

- `MLRLineCloud` (`0x76E808`, 7 slots) is the `0xA4`-byte cell/line terrain
  node, type `0x69`.
- `MLRIndexedTriangleCloud` (`0x76E7C4`, 8 slots) is the live in-mission
  terrain mesh, type `0x6A`.
- `MLR_Terrain2` (`0x76E858`, 42 slots) is the `0x190`-byte stream-loaded
  terrain manager, type `0x68`.

The terrain manager constructor is `0x4487D0`; its factory is `FUN_00448C70`. The streamed terrain node is
`FUN_00445320`; the render/cull path is `FUN_00447040`. The cull matrix is
copied from the camera source at `+0x54`, and the terrain material index is
read from the base chain's `+0x2C` (the detail argument is not the material
index).

The mesh builders under `MLRIndexedTriangleCloud` use the shared
`MLRTriangleCloud` base and the cloud/primitive constructors. Terrain streaming
uses the `MLR_Terrain2` manager's node list and the camera's cull matrix; the
fixed 45-degree cull pyramid is the reason a widened horizontal field of view
needs a corresponding side-plane update.

## Textures and image tables

The `texture` detail covers `MLRTexture`, `ImageInstance`, `MLRLightMap`, the
image table, and the TGA/BMP/GAF codecs:

- image-instance lookup `0x48FAC0`, allocation `0x48F380`/`0x48F830`/
  `0x48F640`, and dispatch `0x48F9E0`;
- image-table constructor `0x6D00F0`;
- pixel-format conversion `0x6C8CF0`, cache LRU eviction `0x6CA9A0`;
- TGA decoder `0x72E000`, BMP decoder `0x7362D0`;
- loaders `0x6C8B90`/`0x6C8C40`/`0x6C8AE0`; GAF loader `0x6C9920`;
- texture manager lookup `0x717A10` and load/create `0x753CC0`.

The decoders produce BGRA surfaces; the cache and blitter handle the
16/24/32-bit formats and the GAF frame variants. The texture manager's cache
record stores width/height at `+0x00`/`+0x02`, the system-memory surface at
`+0x08`, the D3D surface at `+0x10`, and the owned name copy at `+0x14`.

## Materials, effects, water, and clouds

The `material` detail covers the material base and constructors, versioned
stream loading, per-material and list serialization, and the scale-factor
helpers. The `effect` family covers `MLRShape`, `MLRMovieTexture`,
`MLRCulturShape`, the shape-node constructor, effect-buffer append, and the
effect factory.

Water uses `MLR_Water` and `MLR_BumpyWater`. The bumpy-water constructor is
`0x424170`; the render/light-map vertex transform is `0x42C2C0`; the
light-map lighting pass is `0x4276E0`.

Clouds use the standalone constructors: point `0x486450`, sprite quad
`0x42A3A0`, ngon `0x4848C0`, affine compose `0x42B5A0`, and the card-cloud
constructor `0x4A4E50`. The sprite quad is two triangles with UV pairs
`01/23/45` and `01/45/67`.

## Invariants and failure modes

- The renderer requires a valid camera/frustum region; a missing or stale
  camera source produces incorrect culling and projection.
- The terrain cull matrix at `+0x54` is a copy of the camera source's 16-dword
  matrix; changing the camera field of view without updating the side planes
  causes edge pop-in.
- The terrain material index is the base chain's `+0x2C`, not the detail
  constructor argument.
- Draw records are selected per frame from the light-slot array; the drawable
  method table is indexed by record type.
- The device wrappers require the BeginScene state to be active; they do not
  validate caller arguments.
- Texture formats must match the surface's pixel format; the decoders and
  blitter assume the documented BGRA/TGA/BMP layouts.
- The mesh family's flag combinations select different vtables and cull/light
  paths; a mismatched class reads the wrong slots.
- The camera lens builders derive the horizontal and vertical edge pairs from
  the camera configuration; the reference projection is fixed to the 4:3
  horizontal field of view and is not derived from the surface aspect.
- The terrain cull pyramid is fixed at 45 degrees; it is not recomputed from
  the surface aspect.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0049622B` | frame | per-frame MLR update |
| `0x00494440` | camera | camera update and visibility traversal |
| `0x004941D0` | camera | per-node camera setup |
| `0x004C35B0` | camera | camera-element update |
| `0x004C40E0` | camera | tan-frustum head |
| `0x00446ED0` | terrain | camera-source cull matrix copy |
| `0x00447040` | terrain | terrain render/cull |
| `0x00448C70` | terrain | terrain manager factory |
| `0x00445320` | terrain | streamed terrain node |
| `0x00488BB0` | draw | draw submission driver |
| `0x004887C0` | draw | context notify |
| `0x0048E890` | records | scene-record producer |
| `0x0048DD20` | records | rich-record producer |
| `0x00713A70` | device | D3D7-IM primitive submit |
| `0x00713C80` | device | batched primitive submit |
| `0x00713CC0` | device | device dispatcher |
| `0x00713DE0` | device | device flush |
| `0x004B6C10` | present | present/blit handoff |
| `0x0070A6A0` | display | resolution/display normalizer |
| `0x0070B6C0` | display | backbuffer/surface setup |
| `0x006C8AE0` | texture | texture decode/cache |
| `0x006C8B90`/`0x006C8C40` | texture | surface loaders |
| `0x006C9920` | texture | GAF loader |
| `0x006D00F0` | texture | image-table constructor |
| `0x00717A10` | texture | texture-manager lookup |
| `0x00753CC0` | texture | texture-manager load/create |
| `0x006CB0E0` | font | glyph/log-text rendering |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 1110 | Rendering helpers not assigned to a narrower render detail. |
| animation | 521 | Animation state, curves, and the animation/render bridge. |
| mesh | 364 | Mesh, primitive-base, and indexed mesh families. |
| lighting | 170 | Light objects, light maps, and light-slot selection. |
| camera | 129 | Camera projection, frustum, view setup, and visibility traversal. |
| texture | 129 | Texture decode, cache, pool, and upload. |
| present | 89 | Present/blit/flip and display-surface handoff. |
| 2d | 49 | In-mission 2D clouds/sprites and screen-space drawing. |
| device | 42 | D3D7-IM device wrappers and submission objects. |
| terrain | 37 | Streamed terrain manager, terrain nodes, and terrain mesh building. |
| display | 19 | Resolution/display-mode normalization and backbuffer setup. |
| vertex | 14 | Vertex buffers, transforms, and interpolation. |
| draw | 12 | Draw submission, sorting/clipping, and the drawable table. |
| records | 12 | Scene-record producers and rich record builders. |
| font | 9 | Font/log-text glyph rendering. |
| frame | 2 | Per-frame renderer update and node dispatch. |

## Coverage

All 2708 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence. 146 are shared ([shared.md](shared.md#render)). 316 are outbound boundary calls ([SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md)).
