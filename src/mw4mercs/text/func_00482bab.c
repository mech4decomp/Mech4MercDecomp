/*
 * FUN_00482bab (extent 0x482bab-0x482bf9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00482bab(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x9c], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x10], edx
        mov    dword ptr [ecx + 0x14], eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    esi
        mov    dword ptr [ecx + 0xa0], edx
        mov    edx, dword ptr [ecx]
        push    eax
        mov    dword ptr [ecx + 0x9c], eax
        call    dword ptr [edx + 4]
        pop    esi
        ret    0x10
    }
}
