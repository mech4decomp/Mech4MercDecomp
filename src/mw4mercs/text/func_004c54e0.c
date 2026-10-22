/*
 * FUN_004c54e0 (1210 B) - MLR node/mesh transform helper (variant of
 * FUN_004c5040). __thiscall. Computes a 4x4 matrix multiply into the node's
 * matrix (or rep movsd copy when the "identity" flag is set), then walks a
 * linked list of child nodes via virtual calls computing bounding-sphere
 * radii and transforming child matrices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00419ad0(void);

extern int   g_007dab04;   /* DAT_007dab04 */
extern float g_0076c5b0;   /* _DAT_0076c5b0 */

__declspec(naked) void __fastcall FUN_004c54e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x74
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     eax, [ebx + 0x20]
        lea     esi, [ebx + 0x50]
        push    eax
        mov     ecx, esi
        call    FUN_00419460
        test    byte ptr [ebx + 0x18], 0x1
        jnz     L569D
        mov     ecx, dword ptr [ebx + 0x10]
        add     ecx, 0x80
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x4], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        jmp     L56B3
L569D:
        mov     esi, dword ptr [ebx + 0x10]
        lea     edi, [ebx + 0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
L56B3:
        mov     edx, dword ptr [ebx + 0x144]
        lea     eax, [ebx + 0x144]
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [ebx + 0x18]
        shr     eax, 0x1
        test    al, 0x1
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0x18], 0x7714a4
        jz      L57A0
        lea     eax, [ebx + 0x80]
        lea     edi, [ebx + 0xb0]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov     edx, dword ptr [edi + 0x3c]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [ecx + 0x3c], edx
        mov     edx, dword ptr [ebx + 0x18]
        and     edx, 0xfffffff3
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x18], edx
        call    dword ptr [eax + 0x10]
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        test    eax, eax
        jz      L5993
L5788:
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L5788
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L57A0:
        push    0x7b8d88
        lea     ecx, [ebp - 0x34]
        call    FUN_0040c5d0
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x28], 0x0
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L58AA
L57C6:
        mov     ecx, esi
        call    dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x18]
        and     ecx, 0xc0
        cmp     cl, 0x40
        jnz     L5898
        lea     edx, [esi + 0x50]
        push    edx
        lea     ecx, [ebp - 0x74]
        call    FUN_00419460
        lea     eax, [esi + 0xb0]
        push    eax
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        mov     eax, dword ptr [g_007dab04]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5845
        fld     dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x68]
        fld     dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x58]
        fld     dword ptr [ebp - 0x24]
        mov     eax, dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x44], ecx
        fld     st(1)
        mov     dword ptr [ebp - 0x40], edx
        fmul    st(0), st(2)
        mov     dword ptr [ebp - 0x3c], eax
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [esi + 0xec]
        fstp    dword ptr [ebp - 0x38]
        jmp     L585E
L5845:
        lea     ecx, [ebp - 0x74]
        push    ecx
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [ebp - 0x44]
        call    FUN_0041c7d0
        mov     eax, dword ptr [esi + 0xec]
        mov     dword ptr [ebp - 0x38], eax
L585E:
        fld     dword ptr [ebp - 0x28]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L5888
        mov     ecx, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ebp - 0x3c]
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0x30], edx
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [ebp - 0x28], ecx
        jmp     L5898
L5888:
        lea     edx, [ebp - 0x44]
        push    edx
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_00419ad0
L5898:
        lea     ecx, [ebp - 0x18]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L57C6
L58AA:
        mov     edx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x34]
        lea     ecx, [ebx + 0xb0]
        mov     dword ptr [ecx + 0x3c], edx
        mov     edx, dword ptr [ebp - 0x30]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [ebp - 0x2c]
        mov     dword ptr [ecx + 0x1c], edx
        mov     dword ptr [ecx + 0x2c], eax
        fld     dword ptr [ebx + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L58FD
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        jmp     L5988
L58FD:
        mov     edi, ecx
        lea     eax, [ebx + 0x80]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov     edx, dword ptr [edi + 0x3c]
        mov     dword ptr [ecx + 0x3c], edx
L5988:
        and     dword ptr [ebx + 0x18], 0xfffffff3
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
L5993:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
