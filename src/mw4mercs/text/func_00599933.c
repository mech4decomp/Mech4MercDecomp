/*
 * FUN_00599933 (extent 0x599933-0x59996e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00599970(void);

__declspec(naked) void FUN_00599933(void)
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
        mov    eax, 0x10
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
        call    FUN_00599970
        test    byte ptr [esp + 8], 1
        je    L_9968
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9968:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
