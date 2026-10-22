/*
 * FUN_006a4053 (extent 0x6a4053-0x6a415c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d584;
extern float  g_00799d40;
extern void __cdecl FUN_005fbb00(void);
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a2400(void);
extern void __cdecl FUN_006a4da0(void);

__declspec(naked) void FUN_006a4053(void)
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
        sub    esp, 0xc
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xd4]
        test    al, al
        je    L_4123
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb8]
        push    0
        push    0x41a00000
        push    esi
        call    FUN_006a4da0
        fsubr    dword ptr [g_0076d064]
        add    esp, 0xc
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 1
        jne    L_40e7
        mov    eax, dword ptr [esi]
        push    0
        push    0x41a00000
        mov    ecx, esi
        call    dword ptr [eax + 0xd8]
        fmul    dword ptr [g_0076d584]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00663900
        mov    edx, dword ptr [esi]
        add    esp, 0xc
        push    0x3e800000
        mov    ecx, esi
        call    dword ptr [edx + 0xbc]
        fld    dword ptr [g_0076d064]
        pop    esi
        add    esp, 0xc
        ret    4
L_40e7:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        cmp    al, 1
        jne    L_4106
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fld    dword ptr [g_0076d064]
        pop    esi
        add    esp, 0xc
        ret    4
L_4106:
        push    edi
        mov    edi, dword ptr [esi]
        push    0
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edi + 0x3c]
        mov    ecx, eax
        call    FUN_005fbb00
        push    eax
        mov    ecx, esi
        call    dword ptr [edi + 0x24]
        pop    edi
L_4123:
        fld    dword ptr [g_0076d064]
        pop    esi
        add    esp, 0xc
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_006a22a0
        push    0x3f800000
        push    1
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esi + 8], 0
        call    FUN_006a2400
        mov    byte ptr [esi + 0x1c], 0
        mov    dword ptr [esi], 0x799df0
        mov    eax, esi
        pop    esi
        ret    
    }
}
