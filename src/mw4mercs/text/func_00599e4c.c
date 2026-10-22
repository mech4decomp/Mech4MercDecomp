/*
 * FUN_00599e4c (extent 0x599e4c-0x599f94) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007f1fe8;
extern int    g_007f2548;
extern int    g_007f255c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005ed900(void);

__declspec(naked) void FUN_00599e4c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x2c]
        mov    edx, dword ptr [eax + 0x3c]
        fsub    dword ptr [ecx + 0x218]
        add    eax, 0x20
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fld    dword ptr [esp + 4]
        fsub    dword ptr [ecx + 0x21c]
        mov    dword ptr [esp + 8], eax
        fld    dword ptr [esp + 8]
        fsub    dword ptr [ecx + 0x220]
        fst    dword ptr [esp + 8]
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
        fcom    dword ptr [ecx + 0x258]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9ef6
        fld    dword ptr [g_0076d064]
        mov    edx, dword ptr [esp + 0x10]
        fsub    dword ptr [ecx + 0x25c]
        push    edx
        fxch    st(1)
        fsub    dword ptr [ecx + 0x258]
        fmulp st(1), st(0)
        fld    dword ptr [ecx + 0x224]
        fsub    dword ptr [ecx + 0x258]
        fdivp st(1), st(0)
        fsubr    dword ptr [g_0076d064]
        fmul    dword ptr [ecx + 0x228]
        fstp    dword ptr [ecx + 0x228]
        call    FUN_005ed900
        add    esp, 0xc
        ret    4
L_9ef6:
        mov    edx, dword ptr [esp + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edx
        call    FUN_005ed900
        add    esp, 0xc
        ret    4
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9f88
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x599fd0
        push    0
        push    0
        push    ecx
        push    0x783510
        push    0x4d0
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f1fe8], esi
        pop    esi
        ret    
L_9f88:
        mov    dword ptr [g_007f1fe8], 0
        pop    esi
        ret    
    }
}
