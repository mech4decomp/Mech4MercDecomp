/*
 * FUN_006f73da (extent 0x6f73da-0x6f7464) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_006f73da(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x41]
        ret    
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x42], al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x42]
        ret    
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
        mov    edx, dword ptr [esp + 8]
        cmp    eax, edx
        jbe    L_7421
        xor    al, al
        ret    8
L_7421:
        mov    dword ptr [ecx + 0x20], eax
        mov    dword ptr [ecx + 0x24], edx
        mov    al, 1
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x20]
        ret    
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
        mov    eax, dword ptr [ecx + 0x24]
        ret    
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x1e], al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x1e]
        ret    
    }
}
