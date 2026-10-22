/*
 * FUN_006f5cb0 (extent 0x6f5cb0-0x6f5d88) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_006f5cb0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        push    eax
        call    dword ptr [ebx + 0x10]
        mov    edx, dword ptr [ebx + 8]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 6]
        mov    esi, eax
        and    esi, 0xffff
        xor    eax, eax
        and    esi, ecx
        shl    esi, 4
        mov    edi, dword ptr [esi + edx]
        add    esi, edx
        cmp    edi, esi
        je    L_5d13
L_5cdf:
        test    dword ptr [edi + 0xc], 0x80000000
        jne    L_5cf8
        mov    edx, dword ptr [esp + 0x14]
        mov    ebp, dword ptr [edi + 8]
        push    edx
        push    ebp
        call    dword ptr [ebx + 0xc]
        test    al, al
        jne    L_5d07
L_5cf8:
        mov    edi, dword ptr [edi]
        cmp    edi, esi
        jne    L_5cdf
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    4
L_5d07:
        mov    ebx, dword ptr [ebx + 0x14]
        test    ebx, ebx
        je    L_5d11
        push    ebp
        call    ebx
L_5d11:
        mov    eax, ebp
L_5d13:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [eax]
        test    edi, edi
        je    L_5d75
        mov    edx, dword ptr [esp + 0x18]
        jne    L_5d38
        xor    eax, eax
        jmp    L_5d3d
L_5d38:
        mov    eax, edi
        mov    edi, dword ptr [edi + 4]
L_5d3d:
        mov    ebp, dword ptr [eax]
        mov    eax, dword ptr [ebp]
        mov    esi, edx
L_5d44:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_5d68
        test    cl, cl
        je    L_5d64
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_5d68
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_5d44
L_5d64:
        xor    eax, eax
        jmp    L_5d6d
L_5d68:
        sbb    eax, eax
        sbb    eax, -1
L_5d6d:
        test    eax, eax
        je    L_5d7e
        test    edi, edi
        jne    L_5d38
L_5d75:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    8
L_5d7e:
        mov    eax, dword ptr [ebp + 4]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
