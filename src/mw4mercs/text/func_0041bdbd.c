/*
 * FUN_0041bdbd (extent 0x41bdbd-0x41c380) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d590;
extern float  g_0076d59c;
extern float  g_0076d5f0;
extern float  g_0076d5f4;
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0041bdc0(void);
extern void __cdecl FUN_0041c100(void);
extern void __cdecl FUN_0041c170(void);
extern void __cdecl FUN_0041c1a0(void);
extern void __cdecl FUN_0041c1d0(void);
extern void __cdecl FUN_0041c230(void);
extern void __cdecl FUN_0041c340(void);

__declspec(naked) void FUN_0041bdbd(void)
{
    __asm {
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076d064]
        mov    eax, dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        mov    esi, ecx
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        fadd    st(0), st(0)
        fstp    dword ptr [esp]
        push    edi
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0041bb80
        mov    edx, dword ptr [esp + 0x20]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    edi
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_0041bb80
        push    eax
        mov    ecx, esi
        call    FUN_0041bb80
        mov    ecx, eax
        mov    esi, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, eax
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], esi
        mov    esi, dword ptr [ecx + 8]
        mov    dword ptr [edx + 8], esi
        mov    ecx, dword ptr [ecx + 0xc]
        pop    edi
        mov    dword ptr [edx + 0xc], ecx
        pop    esi
        ret    0x18
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x48
        fld    dword ptr [esp + 0x50]
        push    esi
        fmul    dword ptr [g_0076d070]
        mov    esi, ecx
        fld    dword ptr [g_0076d590]
        mov    dword ptr [esp + 8], 0
        fsub    dword ptr [g_0076d59c]
        fstp    dword ptr [esp + 4]
        fcom    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_becd
        mov    eax, dword ptr [esp + 0x6c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [esp + 0x68]
        mov    edx, dword ptr [esp + 0x64]
        push    eax
        mov    eax, dword ptr [esp + 0x64]
        push    ecx
        mov    ecx, dword ptr [esp + 0x64]
        push    edx
        push    eax
        push    ecx
        lea    edx, [esp + 0x50]
        push    edx
        mov    ecx, esi
        call    FUN_0041bdc0
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x50]
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, eax
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0xc], edx
        pop    esi
        add    esp, 0x48
        ret    0x20
L_becd:
        fcom    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bef7
L_bed8:
        fsub    dword ptr [g_0076d590]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 8]
        fcom    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_bed8
L_bef7:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_bf0c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_bf0c:
        fld    dword ptr [esp + 0x54]
        push    edi
        fmul    dword ptr [esp + 0x70]
        fdiv    dword ptr [g_0076d590]
        fst    dword ptr [esp + 0x58]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_bf5f
        mov    eax, dword ptr [esp + 0x5c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edi, dword ptr [esp + 0x60]
        push    eax
        push    edi
        lea    ecx, [esp + 0x38]
        call    FUN_0041c340
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [esp + 0x68]
        lea    edx, [esp + 0x34]
        push    edx
        lea    eax, [esp + 0x38]
        push    eax
        push    ecx
        push    edi
        lea    edx, [esp + 0x54]
        jmp    L_c031
L_bf5f:
        fld    dword ptr [esp + 0x58]
        fadd    dword ptr [g_0076d064]
        fxch    st(1)
        fdiv    dword ptr [g_0076d590]
        fadd    dword ptr [esp + 0xc]
        fadd    st(0), st(0)
        fsubp st(1), st(0)
        fst    dword ptr [esp + 0x70]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_bfdd
        fld    dword ptr [esp + 0x58]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 1
        jne    L_bfb6
L_bf9b:
        fld    dword ptr [esp + 0x58]
        fsub    dword ptr [g_0076d5f0]
        fst    dword ptr [esp + 0x58]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 1
        je    L_bf9b
L_bfb6:
        mov    eax, dword ptr [esp + 0x5c]
        mov    edi, dword ptr [esp + 0x60]
        push    eax
        push    edi
        lea    ecx, [esp + 0x38]
        call    FUN_0041c340
        mov    ecx, dword ptr [esp + 0x58]
        push    ecx
        lea    edx, [esp + 0x34]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_0041bb80
        jmp    L_c039
L_bfdd:
        mov    eax, dword ptr [esp + 0x5c]
        mov    edi, dword ptr [esp + 0x6c]
        push    eax
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_0041c340
        fld    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x70]
        fchs    
        mov    edx, dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        push    ecx
        fchs    
        push    edi
        fstp    dword ptr [esp + 0x2c]
        push    edx
        fld    dword ptr [esp + 0x34]
        lea    eax, [esp + 0x2c]
        fchs    
        push    eax
        fstp    dword ptr [esp + 0x38]
        lea    ecx, [esp + 0x30]
        fld    dword ptr [esp + 0x3c]
        push    ecx
        fchs    
        lea    edx, [esp + 0x54]
        fstp    dword ptr [esp + 0x40]
L_c031:
        push    edx
        mov    ecx, esi
        call    FUN_0041bdc0
L_c039:
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x54]
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, eax
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esp + 0x1c]
        pop    edi
        mov    dword ptr [ecx + 0xc], edx
        pop    esi
        add    esp, 0x48
        ret    0x20
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax + 0xc]
        fmul    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 8]
        fmul    dword ptr [ecx + 8]
        faddp st(1), st(0)
        fld    dword ptr [eax + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c0cb
        fld    dword ptr [ecx]
        fchs    
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx + 4]
        fchs    
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx + 8]
        fchs    
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [ecx + 0xc]
        fchs    
        fstp    dword ptr [ecx + 0xc]
L_c0cb:
        mov    eax, ecx
        ret    4
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        fld    dword ptr [eax + 0xc]
        fmul    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 8]
        fmul    dword ptr [ecx + 8]
        faddp st(1), st(0)
        fld    dword ptr [eax + 4]
        fmul    dword ptr [ecx + 4]
        faddp st(1), st(0)
        fld    dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 0xc]
        fld    dword ptr [edx + 8]
        fld    dword ptr [edx + 4]
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld    st(4)
        fmul st(0), st(5)
        faddp st(1), st(0)
        fstp    st(4)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c142
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_c142:
        fdivr    dword ptr [g_0076d064]
        mov    eax, ecx
        fld    st(0)
        fmul    dword ptr [edx]
        fchs    
        fstp    dword ptr [ecx]
        fld    st(0)
        fmul    dword ptr [edx + 4]
        fchs    
        fstp    dword ptr [ecx + 4]
        fld    st(0)
        fmul    dword ptr [edx + 8]
        fchs    
        fstp    dword ptr [ecx + 8]
        fmul    dword ptr [edx + 0xc]
        fstp    dword ptr [ecx + 0xc]
        ret    4
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0041c100
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        lea    edx, [esp + 8]
        push    edx
        mov    ecx, esi
        call    FUN_0041b320
        mov    eax, esi
        pop    esi
        add    esp, 0x10
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_0041c170
        lea    edx, [esp + 4]
        push    edx
        mov    ecx, esi
        call    FUN_0041c1d0
        pop    esi
        add    esp, 0x10
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fld    dword ptr [edx + 4]
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c20a
        fld    st(0)
        fld    dword ptr [edx + 0xc]
        fpatan    
        fdivrp st(1), st(0)
L_c20a:
        fld    st(0)
        mov    dword ptr [ecx + 0xc], 0
        fmul    dword ptr [edx]
        mov    eax, ecx
        fstp    dword ptr [ecx]
        fld    st(0)
        fmul    dword ptr [edx + 4]
        fstp    dword ptr [ecx + 4]
        fmul    dword ptr [edx + 8]
        fstp    dword ptr [ecx + 8]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        fld    dword ptr [edx + 4]
        fld    dword ptr [edx]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fsqrt    
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
        fld    st(1)
        fcomp    dword ptr [g_0076d59c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c271
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    st(0)
        fsin    
        fdiv st(0), st(1)
L_c271:
        fld    st(0)
        mov    eax, ecx
        fmul    dword ptr [edx]
        fstp    dword ptr [ecx]
        fld    st(0)
        fmul    dword ptr [edx + 4]
        fstp    dword ptr [ecx + 4]
        fmul    dword ptr [edx + 8]
        fstp    dword ptr [ecx + 8]
        fcos    
        fstp    dword ptr [ecx + 0xc]
        ret    4
        nop    
        sub    esp, 0x30
        mov    eax, dword ptr [esp + 0x38]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x44]
        push    eax
        mov    esi, ecx
        push    edi
        lea    ecx, [esp + 0x30]
        call    FUN_0041c1a0
        mov    ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        lea    ecx, [esp + 0x20]
        call    FUN_0041c1a0
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x28]
        lea    edx, [esp + 8]
        push    edx
        lea    ecx, [esp + 0xc]
        fmul    dword ptr [g_0076d5f4]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x30]
        fmul    dword ptr [g_0076d5f4]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        fmul    dword ptr [g_0076d5f4]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0076d5f4]
        fstp    dword ptr [esp + 0x18]
        call    FUN_0041c230
        lea    eax, [esp + 8]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_0041b320
        mov    eax, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esi]
        mov    ecx, eax
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esi + 0xc]
        pop    edi
        mov    dword ptr [ecx + 0xc], edx
        pop    esi
        add    esp, 0x30
        ret    0x10
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x18]
        fld    dword ptr [eax]
        push    esi
        fstp    dword ptr [esp + 4]
        fld    dword ptr [eax + 4]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [eax + 8]
        lea    eax, [esp + 4]
        push    eax
        push    ecx
        fstp    dword ptr [esp + 0x14]
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041b320
        mov    eax, esi
        pop    esi
        add    esp, 0x10
        ret    8
    }
}
