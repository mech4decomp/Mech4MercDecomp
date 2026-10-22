/*
 * FUN_0074e000 (extent 0x74e000-0x74e05d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0074e000(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        dec    eax
        je    L_e025
        dec    eax
        je    L_e01d
        dec    eax
        je    L_e015
        mov    eax, 0x79e7f8
        ret    4
L_e015:
        mov    eax, 0x7abee0
        ret    4
L_e01d:
        mov    eax, 0x7abf08
        ret    4
L_e025:
        mov    eax, 0x7abf10
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        dec    eax
        je    L_e055
        dec    eax
        je    L_e04d
        dec    eax
        je    L_e045
        mov    eax, 0x79e7f8
        ret    4
L_e045:
        mov    eax, 0x7abf08
        ret    4
L_e04d:
        mov    eax, 0x7abf10
        ret    4
L_e055:
        mov    eax, 0x7abf18
        ret    4
    }
}
