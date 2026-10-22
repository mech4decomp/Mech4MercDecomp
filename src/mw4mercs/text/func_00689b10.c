/*
 * FUN_00689b10 (1071 B) — __thiscall, RET 8. Vector math / object update
 * with heavy FPU usage and a 4-iteration loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;        /* 0x0076d064 */
extern float g_76c5b0;        /* 0x0076c5b0 */
extern float g_76f5d8;        /* 0x0076f5d8 */
extern float g_76d070;        /* 0x0076d070 */
extern float g_77de8c;        /* 0x0077de8c */
extern float g_80da58;        /* 0x0080da58 */
extern float g_80da54;        /* 0x0080da54 */
extern int g_7f2438;          /* 0x007f2438 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_005d8820(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_005da4b0(void);

__declspec(naked) void FUN_00689b10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x7c
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x20]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp - 0x70]
        call    FUN_00419480
        mov     edx, dword ptr [ebp - 0x70]
        mov     ecx, dword ptr [ebp - 0x68]
        mov     eax, dword ptr [ebp - 0x6c]
        mov     esi, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x4c], edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        mov     dword ptr [ebp - 0x44], ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebp - 0x48], eax
        call    FUN_006b0680
        lea     eax, [ebp - 0x4c]
        push    eax
        push    esi
        lea     ecx, [ebp - 0x28]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x20]
        push    0x43fa0000
        fld     dword ptr [ebp - 0x28]
        lea     ecx, [ebp - 0x34]
        fmul    dword ptr [ebp - 0x28]
        push    ecx
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x24], 0
        faddp   st(1), st(0)
        mov     dword ptr [ebp - 0x30], 0
        fsqrt
        fdivr   dword ptr [g_76d064]
        fld     dword ptr [ebp - 0x28]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x20]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x2c]
        fstp    st(0)
        call    FUN_0040ca40
        push    esi
        lea     edx, [ebp - 0x34]
        lea     ebx, [edi + 0x24]
        push    edx
        mov     ecx, ebx
        call    FUN_0040c9e0
        mov     ecx, dword ptr [edi + 4]
        fld     dword ptr [ecx + 0x3e8]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_89e12
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [ecx + 0x3e0], eax
        add     ecx, 0x3dc
        push    ecx
        push    ebx
        lea     ecx, [ebp - 0x1c]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        mov     esi, dword ptr [edi + 4]
        fcomp   dword ptr [esi + 0x3e8]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_89e12
        call    FUN_00415020
        fmul    dword ptr [esi + 0x3e8]
        mov     ecx, dword ptr [esi + 0x3e0]
        mov     dword ptr [ebp - 0x8], ecx
        fstp    dword ptr [ebp - 0xc]
        call    FUN_00415020
        fmul    dword ptr [esi + 0x3e8]
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x3c], edx
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x40]
        lea     edx, [ebp - 0x1]
        fchs
        push    edx
        fst     dword ptr [ebp - 0x58]
        mov     dword ptr [ebp - 0x38], eax
        fld     dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x64]
        fld     dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ebp - 0xc]
        fchs
        fst     dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x5c]
        mov     dword ptr [ebp - 0x68], ecx
        lea     ecx, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_005cb210
        mov     ecx, dword ptr [ebp - 0x18]
        cmp     ecx, dword ptr [ebp - 0x14]
        jz      L_89cbe
        test    ecx, ecx
        jz      L_89cb6
        lea     eax, [ebp - 0x40]
        push    eax
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebp - 0x18]
L_89cb6:
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x18], ecx
        jmp     L_89cd0
L_89cbe:
        push    1
        lea     edx, [ebp - 0x40]
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov     ecx, dword ptr [ebp - 0x18]
L_89cd0:
        cmp     ecx, dword ptr [ebp - 0x14]
        jz      L_89ced
        test    ecx, ecx
        jz      L_89ce5
        lea     eax, [ebp - 0x58]
        push    eax
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebp - 0x18]
L_89ce5:
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x18], ecx
        jmp     L_89cff
L_89ced:
        push    1
        lea     edx, [ebp - 0x58]
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov     ecx, dword ptr [ebp - 0x18]
L_89cff:
        cmp     ecx, dword ptr [ebp - 0x14]
        jz      L_89d1c
        test    ecx, ecx
        jz      L_89d14
        lea     eax, [ebp - 0x64]
        push    eax
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebp - 0x18]
L_89d14:
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x18], ecx
        jmp     L_89d2e
L_89d1c:
        push    1
        lea     edx, [ebp - 0x64]
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov     ecx, dword ptr [ebp - 0x18]
L_89d2e:
        cmp     ecx, dword ptr [ebp - 0x14]
        jz      L_89d4b
        test    ecx, ecx
        jz      L_89d43
        lea     eax, [ebp - 0x70]
        push    eax
        call    FUN_0040c5d0
        mov     ecx, dword ptr [ebp - 0x18]
L_89d43:
        add     ecx, 0xc
        mov     dword ptr [ebp - 0x18], ecx
        jmp     L_89d5a
L_89d4b:
        push    1
        lea     edx, [ebp - 0x70]
        push    edx
        push    ecx
        lea     ecx, [ebp - 0x1c]
        call    FUN_005cb540
L_89d5a:
        xor     esi, esi
        mov     dword ptr [ebp - 0xc], 0
        mov     dword ptr [ebp - 0x8], 4
        mov     dword ptr [ebp - 0x10], esi
L_89d6d:
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [ebp - 0x1c]
        fld     dword ptr [eax + 0x3dc]
        fadd    dword ptr [esi + ecx]
        push    ebx
        fstp    dword ptr [esi + ecx]
        mov     ecx, dword ptr [ebp - 0x1c]
        fld     dword ptr [eax + 0x3e4]
        fadd    dword ptr [esi + ecx + 8]
        fstp    dword ptr [esi + ecx + 8]
        mov     eax, dword ptr [ebp - 0x1c]
        lea     ecx, [esi + eax]
        push    ecx
        lea     ecx, [ebp - 0x7c]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x7c]
        call    FUN_0040cb00
        fcom    dword ptr [ebp - 0xc]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_89dc2
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_89dcd
L_89dc2:
        mov     edx, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x8], edx
        jmp     L_89dcf
L_89dcd:
        fstp    st(0)
L_89dcf:
        mov     edx, dword ptr [ebp - 0x10]
        inc     edx
        add     esi, 0xc
        cmp     esi, 0x30
        mov     dword ptr [ebp - 0x10], edx
        jl      L_89d6d
        mov     eax, dword ptr [ebp - 0x8]
        cmp     eax, 4
        jnz     L_89df0
        mov     dword ptr [ebp - 0x8], 0
        mov     eax, dword ptr [ebp - 0x8]
L_89df0:
        mov     ecx, dword ptr [ebp - 0x1c]
        lea     eax, [eax + eax*2]
        mov     edx, dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [ebx], edx
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [ebx + 4], ecx
        lea     ecx, [ebp - 0x1c]
        mov     dword ptr [ebx + 8], edx
        call    FUN_005da4b0
L_89e12:
        mov     ecx, dword ptr [edi + 0x10]
        push    0
        push    1
        push    ebx
        call    FUN_005d8820
        mov     esi, eax
        test    esi, esi
        jnz     L_89e37
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax + 0x38]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_89e37:
        mov     ecx, dword ptr [esi + 8]
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [ebp - 0x70], ecx
        lea     ecx, [ebp - 0x70]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x6c], edx
        mov     dword ptr [ebp - 0x68], eax
        call    FUN_0040c410
        fld     dword ptr [esi + 0x44]
        fmul    dword ptr [g_76f5d8]
        fld     st(0)
        fmul    dword ptr [g_76d070]
        fsubr   st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fstp    st(0)
        call    FUN_00415020
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebx]
        fst     dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx]
        call    FUN_00415020
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [edi + 0x2c]
        fst     dword ptr [edi + 0x2c]
        fld     dword ptr [ebp - 0xc]
        fcomp   dword ptr [g_77de8c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_89e9f
        mov     dword ptr [ebx], 0x42480000
L_89e9f:
        fcomp   dword ptr [g_77de8c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_89eb3
        mov     dword ptr [edi + 0x2c], 0x42480000
L_89eb3:
        fld     dword ptr [g_80da58]
        fsub    dword ptr [g_77de8c]
        fcom    dword ptr [ebx]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_89ecc
        fstp    dword ptr [ebx]
        jmp     L_89ece
L_89ecc:
        fstp    st(0)
L_89ece:
        fld     dword ptr [g_80da54]
        fsub    dword ptr [g_77de8c]
        fcom    dword ptr [edi + 0x2c]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_89ee9
        fstp    dword ptr [edi + 0x2c]
        jmp     L_89eeb
L_89ee9:
        fstp    st(0)
L_89eeb:
        mov     esi, dword ptr [edi + 4]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x168]
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    esi
        push    eax
        sub     esp, 0xc
        mov     ecx, esp
        push    ebx
        call    FUN_00551870
        mov     edx, dword ptr [ebp + 8]
        sub     esp, 0xc
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        push    0
        call    FUN_00707e70
        mov     ecx, dword ptr [g_7f2438]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov     dword ptr [edi + 0x14], eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
