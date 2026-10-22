/*
 * FUN_005DEEB0 (18 B) — __fastcall (this in ECX). Calls FUN_005dee30 with
 * (this->0x48, 0xeb).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dee30(unsigned int, int);

__declspec(naked) void __cdecl FUN_005deeb0(void)
{
    __asm {
        mov     eax, [ecx + 0x48]
        push    0xeb
        push    eax
        call    FUN_005dee30
        add     esp, 0x8
        ret
    }
}
