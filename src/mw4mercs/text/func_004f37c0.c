/*
 * FUN_004F37C0 (39 B) - Singleton cleanup.
 *
 * Loads global pointer at 0x007DC88C, if non-null calls
 * FUN_00501B40 as destructor then FUN_004084E0 (operator delete),
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00501B40(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

/* global pointer at 0x007DC88C */
extern int DAT_007DC88C;

__declspec(naked) void FUN_004F37C0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007DC88C]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00501B40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007DC88C], 0
        pop     esi
        ret
    }
}
