/*
 * FUN_004e86c7 (extent 0x4e86c7-0x4e87a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa38;
extern int    g_007dc790;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004c43f0(void);
extern void __cdecl FUN_004c8a50(void);

__declspec(naked) void FUN_004e86c7(void)
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
        mov    eax, dword ptr [g_007dc790]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004c43f0
        mov    ecx, dword ptr [g_007daa38]
        xor    ebx, ebx
        mov    dword ptr [esi + 0x154], ebx
        mov    dword ptr [esi + 0x158], ebx
        mov    dword ptr [esi + 0x15c], ebx
        mov    dword ptr [esi + 0x160], ebx
        mov    dword ptr [esi + 0x170], ebx
        mov    dword ptr [esi + 0x174], ebx
        mov    dword ptr [esi + 0x17c], ebx
        mov    dword ptr [esi + 0x180], ebx
        mov    dword ptr [esi], 0x77445c
        mov    dword ptr [esi + 0x13c], 0x4e8ad0
        call    FUN_00416110
        mov    edi, eax
        cmp    edi, ebx
        je    L_874f
        mov    ecx, edi
        call    FUN_00491280
        mov    dword ptr [edi + 0x18], ebx
        jmp    L_8751
L_874f:
        xor    edi, edi
L_8751:
        push    edi
        mov    ecx, esi
        call    FUN_004c8a50
        mov    eax, dword ptr [esp + 0x10]
        mov    cl, byte ptr [esp + 0x14]
        mov    dl, byte ptr [esp + 0x18]
        mov    dword ptr [esi + 0x164], eax
        pop    edi
        mov    dword ptr [esi + 0x14c], ebx
        mov    dword ptr [esi + 0x168], ebx
        mov    word ptr [esi + 0x16c], bx
        mov    byte ptr [esi + 0x178], bl
        mov    dword ptr [esi + 0x188], ebx
        mov    byte ptr [esi + 0x150], cl
        mov    byte ptr [esi + 0x151], dl
        mov    dword ptr [esi + 0x184], 0xffffffff
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0xc
    }
}
