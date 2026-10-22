# Input Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 11 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Keyboard/mouse/joystick state and command bindings.

## How it works

The window procedure is 0x0072E580. Keyboard and mouse state is kept in a 256-bit bitmap: 0x007238D0 sets a bit, 0x007239A0 clears it, and 0x007239F0 copies the per-frame snapshot. Queries are 0x00723A30 and 0x00723B40.

The command table at 0x0077B9D8 maps command IDs to handlers. Bindings are loaded from the pilot's `options.mw4` control entry. DirectInput is used for mouse motion/wheel and joysticks, not for the keyboard.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x0072E580 | window | window procedure/message routing |
| 0x007238D0 | keyboard | set key state bit |
| 0x007239A0 | keyboard | clear key state bit |
| 0x007239F0 | keyboard | per-frame key snapshot |
| 0x00723A30 | keyboard | action state query |
| 0x00723B40 | keyboard | virtual-key query |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| keyboard | 9 | Keyboard/mouse bitmap and action-state queries. |
| directinput | 1 | DirectInput device enumeration and GUID/name lookup. |
| window | 1 | Window procedure and message routing. |

## Coverage

All 11 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
