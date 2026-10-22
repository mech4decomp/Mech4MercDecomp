/*
 * FUN_0041b254 (extent 0x41b254-0x41b3aa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007b220c;

__declspec(naked) void FUN_0041b254(void)
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
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_b29c
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        ret    
L_b29c:
        fld    dword ptr [ecx + 0xc]
        fpatan    
        fadd    st(0), st(0)
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
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_b2fa
        mov    eax, dword ptr [esp + 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        xor    ecx, ecx
        mov    dword ptr [eax], 0x3f800000
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        ret    4
L_b2fa:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [esp + 4]
        fdiv st(0), st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 4]
        fdiv st(0), st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 8]
        fdiv st(0), st(1)
        fstp    dword ptr [eax + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fld    dword ptr [esi + 0xc]
        mov    eax, ecx
        fmul    dword ptr [edx]
        fld    dword ptr [esi + 4]
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fld    dword ptr [esi + 8]
        fmul    dword ptr [edx + 4]
        fsubp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 4]
        fld    dword ptr [esi + 8]
        fmul    dword ptr [edx]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 4]
        faddp st(1), st(0)
        fld    dword ptr [esi]
        fmul    dword ptr [edx + 8]
        fsubp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 8]
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 8]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 4]
        fsubp st(1), st(0)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 0xc]
        fmul    dword ptr [edx + 0xc]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fsubp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 4]
        fsubp st(1), st(0)
        fld    dword ptr [esi + 8]
        pop    esi
        fmul    dword ptr [edx + 8]
        fsubp st(1), st(0)
        fstp    dword ptr [eax + 0xc]
        ret    8
    }
}
