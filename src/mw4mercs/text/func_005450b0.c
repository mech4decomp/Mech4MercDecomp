/*
 * FUN_005450B0 (179 B) — __thiscall, RET 0xC.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_005450b0(void *this, int param_1, int param_2, int param_3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebp, ecx
        push    edi
        mov     ecx, 4
        mov     edi, 0x7afaf0
        xor     eax, eax
        repe    cmpsd
        mov     dword ptr [esp + 0x10], ebp
        jz      l_check2
        mov     ebx, dword ptr [ebp + 0x239d54]
        test    ebx, ebx
        jle     l_check2
        mov     edx, dword ptr [ebp + 0x239d60]
    l_loop1:
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, 4
        mov     edi, edx
        xor     ebp, ebp
        repe    cmpsd
        jz      l_found
        inc     eax
        add     edx, 0x10
        cmp     eax, ebx
        jl      l_loop1
        mov     ebp, dword ptr [esp + 0x10]
    l_check2:
        mov     ecx, dword ptr [ebp + 0x239d58]
        xor     eax, eax
        test    ecx, ecx
        jle     l_check3
        mov     edx, dword ptr [ebp + 0x239d64]
    l_loop2:
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, 4
        mov     edi, edx
        xor     ebx, ebx
        repe    cmpsd
        jz      l_found
        mov     ecx, dword ptr [ebp + 0x239d58]
        inc     eax
        add     edx, 0x10
        cmp     eax, ecx
        jl      l_loop2
    l_check3:
        mov     edx, dword ptr [ebp + 0x239d5c]
        xor     eax, eax
        test    edx, edx
        jle     l_not_found
        mov     ecx, dword ptr [ebp + 0x239d68]
        mov     esi, dword ptr [esp + 0x20]
    l_loop3:
        cmp     esi, dword ptr [ecx]
        jz      l_found
        inc     eax
        add     ecx, 4
        cmp     eax, edx
        jl      l_loop3
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0xc
    l_found:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
