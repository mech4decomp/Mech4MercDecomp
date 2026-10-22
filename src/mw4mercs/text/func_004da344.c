/*
 * FUN_004da344 (extent 0x4da344-0x4da3c1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004da344(void)
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
        nop    
        nop    
        nop    
        nop    
        or    dword ptr [ecx + 0x10], 0x400000
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x158]
        test    eax, eax
        jne    L_a37c
        mov    eax, 1
        mov    dword ptr [ecx + 0x158], eax
        mov    byte ptr [ecx + 0xc8], al
        ret    
L_a37c:
        cmp    eax, 2
        jne    L_a393
        mov    dword ptr [ecx + 0x158], 3
        mov    byte ptr [ecx + 0xc8], 1
        ret    
L_a393:
        cmp    eax, 0x20
        jne    L_a3aa
        mov    dword ptr [ecx + 0x158], 0x31
        mov    byte ptr [ecx + 0xc8], 1
        ret    
L_a3aa:
        cmp    eax, 0xe
        jne    L_a3b9
        mov    dword ptr [ecx + 0x158], 0xf
L_a3b9:
        mov    byte ptr [ecx + 0xc8], 1
        ret    
    }
}
