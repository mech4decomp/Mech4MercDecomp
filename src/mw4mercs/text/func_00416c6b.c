/*
 * FUN_00416c6b (extent 0x416c6b-0x416c8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415c70(void);

__declspec(naked) void FUN_00416c6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_00415c70
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
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0x10], edx
        ret    
    }
}
