/*
 * FUN_004D2370 (8 B) — Tail call to FUN_00413DA0 with ECX += 0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d2370(void)
{
    __asm {
        add ecx, 0x20
        _emit 0xE9
        _emit 0x28
        _emit 0x1A
        _emit 0xF4
        _emit 0xFF
    }
}
