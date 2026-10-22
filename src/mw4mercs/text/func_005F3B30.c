/*
 * FUN_005F3B30 (extent 0x5F3B30-0x5F3FF0, 1216 bytes) - GAMEPLAY in-.text block.
 * __thiscall-style (ecx = this), ret 8. Transcribed from capstone disasm.
 */
#pragma warning(disable : 4035 4793)

extern int *g_007f2d1c;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_005885e0(void);
extern void __cdecl FUN_00637a20(void);

__declspec(naked) void func_005F3B30(void)
{
    __asm {
        sub     esp, 0xe0
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 0x13
        test    al, 1
        push    esi
        push    edi
        mov     byte ptr [esp + 0x12], 1
        je      L_3b56
        mov     esi, dword ptr [esp + 0xf8]
        xor     ebx, ebx
        jmp     L_3b7b
L_3b56:
        mov     ecx, dword ptr [ebp + 0x2fc]
        xor     ebx, ebx
        cmp     ecx, ebx
        je      L_3b92
        mov     esi, dword ptr [esp + 0xf8]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x12]
        push    eax
        push    esi
        call    dword ptr [edx + 0x108]
        test    al, al
        jne     L_3b99
L_3b7b:
        cmp     esi, ebx
        je      L_3fe1
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        je      L_3fd8
        jmp     L_3fcf
L_3b92:
        mov     esi, dword ptr [esp + 0xf8]
L_3b99:
        cmp     dword ptr [esi + 4], ebx
        mov     dword ptr [esp + 0x1c], ebx
        jbe     L_3f77
        xor     edi, edi
        mov     dword ptr [esp + 0x20], edi
L_3bac:
        mov     eax, dword ptr [esi]
        mov     esi, dword ptr [edi + eax + 8]
        add     edi, eax
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, eax
        shr     ecx, 0xb
        test    cl, 1
        je      L_3e9e
        fld     dword ptr [esi + 0x198]
        mov     edx, dword ptr [esi + 4]
        fsub    dword ptr [ebp + 0x198]
        mov     eax, dword ptr [edx]
        cmp     eax, 0x429
        fld     dword ptr [esi + 0x19c]
        fsub    dword ptr [ebp + 0x19c]
        fld     dword ptr [esi + 0x1a0]
        fsub    dword ptr [ebp + 0x1a0]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        jne     L_3f4f
        fld     dword ptr [esi + 0x3b8]
        mov     ecx, dword ptr [g_007f2d1c]
        fstp    dword ptr [esp + 0x18]
        push    0x117
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je      L_3c63
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x118
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x11a
        call    FUN_00637a20
        mov     eax, 0x20000
        jmp     L_3cdc
L_3c63:
        fld     dword ptr [esi + 0x3b8]
        mov     ecx, dword ptr [g_007f2d1c]
        fstp    dword ptr [esp + 0x18]
        push    0x112
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je      L_3cb3
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x113
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x115
        call    FUN_00637a20
        mov     eax, 0x40000
        jmp     L_3cdc
L_3cb3:
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x10e
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x110
        call    FUN_00637a20
        mov     eax, 0x60000
L_3cdc:
        mov     ecx, dword ptr [ebp + 0x10]
        and     ecx, 0x60000
        cmp     ecx, eax
        jl      L_3d9c
        mov     al, byte ptr [esp + 0x12]
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        cmp     al, bl
        je      L_3f4f
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0xbc]
        call    FUN_00534630
        lea     edx, [ebp + 0x14]
        push    edx
        lea     ecx, [esp + 0xc0]
        call    FUN_004ea0f0
        lea     eax, [edi + 0x18]
        push    eax
        lea     ecx, [esp + 0xd0]
        mov     byte ptr [esp + 0xc8], bl
        mov     word ptr [esp + 0xca], bx
        call    FUN_0040c5d0
        add     edi, 0xc
        push    edi
        lea     ecx, [esp + 0xdc]
        call    FUN_0040c5d0
        add     esi, 0x14
        push    esi
        lea     ecx, [esp + 0xc8]
        call    FUN_005885e0
        lea     ecx, [esp + 0xac]
        push    ecx
        mov     dword ptr [esp + 0xc4], 0x47c35000
        mov     byte ptr [esp + 0xcc], 5
        mov     dword ptr [esp + 0xe8], 0
        mov     byte ptr [esp + 0xec], bl
        mov     dword ptr [esp + 0xf0], 0xffffffff
        mov     ecx, ebp
        jmp     L_3f4a
L_3d9c:
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        fnstsw  ax
        __emit 0xDD  /* fstp st(0) - MSVC6 emits fst (D9) dropping pop; ref needs DD D8 */
        __emit 0xD8
        test    ah, 1
        jne     L_3f4f
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007f2d1c]
        fsqrt
        push    0x11c
        fmul    dword ptr [esi + 0x3b8]
        fstp    dword ptr [esp + 0x18]
        call    FUN_00637a20
        fchs
        fcomp   dword ptr [esi + 0x19c]
        fnstsw  ax
        test    ah, 1
        jne     L_3e01
        mov     edx, dword ptr [esi + 0xe0]
        cmp     dword ptr [edx + 0x14], 9
        jne     L_3e01
        mov     ecx, dword ptr [g_007f2d1c]
        push    0x11d
        mov     byte ptr [esp + 0x17], 5
        call    FUN_00637a20
        jmp     L_3e0a
L_3e01:
        fld     dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x13], 9
L_3e0a:
        fmul    dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x12]
        cmp     al, bl
        fstp    dword ptr [esp + 0x14]
        je      L_3f4f
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0x34]
        call    FUN_00534630
        lea     eax, [ebp + 0x14]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_004ea0f0
        lea     ecx, [edi + 0x18]
        push    ecx
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x40], bl
        mov     word ptr [esp + 0x42], bx
        call    FUN_0040c5d0
        add     edi, 0xc
        push    edi
        lea     ecx, [esp + 0x54]
        call    FUN_0040c5d0
        mov     dl, byte ptr [esi + 0x14]
        mov     ax, word ptr [esi + 0x16]
        mov     ecx, dword ptr [esp + 0x14]
        mov     byte ptr [esp + 0x3c], dl
        mov     dl, byte ptr [esp + 0x13]
        mov     word ptr [esp + 0x3e], ax
        lea     eax, [esp + 0x24]
        mov     dword ptr [esp + 0x38], ecx
        mov     byte ptr [esp + 0x40], dl
        mov     dword ptr [esp + 0x5c], 0
        mov     byte ptr [esp + 0x60], bl
        mov     dword ptr [esp + 0x64], 0xffffffff
        push    eax
        mov     ecx, ebp
        jmp     L_3f4a
L_3e9e:
        mov     ecx, dword ptr [ebp + 0x10]
        and     eax, 0x60000
        and     ecx, 0x60000
        cmp     ecx, eax
        jg      L_3f4f
        push    ebx
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0x78]
        call    FUN_00534630
        lea     edx, [esi + 0x14]
        push    edx
        lea     ecx, [esp + 0x7c]
        call    FUN_004ea0f0
        lea     eax, [edi + 0x24]
        push    eax
        lea     ecx, [esp + 0x8c]
        mov     byte ptr [esp + 0x84], bl
        mov     word ptr [esp + 0x86], bx
        call    FUN_0040c5d0
        add     edi, 0xc
        push    edi
        lea     ecx, [esp + 0x98]
        call    FUN_0040c5d0
        mov     cl, byte ptr [ebp + 0x14]
        mov     dx, word ptr [ebp + 0x16]
        lea     eax, [esp + 0x68]
        mov     byte ptr [esp + 0x80], cl
        mov     word ptr [esp + 0x82], dx
        mov     dword ptr [esp + 0x7c], 0x47c35000
        mov     byte ptr [esp + 0x84], 5
        mov     dword ptr [esp + 0xa0], 0
        mov     byte ptr [esp + 0xa4], bl
        mov     dword ptr [esp + 0xa8], 0xffffffff
        push    eax
        mov     ecx, esi
L_3f4a:
        call    FUN_004d5b70
L_3f4f:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0xf8]
        mov     edi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx + 4]
        inc     eax
        add     edi, 0x38
        cmp     eax, edx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], edi
        mov     esi, ecx
        jb      L_3bac
L_3f77:
        mov     edx, dword ptr [ebp + 0xe0]
        cmp     dword ptr [edx + 0x14], 1
        je      L_3fc5
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 6
        test    al, 1
        je      L_3fc5
        mov     edi, dword ptr [esp + 0xf4]
        mov     dword ptr [ebp + 0x130], esi
        mov     esi, dword ptr [ebp + 0xd8]
        add     esi, 0x50
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x440], ebx
        mov     dword ptr [ebp + 0x444], ebx
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xe0
        ret     8
L_3fc5:
        cmp     esi, ebx
        je      L_3fe1
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        je      L_3fd8
L_3fcf:
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_3fd8:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_3fe1:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xe0
        ret     8
    }
}
