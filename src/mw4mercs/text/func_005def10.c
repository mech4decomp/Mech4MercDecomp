/*
 * FUN_005DEF10 (18 B) — __fastcall (this in ECX). Calls FUN_005dee30 with
 * (this->0x38, 0xe7).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dee30(unsigned int, int);

__declspec(naked) void __cdecl FUN_005def10(void)
{
    __asm {
        mov     eax, [ecx + 0x38]
        push    0xe7
        push    eax
        call    FUN_005dee30
        add     esp, 0x8
        ret
    }
}
