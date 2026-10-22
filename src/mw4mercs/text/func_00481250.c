/*
 * FUN_00481250 (115 B) — Dynamic array resize.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: new_count).
 * Reallocates the array at this[0] to hold new_count elements (each 4 bytes).
 * Frees old array if needed. Zeroes new elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_00481250(void *param1, int param2)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        push    esi
        mov     esi, dword ptr [esp + 0x0c]  ; new_count
        cmp     esi, eax
        jz      l_done
        test    esi, esi
        jbe     l_free_and_zero
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        lea     eax, [esi * 4]
        push    eax
        mov     dword ptr [ebx + 4], esi
        call    FUN_004084d0
        mov     edx, eax
        add     esp, 4
        test    edx, edx
        jz      l_set_null
        lea     eax, [esi - 1]
        test    eax, eax
        jl      l_set_ptr
        push    edi
        lea     ecx, [eax + 1]
        xor     eax, eax
        mov     edi, edx
        rep stosd
        pop     edi
        pop     esi
        mov     dword ptr [ebx], edx
        pop     ebx
        ret     4
    l_set_null:
        xor     edx, edx
    l_set_ptr:
        pop     esi
        mov     dword ptr [ebx], edx
        pop     ebx
        ret     4
    l_free_and_zero:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx], 0
    l_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
