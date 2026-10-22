/*
 * FUN_004ebc9b (extent 0x4ebc9b-0x4ebdd7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc7d0;
extern int    g_007dc7d4;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004ebde0(void);

__declspec(naked) void FUN_004ebc9b(void)
{
    __asm {
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
        mov    ecx, dword ptr [g_007dc7d4]
        call    FUN_00416110
        test    eax, eax
        je    L_bcec
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [g_007dc7d0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004ebde0
        ret    
L_bcec:
        xor    eax, eax
        ret    
        nop    
        sub    esp, 0x4c
        push    0x77471c
        lea    ecx, [esp + 8]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x54]
        mov    edx, dword ptr [eax]
        push    ecx
        push    edx
        lea    ecx, [esp + 8]
        call    FUN_004125e0
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004d2000
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        test    eax, eax
        je    L_bd3d
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bd3d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bd3d:
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_bd58
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bd58
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bd58:
        mov    eax, dword ptr [esp + 0x44]
        test    eax, eax
        je    L_bd68
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        ja    L_bd77
L_bd68:
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
        xor    eax, eax
        add    esp, 0x4c
        ret    
L_bd77:
        mov    ecx, dword ptr [g_007dc7d4]
        push    esi
        call    FUN_00416110
        test    eax, eax
        je    L_bdc5
        mov    ecx, dword ptr [esp + 0x68]
        mov    edx, dword ptr [esp + 0x64]
        push    ecx
        mov    ecx, dword ptr [esp + 0x64]
        push    edx
        mov    edx, dword ptr [esp + 0x64]
        push    ecx
        push    edx
        mov    edx, dword ptr [esp + 0x64]
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, dword ptr [g_007dc7d0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004ebde0
        lea    ecx, [esp + 0xc]
        mov    esi, eax
        call    FUN_004d21c0
        mov    eax, esi
        pop    esi
        add    esp, 0x4c
        ret    
L_bdc5:
        lea    ecx, [esp + 0xc]
        xor    esi, esi
        call    FUN_004d21c0
        mov    eax, esi
        pop    esi
        add    esp, 0x4c
        ret    
    }
}
