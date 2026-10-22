/*
 * FUN_0051eb90 (129 B) — String table entry copier.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 * Copies a string from an internal table to an output buffer,
 * freeing any existing string first.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_006f4230(int ptr);
extern void * __stdcall FUN_006f3c80(int size, int flags);

__declspec(naked) void __fastcall FUN_0051eb90(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx

        mov     eax, dword ptr [ebx + 0x40d98]
        test    eax, eax
        jle     l_return_zero

        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax + 8]
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [ebx + 0x40d94]
        mov     dword ptr [ecx], edi
        jz      l_alloc

        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0

    l_alloc:
        mov     ebx, dword ptr [ebx + edi*4 + 0x40d30]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80

        or      ecx, 0xffffffff
        mov     edx, eax
        mov     dword ptr [esi], edx
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     8

    l_return_zero:
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
