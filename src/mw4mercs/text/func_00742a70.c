/*
 * FUN_00742a70 (extent 0x742a70-0x742aa4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00742a40(void);

__declspec(naked) void FUN_00742a70(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00742a40
        mov    ecx, 8
        sub    ecx, eax
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00742a40
        mov    eax, dword ptr [eax*4 + 0x7b7418]
        ret    4
    }
}
