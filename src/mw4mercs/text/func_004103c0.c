/*
 * FUN_004103c0 (200 B) — binary-search-tree lookup by string (sibling of
 * FUN_0040fe00). Returns the matching node (or the tree root if not found)
 * through the output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004103c0(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [edx+4]
        test    edi, edi
        mov     dword ptr [esp+0x10], edx
        mov     ebp, edx
        jz      L_fe5e

        mov     eax, dword ptr [esp+0x1c]
        mov     edx, dword ptr [eax]
    L_fe1a:
        mov     eax, dword ptr [edi+0x10]
        mov     esi, edx
    L_fe1f:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_fe43
        test    cl, cl
        jz      L_fe3f
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_fe43
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fe1f
    L_fe3f:
        xor     eax, eax
        jmp     L_fe48
    L_fe43:
        sbb     eax, eax
        sbb     eax, -1
    L_fe48:
        test    eax, eax
        jl      L_fe53
        mov     ebp, edi
        mov     edi, dword ptr [edi+8]
        jmp     L_fe56
    L_fe53:
        mov     edi, dword ptr [edi+0xc]
    L_fe56:
        test    edi, edi
        jnz     L_fe1a
        mov     edx, dword ptr [esp+0x10]

    L_fe5e:
        cmp     ebp, edx
        mov     dword ptr [esp+0x10], ebp
        jz      L_feb0

        mov     ecx, dword ptr [esp+0x1c]
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, dword ptr [ecx]
    L_fe6f:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_fe93
        test    cl, cl
        jz      L_fe8f
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_fe93
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fe6f
    L_fe8f:
        xor     eax, eax
        jmp     L_fe98
    L_fe93:
        sbb     eax, eax
        sbb     eax, -1
    L_fe98:
        test    eax, eax
        jl      L_feb0

        pop     edi
        lea     eax, [esp+0xc]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x14]
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     8

    L_feb0:
        pop     edi
        lea     eax, [esp+0x18]
        pop     esi
        mov     dword ptr [esp+0x14], edx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x10]
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     8
    }
}
