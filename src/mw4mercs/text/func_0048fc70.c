/*
 * FUN_0048fc70 (39 B) — Cleanup function.
 * If DAT_007da850 != 0, calls FUN_00415200() then FUN_004084e0().
 * Sets DAT_007da850 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *param_1);
extern void __cdecl FUN_004084e0(void *ptr);

extern int DAT_007da850;

__declspec(naked) void FUN_0048fc70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da850]   ; mov esi, [0x007da850]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip:
        mov     dword ptr [DAT_007da850], 0     ; mov [0x007da850], 0
        pop     esi
        ret
    }
}
