/*
 * FUN_00753c81 (extent 0x753c81-0x753cbc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00753c81(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, eax
        and    ecx, 0xffff
        lea    edx, [ecx - 1]
        test    edx, ecx
        je    L_3cb9
L_3ca3:
        lea    ecx, [eax - 1]
        and    eax, ecx
        mov    ecx, eax
        and    ecx, 0xffff
        lea    edx, [ecx - 1]
        test    edx, ecx
        jne    L_3ca3
        shl    eax, 1
L_3cb9:
        ret    4
    }
}
