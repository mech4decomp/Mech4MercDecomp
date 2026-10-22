/*
 * FUN_0049a4ec (extent 0x49a4ec-0x49a50e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0049a4ec(void)
{
    __asm {
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
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_a50d
        push    eax
        call    FUN_004084e0
        pop    ecx
L_a50d:
        ret    
    }
}
