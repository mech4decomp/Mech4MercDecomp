# blade.dll

> **Classified VAs:** 739 | **Exhaustive index:** [blade.dll](../va_index/blade_dll.md)

DirectDraw proxy DLL with COM exports, a large facade state machine, caps/accessor wrappers, and a software rasterizer.

## Role and boundary

`blade.dll` is a DirectDraw proxy. It exports the same factory and enumeration
entry points as `ddraw.dll`, loads the real `ddraw.dll` lazily, and hands the
game layered COM wrapper objects. The game therefore talks to blade as if it
were DirectDraw, while blade owns the surface/device facade and the software
renderer behind it.

The module is not a thin pass-through. It contains:

- a 0x34-byte multi-interface COM wrapper allocated by the factory exports;
- a large facade/render-state object of roughly 0x4900 bytes;
- a software rasterizer with transform, lighting, clipping, and scanline
  writers;
- caps/format computation and accessor families;
- a statically linked CRT and a small set of `E_NOTIMPL` stubs.

The renderer is the main body of real code. The CRT, stubs, and pure forwarding
functions are secondary; the module's behavior is defined by the facade and
the raster path.

## Exports

The export table occupies the low part of the module's `.text` and is ordered
to shadow DirectDraw:

| VA | Export | Role |
|----|--------|------|
| `0x5E001000` | `entry` | DllMain-style dispatcher |
| `0x5E001040` | `DirectDrawCreate` | COM factory and wrapper construction |
| `0x5E0011C0` | `DirectDrawCreateEx` | extended COM factory |
| `0x5E0013C0` | `DirectDrawCreateClipper` | forward to the real DLL or fail |
| `0x5E0013F0` | `DirectDrawEnumerateW` | forward to the real DLL |
| `0x5E001420` | `DirectDrawEnumerateA` | forward to the real DLL |
| `0x5E001450` | `DirectDrawEnumerateExW` | forward to the real DLL |
| `0x5E001480` | `DirectDrawEnumerateExA` | repackage and call the ANSI enumerator |
| `0x5E010480` | `GetDXVB` | look up a DXVB registry node |

`entry` handles three cases: argument `0` frees the loaded real `ddraw.dll`,
argument `1` stores the module instance handle, and any other value returns
`1`. The enumerators return `0xFFFFFFFF` when the corresponding real entry
point is not available. `DirectDrawEnumerateExA` is not a pure forward: it
rebuilds the argument list and installs its own callback before calling the
ANSI enumerator.

## Lazy DirectDraw loading

`FUN_5E001510` loads `ddraw` with `LoadLibraryA` when the module handle is
still NULL, then resolves seven entry points with `GetProcAddress`. The
results live in a DDI block at `0x5E03A4A0`:

| Offset | Value |
|--------|-------|
| `+0x00` | blade module instance |
| `+0x04` | real `ddraw.dll` module handle |
| `+0x08` | `DirectDrawCreate` |
| `+0x0C` | `DirectDrawCreateClipper` |
| `+0x10` | `DirectDrawEnumerateW` |
| `+0x14` | `DirectDrawEnumerateA` |
| `+0x18` | `DirectDrawEnumerateExW` |
| `+0x1C` | `DirectDrawEnumerateExA` |
| `+0x20` | alternate `DirectDrawCreateEx` |

The loader succeeds only when the first four entry points resolve. If they do
not, it frees the real module and returns failure. The factories call the
loader on every invocation; once the block is populated the call is cheap.

## The 0x34-byte COM wrapper

`DirectDrawCreate` allocates a 0x34-byte object and installs six vtable
pointers at `+0x00` through `+0x14`. This is a single object exposed as six
interface identities, not six separate objects. The same layout carries:

| Offset | Meaning |
|--------|---------|
| `+0x18` | COM pointer supplied to or returned by the factory |
| `+0x20` | inner real `IDirectDraw` |
| `+0x24` | QI result slot |
| `+0x28` | QI result slot |
| `+0x2C` | QI result slot |
| `+0x30` | spare/zero |

`DirectDrawCreateEx` uses an alternate vtable set and an alternate sub-object
layout, but follows the same pattern: validate the interface id, call the real
factory or the alternate entry, and wire the inner object and QI slots. A
failed real call deletes the wrapper and returns `0x80004005`.

The QI dispatcher `FUN_5E00ECF0` compares the incoming GUID against a table of
blade interface ids and, on a match, AddRefs the object and returns a
sub-interface view at one of the six vtable slots. On a miss it returns
`E_NOINTERFACE`. This is how one allocation answers as multiple DirectDraw
interfaces.

## Facade and render state

The facade constructor `FUN_5E002430` allocates the render-state object. Its
declared part is 448 bytes, but the object owns a buffer of roughly 0x4900
bytes. The constructor:

- installs the primary and secondary vtables;
- zeroes the large member arrays;
- constructs four embedded state sub-objects at `+0x400C`, `+0x41F4`,
  `+0x427C`, and `+0x4304`;
- initializes the four 4x4 matrices at `+0x438C`, `+0x43CC`, `+0x440C`, and
  `+0x444C` to identity;
- copies a 0x98-dword caps/config template from `0x5E038158`;
- sets the refcount at `+0x41F0` to one.

The state object's important fields include:

| Offset | Meaning |
|--------|---------|
| `+0x4018`/`+0x401C` | surface width/height (floats) |
| `+0x4058` | format flag |
| `+0x405C`/`+0x4060` | bytes-per-pixel and shift selectors |
| `+0x4068`/`+0x406C` | render-driver function slots |
| `+0x4070`/`+0x4074` | log2 strides |
| `+0x4078`/`+0x407C` | surface width/height as floats |
| `+0x41F0` | facade refcount |
| `+0x426C` | current attached surface |
| `+0x4270` | float-coordinate path flag |
| `+0x4274` | pixel-format code (`0x22B`, `0x235`, or `0x613`) |
| `+0x4384` | BeginScene state (`-1` uninitialized, `0` in scene) |
| `+0x438C`-`+0x444C` | four 4x4 matrices |
| `+0x448C`-`+0x450C` | matrix work areas |
| `+0x45A8` | state flags word |
| `+0x45AC` | 0x98-dword caps/config array |
| `+0x4810` | 0x19-dword color/state array |
| `+0x4874` | BeginScene guard (bit 2 = active) |

The four embedded sub-objects share a common shape: a COM sub-object pointer
at `+0x7C`, an acquire flag at `+0x80`, a pixel-format match at `+0x84`, and
a function-pointer slot at `+0x60`. They are acquired and released by the
BeginScene/EndScene path.

### BeginScene, EndScene, and surface attachment

`FUN_5E002020` is `BeginScene`. It checks the `+0x4874` guard, acquires the
embedded sub-objects, synchronizes the geometry state, pushes four
configuration dwords into the caps sub-object, and chains through the
sub-object's vtable. `FUN_5E002120` is `EndScene`: it releases the sub-objects,
clears the guard, and pushes a sentinel value through the caps setter on
success.

`FUN_5E0026A0` attaches a surface. It queries the input surface, builds the
attach record, validates the pixel format at `+0x4274`, installs the
render-driver slots, and calls the attach-state writer `FUN_5E01E730`.
`FUN_5E002B70` performs texture/surface setup: it validates the input, stores
the float dimensions, computes log2 strides, and calls the format writer
`FUN_5E01E7B0`.

Caps are accessed through the indexed pair `FUN_5E003750` (get) and
`FUN_5E003780` (set) over the `+0x45AC` array. Index `0x15` selects the
pixel-format pattern, and index `0x8B` sets a flag byte. Matrix access goes
through `FUN_5E005590` (set), `FUN_5E005630` (get), and `FUN_5E0056B0` (fill).

## The software rasterizer

The two master draw entries are:

```text
FUN_5E0057C0(this, primType, fmt, srcVerts, count, flags)
    __stdcall, RET 0x18

FUN_5E0093A0(this, primType, fmt, srcVerts, primCount,
             idxBuf, idxCount, flags)
    __stdcall, RET 0x20
```

Both require an active BeginScene (`this + 0x4874 & 2`); otherwise they emit a
debug string and return `0x80004005`. They pin the FPU rounding mode, switch on
the FVF format and primitive type, transform the vertices into a 13-float
working record, and dispatch each primitive to the fast or clipped path.

Primitive types are `1` point list, `2` line list, `3` line strip, `4`
triangle list, `5` triangle strip, and `6` triangle fan. Any other value
returns `E_NOTIMPL`.

The FVF formats select the source layout:

| FVF | Source stride | Layout/path |
|-----|---------------|-------------|
| `0x112` | 8 floats | xyz + normal + tu/tv; lit path |
| `0x116` | 8 floats | same as `0x112`; indexed entry only |
| `0x1C2` | 7 floats | xyz + w + diffuse + specular + tu; copy path |
| `0x1C4` | 8 floats | D3D TLVERTEX; already transformed |
| `0x1E2` | 8 floats | in-place transform |
| `0x2C2` | 9 floats | xyz + w + diffuse + specular + tu; copy path |

The working record is 0x34 bytes / 13 floats: screen x, screen y, z, rhw,
diffuse ARGB, specular ARGB, tu, tv, six clip/attribute words. The clip code
is the low six bits of word 8. The pre-transform source buffer is
`0x5E57A4C8` (8-float records); the stride-8 transform output is
`0x5E37A4C8`.

For the lit formats, the normal is dotted with the light direction, clamped to
`[0, 1]`, and converted per channel with the light color and ambient terms.
The result is packed as `alpha << 24 | R << 16 | G << 8 | B`. A monochrome
mode replicates the red channel to green and blue; a bypass flag uses the
incoming diffuse color unchanged.

Per primitive, the dispatcher tests the clip bits. If every vertex is inside,
it takes the fast path: points through `FUN_5E0023E0`, lines through
`FUN_5E002340`, triangles through `FUN_5E012EB0`. If the primitive straddles a
clip plane, it takes the clipped path: lines through `FUN_5E005420`, triangles
through `FUN_5E005220`. It also accumulates a bounding box in
`+0x4580`-`+0x458C` and intersects it with the viewport at
`+0x4550`-`+0x455C`.

The indexed entry adds the index buffer, per-block jump tables, the `0x116`
format, and a fuller triangle-strip/fan tail. Both entries share the transform
and raster writers.

## Raster output and 2D helpers

The scanline/raster writer family starts at `FUN_5E01E6E0` and runs through
`FUN_5E02852D`. It includes:

- `FUN_5E01E730` - attach-state record writer;
- `FUN_5E01E7B0` - format/shift setup;
- `FUN_5E01E9A0`/`FUN_5E01EA10` - line/table draw entry;
- `FUN_5E0284E0` - write a value into the 2D table;
- `FUN_5E02852D` - Bresenham-style line draw;
- `FUN_5E028100`/`FUN_5E028260` - perspective transform loops.

The writer state is held in globals:

| Global | Meaning |
|--------|---------|
| `0x5E77A574` | active render object |
| `0x5E77A834` | 16/32-bit output mode |
| `0x5E77A838` | row/format auxiliary |
| `0x5E77A840` | row pitch |
| `0x5E77A844` | framebuffer base |
| `0x5E77A848` | auxiliary state |
| `0x5E77A824`-`0x5E77A830` | format setup values |

The 2D table writer stores a 16-bit value when the mode is 16-bit and a
duplicated 32-bit value otherwise. The line writer is a standard Bresenham
loop over the same buffer. These are real pixel writes into the framebuffer
attached by the game, not presentation-only stubs.

## Caps and format machinery

The caps/format cluster occupies `0x5E0121D0`-`0x5E016650` plus the
`0x5E00FF00` block. It contains:

- `FUN_5E0121D0` - identity matrix;
- `FUN_5E012210` - row-major 4x4 multiply;
- `FUN_5E012CF0` - pixel-format matching;
- `FUN_5E013200` - format/init pipeline;
- `FUN_5E013CC0`, `FUN_5E014BC0`, `FUN_5E015E90` - scanline/format drivers;
- paired FPU and integer implementations of the setup, step, and matrix
  calculations.

The cluster builds DDSCAPS-style structures, fills pixel-format descriptors,
selects the raster writer/row-dispatch tables, and stores function pointers in
the facade's `+0x5C`/`+0x60`/`+0x64` slots. The FASTCALL getter family at
`0x5E00E350`-`0x5E00EB08` exposes the resulting pixel-format pattern and state
flags to the rest of the facade.

The caps-fill helpers `FUN_5E001B60` and `FUN_5E001DE0` validate output
buffers, zero them, and write the caps flags; the format wrappers
`FUN_5E00FBF0` and `FUN_5E00FEB0` build the 0xFC-byte descriptor and forward
to the real surface. `FUN_5E011750` and `FUN_5E011870` are the GetCaps/SetCaps
wrappers.

## Wrapper and passthrough families

The module has two large forwarding families:

- Set A at `0x5E00EF00`-`0x5E00F9A0` forwards to the inner object at `+0x20`
  or `+0x1C`, with factories at `0x5E00EF60` and `0x5E00F070`.
- Set B at `0x5E010CB0`-`0x5E0113B0` forwards through the `+0x18`/`+0x1C`/
  `+0x20` sub-objects.

The factories allocate 0x2C-byte surface wrappers, wire five vtables and five
sub-object pointers, copy the surface descriptor, patch caps flags, and insert
the wrapper into a linked list. `FUN_5E00FB70` allocates the alternate
0x58-byte object with refcount at `+0x54`.

A block of 69 sixteen-byte "stepping-stone" shims at
`0x5E0104E0`-`0x5E010A70` adjusts the stack argument and jumps into a Set B
body. They are alternate entry aliases, not new logic.

## DXVB registry

`GetDXVB` (`0x5E010480`) uses a global registry at `0x5E77A4C8` with a count at
`0x5E77A508`. It scans the pointer array for a node whose key matches the
requested key. If the node is found, or its `+0x24` byte is set, it returns the
value at `+0x0C`; otherwise it returns the value at `+0x10`. The same registry
is used by facade release and the linked-list helpers.

## Stubs, CRT, and data layout

The module has about 17 trivial `E_NOTIMPL`/`E_FAIL` stubs (roughly 200 bytes)
that pad vtables without defining behavior. The CRT range
`0x5E02B453`-`0x5E034B98` contains roughly 201 statically linked runtime
functions, including `operator new/delete`, `__ftol`, memory and string
primitives, locale/codepage tables, the printf engine, and SEH support. These
are runtime code, not game logic.

Read-only data around `0x5E035000`-`0x5E03765E` holds the IAT, vtables, fake
interface GUIDs, float constants, the 0x20-byte entry table at `0x5E0380D8`,
and the 0x98-dword caps template at `0x5E038158`. Writable data around
`0x5E038000`-`0x5E03AFFF` holds the DDI block, string buffers, and module
state. The raster and DXVB globals live above `0x5E77A4C8`.

## Invariants and failure modes

- The factory exports must load the real `ddraw.dll` before constructing a
  wrapper; failure returns `0x80004005` and does not leave a partial object.
- `DirectDrawCreateClipper` and the enumerators return `0xFFFFFFFF` when the
  real entry point is missing.
- `BeginScene` and `EndScene` are guarded by `+0x4874`; draw calls outside a
  scene return `0x80004005`.
- Draw calls reject unknown primitive types with `E_NOTIMPL`.
- The FVF code determines the source stride and transform path; a mismatched
  format reads the wrong vertex layout.
- The software rasterizer writes directly into the attached framebuffer; the
  pitch and 16/32-bit mode globals must match the surface or the output is
  corrupted.
- The facade's caps array, pixel-format pattern, and matrix slots are coupled;
  changing one without the others can select the wrong raster path.
- The CRT and stub ranges are not game behavior; they should be treated as
  runtime/support code when reading the per-VA index.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x5E001040` | exports | `DirectDrawCreate` factory |
| `0x5E0011C0` | exports | `DirectDrawCreateEx` factory |
| `0x5E001510` | wrapper | lazy `ddraw.dll` loader |
| `0x5E00ECF0` | wrapper | QI dispatcher for six interface views |
| `0x5E002430` | facade | facade/render-state constructor |
| `0x5E002020` | facade | `BeginScene` |
| `0x5E002120` | facade | `EndScene` |
| `0x5E0026A0` | facade | surface attach |
| `0x5E002B70` | facade | texture/surface setup |
| `0x5E003750` | facade | indexed caps get |
| `0x5E003780` | facade | indexed caps set |
| `0x5E005590` | facade | matrix set |
| `0x5E0057C0` | render | `DrawPrimitive` software raster path |
| `0x5E0093A0` | render | `DrawIndexedPrimitive` software raster path |
| `0x5E01E730` | render | attach-state record writer |
| `0x5E01E7B0` | render | format/shift setup |
| `0x5E02852D` | render | Bresenham line draw |
| `0x5E0284E0` | render | 2D table write |
| `0x5E0121D0` | caps | identity matrix |
| `0x5E012210` | caps | 4x4 multiply |
| `0x5E012CF0` | caps | pixel-format match |
| `0x5E013200` | caps | format/init pipeline |
| `0x5E010480` | wrapper | `GetDXVB` registry lookup |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| wrapper | 228 | DirectDraw COM wrapper/forwarding. |
| crt | 155 | Statically linked C runtime. |
| facade | 116 | Device/surface state machine. |
| caps | 108 | Capability/format queries. |
| accessors | 53 | Surface/device accessors. |
| render | 47 | Software rasterizer and blit paths. |
| stubs | 17 | Minimal stubs for unsupported paths. |
| exports | 9 | DirectDraw exports. |
| data | 3 | Initialized data. |
| rdata | 3 | Read-only constants and vtables. |

## Coverage

All 739 classified VAs are in [the blade.dll index](../va_index/blade_dll.md), which lists role, size, source, and evidence.
