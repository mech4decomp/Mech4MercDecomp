/*
 * FUN_00609d63 (extent 0x609d63-0x609d9e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00609da0(void);

__declspec(naked) void FUN_00609d63(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_00609da0
        test    byte ptr [esp + 8], 1
        je    L_9d98
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9d98:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
