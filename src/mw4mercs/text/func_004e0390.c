/*
 * FUN_004E0390 (39 B) — Singleton destructor.
 *
 * Releases the singleton at 0x007DC6CC via FUN_00415200 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(int ptr);
extern void *DAT_007dc6cc;

__declspec(naked) void FUN_004e0390(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc6cc]  ; mov esi, [0x007dc6cc]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007dc6cc], 0    ; mov dword ptr [0x007dc6cc], 0
        pop     esi
        ret
    }
}
