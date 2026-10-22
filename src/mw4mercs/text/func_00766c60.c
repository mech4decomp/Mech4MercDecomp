/*
 * FUN_00766c60 (extent 0x766c60-0x766d0d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_007b220c;

__declspec(naked) void FUN_00766c60(void)
{
    __asm {
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 8]
        fld    dword ptr [ecx + 4]
        fld    dword ptr [ecx]
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
        fdivr    dword ptr [g_0076d064]
        fst    dword ptr [eax + 0x18]
        fld    st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax + 0xc]
        fld    st(0)
        fmul    dword ptr [ecx + 4]
        fstp    dword ptr [eax + 0x10]
        fmul    dword ptr [ecx + 8]
        fstp    dword ptr [eax + 0x14]
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
    }
}
