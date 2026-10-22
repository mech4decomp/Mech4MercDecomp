/*
 * FUN_005e671a (extent 0x5e671a-0x5e674e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005e67c0(void);

__declspec(naked) void FUN_005e671a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0xd
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
        call    FUN_005e67c0
        test    byte ptr [esp + 8], 1
        je    L_6748
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6748:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
