# MW4Stats.dll

> **Classified VAs:** 1091 | **Exhaustive index:** [MW4Stats.dll](../va_index/MW4Stats_dll.md)

Stats recording, XML serialization, Zone upload, and Gun authentication.

## How it works

The `MW4StatsDll_*` exports are the public API. Recording collects match/player events; the serializer turns them into XML; upload sends the payload to Zone; gunauth obtains/attaches the Gun auth ticket.

Support and CRT details are the shared infrastructure used by those four stages.

## Key entry points

No single function is representative; use the detail map below and the per-VA index.

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
