/*
 * FUN_0074dfa0 (extent 0x74dfa0-0x74dfe4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0074dfa0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        dec    eax
        cmp    eax, 4
        ja    L_dfd9
        jmp    dword ptr [eax*4 + 0x74dfe4]
        mov    eax, 0x7abf10
        ret    4
        mov    eax, 0x7abf08
        ret    4
        mov    eax, 0x7abefc
        ret    4
        mov    eax, 0x7abeec
        ret    4
        mov    eax, 0x7abee0
        ret    4
L_dfd9:
        mov    eax, 0x79e7f8
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0074DFE4 (7 relocated pointers)
        __emit 0xB1
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0xB9
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0xC1
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0xC9
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0xD1
        __emit 0xDF
        __emit 0x74
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
