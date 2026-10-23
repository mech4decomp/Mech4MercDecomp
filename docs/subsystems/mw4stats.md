# MW4Stats.dll

> **Classified VAs:** 1091 | **Exhaustive index:** [MW4Stats.dll](../va_index/MW4Stats_dll.md)

Stats recording, XML serialization, Zone upload, and Gun authentication.

## Role and boundary

`MW4Stats.dll` is loaded at runtime, not linked. The EXE's loader at
`FUN_00564950` calls `LoadLibraryA("MW4Stats.dll")`, resolves the eight
`MW4StatsDll_*` exports, and caches their addresses in
`0x007EEBD8`-`0x007EEBF4`. Any failed resolution clears the cache, frees the
module, and returns `0x80004005`; there is no fallback path.

The module is a stateful service rather than a set of stateless helpers. Its
load-time constructors build three module-global objects, and `CreateLog` then
attaches a per-session configuration and uploader to them. The exports use
those globals directly; callers never receive a session handle.

All eight exports are `__stdcall`:

| Export | VA | Stack contract | Purpose |
|--------|----|----------------|---------|
| `MW4StatsDll_CreateLog` | `0x100014B0` | 9 params, `RET 0x24` | Build the log/session pipeline |
| `MW4StatsDll_FreeTicket` | `0x100030B0` | 1 param, `RET 0x4` | Release a Gun-auth ticket |
| `MW4StatsDll_RecordGameSummary` | `0x10002430` | 23 dwords, `RET 0x5C` | Commit the session summary |
| `MW4StatsDll_UploadLog` | `0x10002930` | no params | Upload the queued XML |
| `MW4StatsDll_UserGunAuth` | `0x10002AF0` | 5 params, `RET 0x14` | Fetch a Gun-auth ticket |
| `MW4StatsDll_writeBotStats` | `0x10002040` | 26 dwords, `RET 0x68` | Commit one bot record |
| `MW4StatsDll_writePlayerStats` | `0x10001AA0` | 31 dwords, `RET 0x7C` | Commit one player record |
| `MW4StatsDll_writeTeamStats` | `0x10001790` | 22 dwords, `RET 0x58` | Commit one team record |

The `write*` functions return `0` on success. `UploadLog` returns `S_OK`,
`0x80004005` for a setup failure, `0x80040270` for a timeout/finalize failure,
or `0x80040290` when the uploader is not initialized. `RecordGameSummary`
returns the finalize HRESULT.

## Module state

The module's writable state starts at `0x10027000` and is built by load-time
constructors before any export can run:

| Global | Object | Role |
|--------|--------|------|
| `g_10027058` | `LogObject` | Host name, user agent, cookie, session id, uploader pointer |
| `g_10027080` | `ZoneStatsClient` | Record manager, serialization buffers, queue, uploader |
| `g_10026BA0` | `BigRecord` / `StatsRec` | Session accumulator used by `RecordGameSummary` |
| `g_10026BB0` | string slot | Session-name string |
| `g_10026C54` | small type cell | Session mode/type value |
| `g_10026E5C`-`0x10026FA8` | counter block | Per-session totals accumulated by the writers |
| `g_100274F0` | coordinator slot | Registration/uploader factory target |
| `g_10027520`/`28`/`30`/`38` | `Arr` objects | Small integer arrays used by record selection |

The constructors install the vtables, allocate the fixed-capacity string
buffers, and register `_onexit` cleanup callbacks. The cleanup path releases
the uploader, destroys the string buffers, and tears down the session
accumulator. The module does not expose a destroy/close export; teardown is
process-exit only.

## CreateLog: session setup

`MW4StatsDll_CreateLog` is the only way to initialize a session. It builds a
local configuration block and passes it to `FUN_10003980`, which initializes
`g_10027058`:

- The server FQDN is `L"mw4.stats.zone.msn.com"` (`0x10024040`).
- The user agent is `MW4` (`0x100242AC`).
- The configured session id is copied into `+0x1C`; the FQDN pointer is stored
  at `+0x20`; the fixed flags are `+0x0C = 0`, `+0x10 = 0x80`, `+0x14 = 0x65`.
- If `g_10027058 + 4` is already non-NULL, initialization returns
  `0x80040210` instead of replacing the live uploader.

The parameters are positional and partly inferred from their use:

| Parameter | Observed use |
|-----------|--------------|
| `p1` | Session/player identifier stored in the log object |
| `p2` | Server/mode selector; the jump table maps `0,1,2 -> 0,1,2`, `3 -> 4`, default `3` |
| `p3` | Comment string |
| `p4` | Session name stored in `g_10026BB0` |
| `p5` | Player key; copied into two string slots |
| `p6`-`p9` | Session-configuration block copied into `g_10027080` |

The remainder of the function:

1. Constructs the session-config object at `g_10027080` with
   `FUN_10005BF0`, which copies the comment/player/affiliation strings and
   binds the uploader.
2. Builds the global `BigRecord` at `g_10026BA0` and stores the session name.
3. Initializes the small type cell at `g_10026C54`.
4. Emits the first record through the uploader path.

`CreateLog` returns `0` on success. It is not re-entrant: a second call while
the first session is live is rejected by the busy check.

## StatsRec and the recording pipeline

Every `write*` export constructs a fresh `StatsRec` on its stack, fills it,
commits it to the manager, and destroys it. The record is approximately
`0x4B4` bytes and has two embedded vtable views:

- `+0x00`: `0x1002126C`, the full record; slot 0 is the XML serializer.
- `+0xA8`: `0x10021260`, the base sub-view.

The fields used by all three writers include:

| Offset | Meaning |
|--------|---------|
| `+0x0C` | Commit gate; must be non-zero |
| `+0x10` | Record name |
| `+0xB0` | Win-type selector (`0`, `2`, or `4`) copied to the manager at commit |
| `+0xB4` | Type sub-id (ctor value `5`; `4` selects the Gun-auth element) |
| `+0xB8` | Record type: `1` bot, `2` team, `3` player, `4` player with affiliation |
| `+0x2BC`/`+0x2C8`/`+0x2CC` | Component damage given/received/self |
| `+0x2D0`/`+0x2DC`/`+0x2E0` | Damage given/received/self (`_ftol` of doubles) |
| `+0x2E4`/`+0x2EC`/`+0x334` | Deaths/kills/suicides |
| `+0x2F4` | Minutes in game (double) |
| `+0x2FC`/`+0x300` | Score / score per hour |
| `+0x304`/`+0x3D8` | Score-vs-time and team-score-vs-time point lists |
| `+0x338` | Team name |
| `+0x3D0`/`+0x3D4`/`+0x4A8` | Team deaths/team kills/team win |
| `+0x408` | Time to live in seconds |
| `+0x40C` | Tonnage |
| `+0x4A4`/`+0x4AC`/`+0x4B0` | Win, objectives accomplished, turrets destroyed |

The team writer (`0x10001790`) names the record and team from `p1 + 1`,
stores the four doubles and the component-damage integers, and computes the
guarded ratios:

- `DamageRatio = c / (d + e)` when `d + e != 0`, else `0`.
- `ComponentDamageRatio = f / (g + h)` when `g + h != 0`, else `0`.
- `ScorePerHour = (int)(i * 60 / b)` when `b != 0`.
- `Efficiency = (int)(k * 100 / (k + j + l + m))` when the denominator is
  non-zero.
- `TimeToLiveInSeconds = (int)(b * 60 / (j + l + 1))` when the denominator is
  non-zero.

The win flag sets `+0x4A4 = 1` and `+0x2F0 = 0`; a loss sets the opposite.
The per-player score array is appended as `(score, index)` pairs to the
`ScoreVsTime` list.

The bot writer (`0x10002040`) has the same shape with type `1`. It adds a
second name string, formats a float with `%.*g`, and uses `L"? "` for the team
when the team flag is clear. It appends scores to `+0x314` and has no mode-4
path.

The player writer (`0x10001AA0`) adds identity and context. A non-NULL
affiliation string is stored in the `+0x15C` sub-object and changes the type
to `4`; otherwise the type is `3`. A team-game flag selects the team string or
`L"? "`. Mode `4` additionally stores turrets destroyed at `+0x4B0` and
objectives accomplished at `+0x4AC`. The final string parameter drives a
six-cell lookup table and writes the commit gate at `+0x0C`.

All three writers also add their counters to the module-global session
accumulators: score, kills, deaths, suicides, team kills/win/deaths, damage,
component damage, and minutes in game. Team-game-only counters are gated by
the team flag.

## Summary and serialization

`MW4StatsDll_RecordGameSummary` closes the session:

1. Tags the global record's team-name slot with `L"40904b0"`.
2. Reduces the accumulated counters into summary ratios:
   damage given / (received + self), component damage given / (received +
   self), kills / total, score per hour, and minutes / (suicides + deaths + 1).
3. Commits the accumulated `BigRecord` through the manager.
4. Builds a fresh game-options record with 17 `Enabled`/`Disabled` fields plus
   integer and string options.
5. Finalizes the record and returns the HRESULT.

Commit and finalize are thin manager operations:

- `FUN_10005D50` copies the record's `+0xB0` selector to `manager + 0x454`,
  then calls `FUN_10003D90`.
- `FUN_10005D20` copies `record + 4`, then calls `FUN_10003C00`.

The commit path validates the record before serializing it: `+0x0C` must be
non-zero and the name at `+0x10` must be non-empty. Failure returns
`0x80070057`. It then calls the record's vtable slot 0, the XML serializer
`FUN_10005100`, and hands the resulting string to the manager's queue at
`+0x1C8` through vtable slot 5. The finalize path builds the header record
with the cookie `L"FCh=HpR[6PHp=P"` and dispatches through slot 4.

The serializer emits elements in a fixed order: Gun auth (only for type sub-id
`4`), affiliation, chassis, component damage given/ratio/received/self, damage
given/ratio/received/self, deaths, efficiency, kills, loss, minutes in game,
score, score per hour, score-vs-time, suicides, team, team deaths, team kills,
team score-vs-time, time to live, tonnage, and win. Selector `0` or `2` then
appends team win; selector `4` appends objectives, team win, and turrets.

Element writers use the XML literals `<`, ` v="`, `"/>`, `</`, `>`, and
` />`. String values are escaped for `&`, `<`, `>`, `'`, and `"`. Point lists
are emitted only when non-empty.

## Upload path

`MW4StatsDll_UploadLog` is synchronous at the API boundary but asynchronous
inside:

1. Creates the named manual-reset event `"Reporting Sample"`.
2. Builds a kick-off descriptor with mode `4`, a 5000 ms timeout, and the
   event handle.
3. Calls `FUN_10003B20` on the log object. If the uploader pointer at `+4` is
   NULL, it returns `0x80040290`.
4. Waits up to 5000 ms on the event. Timeout or a non-signaled result returns
   `0x80040270`.
5. Calls `FUN_10003B60` to finalize. An async failure returns `0x80040270`;
   otherwise the export returns `S_OK`.

The uploader is an asynchronous COM-style object with slots for start,
record-send, finalize, and kick-off. It starts worker threads with
`CreateThread`, protects state with critical sections, and uses a done byte to
prevent duplicate starts. The queue is drained under lock.

The HTTP client uses WinInet:

- `InternetOpenW` and `InternetSetStatusCallbackA` create the session.
- `InternetConnectW` opens the connection.
- `HttpOpenRequestW` creates the request; the body is sent with
  `HttpSendRequestExW`.
- `InternetWriteFile` writes the chunks; the helper resets a per-write event
  and waits up to 500 ms when the asynchronous mode is active.
- `HttpEndRequestW` completes the request.
- `InternetReadFileExA`/`InternetReadFile` read the response.
- `InternetCloseHandle` releases the handles.

The sender builds a `Content-Type: text/xml` header and writes a `<clr>`
document. The header includes the XML declaration, `<cmd v="query"/>`, a
connection descriptor (`g`, `s`, `z`, `t`, `U`), and optional client counters
(`cs`, `ca`, `qs`, `qa`, `bs`, `br`). The footer optionally appends
`<debug_server_response v="1"/>` and always appends `</clr>`. Queued records
are written between them, then the request is ended.

## Gun authentication

`MW4StatsDll_UserGunAuth` obtains a Zone Gun-auth ticket through COM:

- CLSID `{563702B6-B019-477E-A1AA-F441AE78F17E}`
- IID `{0BA68363-C26C-4E63-84B8-6A0A2AD77819}`
- `CoInitialize` followed by `CoCreateInstance` with `CLSCTX_INPROC_SERVER`.

The function builds `http://<server>/ZoneAccessService...` in a 256-wide
character buffer, using bounded `wcsncat` appends. It then runs two async step
objects and queries the COM object:

- vtable `+0x38`: `GetTicketProperty("sessionKey", ...)`.
- vtable `+0x3C`: `GetSanitizedTicket(...)`.

The ticket is not a structure. On success it allocates
`(wcslen(ticket) + 1) * 2` bytes with `malloc`, copies the wide string, and
writes the pointer to the caller's out-parameter. Failure returns the COM
HRESULT or `0x80004005`; an empty ticket leaves the out-parameter untouched.

`MW4StatsDll_FreeTicket` takes the same out-parameter slot, calls `free` on the
pointed-to buffer, writes NULL back, and returns `0`.

## Support layer

The public flows depend on three internal layers:

- **Allocator and buffers.** `AllocObj` is a two-slot virtual allocator
  (`alloc`, `free`). `WordBuffer` is `{allocator, buffer, count}` and grows by
  `n*2+2` bytes. `StrBuffer` is 24 bytes with data, length, capacity, and
  granularity; it grows linearly and reserves a double-NUL terminator. Every
  serialized record and the uploader's temporary header/footer buffers use
  this type.
- **XML parser.** The parser is a pull parser over a UTF-16 cursor with a
  sink, flags, tokenizer, and cursor. It validates the XML prolog, attributes,
  names, and character data, and decodes the five predefined entities
  (`amp`, `apos`, `lt`, `gt`, `quot`). The writer escapes the same set.
- **Containers and registry.** The record queue is a critical-section-guarded
  list with a count, head, and tail; its iterator advances the head before
  reading the value (eat-next semantics). Reference-counted coordinator and
  uploader objects use an interlocked decrement for release. The module's
  globals form a fixed BSS registry constructed at load and never reallocated.

## Invariants and failure modes

- `CreateLog` is one-shot per process; a live uploader rejects re-entry with
  `0x80040210`.
- A record must have a non-zero commit gate and a non-empty name.
- Ratio fields are zero when their denominators are zero; they never produce
  a divide-by-zero.
- The uploader must exist before `UploadLog`; otherwise the call returns
  `0x80040290`.
- Upload timeout is 5000 ms. Timeout, async failure, or finalize failure all
  map to `0x80040270`.
- A Gun-auth ticket is owned by the caller and must be released with
  `FreeTicket`; the module does not track it.
- The XML writer escapes strings but does not validate them; invalid
  characters pass through as wide characters.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x100014B0` | api | `CreateLog` session factory |
| `0x10001790` | recording | team record writer and commit |
| `0x10001AA0` | recording | player record writer and commit |
| `0x10002040` | recording | bot record writer and commit |
| `0x10002430` | recording | session summary and finalize |
| `0x10002930` | upload | synchronous wrapper around the async upload |
| `0x10002AF0` | gunauth | COM ticket acquisition |
| `0x100030B0` | gunauth | ticket release |
| `0x10005100` | recording | record-to-XML serializer |
| `0x10003D90` | recording | validate, serialize, and queue a record |
| `0x10003C00` | recording | build and queue the finalize header |
| `0x1001E490` | upload | chunked XML body sender |
| `0x1001E7F0` | upload | `<clr>` header builder |
| `0x1001EB80` | upload | `<clr>` footer builder |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| support | 860 | Shared stats infrastructure. |
| crt | 100 | Statically linked C runtime. |
| recording | 69 | Match/player event recording. |
| upload | 33 | Zone upload path. |
| gunauth | 23 | Gun authentication ticket. |
| data | 3 | Initialized data. |
| rdata | 3 | Read-only constants and vtables. |

## Coverage

All 1091 classified VAs are in [the MW4Stats.dll index](../va_index/MW4Stats_dll.md), which lists role, size, source, and evidence.
