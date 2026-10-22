# UI Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 672 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

gosScript-driven 2D UI: HUD, menus, dialogs, cursor, and screen state.

## How it works

UI code clusters at 0x00690000-0x0069FFFF, 0x006F0000-0x006F8FFF, and 0x00740000-0x0074FFFF. The screens and controls are data-driven gosScript objects; the C++ side manages screen state, control lists, and event dispatch.

Input events feed command state, and the render 2D/font details draw the result. A representative helper is 0x006F0770, which drives UI callbacks and conditional screen updates.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x006F0770 | (general) | UI callback/update helper |
| 0x0069A85C | (general) | linked-list node insertion for UI objects |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 672 | UI screen/control helpers not assigned to a narrower UI detail. |

## Coverage

All 672 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
