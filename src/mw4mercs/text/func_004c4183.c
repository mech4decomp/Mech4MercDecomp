/*
 * FUN_004c4183 (extent 0x4c4183-0x4c41ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_004c4183(void)
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
        xor    al, al
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
        xor    eax, eax
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
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_41c8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_41c8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
