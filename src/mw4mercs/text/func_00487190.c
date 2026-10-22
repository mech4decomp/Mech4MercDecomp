/*
 * FUN_00487190 (39 B) — MLRShape singleton destructor.
 *
 * Releases the singleton at 0x007DA724 via FUN_00415200 + FUN_004084e0,
 * then zeroes the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007da724;

__declspec(naked) void FUN_00487190(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da724]   ; mov esi, [0x007da724]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_zero:
        mov     dword ptr [DAT_007da724], 0     ; mov dword ptr [0x007da724], 0
        pop     esi
        ret
    }
}
