/*
 * FUN_005ecb84 (extent 0x5ecb84-0x5ecbc2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_005ecb84(void)
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
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_cbb8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_cbb8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        ret    
    }
}
