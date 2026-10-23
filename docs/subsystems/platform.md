# Platform Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 256 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Win32/COM/DLL/registry glue, DirectDraw/D3D wrappers, import thunks, and the in-image SafeDisc/anti-tamper wrapper.

## Role and boundary

The platform subsystem is the EXE's OS boundary. It contains:

- the IAT jump thunks that route imported Win32/DirectX calls;
- the in-image SafeDisc/anti-tamper wrapper and its jump chains;
- COM/DLL loading and class-factory glue;
- registry access;
- DirectDraw/D3D wrapper glue;
- the runtime DLL load/resolve helpers used by module clients.

It is used by render, audio, input, net, and the module loaders. The external
SafeDisc/DRM DLLs and the bundled DRM components are out of scope; only the
in-image wrapper/tail is part of the platform surface.

## Import thunks

The IAT jump thunks occupy `0x0075DB4A`-`0x0076015C`. Each thunk is a short
jump through an IAT slot; the imported functions are the standard Win32,
DirectDraw/D3D, COM, registry, and CRT entry points used by the EXE.

The tail contains the 31 IAT jump thunks listed in
`src/mw4mercs/artifacts/extra_functions.csv`. These are not game functions;
they are the import trampolines that the compiler/linker emitted in the
platform tail.

## SafeDisc/anti-tamper tail

The SafeDisc/anti-tamper tail runs from the end of the thunks through
`.txt2` (`0x0076015C`-`0x0076A381`). Representative functions include:

- `0x00762410` - anti-tamper jump-chain function;
- `0x00760530` - SafeDisc call setup.

The tail contains jump chains, anti-tamper checks, and the in-image wrapper
that the original DRM left in the binary. The `.txt2` section
(`0x00769000`-`0x0076A7C5`) is preserved as committed bytes for layout; it is
not decompiled and is not a gameplay target.

The DRM wrapper is part of the platform surface because it is in the EXE image.
External SafeDisc components and the bundled DRM DLLs are not targets.

## COM, DLL, and registry glue

The platform layer provides the COM/DLL/registry helpers used by the module
loaders:

- runtime DLL load/resolve glue (`0x00701030` is the module-loader entry used
  by the GunDll client);
- COM class-factory helpers (`FUN_006FCDD0` resolves `DllGetClassObject` and
  creates the instance);
- registry read/write helpers used by configuration, DRM, and module
  registration;
- DirectDraw/D3D wrapper glue used by the render/display path.

The COM/DLL helpers are generic; the module-specific CLSIDs, IIDs, and export
names live in the module pages (`GunDll.dll`, `MW4Stats.dll`, etc.).

## DirectDraw/D3D glue

The render path reaches DirectDraw through `blade.dll`, not through the EXE's
platform layer. The EXE-side platform glue covers the display-mode/window
setup, the device creation calls, and the import thunks those paths use. The
D3D immediate-mode wrappers themselves are in the render subsystem
(`0x713A70`-`0x713C80`).

## Invariants and failure modes

- The IAT thunks are not game logic; changing one changes the imported call
  target for every caller.
- The SafeDisc/anti-tamper tail is part of the image layout; removing or
  rewriting it changes the PE structure and may break the byte-identical build.
- `.txt2` is preserved data, not executable game code; it must not be treated
  as a decompilation target.
- The external DRM DLLs are out of scope; only the in-image wrapper is part of
  the platform surface.
- COM/DLL helpers assume the module and export exist; a missing export is a
  load failure, not a silent no-op.
- Registry helpers assume the key/value exists or that the caller handles the
  missing-value case; the platform layer does not invent defaults.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0075DB4A`-`0x0076015C` | imports | IAT jump thunks |
| `0x0076015C`-`0x0076A381` | drm | SafeDisc/anti-tamper tail |
| `0x00762410` | drm | anti-tamper jump-chain function |
| `0x00760530` | drm | SafeDisc call setup |
| `0x00701030` | dll | runtime DLL load/resolve entry |
| `0x006FCDD0` | dll | COM class-factory helper |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| drm | 152 | SafeDisc wrapper, anti-tamper glue, and import thunks. |
| imports | 96 | IAT jump thunks and imported-function glue. |
| (general) | 7 | Win32/COM/DLL/registry glue outside the named platform details. |
| dll | 1 | Runtime DLL load/resolve glue. |

## Coverage

All 256 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
