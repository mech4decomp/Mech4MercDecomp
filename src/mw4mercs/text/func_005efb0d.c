/*
 * FUN_005efb0d (extent 0x5efb0d-0x5efb80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005efb0d(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        /* jump table (0x5EFB10-0x5EFB27) + 8 nops, emitted raw */
        __emit 0xD1
        __emit 0xFA
        __emit 0x5E
        __emit 0x00
        __emit 0xDB
        __emit 0xFA
        __emit 0x5E
        __emit 0x00
        __emit 0xE5
        __emit 0xFA
        __emit 0x5E
        __emit 0x00
        __emit 0xEF
        __emit 0xFA
        __emit 0x5E
        __emit 0x00
        __emit 0xF9
        __emit 0xFA
        __emit 0x5E
        __emit 0x00
        __emit 0x03
        __emit 0xFB
        __emit 0x5E
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        dec    eax
        cmp    eax, 5
        ja    L_fb7a
        jmp    dword ptr [eax*4 + 0x5efb80]
        and    dword ptr [ecx + 0x1a0], 0xfffffffe
        ret    4
        and    dword ptr [ecx + 0x1a0], 0xfffffffd
        ret    4
        and    dword ptr [ecx + 0x1a0], 0xfffffffb
        ret    4
        and    dword ptr [ecx + 0x1a0], 0xfffffff7
        ret    4
        and    dword ptr [ecx + 0x1a0], 0xffffffef
        ret    4
        and    dword ptr [ecx + 0x1a0], 0xffffffdf
L_fb7a:
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005EFB80 (0 relocated pointers)
    }
}
