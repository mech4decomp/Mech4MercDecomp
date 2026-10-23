# GunDll.dll

> **Classified VAs:** 3213 | **Exhaustive index:** [GunDll.dll](../va_index/GunDll_dll.md)

COM lobby/account client: registration, string/GUID and hash tables, crypto, HTTP, sockets, and the lobby object model.

## Role and boundary

`GunDll.dll` is an in-process COM server and the client half of the Gun 2.0
lobby/account system. It combines several services in one module:

- COM registration and a class factory;
- account login, password, friend, ignore, room, and tournament commands;
- Gun authentication through the Windows CryptoAPI;
- an HTTP client for Zone/Gun service requests;
- a raw Winsock peer-to-peer lobby transport;
- a large command/event object hierarchy that serializes to a text protocol;
- its own allocator, node pool, hash-list, string-table, and base64 codecs;
- a statically linked MSVC6 CRT and the associated SEH machinery.

The module is loaded at runtime through the EXE's COM loader, not through the
import table. The loader calls `LoadLibraryA("gundll.dll")`, falls back to
`Assets\Binaries\gundll.dll`, resolves `DllGetClassObject`, and creates the
session object. The EXE caches the resulting interface pointers in its global
session state.

## COM surface

The module exports the standard COM entry points:

| Export | VA | Behavior |
|--------|----|----------|
| `DllRegisterServer` | `0x10001020` | Returns `E_NOTIMPL` (`0x80004005`) |
| `DllUnregisterServer` | `0x10001030` | Walks the two-row class table and unregisters each entry |
| `DllCanUnloadNow` | `0x100010A0` | Returns `S_OK` |
| `DllGetClassObject` | `0x100010B0` | Validates the GUIDs and returns an `IClassFactory` |

`DllGetClassObject` checks the requested interface against the known
`IClassFactory` and `IUnknown` values, then scans the class table at
`0x10050040` for the requested CLSID. Each table row is 0x10 bytes and carries
a CLSID string, a dispatch function, a description, and a threading model. On a
match it allocates a 0xC-byte factory object through `FUN_10001D50`,
initializes it with `FUN_10001180`, and returns the factory through the vtable
QueryInterface/AddRef path. A missing output pointer returns `0x80070057`; an
unknown class returns `0x80040111`.

The class table identifies the module as `GUN 2.0 API Object` with threading
model `Both` and the `\InprocServer32` suffix. `DllUnregisterServer` uses
`FUN_10002260` to obtain the ProgID and `FUN_10001450` / `FUN_10001D60` to
remove the registry entries. `DllRegisterServer` is deliberately a stub; the
registration is expected to be performed elsewhere.

## Gun authentication

The authentication path uses the Windows CryptoAPI rather than a bundled
cipher. The core flow is:

1. Initialize a crypto object with the registry key name `Gun2Key`
   (`FUN_100074C0`).
2. Import or generate the key (`CryptImportKey`, `CryptGenRandom`).
3. Encrypt the request data (`CryptEncrypt` / `CryptDeriveKey`).
4. Export the key blob (`CryptExportKey`) and encode it.
5. Submit the encoded blob through the HTTP or lobby transport.

The registry value is the persistent half of the identity. The module also
uses `CryptAcquireContextA`, `CryptReleaseContext`, and `CryptDestroyKey` for
the CryptoAPI context lifetime. The authentication object is wired through the
same shared registration/teardown handler at `FUN_10001970` that the other
service objects use.

The HTTP downloader behind the auth path (`FUN_10002D80`) sends a `GET` with
user agent `GUN` and expects HTTP status `200`. The response is returned as a
wide string through the caller's result object; non-200 responses are surfaced
as an error result rather than parsed as a payload.

## Lobby protocol

The lobby protocol is an XML-like text protocol. Messages are elements with
attributes; the framing templates use only `%hs` (ANSI tag/field names), `%ls`
(wide values), `%d` (decimal), and `%x` (lowercase hex). Typical shapes are:

```text
<Tag Attr="value" />
<Tag Attr="0x1234" />
<Tag><Child Val="..." /></Tag>
</Tag>
```

The field and event names are stored as plain NUL-terminated ANSI strings in
`.rdata`; they are not interleaved or encrypted. The module uses the names via
`%hs`, while values are wide strings or numbers. The custom base64 alphabet is
`a-z A-Z 0-9 ! .` (not the standard `+/` alphabet). Blob values are
HTML-escaped for `"`, `&`, `<`, and `>` before framing, then base64-encoded.

The serializer path is:

1. The object's vtable `+0x30` emits its payload fields.
2. The object's vtable `+0x08` finalizes the payload.
3. `FUN_10002660` / `FUN_10002790` encode or decode the base64 blob.
4. `FUN_1002E090` frames the tag and value with the wide template
   `<%hs %hs="%hs"/>`; the common shape is `<Tag Val="<base64>"/>`.
5. `FUN_1002B140` concatenates the framed elements.

The confirmed login-family elements include `<Connect ...>`,
`<ConnectRes ...><RSAKey Val="..."/></ConnectRes>`, `<ConInfo ...>`,
`<Login ...><Password Val="..."/></Login>`, `<LoginRes ...>`, and the
friend/room/tournament families. Each class's `+0x30` method is a sequence of
command-setup helpers that append one field through a fixed template; the
resulting `(template, field, value)` sequence is the wire contract.

## HTTP client

The HTTP layer is a separate object family built on WinINet:

- `InternetOpenA` creates the session.
- `InternetConnectA` opens the server connection.
- `HttpOpenRequestA` creates the request; `HttpSendRequestA` sends it.
- `HttpQueryInfoA` reads the status and headers.
- `InternetQueryDataAvailable` / `InternetReadFile` read the body.
- `InternetCloseHandle` releases each handle.

The downloader expects HTTP 200 and returns the response as a wide string. The
request object is reference-counted and has an explicit teardown path that
closes every handle even on error.

## Socket and peer-to-peer layer

The socket layer uses Winsock directly through thunks in `.text`
(`socket`, `bind`, `getsockname`, `closesocket`, `ntohs`). It provides:

- socket creation and binding;
- local endpoint discovery (`getsockname` + `ntohs`);
- IPv4 dotted-quad formatting (`%d.%d.%d.%d`);
- host name/port exchange;
- packet framing, buffering, and a send/receive queue;
- event objects and connection/list management;
- `CoCreateInstance` for the device/direct-play helper objects used by the
  lobby transport.

The socket object model has its own session/queue/lock layer. The queue is a
critical-section-guarded list with priority insertion at the head when the
low bit of the flags is set, FIFO otherwise. A signal event is raised when the
queue becomes non-empty and reset when it drains. The packet layer maintains
sequence/timing state and dispatches received headers to per-type handlers.

## Object model and memory infrastructure

The lobby client is a large C++ object hierarchy with three shared base
families. The command/event classes are hand-wired vtables rather than RTTI
classes; each class supplies a payload emitter and a finalizer. The object
graph is rooted in the session object and the two-row class table.

The module carries its own memory infrastructure:

- an allocator with a `ZmMe`/`dEnZ` header (`FUN_1000C1B0`);
- a node pool with `PFRE`/`POOL`/`PEND` tags (`FUN_1000C410`/`FUN_1000C4C0`);
- 0x3C-byte hash-list/string-table objects;
- a `ZONE`-tagged packed string table;
- a custom base64 encoder/decoder.

These are real module services, not wrappers around the CRT. The hash-list is
used for the lobby's name/id tables and the object registry; the pool reduces
allocation churn for the command/event nodes.

## CRT, SEH, and code layout

Roughly 40-45% of the module's functions are statically linked MSVC6 CRT code:
printf/wprintf/scanf/strftime/float formatting, `memmove`, the buddy-block
heap, stdio handle tables, locale/NLS, TLS, and SEH support. The `seh` detail
contains the compiler-generated funclets; the `crt` detail contains the
runtime. These are support code, not lobby behavior.

The module's `.text` starts at RVA `0x1000`; the main client code and the
string/GUID/hash helpers occupy the low range, while the socket and object
model code extends to the end of `.text`. `.rdata` starts at RVA `0x49000` and
contains the IAT (140 slots), vtables, format strings, GUIDs, and protocol
tables. `.data` starts at RVA `0x50000` and contains the class table, mutable
state, and module globals. `.rsrc` and `.reloc` follow.

The import surface covers registry, CryptoAPI, synchronization, heap/MM,
WinINet, OLE/COM, winsock, and CRT. The module does not import game DLLs.

## Invariants and failure modes

- `DllRegisterServer` is intentionally unimplemented; registration is handled
  by the unregister path or an external installer.
- `DllCanUnloadNow` always returns `S_OK`; the module does not track external
  references for unload.
- `DllGetClassObject` rejects a NULL output pointer with `0x80070057` and an
  unknown class with `0x80040111`.
- The HTTP downloader requires status 200; other statuses become error results.
- The lobby protocol requires the custom base64 alphabet and HTML escaping;
  standard base64 or unescaped values produce different wire bytes.
- The socket queue is lock-protected and signal-driven; priority insertion is
  controlled by the low flag bit.
- The auth key is persistent registry state (`Gun2Key`); deleting or replacing
  it changes the identity presented to the service.
- The statically linked CRT and SEH ranges are runtime support and should not
  be treated as lobby behavior when reading the per-VA index.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x10001020` | com | `DllRegisterServer` (E_NOTIMPL) |
| `0x10001030` | com | `DllUnregisterServer` |
| `0x100010A0` | com | `DllCanUnloadNow` |
| `0x100010B0` | com | `DllGetClassObject` |
| `0x10001180` | object | class factory initialization |
| `0x10001450` | registry | registry value writer |
| `0x10001970` | objects | shared registration/teardown |
| `0x10001D50` | object | module allocator front door |
| `0x10002660` | codec | custom base64 decode |
| `0x10002790` | codec | custom base64 encode |
| `0x10002D80` | http | HTTP GET downloader |
| `0x10007470` | crypto | crypto object initialization |
| `0x100074C0` | crypto | Gun2Key crypto setup |
| `0x100080D0` | http | HTTP client object factory |
| `0x1000C1B0` | objects | allocator with ZmMe/dEnZ header |
| `0x1000C410` | pool | node pool allocation |
| `0x1000C4C0` | pool | node pool free |
| `0x1002AF80` | codec | HTML escape |
| `0x1002C970` | objects | object/collection builder |
| `0x1002E090` | codec | tag/value framing |
| `0x100303E0` | sockets | socket event post |
| `0x10033680` | sockets | socket event dispatch |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| objects | 1362 | Lobby/account object model and command hierarchy. |
| seh | 614 | Compiler-generated SEH funclets. |
| crt | 555 | Statically linked C runtime. |
| sockets | 237 | Winsock socket layer. |
| hashlist | 81 | Hash-list object and iteration. |
| string | 60 | String/GUID/codepage conversion. |
| codec | 54 | Base64/byte codecs. |
| parser | 36 | Config/XML/response parsers. |
| registry | 33 | Registry and COM registration. |
| http | 30 | WinINet HTTP client. |
| object | 30 | Generic object/vtable helpers. |
| crypto | 26 | Crypto/MD5 helpers. |
| locks | 26 | Critical-section helpers. |
| pool | 17 | Fixed-size object pool. |
| unclassified | 14 | Helpers without a module-map label. |
| config | 11 | Configuration values. |
| rdata | 7 | Read-only constants and vtables. |
| data | 6 | Initialized data. |
| imports | 6 | IAT jump thunks. |
| com | 3 | COM entry points. |
| exports | 3 | DLL exports. |
| md5 | 1 | MD5 helper. |
| platform | 1 | Win32/CRT glue. |

## Coverage

All 3213 classified VAs are in [the GunDll.dll index](../va_index/GunDll_dll.md), which lists role, size, source, and evidence.
