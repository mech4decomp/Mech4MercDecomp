/*
 * FUN_00415cad (extent 0x415cad-0x415cbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415470(void);

__declspec(naked) void FUN_00415cad(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_00415470
        ret    4
    }
}
