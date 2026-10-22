# Log Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 192 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Logging, assertions, error reporting, and diagnostic output.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The log buffer, level filtering, emit, and assert code sit in 0x006F9000-0x006FB000; error dispatch is at 0x006BF9E0. ZlogLib exposes the same facility through `GetngLogAPI`.

Logging is called from runtime, UI, net, and archive code. It writes diagnostic output and is one of the main observability seams in the game.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x006F9000-0x006FB000 | (general) | log buffer/emit/assert |
| 0x006BF9E0 | (general) | error dispatch |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 192 | Logging, assertions, and diagnostic output. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
