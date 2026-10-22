/*
 * FUN_006a05f0 (94 B) — __thiscall.
 *
 * Binary tree search. Walks a tree rooted at *this, tracking the last node
 * whose key >= *param_2, and stores the result into *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a05f0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, ecx
        jz      L_afterloop
        mov     esi, dword ptr [edi]
    L_cmp:
        cmp     dword ptr [eax + 0x10], esi
        jl      L_left
        mov     edx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     L_test
    L_left:
        mov     eax, dword ptr [eax + 0xc]
    L_test:
        test    eax, eax
        jnz     L_cmp
    L_afterloop:
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], edx
        jz      L_setthis
        mov     eax, dword ptr [edi]
        cmp     eax, dword ptr [edx + 0x10]
        jl      L_setthis
        lea     eax, [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax], ecx
        pop     esi
        pop     ecx
        ret     0x8
    L_setthis:
        lea     eax, [esp + 0x8]
        mov     dword ptr [esp + 0x8], ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax], ecx
        pop     esi
        pop     ecx
        ret     0x8
    }
}
