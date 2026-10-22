/*
 * FUN_004E86A0 (39 B) — Singleton destructor.
 *
 * Releases the singleton at 0x007DC790 via FUN_00415200 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(int ptr);
extern int DAT_007dc790;

__declspec(naked) void FUN_004e86a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc790]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007dc790], 0
        pop     esi
        ret
    }
}
