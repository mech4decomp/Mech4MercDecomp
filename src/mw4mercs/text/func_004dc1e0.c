/*
 * FUN_004DC1E0 (39 B) — Singleton destructor.
 *
 * Releases the singleton at 0x007DC698 via FUN_004D5D20 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004d5d20(void *this);
extern void __stdcall FUN_004084e0(int ptr);
extern int DAT_007dc698;

__declspec(naked) void FUN_004dc1e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc698]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007dc698], 0
        pop     esi
        ret
    }
}
