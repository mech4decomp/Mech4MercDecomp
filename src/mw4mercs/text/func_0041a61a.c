/*
 * FUN_0041a61a (extent 0x41a61a-0x41aba8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d594;
extern float  g_0076d598;
extern float  g_0076d59c;
extern int    g_007b8cf8;
extern int    g_007b8cfc;
extern int    g_007b8d00;
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041aa10(void);

__declspec(naked) void FUN_0041a61a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 0xc]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [ecx + 0x1c]
        fadd    dword ptr [edx + 4]
        fstp    dword ptr [eax + 0x1c]
        fld    dword ptr [ecx + 0x2c]
        fadd    dword ptr [edx + 8]
        fstp    dword ptr [eax + 0x2c]
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
        fld    dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 0x24]
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 4]
        fsubp st(1), st(0)
        fmul    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx + 0x18]
        fmul    dword ptr [ecx + 4]
        fld    dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 0x14]
        fsubp st(1), st(0)
        fmul    dword ptr [ecx + 0x20]
        faddp st(1), st(0)
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 0x14]
        fld    dword ptr [ecx + 0x24]
        fmul    dword ptr [ecx + 0x18]
        fsubp st(1), st(0)
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        push    edi
        fcomp    dword ptr [g_0076c5b0]
        xor    edi, edi
        fnstsw  ax
        test    ah, 0x40
        je    L_a6f2
        push    esi
        xor    edx, edx
        mov    esi, ecx
L_a6a7:
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_a6bf
        inc    edx
        add    esi, 0x10
        cmp    edx, 3
        jl    L_a6a7
L_a6bf:
        fld    dword ptr [ecx]
        shl    edx, 4
        lea    eax, [edx + ecx]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        fstp    dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        fld    dword ptr [ecx + 4]
        mov    dword ptr [ecx + 4], edx
        fstp    dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 8]
        fld    dword ptr [ecx + 8]
        mov    dword ptr [ecx + 8], edx
        fstp    dword ptr [eax + 8]
        mov    edx, dword ptr [eax + 0xc]
        fld    dword ptr [ecx + 0xc]
        mov    dword ptr [ecx + 0xc], edx
        fstp    dword ptr [eax + 0xc]
        pop    esi
L_a6f2:
        fld    dword ptr [ecx]
        mov    edx, 0x3f800000
        mov    dword ptr [ecx], edx
        fld    dword ptr [ecx + 4]
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx + 8]
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [ecx + 0xc]
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x10]
        mov    dword ptr [ecx + 0x10], edi
        fld    st(0)
        fmul    dword ptr [ecx + 4]
        fsubr    dword ptr [ecx + 0x14]
        fstp    dword ptr [ecx + 0x14]
        fld    st(0)
        fmul    dword ptr [ecx + 8]
        fsubr    dword ptr [ecx + 0x18]
        fstp    dword ptr [ecx + 0x18]
        fmul    dword ptr [ecx + 0xc]
        fsubr    dword ptr [ecx + 0x1c]
        fstp    dword ptr [ecx + 0x1c]
        fld    dword ptr [ecx + 0x20]
        mov    dword ptr [ecx + 0x20], edi
        fld    st(0)
        fmul    dword ptr [ecx + 4]
        fsubr    dword ptr [ecx + 0x24]
        fstp    dword ptr [ecx + 0x24]
        fld    st(0)
        fmul    dword ptr [ecx + 8]
        fsubr    dword ptr [ecx + 0x28]
        fstp    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 0xc]
        fsubr    dword ptr [ecx + 0x2c]
        fstp    dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_a793
        mov    eax, dword ptr [ecx + 0x24]
        fld    dword ptr [ecx + 0x14]
        mov    dword ptr [ecx + 0x14], eax
        fstp    dword ptr [ecx + 0x24]
        mov    eax, dword ptr [ecx + 0x28]
        fld    dword ptr [ecx + 0x18]
        mov    dword ptr [ecx + 0x18], eax
        fstp    dword ptr [ecx + 0x28]
        mov    eax, dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x1c]
        mov    dword ptr [ecx + 0x1c], eax
        fstp    dword ptr [ecx + 0x2c]
L_a793:
        fld    dword ptr [ecx + 0x14]
        mov    dword ptr [ecx + 0x14], edx
        fld    dword ptr [ecx + 0x18]
        mov    eax, ecx
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 0x18]
        fld    dword ptr [ecx + 0x1c]
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 0x1c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 4]
        mov    dword ptr [ecx + 4], edi
        fld    st(0)
        fmul    dword ptr [ecx + 0x18]
        fsubr    dword ptr [ecx + 8]
        fstp    dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 0x1c]
        fsubr    dword ptr [ecx + 0xc]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [ecx + 0x24]
        mov    dword ptr [ecx + 0x24], edi
        fld    st(0)
        fmul    dword ptr [ecx + 0x18]
        fsubr    dword ptr [ecx + 0x28]
        fstp    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 0x1c]
        fsubr    dword ptr [ecx + 0x2c]
        fstp    dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x28]
        mov    dword ptr [ecx + 0x28], edx
        fld    dword ptr [ecx + 0x2c]
        fdiv st(0), st(1)
        fstp    dword ptr [ecx + 0x2c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 8]
        mov    dword ptr [ecx + 8], edi
        fmul    dword ptr [ecx + 0x2c]
        fsubr    dword ptr [ecx + 0xc]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [ecx + 0x18]
        mov    dword ptr [ecx + 0x18], edi
        fmul    dword ptr [ecx + 0x2c]
        pop    edi
        fsubr    dword ptr [ecx + 0x1c]
        fstp    dword ptr [ecx + 0x1c]
        ret    
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
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    eax, dword ptr [edi + 4]
        mov    esi, ecx
        mov    ecx, dword ptr [edi]
        lea    edx, [esp + 8]
        mov    dword ptr [esp + 8], ecx
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0041a070
        fld    dword ptr [esi + 8]
        mov    eax, dword ptr [edi + 8]
        mov    ecx, dword ptr [esi + 0x1c]
        fchs    
        fld    dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi + 0x2c]
        fchs    
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esi + 0x28]
        mov    dword ptr [esp + 0x24], eax
        fchs    
        fstp    dword ptr [esp + 0x1c]
        pop    edi
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x14], ecx
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], edx
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 8]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0xc]
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x2c], ecx
        mov    eax, esi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        fld    dword ptr [edi + 4]
        lea    eax, [esp + 8]
        fchs    
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [edi]
        mov    esi, ecx
        fchs    
        fstp    dword ptr [esp + 8]
        push    eax
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0041a070
        fld    dword ptr [esi + 8]
        fld    dword ptr [esi + 0x18]
        mov    ecx, dword ptr [edi + 8]
        mov    edx, dword ptr [esi + 0x1c]
        mov    eax, dword ptr [esi + 0x2c]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esi + 0x28]
        mov    dword ptr [esp + 0x24], ecx
        fstp    dword ptr [esp + 0x1c]
        pop    edi
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x14], edx
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], eax
        fmul    dword ptr [esp + 0x20]
        mov    eax, esi
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 8]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 0xc]
        mov    dword ptr [esi + 0x1c], ecx
        mov    dword ptr [esi + 0x2c], edx
        pop    esi
        add    esp, 0x18
        ret    4
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
        __emit 0xE9  // jmp L_a990 (rel32; MSVC6 emits rel8 EB)
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_a990:
        mov    dword ptr [g_007b8cf8], 0
        mov    dword ptr [g_007b8cfc], 0
        mov    dword ptr [g_007b8d00], 0
        ret    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x30
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0041a070
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, esi
        call    FUN_0041aa10
        mov    eax, esi
        pop    esi
        add    esp, 0x30
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x30
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0041a160
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, esi
        call    FUN_0041aa10
        pop    esi
        add    esp, 0x30
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [edx + 0x20]
        fchs    
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        fsub    dword ptr [g_0076d064]
        fabs    
        fcomp    dword ptr [g_0076d59c]
        fnstsw  ax
        test    ah, 0x41
        je    L_aa57
        fld    dword ptr [edx + 4]
        mov    eax, ecx
        fld    dword ptr [edx + 8]
        fpatan    
        fstp    dword ptr [ecx]
        fld    dword ptr [g_0076d594]
        fstp    dword ptr [ecx + 4]
        mov    dword ptr [ecx + 8], 0
        add    esp, 0x10
        ret    4
L_aa57:
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fsub    dword ptr [g_0076d598]
        fabs    
        fcomp    dword ptr [g_0076d59c]
        fnstsw  ax
        test    ah, 0x41
        je    L_aa98
        fld    dword ptr [edx + 4]
        mov    eax, ecx
        fchs    
        fld    dword ptr [edx + 8]
        fchs    
        fpatan    
        fstp    dword ptr [ecx]
        fld    dword ptr [g_0076d594]
        fchs    
        fstp    dword ptr [ecx + 4]
        mov    dword ptr [ecx + 8], 0
        add    esp, 0x10
        ret    4
L_aa98:
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        fsubr    dword ptr [g_0076d064]
        fsqrt    
        fld    dword ptr [g_0076d064]
        fdiv st(0), st(1)
        fst    dword ptr [esp + 0x14]
        fmul    dword ptr [edx + 0x28]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_aad6
        fchs    
        fxch    st(1)
        fchs    
        fxch    st(1)
        fld    dword ptr [esp + 0x14]
        fchs    
        fstp    dword ptr [esp + 0x14]
L_aad6:
        fld    dword ptr [esp + 0x14]
        mov    eax, ecx
        fmul    dword ptr [edx + 0x24]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [edx + 0x10]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 0xc]
        fxch    st(1)
        fpatan    
        fstp    dword ptr [ecx]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fxch    st(1)
        fpatan    
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [esp + 8]
        fld    dword ptr [esp + 0xc]
        fpatan    
        fstp    dword ptr [ecx + 8]
        add    esp, 0x10
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_ab59
        fld    dword ptr [ecx + 4]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_ab59
        fld    dword ptr [ecx + 8]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_ab59
        mov    eax, 1
        ret    
L_ab59:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 8]
        fsub    dword ptr [edx]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_aba5
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [edx + 4]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_aba5
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [edx + 8]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_aba5
        mov    eax, 1
        ret    
L_aba5:
        xor    eax, eax
        ret    
    }
}
