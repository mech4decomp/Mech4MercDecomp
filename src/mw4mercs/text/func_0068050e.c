/*
 * FUN_0068050e (extent 0x68050e-0x6805e4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d40(void);

__declspec(naked) void FUN_0068050e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        push    1
        lea    edi, [esi + 0x10]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        or    eax, 0xffffffff
        mov    dword ptr [edi], 0x798924
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [esi + 0x30], eax
        pop    edi
        mov    dword ptr [esi], 0x798920
        mov    dword ptr [esi + 0x24], ecx
        mov    dword ptr [esi + 0x28], edx
        mov    eax, esi
        pop    esi
        ret    8
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
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        lea    ebx, [edi + 0x10]
        push    ebx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [edi], 0x798920
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x798950
        call    FUN_00416d00
        mov    esi, eax
        test    esi, esi
        je    L_05c6
L_05a2:
        lea    ecx, [esp + 0xc]
        call    FUN_00416d40
        test    esi, esi
        je    L_05b7
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_05b7:
        lea    ecx, [esp + 0xc]
        call    FUN_00416d00
        mov    esi, eax
        test    esi, esi
        jne    L_05a2
L_05c6:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        mov    ecx, ebx
        call    FUN_004169c0
        mov    ecx, edi
        call    FUN_00415380
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    
    }
}
