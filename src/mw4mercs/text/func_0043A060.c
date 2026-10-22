/*
 * FUN_0043A060 (44 B true extent; 103 B block incl. pad + adjacent fns) —
 * __stdcall, 2 args (ret 8), ecx=this. Stores two values (or zeroes them
 * when the second arg is 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0043A060(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        xor     edx, edx
        cmp     eax, edx
        jne     l_1
        mov     dword ptr [ecx + 0x94], edx
        mov     dword ptr [ecx + 0x98], edx
        ret     8
    l_1:
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x94], edx
        mov     dword ptr [ecx + 0x98], eax
        ret     8
    }
}
