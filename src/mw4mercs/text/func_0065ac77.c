/*
 * FUN_0065ac77 (extent 0x65ac77-0x65acae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0065acb0(void);

__declspec(naked) void FUN_0065ac77(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_0065acb0
        test    byte ptr [esp + 8], 1
        je    L_aca8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_aca8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
