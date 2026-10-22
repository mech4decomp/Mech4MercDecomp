/*
 * FUN_005d57c3 (extent 0x5d57c3-0x5d581a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005d57c3(void)
{
    __asm {
        nop    
        cmp    dword ptr [esi + 0x5d], edx
        add    byte ptr [ebx - 0x18ffa2aa], ah
        push    esi
        pop    ebp
        add    byte ptr [edi], ch
        push    edi
        pop    ebp
        add    byte ptr [ebp - 0x6fffa2a9], dl
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    1
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    1
        push    0x115
        lea    ecx, [esi + 0x3ec]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x41c], 1
        call    dword ptr [eax + 0x1bc]
        mov    eax, dword ptr [esi + 0x42c]
        test    eax, eax
        jne    L_5818
        mov    byte ptr [esi + 0x435], 1
L_5818:
        pop    esi
        ret    
    }
}
