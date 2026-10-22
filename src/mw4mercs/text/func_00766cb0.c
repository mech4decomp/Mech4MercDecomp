/*
 * FUN_00766cb0 (extent 0x766cb0-0x766e3c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076d598;
extern float  g_0076d978;
extern float  g_0076df00;
extern float  g_007b220c;

__declspec(naked) void FUN_00766cb0(void)
{
    __asm {
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 0x10]
        fmul    dword ptr [edx + 4]
        mov    eax, dword ptr [esp + 8]
        fld    dword ptr [ecx + 0x14]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [ecx + 0xc]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    st(0)
        fstp    dword ptr [eax]
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6cef
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        ret    8
L_6cef:
        fld    dword ptr [ecx + 4]
        fmul    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [ecx]
        faddp st(1), st(0)
        fsub    dword ptr [edx + 0xc]
        fdivrp st(1), st(0)
        fchs    
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        fsub    dword ptr [eax]
        mov    edx, dword ptr [esp + 8]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fld    st(0)
        fmul    dword ptr [ecx + 0x14]
        fld    st(2)
        fmul    dword ptr [ecx + 0x10]
        faddp st(1), st(0)
        fld    st(3)
        fmul    dword ptr [ecx + 0xc]
        faddp st(1), st(0)
        fadd    st(0), st(0)
        fstp    dword ptr [esp + 4]
        fld    dword ptr [eax + 0xc]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        fld    st(2)
        fmul st(0), st(3)
        fld    st(4)
        fmul st(0), st(5)
        faddp st(1), st(0)
        fld    st(5)
        fmul st(0), st(6)
        faddp st(1), st(0)
        fld    st(2)
        fmul st(0), st(3)
        fsubp st(1), st(0)
        fmul    dword ptr [g_0076d978]
        fsubp st(1), st(0)
        fstp    st(4)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    st(0)
        fstp    dword ptr [edx]
        fld    dword ptr [g_007b220c]
        fchs    
        fstp    dword ptr [esp + 8]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_6d96
        fld    dword ptr [g_0076d598]
        ret    8
L_6d96:
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0076df00]
        fld    dword ptr [edx]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 1
        je    L_6ddf
        fcom    dword ptr [g_0076c5b0]
        mov    dword ptr [edx], 0
        fnstsw  ax
        test    ah, 1
        je    L_6dca
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_6dca:
        fcom    dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6e39
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        ret    8
L_6ddf:
        fld    dword ptr [edx]
        fsqrt    
        fmul    dword ptr [g_0076d070]
        fst    dword ptr [edx]
        fld    st(0)
        fadd st(0), st(2)
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_6e07
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        ret    8
L_6e07:
        fxch    st(1)
        fsub st(0), st(1)
        fxch    st(1)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6e24
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d598]
        ret    8
L_6e24:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6e39
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_6e39:
        ret    8
    }
}
