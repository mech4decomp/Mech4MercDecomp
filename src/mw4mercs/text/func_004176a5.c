/*
 * FUN_004176a5 (extent 0x4176a5-0x4176cc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415c70(void);

__declspec(naked) void FUN_004176a5(void)
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
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 0x10], edx
        ret    
    }
}
