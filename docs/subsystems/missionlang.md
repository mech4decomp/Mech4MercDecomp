# MissionLang_MERCS.dll

> **Classified VAs:** 69 | **Exhaustive index:** [MissionLang_MERCS.dll](../va_index/MissionLang_MERCS_dll.md)

Mission/string-table loader mirroring Language.dll.

## Role and boundary

`MissionLang_MERCS.dll` is the mission-side localization module. It mirrors
`Language.dll`: it has no call-level API beyond the DLL entry point, imports
only KERNEL32, and carries a statically linked VC6 LIBCMT runtime with the
codepage and string-table machinery compiled in.

The module's `.rsrc` section is the mission text source. It is roughly
`0x37000` bytes (about 220 KB), substantially larger than Language.dll's
resource block. The game loads the module and resolves mission/logistics
strings by module handle and string id; the module's codepage, case, arena, and
error tables provide the lookup behavior.

## Mission string model

The loader has the same shape as Language.dll:

- a codepage state block and lead-byte bitmap;
- a case-fold table and character-class table;
- a string-table arena for copied/converted strings;
- a runtime error-message table;
- per-thread state and critical-section locks.

The mission-specific parts are the string table at `0x10005248`, the codepage
state at `0x10005590`, and the mission text in `.rsrc`. The loader is not a
separate protocol; it is the same id-based localization contract applied to the
mission id-space.

## Codepage and case handling

`FUN_1000205B` builds the lookup table and lead-byte bitmap. `FUN_10002208`
resolves the special codepage values, `FUN_10002252` maps display codepages,
`FUN_10002285` resets the state, and `FUN_100022AE` builds the case-fold table
using `GetStringType` (`FUN_10003422`) and `LCMapString` (`FUN_100031D3`).
`FUN_10002433` performs the one-time ACP initialization and sets the flag at
`0x100058C8`.

The codepage state is at `0x10005590`; the initialization state is at
`0x10005568`; the lookup table is at `0x10005248`; the bitmap is at
`0x100056A0`; and the case table is at `0x100055A0`. The character-class table
is at `0x100056A1`.

## String arena

MissionLang uses a buddy-style arena rather than Language.dll's paged arena:

- `FUN_10002785` initializes a 0x140-byte arena header and the state at
  `0x10005568`;
- `FUN_100027C3` scans the 0x14-byte entry array;
- `FUN_100027EE` frees an entry;
- `FUN_10002B19` allocates a block;
- `FUN_10002E22` grows an allocation with `HeapReAlloc`, a `0x41C4`-byte
  header, and a 1 MB `VirtualAlloc` region;
- `FUN_10002ED3` initializes an arena.

The arena header and entry array live in module data, not in a caller-owned
object. The allocator is protected by the module's critical-section helpers
(`FUN_10001C77`, `FUN_10001CA0`, `FUN_10001D0C`, `FUN_10001D6D`).

## Runtime errors

The mission-side runtime error table is at `0x10005060`. `FUN_10001B24` looks
up an id and writes the message to `stderr` or displays a `Runtime Error!`
message box. `FUN_10001AEB` dispatches the load (`0xFC`) and finalize (`0xFF`)
callbacks, with the callback pointer at `0x10005538`. `FUN_10002FCE` is the lazy
`user32` MessageBox wrapper.

## Runtime and data layout

The module's `.text` is about 10.9 KB and contains roughly 65-67 functions. The
CRT portion covers startup, exit/atexit, TLS, stdio, environment, command-line,
private heap, allocation, string primitives, `memmove`, `_alloca_probe`, and
SEH. The localization portion covers codepage lookup, case folding, the arena,
and error reporting.

Important data:

| Address | Contents |
|---------|----------|
| `0x10005248` | string-table lookup table |
| `0x10005568` | arena initialization state |
| `0x10005590` | codepage state block |
| `0x100055A0` | case-fold table |
| `0x1000557C` | 0x14-byte entry array |
| `0x100056A0` | codepage bitmap |
| `0x100056A1` | character-class table |
| `0x100057A8` | private heap |
| `0x100058C8` | one-time init flag |
| `0x10005060` | runtime error-message table |
| `0x10005538` | error callback pointer |

The `.rdata` block at `0x10004000` holds the import table, strings, and
constants; the `.data` block at `0x10005000` holds the writable tables, arena
metadata, and globals.

## Invariants and failure modes

- The module has no callable string API; callers use the loaded module handle
  and a mission string id.
- Codepage values `-2`, `-3`, and `-4` are sentinels resolved through the same
  path as Language.dll.
- The arena is buddy-backed and must be freed through its own entry/free path,
  not the CRT heap.
- The case table and bitmap are one-time state; the reset path is required
  before changing codepages.
- The mission text lives in `.rsrc`; the code does not embed the localized
  strings in `.text`.
- The module's state is global and lock-protected; there is no per-caller
  loader object.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x10001006` | crt | DLL entry dispatcher |
| `0x1000205B` | codepage | lookup table and bitmap builder |
| `0x10002208` | codepage | special-codepage resolver |
| `0x10002252` | codepage | display-codepage map |
| `0x100022AE` | codepage | case-fold table builder |
| `0x10002433` | codepage | one-time ACP initialization |
| `0x10002785` | arena | arena initialization |
| `0x10002B19` | arena | block allocation |
| `0x10002E22` | arena | grow allocation |
| `0x10001B24` | error | runtime message lookup/display |
| `0x10001AEB` | error | load/finalize callback dispatch |
| `0x10002FCE` | error | lazy MessageBox wrapper |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 35 | Statically linked C runtime. |
| codepage | 9 | Codepage conversion. |
| string | 9 | Mission string lookup/storage. |
| arena | 6 | String arena. |
| error | 4 | Error reporting. |
| locks | 4 | Lock helpers. |
| data | 1 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Coverage

All 69 classified VAs are in [the MissionLang_MERCS.dll index](../va_index/MissionLang_MERCS_dll.md), which lists role, size, source, and evidence.
