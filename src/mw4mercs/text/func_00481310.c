/*
 * FUN_00481310 (39 B) — MLRSpotLight singleton teardown.
 *
 * Destroys and frees the singleton at 0x007DA69C, then sets it to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(int ptr);

extern int DAT_007da69c;   /* g_spotlight_singleton */

__declspec(naked) void FUN_00481310(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da69c]   ; mov esi, [0x007da69c]
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_clear:
        mov     dword ptr [DAT_007da69c], 0     ; mov dword ptr [0x007da69c], 0
        pop     esi
        ret
    }
}
