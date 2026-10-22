/*
 * FUN_00766d10 (extent 0x766d10-0x766fca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d048;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d598;
extern float  g_0076d978;
extern float  g_0076df00;
extern float  g_0077debc;
extern float  g_007b220c;

__declspec(naked) void FUN_00766d10(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x24
        mov    eax, dword ptr [esp + 0x28]
        fld    dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x1c]
        fsub    dword ptr [ecx]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x20], edx
        fstp    dword ptr [esp + 0xc]
        push    esi
        fld    dword ptr [esp + 0x20]
        xor    esi, esi
        fsub    dword ptr [ecx + 4]
        lea    edx, [eax + 0x30]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x24]
        fsub    dword ptr [ecx + 8]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [g_0077debc]
        fsub    dword ptr [ecx + 0x18]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [ecx + 0x18]
        fadd    dword ptr [g_0076d048]
        fstp    dword ptr [esp + 4]
L_6e94:
        fld    dword ptr [edx - 0x30]
        fld    dword ptr [edx - 0x20]
        fld    dword ptr [edx - 0x10]
        fld    st(2)
        fmul    dword ptr [ecx + 0xc]
        fld    st(1)
        fmul    dword ptr [ecx + 0x14]
        faddp st(1), st(0)
        fld    st(2)
        fmul    dword ptr [ecx + 0x10]
        faddp st(1), st(0)
        fld    st(0)
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6ef4
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x18]
        fmul st(0), st(1)
        fld    dword ptr [esp + 0x14]
        fmul st(0), st(3)
        faddp st(1), st(0)
        fxch    st(3)
        fmul    dword ptr [esp + 0x10]
        faddp st(3), st(0)
        fxch    st(2)
        fabs    
        fxch    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        je    L_6fbd
        jmp    L_6f6d
L_6ef4:
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fabs    
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esp + 0x18]
        fmul st(0), st(2)
        fld    dword ptr [esp + 0x14]
        fmul st(0), st(4)
        faddp st(1), st(0)
        fxch    st(4)
        fmul    dword ptr [esp + 0x10]
        faddp st(4), st(0)
        fxch    st(3)
        fmul st(0), st(3)
        fxch    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    st(0)
        fsub    dword ptr [esp + 8]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 8]
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [esp + 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6f4b
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x2c], eax
L_6f4b:
        fcom    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_6f5c
        fstp    dword ptr [esp + 4]
        jmp    L_6f5e
L_6f5c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6f5e:
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_6fbd
L_6f6d:
        inc    esi
        add    edx, 4
        cmp    esi, 2
        jle    L_6e94
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_6fbd
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je    L_6fbd
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6fb2
        mov    dword ptr [esp + 0x2c], 0
L_6fb2:
        fld    dword ptr [esp + 0x2c]
        pop    esi
        add    esp, 0x24
        ret    4
L_6fbd:
        fld    dword ptr [g_0076d598]
        pop    esi
        add    esp, 0x24
        ret    4
    }
}
