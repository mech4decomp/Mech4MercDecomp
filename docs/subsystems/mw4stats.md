# MW4Stats.dll

> **Classified VAs:** 1091 | **Exhaustive index:** [MW4Stats.dll](../va_index/MW4Stats_dll.md)

Stats recording, XML serialization, Zone upload, and Gun authentication.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The `MW4StatsDll_*` exports are the public API. Recording collects match/player events; the serializer turns them into XML; upload sends the payload to Zone; gunauth obtains/attaches the Gun auth ticket.

Support and CRT details are the shared infrastructure used by those four stages.

## Key entry points

No single function is representative; use the export table in the per-VA index and the detail map below.

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

## Inventory

The detail table above gives the full count for this module. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Stats.dll index](../va_index/MW4Stats_dll.md).

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Stats_dll.md)
