/*
 * FUN_0074df50 (extent 0x74df50-0x74df8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0074df50(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        dec    eax
        cmp    eax, 3
        ja    L_df81
        jmp    dword ptr [eax*4 + 0x74df8c]
        mov    eax, 0x7a22d8
        ret    4
        mov    eax, 0x7abed8
        ret    4
        mov    eax, 0x7a22d0
        ret    4
        mov    eax, 0x7abed0
        ret    4
L_df81:
        mov    eax, 0x79e7f8
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0074DF8C (5 relocated pointers)
        __emit 0x61
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0x69
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0x71
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0x79
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // jump-table data @ 0x0074DFE4 (0 relocated pointers)
    }
}
