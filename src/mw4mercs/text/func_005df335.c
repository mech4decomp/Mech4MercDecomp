/*
 * FUN_005df335 (extent 0x5df335-0x5df36e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005df370(void);

__declspec(naked) void FUN_005df335(void)
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
        mov    eax, 0xf
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
        push    esi
        mov    esi, ecx
        call    FUN_005df370
        test    byte ptr [esp + 8], 1
        je    L_f368
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f368:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
