/*
 * FUN_005e784a (extent 0x5e784a-0x5e787e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005e7880(void);

__declspec(naked) void FUN_005e784a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
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
        call    FUN_005e7880
        test    byte ptr [esp + 8], 1
        je    L_7878
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_7878:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
