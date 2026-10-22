/*
 * FUN_006a02bd (extent 0x6a02bd-0x6a02dd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006a0410(void);

__declspec(naked) void FUN_006a02bd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, 0xfa2
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006a0410
        ret    8
    }
}
