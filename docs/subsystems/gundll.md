# GunDll.dll

> **Classified VAs:** 3213 | **Exhaustive index:** [GunDll.dll](../va_index/GunDll_dll.md)

COM lobby/account client: registration, string/GUID and hash tables, crypto, HTTP, sockets, and the lobby object model.

## How it works

`DllGetClassObject` at 0x100010B0 exposes the COM class factory. Registration and the shared registration/teardown handler are around 0x10001970; the string/GUID/codepage helpers are around 0x10001450.

The lobby object model is the large 0x1002C970 family. It drives HTTP (0x100080D0), sockets (0x100303E0), the hash-list object, and the crypto/MD5 helpers (0x10007470). SEH and CRT ranges are separate details in the detail table.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x100010B0 | com | DllGetClassObject |
| 0x10001970 | objects | shared registration/teardown |
| 0x10001450 | string | string/GUID/codepage helpers |
| 0x1002C970 | objects | lobby object model |
| 0x100080D0 | http | HTTP client |
| 0x100303E0 | sockets | socket layer |
| 0x10007470 | crypto | crypto/MD5 helpers |

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
