/*
 * FUN_004e6849 (extent 0x4e6849-0x4e68b0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004e6849(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        inc    eax
        cmp    eax, 0xb
        ja    L_68a9
        jmp    dword ptr [eax*4 + 0x4e68b0]
        mov    eax, 0x7741dc
        ret    
        mov    eax, 0x7741c8
        ret    
        mov    eax, 0x7741bc
        ret    
        mov    eax, 0x7741b4
        ret    
        mov    eax, 0x7741a8
        ret    
        mov    eax, 0x77419c
        ret    
        mov    eax, 0x774190
        ret    
        mov    eax, 0x774184
        ret    
        mov    eax, 0x774174
        ret    
        mov    eax, 0x77416c
        ret    
        mov    eax, 0x774160
        ret    
        mov    eax, 0x774154
        ret    
L_68a9:
        mov    eax, 0x772c5c
        ret    
        nop    
        // jump-table data @ 0x004E68B0 (12 relocated pointers)
        __emit 0x61
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x67
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x6D
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x73
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x79
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x7F
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x85
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x8B
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x91
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x97
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0x9D
        __emit 0x68
        __emit 0x4E
        __emit 0x00
        __emit 0xA3
        __emit 0x68
        __emit 0x4E
        __emit 0x00
    }
}
