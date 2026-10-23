# Log Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 192 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Logging, assertions, error reporting, and diagnostic output.

## Role and boundary

The EXE-side log subsystem is the game's diagnostic and error-reporting layer.
It is separate from `ZlogLib.dll`: the EXE does not load ZlogLib, and the
`-zlogname`/`-zlogstyle` switches feed this in-EXE formatter. The two systems
have different buffers, formatting, and file handling.

The subsystem covers three related jobs:

- **Emission:** append formatted text and numbers to a growable buffer and
  forward the result to registered log targets.
- **Assertions:** format an assertion message, optionally force a crash, and
  dispatch it to the error reporter.
- **Error reporting:** build a file/line-prefixed message, show it through the
  error dialog/OutputDebugString path, and handle the user's response.

The code is concentrated in `0x006F9000`-`0x006FB000`, with the general error
entry at `0x006BFA50`. The band also contains FPU diagnostic checks and
background file-loading helpers that share the same module data; not every VA
in the range is a log emitter.

## Log targets

The subsystem keeps a linked list of log targets at `0x008493C8`. The target
objects are vtable-based and receive different notifications:

| Function | Behavior |
|----------|----------|
| `FUN_006F9000` | Walks the list and calls vtable `+0x20` on each node; returns true only if every call returns true |
| `FUN_006F9050` | Repeatedly calls vtable `+0x08` on the head until the list is empty; returns 1 |
| `FUN_006F9070` | Sets `0x007B6ECC`, walks the list calling vtable `+0x14`, clears the flag if any call fails, then calls `FUN_006F90E0` |
| `FUN_006F90E0` | Stores its argument in `0x008493CC` and calls vtable `+0x24` on every node |
| `FUN_006F90D0` | Returns the dword at `0x008493CC` |

A second list at `0x00849EC0` holds registered log/source nodes.
`FUN_006FA970` builds a 0x18-byte key, searches the list with `repe cmpsb`,
and inserts a new node when no match exists. `FUN_006FAA00` walks the list and
frees each node; `FUN_006FAC50` frees both this list and the allocation list at
`0x00849EBC`.

## Buffer append primitives

The formatter builds its report in a custom string buffer with this layout:

| Offset | Meaning |
|--------|---------|
| `+0x00` | capacity |
| `+0x04` | cursor (write offset) |
| `+0x08` | buffer base |

`FUN_006FA880` appends a NUL-terminated string. It computes `strlen(src)`,
clamps the copy to the remaining capacity, copies `strlen + 1` bytes (including
the source terminator), writes a terminator, and advances the cursor to
`cursor + copied - 1`. A NULL source leaves the buffer unchanged.

`FUN_006FA8F0` converts an integer to decimal with `_itoa(value, buf, 10)` and
appends the resulting string through the same clamped-copy logic. Both
functions return the buffer pointer in `EAX` and are the primitive writers used
by the large formatter.

## The main error/log formatter

`FUN_006F91D0` is the 5,797-byte output function. It is `__stdcall` with two
parameters (`RET 0x8`): a mode/flags word and the message string. It builds a
report containing:

- the caller's message;
- a stack walk / return-address listing;
- system and process details;
- formatting and diagnostic text.

It then presents the report through `MessageBoxA` and/or
`OutputDebugStringA`, depending on the mode and the current diagnostic state.
The user's response selects continue, exit, or debugger attachment. The function
returns an integer result; callers use that result to decide whether to break
into the debugger or abort.

The two main callers are:

- `FUN_006FAB90` - the assertion helper. It formats a message into a 256-byte
  stack buffer with `_vsnprintf`, optionally writes to address 0 when the global
  at `0x00849EA8` is set, then calls `FUN_006F91D0` with mode `0x183`.
- `FUN_006BFA50` - the general error-log entry. It builds a `file(line) : `
  prefix when source information is available, or `Unknown File : ` otherwise,
  appends the formatted message, and calls `FUN_006F91D0` with mode `0x201`.
  If the formatter returns non-zero, it executes `INT3`.

`FUN_006BFA50` chooses the prefix from `0x0082F338`, `0x0082F330`, and the
source path/line globals. When the path is available it calls
`GetFullPathNameA` (`FUN_006FBC60`) and extracts the filename after the last
backslash before formatting `%s(%d) : `.

## Assertion path

`FUN_006FAB90` is the assertion/error utility used by vtable assertions such as
`FUN_00415B70`. It reads the format string and varargs from the caller's stack,
formats into a 256-byte buffer, and checks the global `0x00849EA8`:

- when non-zero, it deliberately dereferences NULL to force a crash;
- otherwise it calls the main formatter with mode `0x183`.

The formatted buffer is always NUL-terminated at `buffer[0xFF]`, so a
truncated assertion is still a valid string.

## Diagnostic and loading helpers

The same address band contains diagnostics and file loading that support the
log/error path:

- `FUN_006FAA30` sets the FPU control word and the global at `0x00849EAC`;
  `FUN_006FAAB0` validates the control word and raises an assertion if math
  exceptions or precision have been reset.
- `FUN_006FACA0` opens a file, reads it into a heap buffer, and returns the
  buffer/size through out-parameters. It normalizes UNC paths and supports the
  callback at `0x00858A44`.
- `FUN_006FAE50` is a background file-loader thread: it waits on two events,
  opens/maps each pending node in `0x00856710`, reads it, and marks it loaded.

These are not text-formatting functions, but they share the module's globals
and are part of the diagnostic/file-support band.

## Error and log flow

The typical flow is:

```text
assert / error call
    -> format message into a local buffer
    -> FUN_006FAB90 (assert) or FUN_006BFA50 (error_log)
    -> add source prefix (error_log only)
    -> FUN_006F91D0 (mode 0x183 or 0x201)
    -> append message + stack/system details to the report buffer
    -> show dialog / OutputDebugString
    -> return continue/exit/debugger result
```

The log-target list is used for registered observers, not for the primary error
dialog. `FUN_006F9000`/`FUN_006F9050`/`FUN_006F9070`/`FUN_006F90E0` notify
those targets through their vtable slots; the formatter's dialog path is
independent.

## Invariants and failure modes

- The buffer append clamps to capacity but always copies the source terminator;
  the cursor update is `cursor + copied - 1`, not `cursor + copied`.
- A NULL string source is a no-op; an integer append always formats.
- `FUN_006F91D0` has two stack parameters and returns `RET 0x8`; callers must
  use the `__stdcall` convention.
- The assertion helper deliberately crashes when `0x00849EA8` is non-zero; this
  is an intentional failure path, not memory corruption.
- `FUN_006BFA50` executes `INT3` when the formatter returns non-zero, so a
  debugger sees the error at the source site.
- The log-target list and the source-node list are separate; clearing one does
  not clear the other.
- The FPU checks are diagnostics, not logging; they raise assertions when the
  control word no longer matches the expected state.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x006F9000` | targets | notify log targets via vtable `+0x20` |
| `0x006F9050` | targets | drain targets via vtable `+0x08` |
| `0x006F9070` | targets | notify targets via vtable `+0x14` |
| `0x006F90E0` | targets | store state and notify via vtable `+0x24` |
| `0x006F91D0` | formatter | build and present the error/log report |
| `0x006FA880` | buffer | append a string |
| `0x006FA8F0` | buffer | append an integer |
| `0x006FA970` | targets | insert a 0x18-byte source node |
| `0x006FAA00` | targets | free the source-node list |
| `0x006FAB90` | assert | format and dispatch an assertion |
| `0x006BFA50` | error | build the file/line prefix and dispatch an error |
| `0x006FACA0` | file | open/read a file into a heap buffer |
| `0x006FAE50` | file | background file-loader thread |
| `0x006FAA30` | diagnostic | set the FPU control word |
| `0x006FAAB0` | diagnostic | validate the FPU control word |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 192 | Logging, assertions, and diagnostic output. |

## Coverage

All 192 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
