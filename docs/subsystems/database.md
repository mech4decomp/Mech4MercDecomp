# Database Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 691 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Object/container model: binary-search trees, linked lists, iterators, hash tables, object tables, and database wrappers.

## Role and boundary

The database subsystem is the game's object/container model. It provides the
trees, lists, iterators, string tables, item pools, and object-table wrappers
that gameplay, render records, UI lists, and archive entries use.

The main container island is `0x00410000`-`0x00417BFF`. The database wrappers
at `0x004D2B00`-`0x004D3200` bridge archive and database access. Most of the
VAs are shared helpers rather than a single database class.

## Binary-search and red-black trees

The tree implementation is a red-black tree with string-keyed and
pointer-keyed variants:

| VA | Role |
|----|------|
| `0x0040F980` | binary-search-tree insertion (string-keyed) |
| `0x0040FE00` | binary-search-tree lookup by string |
| `0x0040FED0` | binary-search-tree lookup by string (variant) |
| `0x0040FF40` | binary-search-tree insertion (string-keyed) |
| `0x004103C0` | binary-search-tree lookup by string |
| `0x00410490` | binary-search-tree lookup by string (sibling) |
| `0x00410500` | red-black tree node deletion with rebalancing |
| `0x004108D0` | red-black tree node insertion with rebalancing |
| `0x00410B00` | binary-search-tree insertion (string-keyed) |
| `0x00410D30` | binary tree insertion + rebalance (string-keyed) |
| `0x00410EC0` | binary-search-tree insertion (string-keyed) |
| `0x004110F0` | binary tree insertion + rebalance (string-keyed) |
| `0x00411280` | binary-search-tree insertion (string-keyed) |
| `0x004114B0` | binary tree "next" node finder |
| `0x00411500`/`0x00411530` | allocate + initialize a tree node from a key |
| `0x00411670` | red-black tree delete fixup |
| `0x00415720` | BST-style lookup |
| `0x004157A0` | remove a node |
| `0x004158E0` | BST lookup |
| `0x00415A80` | return the BST root node |
| `0x00415A90` | BST iterator |
| `0x00415AD0` | BST root check |

The trees are used for string tables, config sections, class registries, and
object lookup. Insertion and deletion maintain the red-black invariants; the
lookup functions compare keys and walk the tree.

## Linked lists and iterators

The list layer provides doubly-linked and singly-linked nodes:

| VA | Role |
|----|------|
| `0x00410A60` | doubly-linked list node insertion |
| `0x00410AB0` | doubly-linked list node insertion (mirror) |
| `0x00415C10` | doubly-linked list prepend |
| `0x00415D00` | unlink an item from a singly-linked circular list |
| `0x00415D40` | item initializer / linked-list inserter |
| `0x00417890` | recursive node-destroy helper (doubly-linked unlink) |
| `0x00417910` | node-destroy continuation |
| `0x00417950` | insert a node into a list |
| `0x004179B0` | sub-object initializer at `owner+0x2C` |
| `0x00417A10` | return the Nth node's value |
| `0x00417A40` | linked-list length counter |
| `0x00417A60` | allocate/insert a node |
| `0x00417AA0` | walk a linked list |
| `0x00417AD0` | pop the node at `[ECX+8]` |
| `0x00417B00` | insert a node into a container |

The iterator implementation is vtable-based. `0x417170` is the iterator
constructor, `0x4171B0` its destructor thunk, `0x417230` the "get next"
method, and `0x417260`/`0x417280` the index accessors. `0x4172A0` is the
container element accessor; `0x4172C0` releases an element.

## Containers and item pools

The container layer adds array-backed behavior on top of the list nodes:

| VA | Role |
|----|------|
| `0x00416F90` | grow the item array and append |
| `0x00417030` | insertion-sort pass on the item array |
| `0x004170A0` | binary search by name in a sorted item array |
| `0x004170F0` | linear search for an item's index |
| `0x00417120` | remove an item at an index |
| `0x00417430` | `Stuff::SafeChainLink` constructor |
| `0x00417470` | `Stuff::SafeChainLink` destructor |
| `0x004174D0` | container constructor |
| `0x004174F0` | container element-list release |
| `0x00417530` | container element insert |
| `0x00417600` | insert before a given element |
| `0x00417640` | container/iterator node constructor |
| `0x00417670` | container/iterator node copy-constructor |

The item-pool/singleton family is used for fixed-size objects:

- `0x415D70` - singleton constructor;
- `0x415E30` - singleton destructor;
- `0x415E80` - bump allocator;
- `0x416110` - get an item from the pool;
- `0x416130` - return an item to the pool;
- `0x416470`/`0x416530`/`0x4165B0`/`0x416820`/`0x416840` - item/pool
  helpers.

## String tables

The string system provides refcounted strings, hashing, and path helpers:

| VA | Role |
|----|------|
| `0x00412A00` | refcounted-string read |
| `0x00412A50` | refcounted-string write |
| `0x00412AB0` | rotating string hash |
| `0x00412B30` | string-system constructor |
| `0x00412B60` | string-system destructor |
| `0x00412B80` | string-system method |
| `0x00412BF0` / `0x00412CA0` | string-system parser |
| `0x00412D50` | string-system iterator |
| `0x00412800` | case-insensitive equality |
| `0x00412820` | tokenizer |
| `0x004128B0` | uppercase |
| `0x004128E0` | lowercase |
| `0x00412910` | space-to-underscore |
| `0x00412950` | extension strip |
| `0x00412980` | path directory |
| `0x004129C0` | basename |

The string table is the common key/value storage used by the loader, config,
archive directory, and object registry. The string hash is a rotating dword hash; equality is a separate
case-insensitive comparison.

## Database wrappers

The wrappers at `0x004D2B00`-`0x004D3200` bridge archive and database access.
They convert archive entries and object records into the container model and
are shared by gameplay, render, UI, and archive code. They do not implement a
separate storage format; they use the tree/list/string primitives above.

## Invariants and failure modes

- Red-black tree insertion/deletion must maintain the color/rotation
  invariants; a partial rebalance corrupts every later lookup.
- String-keyed trees compare the hash first, then the string; collisions must
  still compare the full key.
- Doubly-linked list nodes have separate forward/back links; a node can only
  be unlinked once.
- The iterator's current index is `-1` when invalid; accessing an invalid
  iterator is not a valid operation.
- Container array growth invalidates element pointers; re-fetch after growth.
- Item-pool objects must be returned to the pool, not freed with the general
  allocator.
- Refcounted strings are shared; releasing one reference does not free the
  buffer until the count reaches zero.
- The database wrappers consume records exposed by the archive/database
  layers; lazy archive fetch is handled by the archive layer.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0040F980` | trees | string-keyed BST insertion |
| `0x0040FE00` | trees | string-keyed BST lookup |
| `0x00410500` | trees | red-black node deletion |
| `0x004108D0` | trees | red-black node insertion |
| `0x00410B00` | trees | string-keyed BST insertion |
| `0x00411670` | trees | red-black delete fixup |
| `0x004157A0` | trees | remove a node |
| `0x00415A90` | trees | BST iterator |
| `0x00410A60` | lists | doubly-linked node insertion |
| `0x00417950` | lists | insert a node |
| `0x004179B0` | lists | sub-object initializer |
| `0x00417A40` | lists | list length |
| `0x00417A60` | lists | allocate/insert a node |
| `0x00417AD0` | lists | pop head |
| `0x00417170` | iterators | iterator constructor |
| `0x00417230` | iterators | get next |
| `0x004172A0` | iterators | element accessor |
| `0x00416F90` | containers | grow/append |
| `0x004170A0` | containers | binary search by name |
| `0x00417120` | containers | remove at index |
| `0x00415D70` | pools | singleton constructor |
| `0x00415E80` | pools | bump allocator |
| `0x00416110` | pools | get item |
| `0x00416130` | pools | return item |
| `0x00412A50` | strings | refcounted-string write |
| `0x00412AB0` | strings | string hash |
| `0x00412BF0` | strings | string-system parser |
| `0x00412820` | strings | tokenizer |
| `0x004D2B00` | wrappers | archive/database bridge |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| containers | 675 | Trees, lists, iterators, and hash containers. |
| (general) | 16 | Container helpers outside the main tree/list island. |

## Coverage

All 691 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
