/*
 * FUN_0041b640 (extent 0x41b640-0x41b718) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041b570(void);
extern void __cdecl FUN_0041c380(void);

__declspec(naked) void FUN_0041b640(void)
{
    __asm {
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_0041b570
        mov    eax, dword ptr [esp + 0x18]
        lea    edx, [esp + 4]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_0041b320
        mov    eax, esi
        pop    esi
        add    esp, 0x10
        ret    0xc
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
        mov    esi, ecx
        fld    dword ptr [esi + 8]
        fld    dword ptr [esi + 4]
        fld    dword ptr [esi]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_b6ea
        fsubr    dword ptr [g_0076d064]
        fsqrt    
        fld    dword ptr [esi + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_b6dc
        fld    dword ptr [esi]
        fchs    
        fstp    dword ptr [esi]
        fld    dword ptr [esi + 4]
        fchs    
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esi + 8]
        fchs    
        fstp    dword ptr [esi + 8]
L_b6dc:
        mov    ecx, esi
        fstp    dword ptr [esi + 0xc]
        call    FUN_0041c380
        mov    eax, esi
        pop    esi
        ret    
L_b6ea:
        fsqrt    
        mov    ecx, esi
        mov    dword ptr [esi + 0xc], 0
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esi]
        fstp    dword ptr [esi]
        fld    st(0)
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
        call    FUN_0041c380
        mov    eax, esi
        pop    esi
        ret    
    }
}
