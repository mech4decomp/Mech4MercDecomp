/*
 * FUN_0040fed0 (107 B) — binary-search-tree lookup by string (variant of
 * FUN_0040fe00). Returns the matching node (or the tree root if not found)
 * through the output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040fed0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [ebp+4]
        test    edi, edi
        jz      L_ff30

        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [eax]
        push    ebx
        push    esi
    L_fee3:
        mov     eax, dword ptr [edi+0x10]
        mov     esi, edx
    L_fee8:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_ff0c
        test    cl, cl
        jz      L_ff08
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_ff0c
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fee8
    L_ff08:
        xor     eax, eax
        jmp     L_ff11
    L_ff0c:
        sbb     eax, eax
        sbb     eax, -1
    L_ff11:
        test    eax, eax
        jl      L_ff1c
        mov     ebp, edi
        mov     edi, dword ptr [edi+8]
        jmp     L_ff1f
    L_ff1c:
        mov     edi, dword ptr [edi+0xc]
    L_ff1f:
        test    edi, edi
        jnz     L_fee3
        mov     eax, dword ptr [esp+0x14]
        pop     esi
        pop     ebx
        pop     edi
        mov     dword ptr [eax], ebp
        pop     ebp
        ret     8

    L_ff30:
        mov     eax, dword ptr [esp+0xc]
        pop     edi
        mov     dword ptr [eax], ebp
        pop     ebp
        ret     8
    }
}
