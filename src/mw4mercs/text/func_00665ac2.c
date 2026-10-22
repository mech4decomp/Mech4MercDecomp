/*
 * FUN_00665ac2 (extent 0x665ac2-0x665bb3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004e7a90(void);
extern void __cdecl FUN_004e7bf0(void);

__declspec(naked) void FUN_00665ac2(void)
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
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x18]
        push    esi
        add    eax, 0x370
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00416bc0
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 4], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_5b12
        mov    esi, dword ptr [esp + 0x20]
L_5b00:
        cmp    dword ptr [eax + 0x34], esi
        je    L_5b25
        lea    ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_5b00
L_5b12:
        lea    ecx, [esp + 4]
        call    FUN_00416c60
        mov    eax, 2
        pop    esi
        add    esp, 0x14
        ret    
L_5b25:
        mov    ecx, eax
        call    FUN_004e7a90
        lea    ecx, [esp + 4]
        mov    esi, eax
        call    FUN_00416c60
        mov    eax, esi
        pop    esi
        add    esp, 0x14
        ret    
        nop    
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x18]
        push    esi
        add    eax, 0x370
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00416bc0
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 4], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_5b82
        mov    esi, dword ptr [esp + 0x20]
L_5b70:
        cmp    dword ptr [eax + 0x34], esi
        je    L_5b96
        lea    ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_5b70
L_5b82:
        lea    ecx, [esp + 4]
        call    FUN_00416c60
        fld    dword ptr [g_0076c5b0]
        pop    esi
        add    esp, 0x14
        ret    
L_5b96:
        mov    ecx, eax
        call    FUN_004e7bf0
        fstp    dword ptr [esp + 0x1c]
        lea    ecx, [esp + 4]
        call    FUN_00416c60
        fld    dword ptr [esp + 0x1c]
        pop    esi
        add    esp, 0x14
        ret    
    }
}
