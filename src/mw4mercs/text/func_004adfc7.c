/*
 * FUN_004adfc7 (extent 0x4adfc7-0x4ae0b8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_007704c4;
extern float  g_007b220c;

__declspec(naked) void FUN_004adfc7(void)
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
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        fsub    dword ptr [esp + 4]
        mov    dword ptr [ecx + 4], eax
        xor    edx, edx
        mov    dword ptr [ecx + 0xc], edx
        fst    dword ptr [ecx + 8]
        mov    dword ptr [ecx + 0x10], edx
        fadd    dword ptr [esp + 4]
        fsub    dword ptr [esp + 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_e00b
        mov    eax, 1
        ret    8
L_e00b:
        xor    eax, eax
        ret    8
        sub    esp, 8
        fld    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x14]
        mov    dword ptr [ecx + 8], edx
        fadd    st(0), st(0)
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x18]
        faddp st(1), st(0)
        fst    dword ptr [ecx + 0xc]
        fld    st(0)
        fmul    dword ptr [g_007704c4]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 4]
        fmul    dword ptr [g_0076d070]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    dword ptr [ecx + 0x10], eax
        mov    eax, dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 4], eax
        fadd    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x14]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_e0b0
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fadd    st(0), st(0)
        fadd    dword ptr [esp + 4]
        fadd    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x18]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_e0b0
        mov    eax, 1
        add    esp, 8
        ret    0x10
L_e0b0:
        xor    eax, eax
        add    esp, 8
        ret    0x10
    }
}
