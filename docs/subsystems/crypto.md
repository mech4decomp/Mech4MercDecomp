# Crypto Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 6 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

MD5, hashing, and base64 helpers.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [Inventory](#inventory)
- [Related](#related)

## How it works

The MD5 primitive island is 0x0070E380-0x0070E480; the in-game MD5 caller/validator is 0x0060C12D. Base64 and related byte helpers are used by the network and stats/auth paths.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0070E380-0x0070E480 | md5 | MD5 primitive helpers |
| 0x0060C12D | md5 | MD5 caller/validator |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| md5 | 4 | MD5 primitives, callers, and validators. |
| (general) | 2 | Hashing/encoding helpers outside the MD5 detail. |

## Inventory

The detail table above counts every classified VA in this subsystem, including shared and boundary rows; the seam summary splits those roles. The exhaustive per-VA table (role, size, source, evidence) is in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md).

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/MW4Mercs_exe.md)
