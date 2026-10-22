# Config Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 13 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

options.ini/config-file framework, option registry, and persistence.

## How it works

The option registry and options.ini load/save path sit at 0x00406ED7-0x00407BD8; the generic INI tree and section/key lookup are at 0x0040DCA0-0x0040E4A0.

Config feeds input bindings and render/gameplay settings, including LOD bias and display options.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00406ED7-0x00407BD8 | options | options.ini registry/load/save |
| 0x0040DCA0-0x0040E4A0 | ini | generic INI tree |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| options | 8 | options.ini load/save, option registry, and LOD bias persistence. |
| ini | 5 | Generic config-file tree, section/key lookup, and serialization. |

## Coverage

All 13 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
