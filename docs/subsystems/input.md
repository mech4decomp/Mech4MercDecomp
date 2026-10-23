# Input Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 11 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Keyboard/mouse/joystick state and command bindings.

## Role and boundary

The input subsystem collects keyboard, mouse, and joystick state and turns it
into action/command state for gameplay, UI, and combat. It is deliberately
small in the EXE: the keyboard is tracked in a bitmap, while mouse motion,
wheel, and joysticks go through DirectInput.

Input feeds three consumers:

- the command table, which maps action ids to gameplay/UI handlers;
- the normalized cursor used by the frontend and HUD;
- the movement/aim state consumed by gameplay and combat.

## Keyboard state

Keyboard state is kept in two 8-dword (256-bit) bitmaps:

- `0x0087DDC4` - current state;
- `0x0087DDA4` - per-frame snapshot.

`FUN_007238D0` sets a bit indexed by `param_1 >> 3` and also maintains the
keyboard-state ring/value at `0x0087E5F4` using `GetKeyboardType`. The ring
value is used by the keyboard/action layer, not by the bitmap lookup itself.

`FUN_007239A0` clears bit `(param_1 & 7)` in the current bitmap; if the bit was
not set in the snapshot bitmap, it sets it there. This preserves edge state
between the current and previous frame.

`FUN_007239F0` copies the 8 dwords from the current bitmap to the snapshot with
`rep movsd`. `FUN_00723A30` tests a bit in either bitmap and returns the flag
state; `FUN_00723B40` is the virtual-key query.

## Window procedure and command dispatch

`FUN_0072E580` is the 2,103-byte window/message dispatch routine. It dispatches
on a message/command id in `EBX` through three jump tables
(`0x72EDB8`, `0x72EDEC`, `0x72EEF0`) and two byte-index tables
(`0x72EDD8`, `0x72EE08`). It is `__stdcall` with four stack parameters and
handles input and display commands.

The command table at `0x0077B9D8` has 131 entries with ids 6 through 136. Each
entry is `{id, name, handler}`; the generic dispatcher calls the handler with
the receiver in `ECX`. The fire/weapon handlers are described in the combat
page; the same table also contains movement, UI, and system commands.

## Mouse and DirectInput

DirectInput is used for mouse motion/wheel and joysticks, not for the keyboard.
The per-frame input entry is `FUN_00722730`; the mouse update `FUN_00723590`
writes the normalized cursor to `0x0087DD38`/`0x0087DD3C`/`0x0087DD28`/
`0x0087DD4C`. The mouse delta is `0x00858A4C`. The keyboard ring is
`0x0087E5F4`.

The DirectInput device enumeration/GUID-name helper is `FUN_007506F3`. Device
state is polled each frame and converted into the bitmap/cursor/action state.

## Bindings

Action bindings come from the pilot's `options.mw4` control entry. The bindings
map physical keys/buttons to command ids; the command table then maps the id to
the handler. A missing or invalid binding leaves the command unhandled rather
than inventing a default.

The input layer does not own the command handlers. It only produces the action
state and dispatches the command; gameplay, UI, and combat implement the
handlers.

## Invariants and failure modes

- The keyboard bitmap is 256 bits (8 dwords); an index outside `0..255` is not
  valid.
- The current and snapshot bitmaps are separate; edge detection depends on the
  snapshot copy.
- Clearing a bit only updates the snapshot when the bit was not already set
  there; the edge state must not be lost.
- DirectInput is not used for the keyboard; keyboard state comes from the
  window messages and the bitmap.
- The normalized cursor is updated once per frame; reading it mid-frame gives
  the previous position.
- Command ids are table indices/ids, not arbitrary handler pointers.
- Bindings are data-driven; an unbound action is a no-op, not an error.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0072E580` | window | window procedure/message dispatch |
| `0x007238D0` | keyboard | set key state bit and ring state |
| `0x007239A0` | keyboard | clear/snapshot bit |
| `0x007239F0` | keyboard | per-frame snapshot copy |
| `0x00723A30` | keyboard | bitmap flag lookup |
| `0x00723B40` | keyboard | virtual-key query |
| `0x00722730` | input | per-frame input entry |
| `0x00723590` | input | mouse update / normalized cursor |
| `0x007506F3` | directinput | device enumeration/GUID-name helper |
| `0x0077B9D8` | command | 131-entry command table |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| keyboard | 9 | Keyboard/mouse bitmap and action-state queries. |
| directinput | 1 | DirectInput device enumeration and GUID/name lookup. |
| window | 1 | Window procedure and message routing. |

## Coverage

All 11 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
