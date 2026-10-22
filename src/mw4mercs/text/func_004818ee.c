/*
 * FUN_004818ee (extent 0x4818ee-0x481957) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004818ee(void)
{
    __asm {
        nop    
        nop    
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
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x8c]
        test    ecx, ecx
        je    L_191c
        dec    dword ptr [ecx + 8]
        jne    L_191c
        test    ecx, ecx
        je    L_191c
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_191c:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        mov    dword ptr [esi + 0x8c], eax
        jne    L_1932
        and    dword ptr [esi + 0x78], 0xffffffbf
        pop    esi
        ret    4
L_1932:
        inc    dword ptr [eax + 8]
        or    dword ptr [esi + 0x78], 0x40
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        mov    eax, 4
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
        mov    eax, dword ptr [ecx + 0x8c]
        ret    
    }
}
