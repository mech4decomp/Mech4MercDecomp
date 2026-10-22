/*
 * FUN_0048b88a (extent 0x48b88a-0x48b8b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048b88a(void)
{
    __asm {
        nop    
        nop    
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
        je    L_b8b4
        mov    ecx, dword ptr [eax - 4]
        add    eax, -4
        push    eax
        dec    ecx
        call    FUN_004084e0
        pop    ecx
L_b8b4:
        ret    
    }
}
