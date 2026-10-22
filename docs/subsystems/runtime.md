# Runtime Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2626 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Engine/runtime services: memory, reference counting, threads and locks, object lifetime, and virtual/command dispatch.

## How it works

Allocation wrappers at 0x004084D0 and 0x004084E0 sit under most object construction. Reference-counted buffers, vtable helpers, and object-lifetime code make up the `object` detail; dispatch and jump-table glue make up `dispatch`.

Threads, critical sections, events, and message queues are grouped under the general runtime band. This is the shared service layer used by gameplay, render, UI, and the archive/database code.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x004084D0 | memory | allocation wrapper |
| 0x004084E0 | memory | free wrapper |
| 0x00415100-0x00417BFF | object | database/object helpers |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| object | 2200 | Constructors, destructors, vtables, and object-lifetime helpers. |
| (general) | 296 | Runtime services outside the object/memory/dispatch details. |
| memory | 130 | Allocation, reference counting, and buffer ownership. |

## Coverage

All 2626 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
