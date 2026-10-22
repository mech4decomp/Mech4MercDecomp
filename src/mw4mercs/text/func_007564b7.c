/*
 * FUN_007564b7 (extent 0x7564b7-0x75650f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_007564b7(void)
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
        sub    esp, 8
        push    esi
        push    edi
        lea    edx, [esp + 0xc]
        push    edx
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0xc]
        push    edx
        push    eax
        xor    edi, edi
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jne    L_6507
        mov    edx, dword ptr [esi + 0x84]
        mov    ecx, dword ptr [esp + 8]
        cmp    edx, ecx
        ja    L_64f7
        sub    ecx, edx
        pop    edi
        mov    eax, ecx
        pop    esi
        add    esp, 8
        ret    
L_64f7:
        mov    eax, dword ptr [esi + 0x8c]
        sub    eax, edx
        pop    edi
        add    eax, ecx
        pop    esi
        add    esp, 8
        ret    
L_6507:
        mov    eax, edi
        pop    edi
        pop    esi
        add    esp, 8
        ret    
    }
}
