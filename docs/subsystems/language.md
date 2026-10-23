# Language.dll

> **Classified VAs:** 104 | **Exhaustive index:** [Language.dll](../va_index/Language_dll.md)

Codepage-aware localizable string-table loader.

## Role and boundary

`Language.dll` is a resource and localization module, not a call-level API. It
has no named exports beyond the DLL entry point. The game loads the module,
uses its module handle to reach the STRINGTABLE resources, and resolves string
ids through the module's codepage-aware lookup layer.

The DLL is built with a statically linked VC6 LIBCMT runtime and imports only
KERNEL32. The language/codepage machinery is compiled into the module; it does
not forward to the host CRT's locale layer. Roughly 95% of the code is runtime
support, with the localization contract concentrated in the codepage, arena,
string-table, and error-message paths.

## Localization model

The localizable text lives in the module's `.rsrc` STRINGTABLE blocks. The
code around those resources provides:

- codepage resolution and conversion;
- lead-byte and character-class tables;
- case folding and case-insensitive comparison;
- a string-table arena for copied or converted strings;
- runtime error-message lookup and display;
- per-thread state and locks around the shared tables.

The lookup model is id-based. The module does not expose a public
`GetString`-style export; the caller uses the loaded module and the string id,
and the module's internal table/arena layer supplies the text. The exact
pointer lifetime is tied to the module's scratch/arena state, so callers must
not retain a returned pointer across unrelated lookups.

## Codepage and case handling

The codepage layer resolves special values to the host codepages:

| Value | Meaning |
|-------|---------|
| `-2` | `GetOEMCP()` |
| `-3` | `GetACP()` |
| `-4` | display codepage from the module's configuration |

`FUN_1000248B` builds the lead-byte table and initializes the codepage state.
`FUN_10002638` resolves the special values, `FUN_10002682` maps display
codepages (`0x3A4 -> 0x411`, `0x3A8 -> 0x804`, `0x3B5 -> 0x412`,
`0x3B6 -> 0x404`), and `FUN_100026DE` builds the case-fold table from
`GetCPInfo` and the character-type helpers.

The case/locale wrappers are the usual Win32 pair:

- `FUN_100041E8` - `LCMapStringW`/`LCMapStringA`;
- `FUN_10004437` - `GetStringTypeW`/`GetStringTypeA`;
- `FUN_100046C4` - character-type lookup;
- `FUN_100045F8`/`FUN_10004E55` - single-character upper/lower mapping;
- `FUN_10004589` - `toupper`;
- `FUN_10004B90`/`FUN_10004C60` - `stricmp`/`strnicmp`.

These wrappers are the observable case-mapping contract. They use the same
codepage state as the string-table layer, so changing the codepage changes both
conversion and comparison behavior.

## String arena

The string arena is a paged allocator, not the CRT heap:

- `FUN_10002F9F` initializes a 0x140-byte arena header;
- `FUN_10002FE7` scans the 0x14-byte entry array;
- `FUN_10003012` maintains the 0x204-byte bucket free-lists and the
  `0x44`/`0xC4` allocation bitmaps;
- `FUN_1000333B` allocates a block;
- `FUN_10003644` grows an allocation;
- `FUN_100036F5` creates a new `0x8000`-byte page;
- `FUN_100037F0` creates a new 4 MB `VirtualAlloc` arena;
- `FUN_10003934`/`FUN_1000398A` free and trim;
- `FUN_10003A4C` resolves an entry;
- `FUN_10003AA3` accrues accounting;
- `FUN_10003AE8`/`FUN_10003CF0` allocate blocks and runs.

The arena header is static at `0x10006340`; entries are 0x14 bytes. The
allocator uses `VirtualFree` with `0x8000` pages and keeps the free-list
metadata in the same module data. It is protected by the module's lock family,
so lookups and insertions are safe across threads.

## Runtime errors

The module carries a runtime error-message table at `0x10006060`. Each entry is
eight bytes: a message id and a character pointer. `FUN_10001D5E` looks up an
id and either writes the message to `stderr` or builds a `Runtime Error!` message
box. `FUN_10001D25` dispatches the load (`0xFC`) and finalize (`0xFF`) callbacks;
`FUN_10003E14` is a lazy `user32` MessageBox wrapper.

The module-name override is `g_10009118`; the replaceable callback is
`g_1000911C`. These are the points where a host can replace the default error
presentation without changing the message table.

## Runtime and data layout

The module's `.text` is about 16 KB and contains roughly 100 functions. The
localization code is a small part of that; the rest is CRT startup, TLS, heap,
stdio, environment, command-line, exit, string, and SEH support.

Important data:

| Address | Contents |
|---------|----------|
| `0x10006340` | arena header |
| `0x10008EE0` | codepage lead-byte bitmap (0x41 dwords) |
| `0x10008EE1` | codepage flags |
| `0x10008DE0` | case-fold table |
| `0x100084E8` | character-class table |
| `0x10006060` | runtime error-message table |
| `0x10008DB0`/`0x10008DB4` | arena state |
| `0x10008DCC`/`0x10008DC0`-`0x10008DC8` | codepage state |
| `0x10008FE4`/`0x10008FE8` | private heap state |
| `0x10008FEC` | heap-select value |

The `.rdata` block at `0x10005000` holds the import table, strings, and
constants; the `.data` blocks at `0x10006000`, `0x10007000`, and `0x10008000`
hold the writable tables and arena metadata.

The TLS block is 0x74 bytes. It holds the per-thread data pointer at `+0x50`,
a flag at `+0x14`, and several owned pointers freed by the thread teardown
path. The module's locks are the CRT `_lock`/`_unlock` family, including the
nine small leave wrappers in the `0x10002055`-`0x100022E6` range.

## Invariants and failure modes

- The module has no callable string API; callers must use the loaded module
  handle and the resource/string id.
- Codepage values `-2`, `-3`, and `-4` are sentinels, not table indices.
- The case-fold table and lead-byte table are built once per codepage; changing
  the codepage requires the reset/init path.
- Arena allocations are page/arena backed and freed through the arena, not
  through `free`.
- Runtime error lookup is id-based; the table contains the module's known
  messages, and there is no general-purpose string API.
- The module is single-instance state: the arena, codepage tables, and error
  table are module globals, protected by locks rather than per-caller objects.
- The `.rsrc` STRINGTABLE blocks are the text source; the code does not embed
  the localized strings in `.text`.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x100010E9` | crt | DLL entry dispatcher |
| `0x1000248B` | codepage | lead-byte table/state setup |
| `0x10002638` | codepage | special-codepage resolver |
| `0x10002682` | codepage | display-codepage map |
| `0x100026DE` | codepage | case-fold table builder |
| `0x10002863` | codepage | one-time ACP initialization |
| `0x100041E8` | codepage | `LCMapString` wrapper |
| `0x10004437` | codepage | `GetStringType` wrapper |
| `0x100046C4` | codepage | character-type lookup |
| `0x100045F8`/`0x10004E55` | codepage | upper/lower mapping |
| `0x10004B90`/`0x10004C60` | string | case-insensitive compare |
| `0x10002F9F` | arena | arena initialization |
| `0x1000333B` | arena | block allocation |
| `0x10003644` | arena | grow allocation |
| `0x100036F5` | arena | new page |
| `0x100037F0` | arena | new 4 MB arena |
| `0x10003A4C` | arena | entry resolution |
| `0x10001D5E` | error | runtime message lookup/display |
| `0x10001D25` | error | load/finalize callback dispatch |
| `0x10003E14` | error | lazy MessageBox wrapper |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| crt | 36 | Statically linked C runtime. |
| string | 20 | String table lookup/storage. |
| codepage | 17 | Codepage conversion. |
| arena | 13 | String arena. |
| locks | 10 | Lock helpers. |
| error | 4 | Error reporting. |
| data | 3 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Coverage

All 104 classified VAs are in [the Language.dll index](../va_index/Language_dll.md), which lists role, size, source, and evidence.
