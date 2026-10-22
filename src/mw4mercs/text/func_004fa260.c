/*
 * FUN_004FA260 (39 B) — Singleton destructor.
 *
 * Releases the singleton at 0x007DC8C4 via FUN_004DD340 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004dd340(void *this);
extern void __stdcall FUN_004084e0(int ptr);

extern int DAT_007dc8c4;   /* g_singleton (0x007DC8C4) */

__declspec(naked) void FUN_004fa260(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc8c4]   ; mov esi, [0x007dc8c4]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007dc8c4], 0     ; mov dword ptr [0x007dc8c4], 0
        pop     esi
        ret
    }
}
