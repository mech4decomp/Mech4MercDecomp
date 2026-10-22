/*
 * FUN_00740db0 (extent 0x740db0-0x740dcd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00740db0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        ret    4
    }
}
