/*
 * FUN_00688a6b (extent 0x688a6b-0x689001) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d048;
extern float  g_0076d04c;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_0076d968;
extern float  g_00788104;
extern float  g_007b220c;
extern int    g_007f25c0;
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00689010(void);
extern void __cdecl FUN_00689410(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006b07a0(void);

__declspec(naked) void FUN_00688a6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    eax
        mov    esi, ecx
        push    edi
        call    FUN_006b07a0
        xor    eax, eax
        cmp    bl, al
        jne    L_8ac3
        mov    edx, dword ptr [edi]
        push    eax
        mov    dword ptr [esi + 0x2c], eax
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 0x30], eax
        call    dword ptr [edx + 0x1c8]
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x3c], eax
        mov    eax, dword ptr [esp + 0x18]
        push    ebp
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00689410
L_8ac3:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006b0680
        ret    8
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
        je    L_8b76
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_8b76:
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
        sub    esp, 0x58
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        push    edi
        jne    L_8bae
        fld    dword ptr [g_0076c5b0]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
L_8bae:
        mov    ecx, dword ptr [esi + 0x20]
        test    ecx, ecx
        jne    L_8bc3
        fld    dword ptr [g_0076c5b0]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
L_8bc3:
        mov    eax, dword ptr [eax + 0x35c]
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x80
        push    ecx
        lea    ecx, [esp + 0x24]
        call    FUN_00419480
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x38], edx
        lea    edx, [esp + 0x13]
        mov    dword ptr [esp + 0x3c], eax
        push    edx
        lea    eax, [esp + 0x60]
        mov    dword ptr [esp + 0x44], ecx
        push    eax
        mov    ecx, esi
        call    FUN_00689010
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x44], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x48], edx
        mov    eax, dword ptr [eax + 8]
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    edx, [esp + 0x3c]
        push    edx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x54], eax
        call    FUN_0040ca10
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        mov    eax, dword ptr [g_007f25c0]
        fld    dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esi + 0x20]
        fmul    dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        faddp st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        call    FUN_00415230
        test    al, al
        je    L_8fd7
        fld    dword ptr [esi + 0x28]
        fld    dword ptr [esi + 0x24]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    dword ptr [esp + 0x1c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8c99
        mov    dword ptr [esp + 0x1c], 0x41200000
L_8c99:
        fld    dword ptr [ebx + 0x440]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8d5d
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_0076d04c]
        fld    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        je    L_8cef
        fdiv    dword ptr [esp + 0x1c]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8ce0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_8d2d
L_8ce0:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8d2d
        jmp    L_8d25
L_8cef:
        fsub    dword ptr [g_0076d04c]
        fld    dword ptr [esp + 0x1c]
        fsub    dword ptr [g_0076d04c]
        fdivp st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8d18
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_8d2d
L_8d18:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8d2d
L_8d25:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_8d2d:
        fcom    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8d42
L_8d3a:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_8d42:
        fcom    dword ptr [esi + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8ff9
        pop    edi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 0x40]
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
L_8d5d:
        mov    edi, dword ptr [esi + 4]
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_00788104]
        mov    ebp, eax
        fnstsw  ax
        test    ah, 1
        je    L_8e5b
        mov    ecx, dword ptr [edi + 0x35c]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x88]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [eax + 0x28]
        mov    eax, dword ptr [ebx + 0xd8]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x64]
        fld    dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x2c]
        fsub    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0x54], edx
        mov    dword ptr [esp + 0x58], eax
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x58]
        fsub    dword ptr [esp + 0x40]
        fst    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x24]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp st(1), st(0)
        fabs    
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_8e4d
        lea    ecx, [esp + 0x20]
        call    FUN_0040cb00
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x64]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x5c]
        faddp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_8e5b
L_8e4d:
        fld    dword ptr [g_0076c5b0]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
L_8e5b:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        je    L_8eea
        fld    dword ptr [ebp + 0x2bc]
        mov    ecx, dword ptr [edi + 0x35c]
        fdiv    dword ptr [ebp + 0x2d8]
        fld    st(0)
        fmul st(0), st(1)
        fmul    dword ptr [ebp + 0x2d8]
        fmul    dword ptr [g_0076d070]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x440]
        faddp st(1), st(0)
        fld    st(0)
        fmulp st(1), st(0)
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_8d3a
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [g_0076d048]
        fxch    st(1)
        fsub    dword ptr [g_0076d048]
        fdivp st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8ed4
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_8d42
L_8ed4:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8d42
        jmp    L_8d3a
L_8eea:
        fld    dword ptr [ebx + 0x440]
        fsub    dword ptr [g_0076d5f0]
        fdiv    dword ptr [ebp + 0x2bc]
        fst    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8f17
        mov    dword ptr [esp + 0x18], 0
        jmp    L_8f30
L_8f17:
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8f30
        mov    dword ptr [esp + 0x18], 0x3f800000
L_8f30:
        fld    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x18]
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8f4d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_8f4d:
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 1
        jne    L_8ff9
        fld    dword ptr [esp + 0x14]
        fdiv    dword ptr [esp + 0x1c]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8f81
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_8f96
L_8f81:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8f96
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_8f96:
        fst    dword ptr [esp + 0x1c]
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8fc0
        fld    dword ptr [g_0076d064]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(2)
        fmul st(0), st(1)
        faddp st(2), st(0)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_8d42
L_8fc0:
        fld    dword ptr [esp + 0x1c]
        fld    dword ptr [g_0076d064]
        fsub st(0), st(2)
        fmul st(0), st(1)
        faddp st(2), st(0)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_8d42
L_8fd7:
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 1
        je    L_8ff6
        fld    dword ptr [g_0076c5b0]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
L_8ff6:
        fld    dword ptr [esi + 0x40]
L_8ff9:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x58
        ret    
    }
}
