/*
 * FUN_005cc450 (30 B) — __thiscall destructor (RET 4, 1 param). Calls
 *   FUN_005cc470, then frees via FUN_004084e0 if (param_1 & 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_005cc470(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005cc450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005cc470
        test    byte ptr [esp + 8], 1
        jz      l_468
        push    esi
        call    FUN_004084e0
        add     esp, 4

    l_468:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
