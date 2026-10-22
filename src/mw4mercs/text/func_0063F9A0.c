/*
 * FUN_0063F9A0 (97 B) — __thiscall, ecx=this. Copies an 8-byte-element
 * array and zeroes a 0xc-element region of the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0063F9A0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x60]
        mov     edx, dword ptr [ecx + 0x5c]
        push    esi
        mov     esi, eax
        sub     esi, eax
        push    edi
        xor     edi, edi
        sar     esi, 3
        cmp     esi, edi
        mov     dword ptr [ecx + 0xf0], edi
        mov     dword ptr [ecx + 0xf8], edi
        mov     dword ptr [ecx + 0xf4], edi
        mov     dword ptr [ecx + 0xfc], edi
        jle     l_2
        push    ebx
    l_1:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [eax + 4]
        mov     dword ptr [edx + 4], ebx
        add     eax, 8
        add     edx, 8
        dec     esi
        jne     l_1
        pop     ebx
    l_2:
        mov     dword ptr [ecx + 0x60], edx
        lea     eax, [ecx + 0x78]
        mov     ecx, 0xc
    l_3:
        mov     dword ptr [eax + 0x8c], edi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x30], edi
        add     eax, 4
        dec     ecx
        jne     l_3
        pop     edi
        pop     esi
        ret
    }
}
