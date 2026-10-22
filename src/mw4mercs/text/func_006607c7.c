/*
 * FUN_006607c7 (extent 0x6607c7-0x66082c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_006a22e0(void);

__declspec(naked) void FUN_006607c7(void)
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
        mov    al, 1
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
        push    esi
        push    edi
        mov    edi, ecx
        lea    esi, [edi + 0x24]
        lea    ecx, [esi + 0x30]
        call    FUN_006a22e0
        lea    ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea    ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea    ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov    ecx, esi
        call    FUN_006a22e0
        mov    ecx, edi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 1
        je    L_0825
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_0825:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    4
    }
}
