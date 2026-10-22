/*
 * FUN_0042080a (extent 0x42080a-0x4208dd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0042080a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x14], ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx + 8]
        mov    eax, ecx
        fabs    
        fmul    dword ptr [edx + 0x38]
        fld    dword ptr [edx + 4]
        fabs    
        fxch    st(1)
        fxch    st(1)
        fmul    dword ptr [edx + 0x34]
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fabs    
        fst    dword ptr [esp + 4]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fsub st(0), st(1)
        fstp    dword ptr [eax]
        fadd    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x18]
        fabs    
        fmul    dword ptr [edx + 0x38]
        fld    dword ptr [edx + 0x14]
        fabs    
        fxch    st(1)
        fxch    st(1)
        fmul    dword ptr [edx + 0x34]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fabs    
        fst    dword ptr [esp + 4]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fsub st(0), st(1)
        fstp    dword ptr [eax + 8]
        fadd    dword ptr [edx + 0x1c]
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [edx + 0x28]
        fabs    
        fmul    dword ptr [edx + 0x38]
        fld    dword ptr [edx + 0x24]
        fabs    
        fxch    st(1)
        fxch    st(1)
        fmul    dword ptr [edx + 0x34]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x20]
        fabs    
        fst    dword ptr [esp + 4]
        fmul    dword ptr [edx + 0x30]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x2c]
        fsub st(0), st(1)
        fstp    dword ptr [eax + 0x10]
        fadd    dword ptr [edx + 0x2c]
        fstp    dword ptr [eax + 0x14]
        ret    4
    }
}
