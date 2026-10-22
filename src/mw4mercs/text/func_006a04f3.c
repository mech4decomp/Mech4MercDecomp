/*
 * FUN_006a04f3 (extent 0x6a04f3-0x6a0521) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006a0530(void);

__declspec(naked) void FUN_006a04f3(void)
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
        mov    edx, dword ptr [esp + 4]
        push    ecx
        mov    eax, esp
        mov    dword ptr [eax], edx
        call    FUN_006a0530
        ret    4
    }
}
