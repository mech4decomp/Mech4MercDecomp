/*
 * FUN_004B58C0 (102 B) — __stdcall, 1 arg (ret 4), ecx=this. Searches a
 * table for a matching entry, zeroes it if found, and calls FUN_004bf590.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004bf590(void);

__declspec(naked) void FUN_004B58C0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x154]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        xor     esi, esi
        test    ax, ax
        push    edi
        jbe     l_2
        mov     edi, dword ptr [ecx + 0x150]
        mov     ebx, dword ptr [ecx + 0x144]
    l_1:
        mov     edx, esi
        and     edx, 0xffff
        mov     eax, edx
        shl     eax, 4
        add     eax, edi
        cmp     dword ptr [ebx + edx*4], ebp
        je      l_3
        inc     esi
        cmp     si, word ptr [ecx + 0x154]
        jb      l_1
        push    ebp
        call    FUN_004bf590
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    l_3:
        xor     edx, edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax + 0xc], edx
    l_2:
        push    ebp
        call    FUN_004bf590
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
