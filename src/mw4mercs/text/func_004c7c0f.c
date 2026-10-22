/*
 * FUN_004c7c0f (extent 0x4c7c0f-0x4c7c66) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004c7c0f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 5
        and    eax, 0x1f
        lea    eax, [eax + eax*2]
        shl    eax, 2
        mov    edx, dword ptr [eax + 0x7b3b28]
        mov    dword ptr [ecx + 0x130], edx
        mov    edx, dword ptr [eax + 0x7b3b2c]
        mov    eax, dword ptr [eax + 0x7b3b30]
        mov    dword ptr [ecx + 0x134], edx
        mov    dword ptr [ecx + 0x138], eax
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
        mov    eax, 0x2f
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        or    eax, 0xffffffff
        ret    4
    }
}
