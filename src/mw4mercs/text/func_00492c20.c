/*
 * FUN_00492c20 (200 B) — __thiscall string-keyed binary-tree lookup.
 * Walks the tree comparing string keys; returns the matching node (or
 * the tree root if not found) through the out-param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00492c20(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [edx + 0x4]
        test    edi, edi
        mov     dword ptr [esp + 0x10], edx
        mov     ebp, edx
        jz      L_492c7e
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax]
    L_492c3a:
        mov     eax, dword ptr [edi + 0x10]
        mov     esi, edx
    L_492c3f:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_492c63
        test    cl, cl
        jz      L_492c5f
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_492c63
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492c3f
    L_492c5f:
        xor     eax, eax
        jmp     L_492c68
    L_492c63:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492c68:
        test    eax, eax
        jl      L_492c73
        mov     ebp, edi
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_492c76
    L_492c73:
        mov     edi, dword ptr [edi + 0xc]
    L_492c76:
        test    edi, edi
        jnz     L_492c3a
        mov     edx, dword ptr [esp + 0x10]
    L_492c7e:
        cmp     ebp, edx
        mov     dword ptr [esp + 0x10], ebp
        jz      L_492cd0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx]
    L_492c8f:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_492cb3
        test    cl, cl
        jz      L_492caf
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_492cb3
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492c8f
    L_492caf:
        xor     eax, eax
        jmp     L_492cb8
    L_492cb3:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492cb8:
        test    eax, eax
        jl      L_492cd0
        pop     edi
        lea     eax, [esp + 0xc]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     0x8
    L_492cd0:
        pop     edi
        lea     eax, [esp + 0x18]
        pop     esi
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
