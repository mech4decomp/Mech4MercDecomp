/*
 * FUN_004FBDF0 (39 B) - Singleton cleanup.
 *
 * Loads global pointer at 0x007DC8D0, if non-null calls
 * FUN_00415200 as destructor then FUN_004084E0 (operator delete),
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415200(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007dc8d0;   /* g_singleton (0x007DC8D0) */

__declspec(naked) void FUN_004FBDF0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc8d0]   ; mov esi, [0x007DC8D0]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007dc8d0], 0     ; mov dword ptr [0x007DC8D0], 0
        pop     esi
        ret
    }
}
