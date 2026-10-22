/*
 * FUN_00566c6f (extent 0x566c6f-0x566c7f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00566c6f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        and    eax, 0xfffff
        sub    eax, 0xf00000
        ret    
    }
}
