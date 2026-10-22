# blade.dll

> **Classified VAs:** 739 | **Exhaustive index:** [blade.dll](../va_index/blade_dll.md)

DirectDraw proxy DLL with COM exports, a large facade state machine, caps/accessor wrappers, and a software rasterizer.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The exports start at 0x5E001040 and proxy the DirectDraw COM surface. The facade detail owns the device/surface state machine; caps and accessors expose format/capability queries; the wrapper detail performs lazy `ddraw.dll` loading and forwarding.

The render detail contains the software rasterizer and blit paths. The module also carries CRT and stub ranges, which are listed separately in the detail table and the per-VA index.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x5E001040 | exports | first DirectDraw export |

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

## Inventory

The detail table above gives the full count for this module. The exhaustive per-VA table (role, size, source, evidence) is in [the blade.dll index](../va_index/blade_dll.md).

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/blade_dll.md)
