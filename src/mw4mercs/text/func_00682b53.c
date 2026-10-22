/*
 * FUN_00682b53 (extent 0x682b53-0x682d11) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f84;
extern int    g_007f22bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005c1b40(void);
extern void __cdecl FUN_005c58b0(void);
extern void __cdecl FUN_005c7ed0(void);
extern void __cdecl FUN_005c9900(void);
extern void __cdecl FUN_005cadc0(void);
extern void __cdecl FUN_005ef8e0(void);
extern void __cdecl FUN_00665ce0(void);
extern void __cdecl FUN_005c4bd0(void);
extern void __cdecl FUN_005c4f70(void);
extern void __cdecl FUN_005c59b0(void);

__declspec(naked) void FUN_00682b53(void)
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
        mov    eax, dword ptr [ecx]
        push    esi
        mov    esi, dword ptr [g_007f1f84]
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    esi
        call    FUN_00415230
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c58b0
        ret    4
        mov    eax, dword ptr [g_007f22bc]
        push    eax
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c1b40
        ret    4
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [eax + 0x170]
        mov    eax, dword ptr [ecx + 0x30]
        ret    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        call    FUN_005c7ed0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005cadc0
        ret    4
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005c9900
        ret    4
        mov    ecx, dword ptr [ecx + 4]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x1d8]
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
        mov    eax, dword ptr [ecx + 4]
        mov    edx, dword ptr [eax + 0x604]
        mov    ecx, dword ptr [eax + 0x608]
        add    eax, 0x604
        sub    ecx, edx
        sar    ecx, 2
        mov    edx, 1
        cmp    edx, ecx
        sbb    eax, eax
        neg    eax
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
        mov    ecx, dword ptr [ecx + 4]
        mov    eax, dword ptr [ecx]
        jmp    dword ptr [eax + 0x1d4]
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_005c59b0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_005c4bd0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_005c4f70
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 4]
        mov    eax, dword ptr [esi + 0x170]
        push    eax
        call    FUN_00665ce0
        fsub    dword ptr [esi + 0x69c]
        add    esp, 4
        pop    esi
        fabs    
        ret    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        mov    edx, dword ptr [ecx + 0x3dc]
        mov    eax, dword ptr [esp + 4]
        add    ecx, 0x3dc
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
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
        mov    eax, dword ptr [ecx + 4]
        fld    dword ptr [eax + 0x3e8]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [eax + 0x3f8]
L_2cfb:
        test    esi, esi
        je    L_2d0f
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_2d0f
        call    FUN_005ef8e0
        jmp    L_2cfb
L_2d0f:
        pop    esi
        ret    
    }
}
