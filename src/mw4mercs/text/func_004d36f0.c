/*
 * FUN_004D36F0 (39 B) - Singleton cleanup.
 *
 * Loads global pointer at 0x007DC114, if non-null calls
 * FUN_004D5D20 as destructor then FUN_004084E0 (operator delete),
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004D5D20(void *this);
extern void __stdcall FUN_004084e0(void *ptr);
extern int DAT_007dc114;

__declspec(naked) void FUN_004D36F0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc114]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_004D5D20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007dc114], 0
        pop     esi
        ret
    }
}
