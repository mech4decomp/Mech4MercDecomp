# Crypto Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 6 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

MD5, hashing, and base64 helpers.

## Role and boundary

The crypto surface in the EXE is a small set of primitives: MD5, base64, and
the callers that use them for data validation and authentication. The heavy
protocol crypto (Gun authentication) lives in `GunDll.dll`; this subsystem is
the in-EXE primitive layer.

The MD5 island is `0x0070E380`-`0x0070E480`:

| VA | Function |
|----|----------|
| `0x0070E390` | MD5 context init (four magic state words; zero count fields) |
| `0x0070E3C0` | MD5 update (append data to the running context) |
| `0x0070E460` | MD5 final (pad, append length, write digest) |
| `0x0070E4D0` | MD5 compression function (state update + finalize) |

The context uses the standard MD5 state/count/block layout. The update and
final functions are the usual RFC 1321 flow; the compression function performs
the 64-round block transform.

## Callers and validation

`FUN_0060C12D` is a large gameplay load/validate routine. It reads an object
list, validates entries, builds C++ strings, and hashes data through the MD5
primitives (`0x70E390`/`0x70E3C0`/`0x70E460`). The hash is used as part of the
load/validation path, not as a general-purpose public API.

The base64 helpers are `FUN_0050D9D0` and `FUN_0050DA00`:

- `FUN_0050D9D0` maps a 6-bit value to the standard base64 alphabet
  (`A-Z`, `a-z`, `0-9`, `+`, `/`);
- `FUN_0050DA00` is the base64 encoder that consumes the input bytes and emits
  the encoded characters.

These helpers are used by the network and stats/auth paths. They are not the
custom alphabet used by `GunDll.dll`; that module has its own base64 variant.

## Invariants and failure modes

- MD5 context init must precede update/final; an uninitialized context produces
  an invalid digest.
- The final step writes the digest and zeroes the context state; a second
  final on the same context is not valid.
- The compression function expects a full 64-byte block; the update function
  handles buffering.
- The base64 encoder uses the standard alphabet; a caller expecting the
  GunDll custom alphabet must use that module's codec instead.
- The validation caller treats a hash mismatch as a load/validation failure,
  not as a recoverable warning.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0070E390` | md5 | context init |
| `0x0070E3C0` | md5 | update |
| `0x0070E460` | md5 | final |
| `0x0070E4D0` | md5 | compression transform |
| `0x0060C12D` | md5 | load/validate caller |
| `0x0050D9D0` | base64 | 6-bit-to-character map |
| `0x0050DA00` | base64 | encoder |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| md5 | 4 | MD5 primitives, callers, and validators. |
| (general) | 2 | Hashing/encoding helpers outside the MD5 detail. |

## Coverage

All 6 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
