/*
 * FUN_0041d60e (extent 0x41d60e-0x41d7bd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d604;
extern float  g_0076d608;
extern void __cdecl FUN_0041d570(void);
extern void __cdecl FUN_0041d610(void);
extern void __cdecl FUN_0075db56(void);

__declspec(naked) void FUN_0041d60e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_d622
        fld    dword ptr [ecx + 0x2c]
        fdiv    dword ptr [ecx + 0x28]
        fchs    
        fstp    dword ptr [eax]
L_d622:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_d638
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [ecx + 0x28]
        fdivr    dword ptr [ecx + 0x2c]
        fstp    dword ptr [eax]
L_d638:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_d655
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [g_0076d064]
        fmul    dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx]
        fdivp st(1), st(0)
        fstp    dword ptr [eax]
L_d655:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_d66c
        fld    dword ptr [ecx + 0x2c]
        fmul    dword ptr [ecx + 8]
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx]
        fdivp st(1), st(0)
        fstp    dword ptr [eax]
L_d66c:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_d68a
        fld    dword ptr [ecx + 0x18]
        fsub    dword ptr [g_0076d064]
        fmul    dword ptr [ecx + 0x2c]
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 0x14]
        fdivp st(1), st(0)
        fstp    dword ptr [eax]
L_d68a:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_d6a2
        fld    dword ptr [ecx + 0x2c]
        fmul    dword ptr [ecx + 0x18]
        fld    dword ptr [ecx + 0x28]
        fmul    dword ptr [ecx + 0x14]
        fdivp st(1), st(0)
        fstp    dword ptr [eax]
L_d6a2:
        ret    0x18
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
        mov    eax, dword ptr [esp + 0xc]
        fld    dword ptr [eax]
        push    ecx
        fmul    dword ptr [g_0076d070]
        fptan    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fmul    dword ptr [esp + 8]
        fst    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        fst    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fchs    
        __emit 0xD9  // fstp dword ptr [esp] (no disp8; ref uses D9 1C 24)
__emit 0x1C
__emit 0x24
        push    edx
        fld    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        fchs    
        __emit 0xD9  // fstp dword ptr [esp] (no disp8; ref uses D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    FUN_0041d570
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        lea    eax, [esp + 0x10]
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    edx, [esp + 0x14]
        push    edx
        call    FUN_0041d610
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_d734
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    dword ptr [eax], ecx
L_d734:
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_d742
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
L_d742:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_d75a
        fld    dword ptr [esp + 4]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x74
__emit 0x24
__emit 0x00
        fld1    
        fpatan    
        fadd    st(0), st(0)
        fstp    dword ptr [eax]
L_d75a:
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_d76c
        fld    dword ptr [esp + 0xc]
        fdiv    dword ptr [esp + 4]
        fstp    dword ptr [eax]
L_d76c:
        add    esp, 0x18
        ret    0x10
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
        fld    dword ptr [esp + 4]
        fld    dword ptr [g_0076d608]
        call    FUN_0075db56
        fcom    dword ptr [g_0076d604]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d7a3
        fsub    dword ptr [g_0076d608]
        ret    
L_d7a3:
        fld    dword ptr [g_0076d604]
        fchs    
        fld    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_d7bc
        fadd    dword ptr [g_0076d608]
L_d7bc:
        ret    
        nop    
        nop    
    }
}
