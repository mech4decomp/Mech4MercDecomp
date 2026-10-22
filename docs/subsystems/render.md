# Render Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2708 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Owns the MidLevelRenderer (MLR) scene pipeline and the D3D7 immediate-mode device boundary. It turns game state into sorted draw records, evaluates animation and lighting, streams terrain and textures, and hands final primitives to the device and present paths.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The frame path starts at 0x00496280, which walks the active scene nodes and updates their render records. Camera and visibility code at 0x004C35B0 and 0x004C40E0 builds the view/frustum used by the traversal.

Geometry families under `mesh` and `vertex` build buffers and transforms. The `animation` detail evaluates curves and feeds node transforms; `lighting` selects light slots and light maps; `terrain` streams terrain nodes; `texture` decodes, caches, and uploads surfaces.

`draw` sorts and clips records and dispatches through the drawable table. `device` wraps the D3D7-IM calls at 0x00713A70-0x00713C80; `present` and `display` handle backbuffer and resolution changes; `2d` and `font` draw screen-space clouds, sprites, and glyphs.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00496280 | frame | per-frame renderer update and node dispatch |
| 0x00488BB0 | draw | draw submission driver |
| 0x004C35B0 | camera | camera/view setup |
| 0x004C40E0 | camera | visibility traversal |
| 0x00713A70 | device | D3D7-IM primitive submit |
| 0x00713C80 | device | batched primitive submit |
| 0x004B6C10 | present | present/blit handoff |
| 0x006C8AE0 | texture | texture decode/cache |
| 0x00445320 | terrain | streamed terrain node |
| 0x006CB0E0 | font | font/log-text glyph rendering |
| 0x0070A6A0 | display | resolution/display normalizer |

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

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

**Shared VAs:** 146. They are described once in [shared.md](shared.md#render); this page does not repeat the list.

**Boundary VAs:** 316 outbound calls. The full table is in [SUBSYSTEM_SEAMS.md](../SUBSYSTEM_SEAMS.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
