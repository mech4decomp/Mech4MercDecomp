/*
 * FUN_0074de35 (extent 0x74de35-0x74de8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0074de35(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        and    eax, 0x1d0074de
        fidiv    word ptr [eax + eax + 5]
        fidiv    word ptr [eax + eax + 0xd]
        fidiv    word ptr [eax + eax + 0x15]
        fidiv    word ptr [eax + eax - 0x70]
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        dec    eax
        cmp    eax, 3
        ja    L_de81
        jmp    dword ptr [eax*4 + 0x74de8c]
        mov    eax, 0x7abeac
        ret    4
        mov    eax, 0x7abea4
        ret    4
        mov    eax, 0x7abe98
        ret    4
        mov    eax, 0x7abe88
        ret    4
L_de81:
        mov    eax, 0x79e7f8
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0074DE8C (0 relocated pointers)
    }
}
