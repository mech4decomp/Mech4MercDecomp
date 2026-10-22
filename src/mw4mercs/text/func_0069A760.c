/*
 * FUN_0069A760 (98 B) — __stdcall, 2 args (ret 0). Compares two byte
 * ranges (memcmp-style) and returns a signed comparison result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0069A760(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 4]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
        push    edi
        mov     edi, dword ptr [ecx]
        sub     eax, esi
        sub     edx, edi
        cmp     edx, eax
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], edx
        lea     ecx, [esp + 0x14]
        jl      l_1
        lea     ecx, [esp + 0x10]
    l_1:
        mov     ecx, dword ptr [ecx]
        xor     ebx, ebx
        repe    cmpsb
        je      l_2
        sbb     ebx, ebx
        sbb     ebx, -1
    l_2:
        test    ebx, ebx
        jne     l_4
        cmp     eax, edx
        jge     l_3
        or      ebx, 0xffffffff
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setl    al
        pop     ebx
        ret
    l_3:
        xor     ebx, ebx
        cmp     eax, edx
        setg    bl
    l_4:
        pop     edi
        xor     eax, eax
        test    ebx, ebx
        pop     esi
        setl    al
        pop     ebx
        ret
    }
}
