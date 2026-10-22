/*
 * FUN_0054a2b3 (extent 0x54a2b3-0x54a2fe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0054ae70(void);

__declspec(naked) void FUN_0054a2b3(void)
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x4b1], al
        mov    byte ptr [ecx + 0x17c], al
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0054ae70
        test    byte ptr [esp + 8], 1
        je    L_a2f8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a2f8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
