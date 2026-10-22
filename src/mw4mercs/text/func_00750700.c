/*
 * FUN_00750700 (extent 0x750700-0x750764) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00750700(void)
{
    __asm {
        cmp    dword ptr [esp + 4], 0x7a3310
        mov    eax, 0x7ace68
        je    L_0714
        mov    eax, 0x79e7f8
L_0714:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [esp + 4], 0x7a3310
        jne    L_075a
        mov    eax, dword ptr [esp + 8]
        cmp    eax, 4
        ja    L_075a
        jmp    dword ptr [eax*4 + 0x750764]
        mov    eax, 0x7acea4
        ret    8
        mov    eax, 0x7ace98
        ret    8
        mov    eax, 0x7ace88
        ret    8
        mov    eax, 0x7ace80
        ret    8
L_075a:
        mov    eax, 0x79e7f8
        ret    8
        mov    edi, edi
        // jump-table data @ 0x00750764 (0 relocated pointers)
    }
}
