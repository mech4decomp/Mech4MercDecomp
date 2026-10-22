/*
 * FUN_005b878e (extent 0x5b878e-0x5b87be) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005b87c0(void);

__declspec(naked) void FUN_005b878e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, 5
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
        call    FUN_005b87c0
        test    byte ptr [esp + 8], 1
        je    L_87b8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_87b8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
