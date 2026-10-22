/*
 * FUN_004eef58 (extent 0x4eef58-0x4eefbf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;

__declspec(naked) void FUN_004eef58(void)
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
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 0x14]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x10]
        faddp st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ecx + 0xc]
        faddp st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_efad
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        ret    4
L_efad:
        fcom    dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_efbc
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 0x18]
L_efbc:
        ret    4
    }
}
