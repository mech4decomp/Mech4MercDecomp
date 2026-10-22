/*
 * FUN_0041ad92 (extent 0x41ad92-0x41ae79) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;

__declspec(naked) void FUN_0041ad92(void)
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
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 4]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_add9
        fld    dword ptr [ecx]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_add9
        fld    dword ptr [ecx + 8]
        fabs    
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_add9
        mov    eax, 1
        ret    
L_add9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx + 4]
        mov    edx, dword ptr [esp + 8]
        fsub    dword ptr [edx + 4]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_ae25
        fld    dword ptr [ecx]
        fsub    dword ptr [edx]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_ae25
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [edx + 8]
        fabs    
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_ae25
        mov    eax, 1
        ret    
L_ae25:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076d064]
        mov    edx, dword ptr [esp + 8]
        fsub    dword ptr [esp + 0xc]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        fmul st(0), st(1)
        fld    dword ptr [edx]
        fmul    dword ptr [esp + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 4]
        fmul st(0), st(1)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esp + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 8]
        fmul st(0), st(1)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esp + 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [eax + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        ret    0xc
    }
}
