/*
 * FUN_006e0d4a (extent 0x6e0d4a-0x6e0e07) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_006e0d4a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [ecx + 4]
        push    ebx
        push    ebp
        push    esi
        xor    ebp, ebp
        test    eax, eax
        push    edi
        mov    dword ptr [esp + 0x10], eax
        jle    L_0db8
        mov    ecx, dword ptr [ecx + 0x110]
        mov    ebx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x14], ecx
        mov    edi, ecx
L_0d74:
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    esi, ebx
L_0d7f:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_0da3
        test    cl, cl
        je    L_0d9f
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_0da3
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_0d7f
L_0d9f:
        xor    eax, eax
        jmp    L_0da8
L_0da3:
        sbb    eax, eax
        sbb    eax, -1
L_0da8:
        test    eax, eax
        je    L_0dc4
        mov    eax, dword ptr [esp + 0x10]
        inc    ebp
        add    edi, 4
        cmp    ebp, eax
        jl    L_0d74
L_0db8:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 8
        ret    4
L_0dc4:
        mov    eax, dword ptr [esp + 0x14]
        mov    eax, dword ptr [eax + ebp*4]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
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
        mov    edx, dword ptr [ecx + 4]
        push    esi
        xor    eax, eax
        test    edx, edx
        jle    L_0e00
        mov    ecx, dword ptr [ecx + 0x110]
        mov    esi, dword ptr [esp + 8]
L_0df4:
        cmp    esi, dword ptr [ecx]
        je    L_0e03
        inc    eax
        add    ecx, 4
        cmp    eax, edx
        jl    L_0df4
L_0e00:
        or    eax, 0xffffffff
L_0e03:
        pop    esi
        ret    4
    }
}
