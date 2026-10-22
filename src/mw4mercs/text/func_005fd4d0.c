/*
 * FUN_005fd4d0 (extent 0x5fd4d0-0x5fd507) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005fd4d0(void)
{
    __asm {
        mov    ecx, dword ptr [ecx + 0x280]
        test    ecx, ecx
        je    L_d4f6
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    dword ptr [eax + 0x8c]
L_d4f6:
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x280]
        ret    
    }
}
