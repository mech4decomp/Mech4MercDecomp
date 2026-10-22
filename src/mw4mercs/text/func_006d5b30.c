/*
 * FUN_006D5B30 (838 B) — __thiscall (ECX = this), RET 0x14. Grid/region
 * spatial-index builder.
 *
 * Computes a 2D grid layout from `this` (edi) fields and 5 stack args,
 * then builds/rebuilds a list of region entries (allocating via malloc
 * FUN_004084d0, freeing via FUN_004084e0). Contains several nested loops
 * with backward jumps (0x6D5C09, 0x6D5BF1, 0x6D5C73, 0x6D5D08, 0x6D5D2A,
 * 0x6D5D6C, 0x6D5CE8, 0x6D5E25).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);   /* malloc */
extern void __cdecl FUN_004084e0(void);   /* free */

__declspec(naked) void FUN_006D5B30(void)
{
    __asm {
        sub     esp, 0x2c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x44]
        xor     edx, edx
        push    edi
        mov     edi, ecx
        mov     dx, word ptr [edi + 4]
        and     esi, 0xffff
        mov     eax, esi
        xor     ebp, ebp
        xor     ebx, ebx
        mov     dword ptr [esp + 0x10], edi
        mov     edi, dword ptr [edi + 4]
        mov     ecx, edx
        shr     eax, cl
        mov     dword ptr [esp + 0x28], esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], ebp
        cmp     eax, ebp
        setl    bl
        dec     ebx
        and     ebx, eax
        mov     eax, dword ptr [esp + 0x50]
        and     eax, 0xffff
        add     esi, eax
        mov     dword ptr [esp + 0x30], esi
        sar     esi, cl
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x24], ebx
        inc     esi
        cmp     esi, eax
        jle     L_6d5b8f
        mov     esi, eax
L_6d5b8f:
        mov     eax, dword ptr [esp + 0x44]
        and     eax, 0xffff
        mov     dword ptr [esp + 0x18], eax
        mov     ecx, edx
        shr     eax, cl
        mov     ecx, dword ptr [esp + 0x18]
        xor     edx, edx
        test    eax, eax
        setl    dl
        dec     edx
        and     edx, eax
        mov     eax, dword ptr [esp + 0x4c]
        and     eax, 0xffff
        add     eax, ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x2c], eax
        sar     eax, cl
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ecx + 0xc]
        mov     dword ptr [esp + 0x50], edx
        inc     eax
        cmp     eax, edi
        mov     dword ptr [esp + 0x48], eax
        jle     L_6d5bdb
        mov     dword ptr [esp + 0x48], edi
        mov     eax, edi
L_6d5bdb:
        cmp     ebx, esi
        jge     L_6d5c24
        mov     ecx, edi
        imul    ecx, ebx
        add     ecx, edx
        mov     edx, esi
        shl     ecx, 3
        sub     edx, ebx
        mov     dword ptr [esp + 0x44], edx
L_6d5bf1:
        cmp     dword ptr [esp + 0x50], eax
        jge     L_6d5c15
        mov     edx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edx + 0x124]
        sub     eax, dword ptr [esp + 0x50]
        lea     edx, [edx + ecx + 4]
L_6d5c09:
        add     ebp, dword ptr [edx]
        add     edx, 8
        dec     eax
        jne     L_6d5c09
        mov     eax, dword ptr [esp + 0x48]
L_6d5c15:
        lea     edx, [edi*8]
        add     ecx, edx
        dec     dword ptr [esp + 0x44]
        jne     L_6d5bf1
L_6d5c24:
        mov     ecx, dword ptr [esp + 0x40]
        cmp     ebp, dword ptr [ecx + 4]
        je      L_6d5cbf
        test    ebp, ebp
        jbe     L_6d5c9f
        lea     eax, [ebp*4]
        push    eax
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax]
        add     esp, 4
        test    ecx, ecx
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x44], ecx
        je      L_6d5c97
        mov     ecx, dword ptr [eax + 4]
        cmp     ebp, ecx
        jae     L_6d5c62
        mov     ecx, ebp
L_6d5c62:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_6d5c88
        mov     edx, dword ptr [esp + 0x44]
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L_6d5c73:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d5c73
        mov     ebx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x40]
L_6d5c88:
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x44]
        add     esp, 4
L_6d5c97:
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x24]
        jmp     L_6d5cb4
L_6d5c9f:
        mov     eax, dword ptr [ecx]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 4
        mov     dword ptr [ecx], 0
L_6d5cb4:
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [edx + 4], ebp
L_6d5cbf:
        cmp     ebx, esi
        jge     L_6d5ddf
        mov     ebp, dword ptr [esp + 0x50]
        lea     ecx, [edi*8]
        imul    edi, ebx
        add     edi, ebp
        shl     edi, 3
        sub     esi, ebx
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], esi
L_6d5ce8:
        cmp     ebp, eax
        jge     L_6d5dc2
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + 0x124]
        add     ecx, edi
        mov     edx, eax
        sub     edx, ebp
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x1c], edx
L_6d5d08:
        mov     esi, dword ptr [ecx + 4]
        xor     edx, edx
        test    esi, esi
        mov     dword ptr [esp + 0x34], esi
        mov     dword ptr [esp + 0x4c], edx
        jle     L_6d5da8
        mov     ebx, dword ptr [esp + 0x14]
        lea     edi, [ebx*4]
        jmp     L_6d5d2e
L_6d5d2a:
        mov     ecx, dword ptr [esp + 0x44]
L_6d5d2e:
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + edx*4]
        mov     eax, dword ptr [ecx + 8]
        cmp     eax, dword ptr [esp + 0x18]
        jl      L_6d5d8b
        mov     esi, dword ptr [ecx + 0xc]
        cmp     esi, dword ptr [esp + 0x28]
        jl      L_6d5d8b
        mov     edx, dword ptr [ecx + 4]
        mov     ebp, dword ptr [edx + 4]
        add     ebp, eax
        cmp     ebp, dword ptr [esp + 0x2c]
        jg      L_6d5d8b
        mov     edx, dword ptr [edx + 8]
        mov     eax, dword ptr [esp + 0x30]
        add     edx, esi
        cmp     edx, eax
        jg      L_6d5d8b
        xor     eax, eax
        test    edi, edi
        jle     L_6d5d78
        mov     edx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [edx]
L_6d5d6c:
        cmp     ecx, dword ptr [edx]
        je      L_6d5d78
        inc     eax
        add     edx, 4
        cmp     eax, ebx
        jl      L_6d5d6c
L_6d5d78:
        cmp     eax, ebx
        jne     L_6d5d8b
        mov     edx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [edx]
        mov     eax, edi
        inc     ebx
        add     edi, 4
        mov     dword ptr [edx + eax], ecx
L_6d5d8b:
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x34]
        inc     edx
        cmp     edx, eax
        mov     dword ptr [esp + 0x4c], edx
        jl      L_6d5d2a
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x14], ebx
L_6d5da8:
        mov     edx, dword ptr [esp + 0x1c]
        add     ecx, 8
        dec     edx
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x1c], edx
        jne     L_6d5d08
        mov     ebp, dword ptr [esp + 0x50]
L_6d5dc2:
        mov     edi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x24]
        add     edi, edx
        dec     ecx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], ecx
        jne     L_6d5ce8
L_6d5ddf:
        mov     eax, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [eax + 4]
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        je      L_6d5e6a
        test    ebx, ebx
        jbe     L_6d5e50
        lea     eax, [ebx*4]
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x44]
        mov     edi, dword ptr [ecx]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        je      L_6d5e3b
        cmp     ebx, ebp
        mov     ecx, ebx
        jb      L_6d5e16
        mov     ecx, ebp
L_6d5e16:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_6d5e32
        mov     edx, edi
        lea     eax, [esi + ecx*4]
        sub     edx, esi
        inc     ecx
L_6d5e25:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d5e25
L_6d5e32:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_6d5e3b:
        mov     eax, dword ptr [esp + 0x40]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        mov     dword ptr [eax + 4], ebx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x2c
        ret     0x14
L_6d5e50:
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, edx
        add     esp, 4
        mov     dword ptr [edx], 0
        mov     dword ptr [eax + 4], ebx
L_6d5e6a:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x2c
        ret     0x14
    }
}
