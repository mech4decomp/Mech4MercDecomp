/*
 * FUN_005a1950 (11 B) — sets this[0] to a function pointer, tail-calls init.
 *
 * __fastcall (this in ECX). Writes &PTR_FUN_00783f64 into *param_1 then
 * tail-calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_005a1950(void)
{
    __asm {
        mov     dword ptr [ecx], 0x783f64
        jmp     FUN_00415380
    }
}
