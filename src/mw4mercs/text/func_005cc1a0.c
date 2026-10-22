/*
 * FUN_005cc1a0 (39 B) — NonComAI destructor/cleanup. If DAT_007f23c0 is
 *   non-null, calls FUN_00501b40 (__thiscall) and frees via FUN_004084e0,
 *   then zeroes DAT_007f23c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00501b40(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005cc1a0(void)
{
    

extern int DAT_007f23c0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f23c0]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_zero:
        mov dword ptr [DAT_007f23c0], 0x0
        pop     esi
        ret
    }


}
