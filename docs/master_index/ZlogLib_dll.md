# ZlogLib.dll — Subsystem Index

> **Purpose:** a simple per-VA subsystem classification of every VA in this binary. It exists so you can quickly see which functions belong to which subsystem and jump to them.

> **Rule: every VA appears under exactly ONE subsystem section.** No VA is listed twice. Overlaps are resolved by a fixed priority (subsystem priority: net > ai > mlr); anything not classified is listed under `unclassified`.

> Static classification of the oracle binary. Data-section source paths refer to locally generated files (see `docs/BUILD.md`).

## Table of Contents

- [lifecycle](#lifecycle) — 8 VAs
- [md5](#md5) — 8 VAs
- [api](#api) — 5 VAs
- [emit](#emit) — 4 VAs
- [mem](#mem) — 4 VAs
- [crt](#crt) — 2 VAs
- [unclassified](#unclassified) — 2 VAs

## lifecycle

| VA | Section | Source |
|----|---------|--------|
| 0x10001000 | text | `src/zloglib/text/func_10001000.c` |
| 0x10001357 | text | `src/zloglib/text/func_10001357.c` |
| 0x100015FB | text | `src/zloglib/text/func_100015fb.c` |
| 0x100016A6 | text | `src/zloglib/text/func_100016a6.c` |
| 0x100018A6 | text | `src/zloglib/text/func_100018a6.c` |
| 0x10001A1D | text | `src/zloglib/text/func_10001a1d.c` |
| 0x10001BE9 | text | `src/zloglib/text/func_10001be9.c` |
| 0x10001C28 | text | `src/zloglib/text/func_10001c28.c` |

## md5

| VA | Section | Source |
|----|---------|--------|
| 0x10001CF5 | text | `src/zloglib/text/func_10001cf5.c` |
| 0x10001D24 | text | `src/zloglib/text/func_10001d24.c` |
| 0x10001DB9 | text | `src/zloglib/text/func_10001db9.c` |
| 0x10001E01 | text | `src/zloglib/text/func_10001e01.c` |
| 0x10001E84 | text | `src/zloglib/text/func_10001e84.c` |
| 0x10001EAC | text | `src/zloglib/text/func_10001eac.c` |
| 0x10001F4A | text | `src/zloglib/text/func_10001f4a.c` |
| 0x10001FAE | text | `src/zloglib/text/func_10001fae.c` |

## api

| VA | Section | Source |
|----|---------|--------|
| 0x100016D9 | text | `src/zloglib/text/func_100016d9.c` |
| 0x10001707 | text | `src/zloglib/text/func_10001707.c` |
| 0x10001796 | text | `src/zloglib/text/func_10001796.c` |
| 0x100017C8 | text | `src/zloglib/text/func_100017c8.c` |
| 0x10001C6E | text | `src/zloglib/text/func_10001c6e.c` |

## emit

| VA | Section | Source |
|----|---------|--------|
| 0x10001201 | text | `src/zloglib/text/func_10001201.c` |
| 0x1000134B | text | `src/zloglib/text/func_1000134b.c` |
| 0x10001561 | text | `src/zloglib/text/func_10001561.c` |
| 0x10002931 | text | `src/zloglib/text/func_10002931.c` |

## mem

| VA | Section | Source |
|----|---------|--------|
| 0x10002859 | text | `src/zloglib/text/func_10002859.c` |
| 0x1000289E | text | `src/zloglib/text/func_1000289e.c` |
| 0x100028E4 | text | `src/zloglib/text/func_100028e4.c` |
| 0x10002902 | text | `src/zloglib/text/func_10002902.c` |

## crt

| VA | Section | Source |
|----|---------|--------|
| 0x10001CE9 | text | `src/zloglib/text/func_10001ce9.c` |
| 0x1000296D | text | `src/zloglib/text/func_1000296d.c` |

## unclassified

| VA | Section | Source |
|----|---------|--------|
| 0x10003000 | rdata | `src/zloglib/rdata/data_0x10003000.c` |
| 0x10004000 | data | `src/zloglib/data/data_0x10004000.c` |
