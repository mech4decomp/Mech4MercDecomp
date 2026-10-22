/*
 * FUN_00599c3a (extent 0x599c3a-0x599c7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00599c80(void);

__declspec(naked) void FUN_00599c3a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x168]
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
        mov    eax, 0xc
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
        call    FUN_00599c80
        test    byte ptr [esp + 8], 1
        je    L_9c78
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9c78:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
