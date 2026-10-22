/*
 * FUN_0048829a (extent 0x48829a-0x48834b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0048829a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        push    esi
        push    edi
        mov    dword ptr [esp + 0xc], ecx
        je    L_82f3
        jle    L_82d0
        mov    esi, dword ptr [esp + 0x18]
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        mov    edi, ebx
L_82bd:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 0x18]
        add    esi, 4
        dec    edi
        jne    L_82bd
        mov    ecx, dword ptr [esp + 0x10]
        pop    ebp
L_82d0:
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x1c]
        mov    edi, edx
        test    edi, edi
        jle    L_82f3
        mov    esi, dword ptr [ecx + 0x14]
L_82de:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [ecx]
        push    3
        push    ebx
        push    edx
        call    dword ptr [eax + 0x38]
        add    esi, 4
        dec    edi
        jne    L_82de
L_82f3:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x1c]
        xor    dl, dl
        mov    byte ptr [esp + 3], dl
        test    eax, eax
        jle    L_8345
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [ecx + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        mov    ebx, eax
L_8321:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    edi
        push    ebp
        call    dword ptr [eax + 0x5c]
        test    al, al
        je    L_8333
        mov    byte ptr [esp + 0x13], 1
L_8333:
        add    esi, 4
        dec    ebx
        jne    L_8321
        mov    al, byte ptr [esp + 0x13]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
L_8345:
        mov    al, dl
        pop    ecx
        ret    8
    }
}
