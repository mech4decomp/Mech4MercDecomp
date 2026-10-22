/*
 * FUN_0074232B (70 B) — __stdcall, 1 arg (ret 4). Scans a linked list of
 * records for a magic signature (repe cmpsd against a 4-dword pattern).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0074232B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 0x20]
        mov     edx, dword ptr [ecx + 0x24]
        push    ebx
        add     edx, eax
        cmp     eax, edx
        push    esi
        push    edi
        jae     l_ret0
    l_loop:
        mov     ecx, 4
        mov     edi, 0x7a2f90
        mov     esi, eax
        xor     ebx, ebx
        repe    cmpsd
        je      l_found
        mov     ecx, dword ptr [eax + 0x10]
        lea     eax, [eax + ecx + 0x14]
        cmp     eax, edx
        jb      l_loop
    l_ret0:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     4
    l_found:
        pop     edi
        pop     esi
        add     eax, 0x14
        pop     ebx
        ret     4
    }
}
