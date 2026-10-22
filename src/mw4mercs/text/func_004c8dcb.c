/*
 * FUN_004c8dcb (extent 0x4c8dcb-0x4c8e02) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004d5b70(void);

__declspec(naked) void FUN_004c8dcb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 4
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004d5b70
        ret    4
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
