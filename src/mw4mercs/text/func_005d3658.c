/*
 * FUN_005d3658 (extent 0x5d3658-0x5d3738) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005d3658(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x1c4]
        mov    ecx, dword ptr [esp + 0x28]
        mov    ebx, dword ptr [ecx + 0x14]
        mov    edi, dword ptr [esi + 0x360]
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        mov    dword ptr [esi + 0x364], ebx
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0xd8]
        fld    dword ptr [ecx + 0x8c]
        add    ecx, 0x80
        mov    ecx, dword ptr [ecx + 0x2c]
        fstp    dword ptr [esp + 0xc]
        mov    edx, ecx
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [esi + 0x35c]
        test    ecx, ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x10], 0
        je    L_3717
        mov    eax, dword ptr [eax + 0x50]
        cmp    eax, 9
        ja    L_3708
        jmp    dword ptr [eax*4 + 0x5d3738]
        mov    eax, 0x10
        jmp    L_370a
        mov    eax, 0x11
        jmp    L_370a
        mov    eax, 2
        jmp    L_370a
        mov    eax, 8
        jmp    L_370a
        mov    eax, 4
        jmp    L_370a
        mov    eax, 0x20
        jmp    L_370a
        mov    eax, 0x40
        jmp    L_370a
        mov    eax, 0x100
        jmp    L_370a
L_3708:
        xor    eax, eax
L_370a:
        mov    edx, dword ptr [ebx]
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x20]
L_3717:
        mov    edx, dword ptr [ebx]
        mov    edi, dword ptr [esi]
        mov    ecx, ebx
        call    dword ptr [edx + 0x34]
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp]
        call    dword ptr [edi + 0x140]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x18
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005D3738 (10 relocated pointers)
        __emit 0xD0
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xD7
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xDE
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xE5
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xEC
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xF3
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0xFA
        __emit 0x36
        __emit 0x5D
        __emit 0x00
        __emit 0x08
        __emit 0x37
        __emit 0x5D
        __emit 0x00
        __emit 0x08
        __emit 0x37
        __emit 0x5D
        __emit 0x00
        __emit 0x01
        __emit 0x37
        __emit 0x5D
        __emit 0x00
        // jump-table data @ 0x005D39AC (0 relocated pointers)
        // jump-table data @ 0x005D3C54 (0 relocated pointers)
    }
}
