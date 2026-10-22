/*
 * FUN_006f2db2 (extent 0x6f2db2-0x6f2eb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;

__declspec(naked) void FUN_006f2db2(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        mov    eax, 0x848d7c
        jne    L_2dd3
        mov    eax, dword ptr [ecx + 0x134]
L_2dd3:
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
        nop    
        mov    eax, dword ptr [esp + 4]
        add    eax, -3
        cmp    eax, 0x13
        ja    L_2eab
        jmp    dword ptr [eax*4 + 0x6f2eb4]
        fld    dword ptr [ecx + 0x140]
        ret    4
        fld    dword ptr [ecx + 0x144]
        ret    4
        fld    dword ptr [ecx + 0x148]
        ret    4
        fld    dword ptr [ecx + 0x14c]
        ret    4
        fld    dword ptr [ecx + 0x150]
        ret    4
        fld    dword ptr [ecx + 0x154]
        ret    4
        fld    dword ptr [ecx + 0x164]
        ret    4
        fld    dword ptr [ecx + 0x168]
        ret    4
        fld    dword ptr [ecx + 0x16c]
        ret    4
        fld    dword ptr [ecx + 0x158]
        ret    4
        fld    dword ptr [ecx + 0x15c]
        ret    4
        fld    dword ptr [ecx + 0x160]
        ret    4
        fld    dword ptr [ecx + 0x170]
        ret    4
        fld    dword ptr [ecx + 0x174]
        ret    4
        fld    dword ptr [ecx + 0x178]
        ret    4
        fld    dword ptr [ecx + 0x17c]
        ret    4
        fld    dword ptr [ecx + 0x180]
        ret    4
        fld    dword ptr [ecx + 0x184]
        ret    4
        fld    dword ptr [ecx + 0x188]
        ret    4
        fld    dword ptr [ecx + 0x18c]
        ret    4
L_2eab:
        fld    dword ptr [g_0076c5b0]
        ret    4
        // jump-table data @ 0x006F2EB4 (0 relocated pointers)
    }
}
