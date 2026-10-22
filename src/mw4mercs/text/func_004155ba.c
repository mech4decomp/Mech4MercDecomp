/*
 * FUN_004155ba (extent 0x4155ba-0x4155e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415ce0(void);

__declspec(naked) void FUN_004155ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_00415ce0
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x10], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x14], edx
        mov    dword ptr [ecx + 0x18], eax
        ret    0xc
    }
}
