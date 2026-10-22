/*
 * FUN_0072f065 (extent 0x72f065-0x72f081) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0072f780(void);

__declspec(naked) void FUN_0072f065(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_0072f780
        ret    8
    }
}
