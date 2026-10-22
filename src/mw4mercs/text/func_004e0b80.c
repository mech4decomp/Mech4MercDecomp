/*
 * FUN_004e0b80 (39 B) - Singleton cleanup.
 *
 * Loads global pointer at 0x007DC6D8, if non-null calls
 * FUN_00415200 as destructor then FUN_004084e0 (operator delete),
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);
extern void *DAT_007DC6D8;

__declspec(naked) void FUN_004e0b80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007DC6D8]  ; mov esi, [0x007DC6D8]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007DC6D8], 0    ; mov dword ptr [0x007DC6D8], 0
        pop     esi
        ret
    }
}
