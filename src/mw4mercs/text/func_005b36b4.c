/*
 * FUN_005b36b4 (extent 0x5b36b4-0x5b3802) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005b36b4(void)
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
        nop    
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
        nop    
        mov    byte ptr [ecx + 0x30a], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x1c4]
        mov    edx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [edx + 0xd8]
        mov    edx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [eax + 0x9c]
        fstp    dword ptr [esp + 0x14]
        add    eax, 0x80
        mov    eax, ecx
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ecx
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 0x364], edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x34]
        fstp    dword ptr [esi + 0x3b8]
        pop    edi
        mov    dword ptr [esi + 0x6a8], 0
        mov    dword ptr [esi + 0x6ac], 1
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x35c]
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
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
        mov    ecx, dword ptr [ecx + 0x35c]
        mov    eax, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 1
        jne    L_37d9
L_37c4:
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [edx + 0x168]
L_37d4:
        xor    al, al
        ret    4
L_37d9:
        cmp    eax, 2
        jne    L_37f3
        fild    dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [eax + 0x168]
        xor    al, al
        ret    4
L_37f3:
        cmp    eax, 0x13
        je    L_37c4
        cmp    eax, 9
        jne    L_37d4
        mov    al, 1
        ret    4
    }
}
