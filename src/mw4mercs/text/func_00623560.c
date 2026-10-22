/*
 * FUN_00623560 (57 B) — __thiscall, RET 8.
 *
 * Iterates a range [this[0], this[1]) of pointers; for each entry whose
 * pointed-to object has type 0x2b at +4 and key == -1-param_1 at +8,
 * adds param_2 to the value at +0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00623560(void *this, int param_1, int param_2)
{
    __asm {
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 4]
        cmp     edx, ecx
        jz      l_ret
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
    l_loop:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      l_next
        cmp     dword ptr [eax + 4], 0x2b
        jnz     l_next
        or      ebp, 0xffffffff
        sub     ebp, esi
        cmp     dword ptr [eax + 8], ebp
        jnz     l_next
        add     dword ptr [eax], edi
    l_next:
        add     edx, 4
        cmp     edx, ecx
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebp
    l_ret:
        ret     8
    }
}
