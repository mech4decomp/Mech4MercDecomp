/*
 * FUN_0074e6a8 (extent 0x74e6a8-0x74e71c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0074e6a8(void)
{
    __asm {
        and    dh, 0x74
        add    byte ptr [eax - 0x6fff8b1a], cl
        out    0x74, al
        add    byte ptr [eax - 0x6fff8b1a], bl
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        dec    eax
        cmp    eax, 7
        ja    L_e711
        jmp    dword ptr [eax*4 + 0x74e71c]
        mov    eax, 0x7ac290
        ret    4
        mov    eax, 0x7ac288
        ret    4
        mov    eax, 0x7ac280
        ret    4
        mov    eax, 0x7ac278
        ret    4
        mov    eax, 0x7ac270
        ret    4
        mov    eax, 0x7ac268
        ret    4
        mov    eax, 0x7ac260
        ret    4
        mov    eax, 0x7ac258
        ret    4
L_e711:
        mov    eax, 0x79e7f8
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0074E71C (0 relocated pointers)
    }
}
