/*
 * FUN_00765f60 (extent 0x765f60-0x766048) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b038;
extern float  g_0076d064;

__declspec(naked) void FUN_00765f60(void)
{
    __asm {
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
        jmp    dword ptr [g_0076b038]
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        sub    esp, 0x18
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        fld    dword ptr [eax]
        fsub    dword ptr [edx]
        push    esi
        fld    dword ptr [eax + 4]
        mov    esi, dword ptr [esp + 0x28]
        fsub    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [edx + 8]
        fld    dword ptr [esi]
        fsub    dword ptr [eax]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esi + 8]
        pop    esi
        fsub    dword ptr [eax + 8]
        fld    st(0)
        fmul st(0), st(3)
        fld    dword ptr [esp + 0x10]
        fmul st(0), st(3)
        fsubp st(1), st(0)
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        fxch    st(1)
        fmul    dword ptr [esp + 0xc]
        fxch    st(1)
        fmul st(0), st(3)
        fsubp st(1), st(0)
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x10]
        fmulp st(2), st(0)
        fmul    dword ptr [esp + 0xc]
        fsubp st(1), st(0)
        fld    st(0)
        fmul st(0), st(1)
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        faddp st(1), st(0)
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        faddp st(1), st(0)
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        fst    dword ptr [esp + 0x20]
        fstp    dword ptr [ecx]
        fld    dword ptr [esp + 4]
        fmul st(0), st(1)
        fst    dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx + 4]
        fxch    st(1)
        fmul st(0), st(1)
        fxch    st(1)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fst    dword ptr [ecx + 8]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [edx]
        fxch    st(1)
        fmul    dword ptr [edx + 8]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x1c]
        fmul    dword ptr [edx + 4]
        faddp st(1), st(0)
        fstp    dword ptr [ecx + 0xc]
        add    esp, 0x18
        ret    0xc
    }
}
