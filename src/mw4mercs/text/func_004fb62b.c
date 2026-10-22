/*
 * FUN_004fb62b (extent 0x4fb62b-0x4fb70c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_004fb590(void);
extern void __cdecl FUN_004fb680(void);

__declspec(naked) void FUN_004fb62b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x1c]
        fdivr    dword ptr [g_0076d064]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        lea    edx, [esp + 8]
        push    edx
        mov    ecx, esi
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [esp + 0xc]
        fld    st(0)
        fmul    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x14]
        call    FUN_004fb590
        pop    esi
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [ecx + 0x180]
        fadd    dword ptr [eax]
        mov    edx, dword ptr [esp + 8]
        push    edx
        push    eax
        fstp    dword ptr [ecx + 0x180]
        fld    dword ptr [eax + 4]
        fadd    dword ptr [ecx + 0x184]
        fstp    dword ptr [ecx + 0x184]
        fld    dword ptr [eax + 8]
        fadd    dword ptr [ecx + 0x188]
        fstp    dword ptr [ecx + 0x188]
        call    FUN_004fb590
        ret    8
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x1c]
        fdivr    dword ptr [g_0076d064]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        lea    edx, [esp + 8]
        push    edx
        mov    ecx, esi
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [esp + 0xc]
        fld    st(0)
        fmul    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x14]
        call    FUN_004fb680
        pop    esi
        add    esp, 0xc
        ret    8
    }
}
