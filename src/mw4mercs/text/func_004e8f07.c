/*
 * FUN_004e8f07 (extent 0x4e8f07-0x4e8fc5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa38;
extern int    g_007dc7a8;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004c43f0(void);
extern void __cdecl FUN_004c8a50(void);
extern void __cdecl FUN_004d1f10(void);

__declspec(naked) void FUN_004e8f07(void)
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
        mov    eax, dword ptr [g_007dc7a8]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004c43f0
        xor    edi, edi
        mov    dword ptr [esi + 0x158], edi
        mov    dword ptr [esi + 0x154], edi
        mov    dword ptr [esi + 0x160], edi
        mov    dword ptr [esi + 0x15c], edi
        mov    dword ptr [esi + 0x168], edi
        mov    dword ptr [esi + 0x164], edi
        mov    dword ptr [esi + 0x170], edi
        mov    dword ptr [esi + 0x16c], edi
        lea    ecx, [esi + 0x180]
        mov    dword ptr [esi + 0x14c], edi
        mov    dword ptr [esi + 0x178], edi
        mov    dword ptr [esi + 0x174], edi
        call    FUN_004d1f10
        lea    ecx, [esi + 0x1c4]
        call    FUN_004d1f10
        mov    ecx, dword ptr [g_007daa38]
        mov    dword ptr [esi], 0x7744f4
        mov    dword ptr [esi + 0x13c], 0x4e9800
        call    FUN_00416110
        mov    ebx, eax
        cmp    ebx, edi
        je    L_8fb7
        mov    ecx, ebx
        call    FUN_00491280
        mov    dword ptr [ebx + 0x18], edi
        mov    edi, ebx
L_8fb7:
        push    edi
        mov    ecx, esi
        call    FUN_004c8a50
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
    }
}
