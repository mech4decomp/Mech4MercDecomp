/*
 * FUN_004d8dd7 (extent 0x4d8dd7-0x4d8e04) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416a90(void);

__declspec(naked) void FUN_004d8dd7(void)
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
        mov    eax, dword ptr [esp + 4]
        lea    edx, [eax + 0x14]
        push    edx
        push    eax
        add    ecx, 0x10
        call    FUN_00416a90
        ret    4
    }
}
