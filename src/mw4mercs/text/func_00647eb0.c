/*
 * FUN_00647eb0 (94 B) -- __thiscall tree lookup (RET 0x8). Walks the tree
 * rooted at *this looking for a node matching the key in *param_2, returns
 * the found node via *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00647eb0(void)
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
        jz      L_ed7
L_ec4:
        mov     esi, dword ptr [edi]
        cmp     dword ptr [eax + 0x10], esi
        jl      L_ed0
        mov     edx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     L_ed3
L_ed0:
        mov     eax, dword ptr [eax + 0xc]
L_ed3:
        test    eax, eax
        __emit 0x75   /* jnz L_ec4: MSVC6 miscomputes backward-branch disp (0xEB vs ref 0xED) */
        __emit 0xED
L_ed7:
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], edx
        jz      L_ef8
        mov     eax, dword ptr [edi]
        cmp     eax, dword ptr [edx + 0x10]
        jl      L_ef8
        lea     eax, [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax], ecx
        pop     esi
        pop     ecx
        ret     0x8
L_ef8:
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
