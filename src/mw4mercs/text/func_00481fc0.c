/*
 * FUN_00481FC0 (39 B) — MLRInfiniteLightWithFalloff singleton destructor.
 *
 * Releases the singleton at 0x007DA6A4 via FUN_00415200 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(int ptr);

extern int DAT_007da6a4;   /* g_inflight_falloff_singleton */

__declspec(naked) void FUN_00481fc0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da6a4]   ; mov esi, [0x007da6a4]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007da6a4], 0     ; mov dword ptr [0x007da6a4], 0
        pop     esi
        ret
    }
}
