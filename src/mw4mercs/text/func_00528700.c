/*
 * FUN_00528700 (227 B) — Control mapping data query helper (variant 3).
 *
 * __thiscall (ECX = this). Reads an index from param_1, looks up data
 * from a table at this+0x409a8, allocates an object, copies data fields,
 * and clamps a value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004d1f80(int a, int b);

__declspec(naked) int __stdcall FUN_00528700(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x0c]
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        push    edi
        jl      l_neg_index
        mov     ecx, dword ptr [ecx + 0x409a8]
        mov     dx, word ptr [ecx + eax * 4]
        lea     eax, [ecx + eax * 4]
        mov     word ptr [esp + 0x10], dx
        mov     ax, word ptr [eax + 2]
        push    0x44
        mov     word ptr [esp + 0x16], ax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_004d1f80
        mov     edi, eax
        jmp     l_got_obj
    l_alloc_fail:
        xor     edi, edi
    l_got_obj:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [eax + 0x134]
        mov     edx, dword ptr [eax + 0x140]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x138]
        mov     dword ptr [esi + 4], edx
        mov     edx, dword ptr [eax + 0x13c]
        mov     eax, dword ptr [eax + 0x144]
        test    eax, eax
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [esi + 0x0c], edx
        mov     dword ptr [ebx], eax
        jge     l_clamp_check
        mov     dword ptr [ebx], 0
        jmp     l_cleanup
    l_clamp_check:
        cmp     eax, 0x2b
        jle     l_cleanup
        mov     dword ptr [ebx], 0x2b
    l_cleanup:
        test    edi, edi
        jz      l_neg_index_epilogue
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
    l_done:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     8
    l_neg_index:
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0x0c], 0
        mov     dword ptr [ebx], 0x2c
    l_neg_index_epilogue:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     8
    }
}
