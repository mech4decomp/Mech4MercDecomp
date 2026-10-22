/*
 * FUN_004f202b (extent 0x4f202b-0x4f20ba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004f202b(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dx, word ptr [ecx]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ax, word ptr [esi]
        cmp    dx, ax
        jne    L_20a7
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [ecx + 2]
        pop    edi
        jne    L_208d
        mov    edx, dword ptr [esi + 4]
        mov    ecx, dword ptr [ecx + 4]
        xor    eax, eax
        cmp    ecx, edx
        setg    al
        pop    esi
        ret    4
L_208d:
        cmp    dx, ax
        jne    L_20a7
        mov    dx, word ptr [ecx + 2]
        cmp    word ptr [esi + 2], dx
        pop    esi
        sbb    eax, eax
        neg    eax
        and    eax, 0xff
        ret    4
L_20a7:
        xor    ecx, ecx
        cmp    dx, ax
        setg    cl
        pop    esi
        mov    eax, ecx
        and    eax, 0xff
        ret    4
    }
}
