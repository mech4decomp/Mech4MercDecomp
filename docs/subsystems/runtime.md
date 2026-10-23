# Runtime Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2626 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Engine/runtime services: memory, reference counting, threads and locks, object lifetime, and virtual/command dispatch.

## Role and boundary

The runtime subsystem is the shared service layer beneath gameplay, render, UI,
network, archive, and database code. It is broad by VA count because it
includes object constructors/destructors and vtable glue for most of the
engine. Its recognizable services are:

- allocation and free wrappers;
- reference-counted buffers and shared strings;
- object lifetime and vtable initialization;
- engine initialization, string tables, and configuration;
- threads, critical sections, events, and message queues;
- dispatch and jump-table glue.

The runtime does not own game rules or content. It provides the allocation,
ownership, and object-model conventions that the other subsystems use.

## Memory and allocation

The primary allocation wrappers are:

- `FUN_004084D0` - realloc-style wrapper; calls `FUN_006F3C80(size, -1)`;
- `FUN_004084E0` - free/dealloc wrapper.

The small node helpers around `0x00408410`-`0x00408470` allocate, initialize,
free, and recursively tear down linked-list nodes. `FUN_00410890` releases a
shared buffer by decrementing its refcount and freeing the storage when it
reaches zero.

The `memory` detail (130 VAs) covers these wrappers plus reference-counted
buffer ownership. The `object` detail (2,200 VAs) covers the constructors,
destructors, vtables, and scalar-deleting destructors that make up most of the
engine's object model.

## Engine initialization and strings

The engine init band includes:

- `FUN_00408330` - copies the command-line string into the engine state;
- `FUN_00408500` - builds a large set of string-table/config entries;
- `FUN_00408F60` - engine/config initializer;
- `FUN_004098F0` - builds a 50-entry table;
- `FUN_0040A330` / `FUN_0040AD60` - build 0x32-entry tables;
- `FUN_0040B670` - loader/engine initialization;
- `FUN_0040D690` - GameOS string-table helper;
- `FUN_0040F980` / `FUN_0040FE00` / `FUN_0040FF40` - string-keyed
  binary-search-tree insertion and lookup used by the loader/config layer.

These functions are shared by the config, archive, and database layers. They
build the string tables and lookup structures that later object construction
uses.

## Object model and registered classes

The runtime's object detail is dominated by constructors, destructors, and
vtable installers. A few patterns recur:

- base-object initialization `FUN_00415180`;
- scalar-deleting destructors that call the base destructor and then free;
- vtable setters that install a class vtable at `[this]`;
- registered-class constructors at `0x4151C0`/`0x415200` that fill an id/name
  and link the class into the class table;
- list membership and teardown helpers in the `0x415230`-`0x416100` range;
- item-pool constructors/destructors and bump allocation at
  `0x415D70`/`0x415E30`/`0x415E80`.

The registered-class subsystem is the runtime's type registry: it stores the
class id, name, vtable, and factory/link information used by the loader and
database. The item pool is a separate allocation optimization for fixed-size
objects.

## Threads, locks, and dispatch

The general runtime band includes thread creation, critical sections, events,
and message queues used by the network, audio, input, and file-loading paths.
The archive and database layers also use the runtime's refcounted strings and
locks.

Dispatch is vtable-based. The runtime supplies the base-object/vtable helpers;
the higher-level command dispatcher (`FUN_004D5B70`) and per-subsystem command
tables are gameplay/UI objects, not runtime services.

## Invariants and failure modes

- The allocation wrappers use the shared engine heap; memory freed by
  `FUN_004084E0` must not be freed again with `free`.
- Reference-counted buffers are released through their refcount helper; a raw
  `free` bypasses the ownership check.
- Constructors install the vtable before any virtual call; a partially
  constructed object must not be used virtually.
- Scalar-deleting destructors free the object after the base destructor; a
  caller must not reuse the pointer.
- The registered-class table is keyed by class id/name; duplicate registration
  is not a valid state.
- Item-pool objects come from the pool, not the general heap, and must be
  returned to the pool.
- The string tables built during engine init are read by the loader and config
  layers; rebuilding them while objects hold references invalidates those
  references.
- Thread-shared state must be protected by the runtime locks; the engine does
  not make object fields atomic.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x004084D0` | memory | realloc wrapper |
| `0x004084E0` | memory | free wrapper |
| `0x00408430` | memory | allocate a 0x18-byte list node |
| `0x00408460` | memory | free a list node |
| `0x00408470` | memory | recursive list teardown |
| `0x00410890` | memory | release a shared buffer |
| `0x00408330` | init | command-line string init |
| `0x00408500` | init | string-table/config init |
| `0x00408F60` | init | engine/config initializer |
| `0x0040B670` | init | loader/engine initialization |
| `0x0040D690` | init | GameOS string table |
| `0x0040F980` | init | string-keyed BST insertion |
| `0x0040FE00` | init | string-keyed BST lookup |
| `0x00415180` | object | base-object initializer |
| `0x004151C0` | object | registered-class constructor |
| `0x00415200` | object | registered-class constructor |
| `0x00415D70` | object | singleton constructor |
| `0x00415E80` | object | item-pool bump allocator |
| `0x00416110` | object | get item from pool |
| `0x00416130` | object | return item to pool |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| object | 2200 | Constructors, destructors, vtables, and object-lifetime helpers. |
| (general) | 296 | Runtime services outside the object/memory/dispatch details. |
| memory | 130 | Allocation, reference counting, and buffer ownership. |

## Coverage

All 2626 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
