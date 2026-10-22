/*
 * FUN_006a1958 (extent 0x6a1958-0x6a198e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006a1990(void);

__declspec(naked) void FUN_006a1958(void)
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
        call    FUN_006a1990
        test    byte ptr [esp + 8], 1
        je    L_1988
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1988:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
