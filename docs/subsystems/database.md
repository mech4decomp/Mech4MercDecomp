# Database Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 691 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Object/container model: binary-search trees, linked lists, iterators, hash tables, object tables, and database wrappers.

## How it works

The main container island is 0x00410000-0x00417BFF. It contains the tree/list/iterator implementations and the object tables used throughout the game; 0x004179B0 is a representative list append.

Wrappers at 0x004D2B00 bridge archive and database access. These containers are used by gameplay, render records, UI lists, and archive entries, so many of their VAs are shared.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x00410000-0x00417BFF | containers | tree/list/iterator island |
| 0x004179B0 | containers | list append |
| 0x004D2B00-0x004D3200 | containers | database wrappers |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| containers | 675 | Trees, lists, iterators, and hash containers. |
| (general) | 16 | Container helpers outside the main tree/list island. |

## Coverage

All 691 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
