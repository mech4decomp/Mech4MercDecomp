/*
 * FUN_0072ef20 (extent 0x72ef20-0x72ef4c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0072f6c0(void);
extern void __cdecl FUN_0072f740(void);

__declspec(naked) void FUN_0072ef20(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_0072f6c0
        ret    8
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
        mov    ecx, dword ptr [esp + 4]
        call    FUN_0072f740
        ret    4
    }
}
