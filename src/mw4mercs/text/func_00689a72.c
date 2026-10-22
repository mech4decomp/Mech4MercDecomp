/*
 * FUN_00689a72 (extent 0x689a72-0x68a0c6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076f5d8;
extern float  g_0077de8c;
extern float  g_00783388;
extern int    g_007f2438;
extern float  g_0080da54;
extern float  g_0080da58;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_005d8820(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_005da4b0(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0670(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b07a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00689a72(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        mov    dword ptr [ecx + 0x20], eax
        call    FUN_006b0750
        ret    4
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b0780
        mov    eax, dword ptr [esi + 0x14]
        mov    cl, byte ptr [eax + 0xc]
        xor    edx, edx
        cmp    cl, dl
        jne    L_9abe
        pop    edi
        mov    byte ptr [esi + 0x19], dl
        pop    esi
        ret    0xc
L_9abe:
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        mov    dword ptr [eax + 0x10], edx
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x1c8]
        pop    edi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_006b07a0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x38]
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x7c
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x20]
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x80
        push    ecx
        lea    ecx, [ebp - 0x70]
        call    FUN_00419480
        mov    edx, dword ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    eax, dword ptr [ebp - 0x6c]
        mov    esi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x4c], edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        mov    dword ptr [ebp - 0x44], ecx
        push    esi
        mov    ecx, edi
        mov    dword ptr [ebp - 0x48], eax
        call    FUN_006b0680
        lea    eax, [ebp - 0x4c]
        push    eax
        push    esi
        lea    ecx, [ebp - 0x28]
        call    FUN_0040ca10
        fld    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x20]
        push    0x43fa0000
        fld    dword ptr [ebp - 0x28]
        lea    ecx, [ebp - 0x34]
        fmul    dword ptr [ebp - 0x28]
        push    ecx
        lea    ecx, [ebp - 0x34]
        mov    dword ptr [ebp - 0x24], 0
        faddp st(1), st(0)
        mov    dword ptr [ebp - 0x30], 0
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    dword ptr [ebp - 0x28]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ebp - 0x20]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x2c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0040ca40
        push    esi
        lea    edx, [ebp - 0x34]
        lea    ebx, [edi + 0x24]
        push    edx
        mov    ecx, ebx
        call    FUN_0040c9e0
        mov    ecx, dword ptr [edi + 4]
        fld    dword ptr [ecx + 0x3e8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_9e12
        mov    eax, dword ptr [edi + 0x28]
        mov    dword ptr [ecx + 0x3e0], eax
        add    ecx, 0x3dc
        push    ecx
        push    ebx
        lea    ecx, [ebp - 0x1c]
        call    FUN_0040ca10
        fld    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 0xc], eax
        fld    dword ptr [ebp - 0xc]
        mov    esi, dword ptr [edi + 4]
        fcomp    dword ptr [esi + 0x3e8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9e12
        call    FUN_00415020
        fmul    dword ptr [esi + 0x3e8]
        mov    ecx, dword ptr [esi + 0x3e0]
        mov    dword ptr [ebp - 8], ecx
        fstp    dword ptr [ebp - 0xc]
        call    FUN_00415020
        fmul    dword ptr [esi + 0x3e8]
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x3c], edx
        fstp    dword ptr [ebp - 0x40]
        fld    dword ptr [ebp - 0x40]
        lea    edx, [ebp - 1]
        fchs    
        push    edx
        fst    dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x38], eax
        fld    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x54]
        fld    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x50]
        fld    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x64]
        fld    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x60]
        fld    dword ptr [ebp - 0xc]
        fchs    
        fst    dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0x68], ecx
        lea    ecx, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x70]
        fld    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_005cb210
        mov    ecx, dword ptr [ebp - 0x18]
        cmp    ecx, dword ptr [ebp - 0x14]
        je    L_9cbe
        test    ecx, ecx
        je    L_9cb6
        lea    eax, [ebp - 0x40]
        push    eax
        call    FUN_0040c5d0
        mov    ecx, dword ptr [ebp - 0x18]
L_9cb6:
        add    ecx, 0xc
        mov    dword ptr [ebp - 0x18], ecx
        jmp    L_9cd0
L_9cbe:
        push    1
        lea    edx, [ebp - 0x40]
        push    edx
        push    ecx
        lea    ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov    ecx, dword ptr [ebp - 0x18]
L_9cd0:
        cmp    ecx, dword ptr [ebp - 0x14]
        je    L_9ced
        test    ecx, ecx
        je    L_9ce5
        lea    eax, [ebp - 0x58]
        push    eax
        call    FUN_0040c5d0
        mov    ecx, dword ptr [ebp - 0x18]
L_9ce5:
        add    ecx, 0xc
        mov    dword ptr [ebp - 0x18], ecx
        jmp    L_9cff
L_9ced:
        push    1
        lea    edx, [ebp - 0x58]
        push    edx
        push    ecx
        lea    ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov    ecx, dword ptr [ebp - 0x18]
L_9cff:
        cmp    ecx, dword ptr [ebp - 0x14]
        je    L_9d1c
        test    ecx, ecx
        je    L_9d14
        lea    eax, [ebp - 0x64]
        push    eax
        call    FUN_0040c5d0
        mov    ecx, dword ptr [ebp - 0x18]
L_9d14:
        add    ecx, 0xc
        mov    dword ptr [ebp - 0x18], ecx
        jmp    L_9d2e
L_9d1c:
        push    1
        lea    edx, [ebp - 0x64]
        push    edx
        push    ecx
        lea    ecx, [ebp - 0x1c]
        call    FUN_005cb540
        mov    ecx, dword ptr [ebp - 0x18]
L_9d2e:
        cmp    ecx, dword ptr [ebp - 0x14]
        je    L_9d4b
        test    ecx, ecx
        je    L_9d43
        lea    eax, [ebp - 0x70]
        push    eax
        call    FUN_0040c5d0
        mov    ecx, dword ptr [ebp - 0x18]
L_9d43:
        add    ecx, 0xc
        mov    dword ptr [ebp - 0x18], ecx
        jmp    L_9d5a
L_9d4b:
        push    1
        lea    edx, [ebp - 0x70]
        push    edx
        push    ecx
        lea    ecx, [ebp - 0x1c]
        call    FUN_005cb540
L_9d5a:
        xor    esi, esi
        mov    dword ptr [ebp - 0xc], 0
        mov    dword ptr [ebp - 8], 4
        mov    dword ptr [ebp - 0x10], esi
L_9d6d:
        mov    eax, dword ptr [edi + 4]
        mov    ecx, dword ptr [ebp - 0x1c]
        fld    dword ptr [eax + 0x3dc]
        fadd    dword ptr [esi + ecx]
        push    ebx
        fstp    dword ptr [esi + ecx]
        mov    ecx, dword ptr [ebp - 0x1c]
        fld    dword ptr [eax + 0x3e4]
        fadd    dword ptr [esi + ecx + 8]
        fstp    dword ptr [esi + ecx + 8]
        mov    eax, dword ptr [ebp - 0x1c]
        lea    ecx, [esi + eax]
        push    ecx
        lea    ecx, [ebp - 0x7c]
        call    FUN_0040ca10
        lea    ecx, [ebp - 0x7c]
        call    FUN_0040cb00
        fcom    dword ptr [ebp - 0xc]
        fnstsw  ax
        test    ah, 1
        jne    L_9dc2
        fld    dword ptr [ebp - 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9dcd
L_9dc2:
        mov    edx, dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 8], edx
        jmp    L_9dcf
L_9dcd:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9dcf:
        mov    edx, dword ptr [ebp - 0x10]
        inc    edx
        add    esi, 0xc
        cmp    esi, 0x30
        mov    dword ptr [ebp - 0x10], edx
        jl    L_9d6d
        mov    eax, dword ptr [ebp - 8]
        cmp    eax, 4
        jne    L_9df0
        mov    dword ptr [ebp - 8], 0
        mov    eax, dword ptr [ebp - 8]
L_9df0:
        mov    ecx, dword ptr [ebp - 0x1c]
        lea    eax, [eax + eax*2]
        mov    edx, dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebx], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebx + 4], ecx
        lea    ecx, [ebp - 0x1c]
        mov    dword ptr [ebx + 8], edx
        call    FUN_005da4b0
L_9e12:
        mov    ecx, dword ptr [edi + 0x10]
        push    0
        push    1
        push    ebx
        call    FUN_005d8820
        mov    esi, eax
        test    esi, esi
        jne    L_9e37
        mov    eax, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [eax + 0x38]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_9e37:
        mov    ecx, dword ptr [esi + 8]
        mov    edx, dword ptr [esi + 0xc]
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [ebp - 0x70], ecx
        lea    ecx, [ebp - 0x70]
        push    ecx
        mov    ecx, ebx
        mov    dword ptr [ebp - 0x6c], edx
        mov    dword ptr [ebp - 0x68], eax
        call    FUN_0040c410
        fld    dword ptr [esi + 0x44]
        fmul    dword ptr [g_0076f5d8]
        fld    st(0)
        fmul    dword ptr [g_0076d070]
        fsubr st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00415020
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebx]
        fst    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx]
        call    FUN_00415020
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [edi + 0x2c]
        fst    dword ptr [edi + 0x2c]
        fld    dword ptr [ebp - 0xc]
        fcomp    dword ptr [g_0077de8c]
        fnstsw  ax
        test    ah, 1
        je    L_9e9f
        mov    dword ptr [ebx], 0x42480000
L_9e9f:
        fcomp    dword ptr [g_0077de8c]
        fnstsw  ax
        test    ah, 1
        je    L_9eb3
        mov    dword ptr [edi + 0x2c], 0x42480000
L_9eb3:
        fld    dword ptr [g_0080da58]
        fsub    dword ptr [g_0077de8c]
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        je    L_9ecc
        fstp    dword ptr [ebx]
        jmp    L_9ece
L_9ecc:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9ece:
        fld    dword ptr [g_0080da54]
        fsub    dword ptr [g_0077de8c]
        fcom    dword ptr [edi + 0x2c]
        fnstsw  ax
        test    ah, 1
        je    L_9ee9
        fstp    dword ptr [edi + 0x2c]
        jmp    L_9eeb
L_9ee9:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_9eeb:
        mov    esi, dword ptr [edi + 4]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x168]
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    esi
        push    eax
        sub    esp, 0xc
        mov    ecx, esp
        push    ebx
        call    FUN_00551870
        mov    edx, dword ptr [ebp + 8]
        sub    esp, 0xc
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        push    0
        call    FUN_00707e70
        mov    ecx, dword ptr [g_007f2438]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov    dword ptr [edi + 0x14], eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        nop    
        sub    esp, 0x18
        mov    eax, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [eax + 0xd8]
        mov    edx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esp + 0x1c]
        fsubr    dword ptr [eax]
        mov    dword ptr [esp + 0x10], edx
        fld    dword ptr [eax + 4]
        push    eax
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x18]
        fst    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 8]
        faddp st(1), st(0)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x18]
        fmul    dword ptr [g_00783388]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00783388]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0x28], edx
        fmul    dword ptr [g_00783388]
        fstp    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0x2c], edx
        fstp    dword ptr [ecx + 0x24]
        call    FUN_006b0670
        add    esp, 0x18
        ret    4
        nop    
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_a086
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_a086:
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + 0x30]
        mov    eax, dword ptr [edx + 0x30]
        pop    edi
        cmp    ecx, eax
        pop    esi
        setne    al
        pop    ebx
        add    esp, 0x20
        ret    4
        mov    edx, dword ptr [ecx + 0x24]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x28]
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    
    }
}
