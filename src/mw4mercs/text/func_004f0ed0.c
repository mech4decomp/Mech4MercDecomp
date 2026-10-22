/*
 * FUN_004F0ED0 (38 B) — Assert "VIRTUAL NOT IMPLEMENTED" then call FUN_004F2240.
 *
 * Calls assert with string at 0x00774DDC ("MENTED", tail of
 * "VIRTUAL NOT IMPLEMENTED"), then calls FUN_004F2240(param) and
 * returns result + 0x78.
 *
 * __cdecl, RET 4, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006fab90(const char *msg);
extern int __cdecl FUN_004f2240(int param);

__declspec(naked) int __stdcall FUN_004f0ed0(int param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    0x00774DDC
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_ok
        int     3
    l_ok:
        mov     eax, [ebp + 8]
        push    eax
        call    FUN_004f2240
        add     esp, 4
        add     eax, 0x78
        pop     ebp
        ret
    }
}
