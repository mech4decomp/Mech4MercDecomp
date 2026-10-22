/*
 * FUN_00561837 (extent 0x561837-0x56196c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern void __cdecl FUN_0040c410(void);

__declspec(naked) void FUN_00561837(void)
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
        sub    esp, 0x24
        push    esi
        mov    esi, ecx
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1872
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 4]
L_1872:
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1891
        fld    dword ptr [esp + 8]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 8]
L_1891:
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        lea    eax, [esi + 0x20]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x24], edx
        call    FUN_0040c410
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_18cd
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x10]
L_18cd:
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_18ec
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x14]
L_18ec:
        mov    eax, dword ptr [esi + 8]
        dec    eax
        cmp    eax, 3
        pop    esi
        ja    L_191f
        jmp    dword ptr [eax*4 + 0x56196c]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d070]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x6C
__emit 0x24
__emit 0x00
        jmp    L_1923
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [esp + 4]
        fstp    dword ptr [esp + 0x1c]
L_191f:
        fld    dword ptr [esp + 0x18]
L_1923:
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        add    esp, 0x24
        ret    4
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d070]
        __emit 0xD8  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x6C
__emit 0x24
__emit 0x00
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [esp + 4]
        fstp    dword ptr [esp + 0x1c]
        jmp    L_1923
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fsub    dword ptr [esp + 0xc]
        jmp    L_1923
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0056196C (13 relocated pointers)
        __emit 0xFD
        __emit 0x18
        __emit 0x56
        __emit 0x00
        __emit 0x0D
        __emit 0x19
        __emit 0x56
        __emit 0x00
        __emit 0x3D
        __emit 0x19
        __emit 0x56
        __emit 0x00
        __emit 0x5F
        __emit 0x19
        __emit 0x56
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
