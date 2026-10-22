/*
 * FUN_00682890 (76 B true extent; 104 B block incl. pad + adjacent fns) —
 * __stdcall, 1 arg (ret 4), ecx=this. Copies a 0xc-dword struct from one
 * of two sources depending on a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_00682890(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        push    esi
        mov     esi, dword ptr [eax + 0x598]
        test    esi, 0xfffffffc
        push    edi
        jne     l_1
        mov     eax, dword ptr [eax + 0x170]
        mov     esi, dword ptr [eax + 0xd8]
        mov     eax, dword ptr [esp + 0xc]
        add     esi, 0x80
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        ret     4
    l_1:
        mov     eax, dword ptr [esp + 0xc]
        and     esi, 0xfffffffc
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        ret     4
    }
}
