/*
 * FUN_004FA650 (39 B) — Singleton destructor.
 *
 * Releases the singleton at 0x007DC8C8 via FUN_00501B40 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00501b40(void *this);
extern void __stdcall FUN_004084e0(int ptr);

extern int DAT_007dc8c8;   /* g_singleton (0x007DC8C8) */

__declspec(naked) void FUN_004fa650(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc8c8]   ; mov esi, [0x007dc8c8]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007dc8c8], 0     ; mov dword ptr [0x007dc8c8], 0
        pop     esi
        ret
    }
}
