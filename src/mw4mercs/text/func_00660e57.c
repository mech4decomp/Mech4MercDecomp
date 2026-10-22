/*
 * FUN_00660e57 (extent 0x660e57-0x660e98) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_006a22e0(void);

__declspec(naked) void FUN_00660e57(void)
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
        mov    esi, ecx
        lea    ecx, [esi + 0x24]
        call    FUN_006a22e0
        mov    ecx, esi
        call    FUN_00661e50
        test    byte ptr [esp + 8], 1
        je    L_0e92
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0e92:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
