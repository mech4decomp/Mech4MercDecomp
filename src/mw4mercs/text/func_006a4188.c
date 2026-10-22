/*
 * FUN_006a4188 (extent 0x6a4188-0x6a433a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077de8c;
extern float  g_00799d40;
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a4ae0(void);
extern void __cdecl FUN_006a5220(void);

__declspec(naked) void FUN_006a4188(void)
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
        mov    al, byte ptr [ecx + 0x1c]
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
        sub    esp, 0x54
        push    esi
        mov    esi, dword ptr [esp + 0x5c]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0xc]
        lea    ecx, [edi + 0xc]
        push    esi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        je    L_4303
        push    0x40800000
        push    esi
        call    FUN_006a4ae0
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_41eb
        mov    dword ptr [edi + 8], 1
        jmp    L_421c
L_41eb:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        test    al, al
        jne    L_421c
        push    0x44160000
        push    esi
        call    FUN_006a5220
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_4215
        mov    byte ptr [edi + 0x1c], 1
L_4215:
        mov    dword ptr [edi + 8], 0
L_421c:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        jne    L_42cd
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0xac]
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [esp + 8], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0xc], ecx
        mov    edx, dword ptr [eax + 0x2c]
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    dword ptr [eax + 0xac]
        fld    dword ptr [eax + 8]
        fld    dword ptr [eax + 0x18]
        mov    edx, dword ptr [esi]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [eax + 0x28]
        push    0
        fstp    dword ptr [esp + 0x20]
        push    0
        fmul    dword ptr [g_0077de8c]
        push    1
        fld    dword ptr [esp + 0x24]
        lea    eax, [esp + 0x14]
        fmul    dword ptr [g_0077de8c]
        push    eax
        mov    ecx, esi
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_0077de8c]
        fstp    dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [edx + 4]
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        add    esp, 0x54
        ret    4
L_42cd:
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xac]
        mov    ecx, dword ptr [eax + 0xc]
        mov    dword ptr [esp + 0x20], ecx
        mov    edx, dword ptr [eax + 0x1c]
        push    0
        mov    dword ptr [esp + 0x28], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [esi]
        push    0
        mov    dword ptr [esp + 0x30], eax
        push    0
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 4]
L_4303:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        add    esp, 0x54
        ret    4
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
        mov    esi, ecx
        call    FUN_006a22a0
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        mov    byte ptr [esi + 0xc], al
        mov    dword ptr [esi], 0x799dfc
        mov    eax, esi
        pop    esi
        ret    
    }
}
