/*
 * FUN_00416a22 (extent 0x416a22-0x416a8b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00416a22(void)
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
        mov    ecx, dword ptr [ecx + 0xc]
        xor    eax, eax
        test    ecx, ecx
        je    L_6a41
L_6a39:
        mov    ecx, dword ptr [ecx + 0x10]
        inc    eax
        test    ecx, ecx
        jne    L_6a39
L_6a41:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xc]
        xor    edx, edx
        test    eax, eax
        je    L_6a69
        mov    ecx, dword ptr [esp + 4]
L_6a5d:
        cmp    edx, ecx
        je    L_6a6e
        mov    eax, dword ptr [eax + 0x10]
        inc    edx
        test    eax, eax
        jne    L_6a5d
L_6a69:
        xor    eax, eax
        ret    4
L_6a6e:
        mov    eax, dword ptr [eax + 0xc]
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
        mov    edx, dword ptr [ecx + 0xc]
        xor    eax, eax
        test    edx, edx
        sete    al
        ret    
    }
}
