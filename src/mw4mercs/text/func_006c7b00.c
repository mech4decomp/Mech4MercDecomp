/*
 * FUN_006C7B00 — recursive spatial search (quadtree/region query).
 *
 * __cdecl, RET 0x14.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __stdcall func_006c7b00(int param_1, unsigned int param_2, unsigned int param_3, unsigned int *param_4, int *param_5)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebx, dword ptr [esi + 8]
        cmp     edx, ebx
        push    edi
        ja      L_ret0
        mov     eax, dword ptr [esi + 0xc]
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        ja      L_ret0
        mov     ecx, dword ptr [esi + 0x10]
        cmp     ecx, 1
        jz      L_recurse
        cmp     ecx, 2
        jz      L_recurse
        test    ecx, ecx
        jnz     L_ret0
        mov     ecx, dword ptr [esp + 0x1c]
        imul    eax, ebx
        cmp     eax, dword ptr [ecx]
        jnc     L_ret0
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        mov     al, 1
        pop     ebx
        ret     0x14
    L_recurse:
        mov     ebx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    ebx
        push    ebp
        push    edi
        push    edx
        push    ecx
        call    func_006c7b00
        test    al, al
        jnz     L_ret1
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x1c]
        push    ebx
        push    ebp
        push    edi
        push    edx
        push    eax
        call    func_006c7b00
        test    al, al
        jnz     L_ret1
        pop     ebp
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
    L_ret1:
        pop     ebp
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0x14
    L_ret0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x14
    }
}
