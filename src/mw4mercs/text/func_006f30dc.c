/*
 * FUN_006f30dc (extent 0x6f30dc-0x6f31b6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_006f30dc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        add    ecx, 0x28
        call    FUN_004179b0
        ret    4
        mov    eax, dword ptr [esp + 4]
        lea    edx, [eax + 0x10]
        push    edx
        push    eax
        add    ecx, 0x14
        call    FUN_00416a90
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412570
        lea    ecx, [esp + 8]
        push    ecx
        lea    ecx, [esi + 0x14]
        call    FUN_00416b60
        mov    esi, eax
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_314b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_314b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_314b:
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        lea    edi, [esi + 0x10]
        push    0
        mov    ecx, edi
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov    dword ptr [edi], 0x79f68c
        push    1
        lea    edi, [esi + 0x24]
        push    0
        mov    ecx, edi
        call    FUN_00416990
        mov    dword ptr [edi], 0x79f6c4
        pop    edi
        mov    dword ptr [esi], 0x79f6b8
        mov    eax, esi
        pop    esi
        ret    
    }
}
