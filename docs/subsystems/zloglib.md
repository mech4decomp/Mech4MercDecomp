# ZlogLib.dll

> **Classified VAs:** 33 | **Exhaustive index:** [ZlogLib.dll](../va_index/ZlogLib_dll.md)

Logging API (`GetngLogAPI`) with lifecycle, emit, MD5, and memory helpers.

## Role and boundary

`ZlogLib.dll` is a small, self-contained logging module. Its entire public
surface is one export, `GetngLogAPI` at `0x10001C6E` (ordinal 1). The module
has no imports of game DLLs and no dependency on the EXE; it uses the shared
MSVC runtime (`msvcrt.dll`) plus a small KERNEL32 surface for file and child
process operations.

The retail EXE does not import or load this DLL. Its own log formatter lives in
the EXE at `0x006F91D0`, and the `-zlogname`/`-zlogstyle` switches feed that
path. ZlogLib is therefore an independent logging API rather than a required
part of the game's startup sequence.

The module is `/MD`, not statically linked. Its small `crt` detail is runtime
glue around the shared runtime, not a bundled C library; the rest of the
module is game logging, codec, and file-lifecycle code.

## Public API

`GetngLogAPI` takes a two-dword context source and a pointer to the caller's
API table, allocates an eight-byte context with `calloc(1, 8)`, copies the two
dwords into it, stores the context in `g_10027098`, and returns `1`.

The API table is an array of function pointers with a hole at `+0x1C`:

| Slot | VA | Function |
|------|----|----------|
| `+0x00` | `0x10001CD2` | release/free preamble |
| `+0x04` | `0x10001CD8` | release/free preamble |
| `+0x08` | `0x100018A6` | log init / header |
| `+0x0C` | `0x10001C28` | child-process status |
| `+0x10` | `0x10001707` | game-end flush |
| `+0x14` | `0x100016D9` | game-start record |
| `+0x18` | `0x10001796` | message emit |
| `+0x1C` | - | unused hole |
| `+0x20` | `0x100017C8` | player-connect record |

All slot functions are `__cdecl`. The context's second dword (`context + 4`) is
the optional callback used by the record slots; when it is NULL, the slots use
the fallback string `99.999`.

## Log lifecycle

The lifecycle is split between configuration, file creation, header emission,
and close:

- `FUN_10001A1D` applies a caller configuration block. The block is about
  `0xCB4` bytes and supplies the log mode, directory/name strings, snapshot
  naming, flush cadence, and an array of extra information strings. It copies
  the fields into module globals (`g_10004014`, `g_10004304`, `g_10004300`,
  `g_10004010`, `g_10005108`) and builds the primary and secondary path
  strings.
- `FUN_10001000` is the init core. It probes/creates the log file, chooses the
  open mode, formats the initial timestamp, and opens the primary and optional
  secondary sinks. It supports five observed modes; modes 3 and 4 build both a
  live log name and a permanent snapshot name, and mode 4 renames the primary
  on close.
- `FUN_100018A6` is the API's init/header entry. A NULL argument disables
  logging, copies `DISABLED` into the log-name buffer, and returns that buffer.
  Otherwise it applies the configuration, emits the header block, and returns
  the active log-name buffer.
- `FUN_10001357` closes the sinks. It flushes and closes the primary and
  secondary files, performs the mode-4 rename, builds the permanent snapshot
  name for the secondary, and optionally spawns the stats collector.

The header block is a sequence of formatted lines: `Log_Standard`,
`Log_Version`, `Log_Info_URL`, four configuration dwords, the extra-information
array, and a `Game_Init` timestamp. When logging is disabled, the header path
emits `DISABLED` instead.

The close path spawns the collector with the current directory and a
`zWorldStats` command line in the form `"%s -d %s -g %s"`. A spawn failure
records thread id `-0x457`; a successful child is monitored through the
child-status slot.

## Emit and dispatch

`FUN_10001201` is the low-level emitter. It copies the message into a
`0x7D00`-byte stack buffer, appends the configured separator, and writes to the
active sinks:

- The primary sink receives `fprintf(file, "%s", message)` when the mode is
  enabled, the primary file is open, and the level is not `2`.
- The secondary sink receives the same message after XOR-obfuscation with
  `0xA7`, written with `fwrite`, when the secondary is enabled, open, and the
  level is not `1`.
- The key MD5 advances identically for both sinks.
- Flush counters are per-sink. In flush mode `1`, a counter is incremented and
  the file is flushed when the configured cadence is exceeded; the counter
  then resets to zero.

`FUN_10001BE9` is the dispatcher. It does nothing when logging is inactive or
the message is empty; otherwise it routes level `1` when the primary mode is
enabled and level `2` when the secondary mode is enabled.

The API slots wrap this core:

- `FUN_100016D9` emits a game-start line (`%s\tGame_Start`) using the context
  callback or the `99.999` fallback, then dispatches it.
- `FUN_10001796` emits a general message (`%s\t%s`) through the same path.
- `FUN_10001707` emits the game-end lines, including the key hex string, then
  closes the log.
- `FUN_100017C8` emits a player-connect line. It dumps a non-empty data blob as
  hex; an empty blob becomes `\tNO_PARTICIPATION`; a negative length becomes
  `(null)`.

The ring formatter `FUN_10002931` uses four rotating `0x7D00`-byte buffers
starting at `0x10007C20`. Each call returns a pointer into the current buffer
and advances `g_10027020` modulo four. A returned pointer is only valid until
the next ring call; callers that need to retain the text copy it immediately.

## Timestamps and filenames

`FUN_10001561` formats the current time with `_ftime`, `time`, `localtime`, and
the timezone global. The format is
`%d.%.2d.%.2d.%.2d.%.2d.%.2d.%.2d.%+2.1f`: year, month, day, hour, minute,
second, milliseconds, and signed timezone offset. The result is copied into
the caller's buffer with a trailing NUL.

`FUN_100016A6` probes a file with `fopen`. It returns `1` on success, `0` when
`errno` is `ENOENT`, and `3` for any other error.

`FUN_100015FB` builds a non-colliding filename. It strips the extension,
appends a numeric suffix, and retries until the file probe reports no
collision. The candidate is formatted through the ring formatter, so the
result must be copied before the next ring call.

## MD5 and byte codecs

The module contains a complete in-DLL MD5 implementation:

| VA | Function |
|----|----------|
| `0x10001E84` | context init: four magic state words; zero count fields |
| `0x10001EAC` | update: append data to the running context |
| `0x10001F4A` | final: pad, append the 64-bit length, write the digest |
| `0x10001FAE` | 64-round block transform (2,219 bytes) |

The context is `0x58` bytes: four state words, two count words, and a 64-byte
block buffer. The final step zeroes the context after producing the digest.

The surrounding codecs are used for log names and data blobs:

- `FUN_10001CF5` hashes a string into the key MD5 context and XOR-obfuscates
  the buffer with `0xA7`.
- `FUN_10001D24` decodes a range, computes the MD5 of the 16-byte key, and
  produces a lowercase hex string.
- `FUN_10001DB9` hex-encodes a byte range with `%02x` into a shared output
  buffer and returns its address.
- `FUN_10001E01` decodes a byte range into a hex string; decoded NUL bytes are
  dropped because the output is built with string concatenation.

The byte helpers are deliberately simple and overlap-safe:

- `FUN_10002859` writes each source dword as four little-endian bytes.
- `FUN_1000289E` reads each source dword as a big-endian value.
- `FUN_100028E4` performs a forward byte copy.
- `FUN_10002902` fills a range with a byte value.

## Child-process status

`FUN_10001C28` wraps `GetExitCodeProcess` for the collector child:

- If the exit code is `0x103`, it returns `2`.
- Otherwise it returns `((code > 0) - 1 & ~2) + 3`, which maps the signed
  comparison to `1` or `3`.
- If the status query fails, it returns `0`.

This is the value exposed through API slot `+0x0C`; the log lifecycle uses it
to decide whether the collector completed normally.

## State and data layout

The module's writable state is a fixed global block, not a heap-allocated
object:

| Global | Role |
|--------|------|
| `g_10027098` | API context pointer (eight bytes: two caller dwords) |
| `g_10027020` | ring-buffer index (`0`-`3`) |
| `g_10004014` | log mode/level |
| `g_100042F8` / `g_100042FC` | primary/secondary open state |
| `g_10004304` | secondary sink enable |
| `g_10004300` | flush mode |
| `g_10004010` | flush cadence |
| `g_10005108` | configuration value copied from the caller block |
| `g_10027040` | key MD5 context |
| `g_10006C10` | hex output buffer |
| `g_100274A0`-`g_100274A8` | range-decode metadata |
| `g_10004D08`, `g_1000590C`, `g_1000658C` | per-file name buffers |

The `.rdata` block at `0x10003000` holds the import table, the API/function
pointers, format strings, and constants. The `.data` block at `0x10004000`
holds the writable name buffers and log strings; the ring formatter uses a
separate global area at `0x10007C20`. The code uses fixed module-relative
addresses, and there is no per-session allocation for the logger itself.

## Invariants and failure modes

- `GetngLogAPI` always allocates a fresh eight-byte context and returns `1`;
  it does not reject repeated calls. The old context is not freed by the
  module.
- Logging is active only when the mode is non-zero; the dispatcher also
  requires a non-empty message.
- The primary and secondary sinks are independent. A level-1 message skips the
  secondary; a level-2 message skips the primary.
- The secondary payload is XOR-obfuscated with `0xA7`; the primary payload is
  plain text.
- File-open failure does not abort the module. The init core returns `-1` when
  the required sink cannot be opened and `0` otherwise.
- The ring formatter's return value is transient; use-after-next-call is a
  bug in the caller, not a module error.
- A NULL init argument disables logging and returns the `DISABLED` buffer
  rather than failing.
- The collector child is optional; a spawn failure is recorded but does not
  prevent the log from closing.

## Relationship to the EXE logger

The EXE's own logger (`0x006F91D0` and its `FUN_006FA880`/`FUN_006FA8F0`
helpers) is a separate implementation with its own formatting and file
handling. ZlogLib's API and file format are not shared with that path. The two
should be documented and tested independently; a change to one does not
imply a change to the other.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x10001C6E` | api | `GetngLogAPI` export |
| `0x100018A6` | lifecycle | init and header emission |
| `0x10001A1D` | lifecycle | apply the caller configuration |
| `0x10001000` | lifecycle | open the log files |
| `0x10001357` | lifecycle | close, rename, and spawn the collector |
| `0x10001201` | emit | format and write one message |
| `0x10001BE9` | emit | route a message to the active sinks |
| `0x100016D9` | api | game-start slot |
| `0x10001796` | api | message-emit slot |
| `0x10001707` | api | game-end slot |
| `0x100017C8` | api | player-connect slot |
| `0x10001561` | emit | timestamp formatter |
| `0x100015FB` | lifecycle | filename uniquifier |
| `0x100016A6` | lifecycle | file-exists probe |
| `0x10001E84` | md5 | MD5 init |
| `0x10001EAC` | md5 | MD5 update |
| `0x10001F4A` | md5 | MD5 final |
| `0x10001FAE` | md5 | MD5 transform |
| `0x10001CF5` | md5 | XOR/key-MD5 obfuscation |
| `0x10001DB9` | md5 | lowercase hex encoder |
| `0x10001D24` | md5 | key hex string |
| `0x10001E01` | md5 | range decode |
| `0x10002931` | emit | four-buffer ring formatter |
| `0x10001C28` | lifecycle | child exit-code mapping |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| lifecycle | 8 | Log init/shutdown. |
| md5 | 8 | MD5 helper. |
| api | 5 | GetngLogAPI and method table. |
| emit | 4 | Log message emission. |
| mem | 4 | Memory helper. |
| crt | 2 | Shared-runtime jump thunks. |
| data | 1 | Initialized data. |
| rdata | 1 | Read-only constants and vtables. |

## Coverage

All 33 classified VAs are in [the ZlogLib.dll index](../va_index/ZlogLib_dll.md), which lists role, size, source, and evidence.
