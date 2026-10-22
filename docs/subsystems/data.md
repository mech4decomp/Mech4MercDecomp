# Data Sections and Tables

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 638 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Non-code sections and in-.text jump/pointer tables.

## How it works

`.rdata` holds constants, vtables, and import tables; `.data` holds initialized state; `.rsrc` is the PE resource directory; `.txt2` is the SafeDisc leftover. In-.text data blocks are jump or pointer tables emitted as data placeholders.

These data sources are committed, so the default build is reference-free. `nmake data` is the optional regeneration path. The detail table below gives the counts; the per-VA index lists the ranges and source paths.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0076B000-0x007B1D13 | rdata | constants/vtables/imports |
| 0x007B2000-0x008BD67C | data | initialized game state |
| 0x008BE000-0x008BF07E | rsrc | PE resource directory |
| 0x00769000-0x0076A7C5 | txt2 | SafeDisc .txt2 section |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| text-table | 555 | In-.text jump/pointer tables and verbatim data blocks. |
| rdata | 71 | Read-only constants, vtables, and import tables. |
| data | 6 | Initialized .data section. |
| rsrc | 4 | PE resource directory. |
| txt2 | 2 | SafeDisc .txt2 section (out of scope). |

## Coverage

All 638 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
