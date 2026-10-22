/*
 * FUN_004f4b90 (39 B) � Singleton cleanup.
 *
 * Loads global pointer at 0x007DC8A0, if non-null calls
 * FUN_00501B40 as destructor then FUN_004084e0 (operator delete),
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00501B40(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

extern int DAT_007dc8a0;   /* g_singleton (0x007DC8A0) */

__declspec(naked) void FUN_004f4b90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007dc8a0]   ; mov esi, [0x007DC8A0]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00501B40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     dword ptr [DAT_007dc8a0], 0     ; mov dword ptr [0x007DC8A0], 0
        pop     esi
        ret
    }
}
