/*
 * FUN_004f1f9e (extent 0x4f1f9e-0x4f205b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004f1f9e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_1fb7
        xor    eax, eax
        ret    8
L_1fb7:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_1fe6
        xor    eax, eax
        ret    8
L_1fe6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
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
        mov    dx, word ptr [eax]
        cmp    dx, word ptr [ecx]
        jne    L_2026
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [ecx + 2]
        jne    L_2026
        mov    eax, dword ptr [eax + 4]
        cmp    eax, dword ptr [ecx + 4]
        jne    L_2026
        mov    eax, 1
        ret    4
L_2026:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dx, word ptr [eax]
        cmp    dx, word ptr [ecx]
        jne    L_2053
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [ecx + 2]
        jne    L_2053
        mov    eax, dword ptr [eax + 4]
        cmp    eax, dword ptr [ecx + 4]
        jne    L_2053
        xor    eax, eax
        ret    4
L_2053:
        mov    eax, 1
        ret    4
    }
}
