/*
 * FUN_005DEE90 (18 B) — __fastcall (this in ECX). Calls FUN_005dee30 with
 * (this->0x44, 0xea).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dee30(unsigned int, int);

__declspec(naked) void __cdecl FUN_005dee90(void)
{
    __asm {
        mov     eax, [ecx + 0x44]
        push    0xea
        push    eax
        call    FUN_005dee30
        add     esp, 0x8
        ret
    }
}
