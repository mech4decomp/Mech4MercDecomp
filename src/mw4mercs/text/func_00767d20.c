/*
 * FUN_00767d20 (extent 0x767d20-0x767f35) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00767d20(void)
{
    __asm {
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 4]
        test    esi, esi
        push    edi
        je    L_7d48
        mov    edi, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [g_0076b2ac]
L_7d34:
        lea    eax, [esi + 8]
        push    edi
        push    eax
        call    ebx
        add    esp, 8
        test    eax, eax
        je    L_7d48
        mov    esi, dword ptr [esi]
        test    esi, esi
        jne    L_7d34
L_7d48:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 4]
        or    ebp, 0xffffffff
        test    edi, edi
        je    L_7d9b
        mov    eax, dword ptr [esp + 0x14]
L_7d62:
        inc    ebp
        mov    esi, eax
        lea    ecx, [edi + 8]
L_7d68:
        mov    bl, byte ptr [ecx]
        mov    dl, bl
        cmp    bl, byte ptr [esi]
        jne    L_7d8c
        test    dl, dl
        je    L_7d88
        mov    bl, byte ptr [ecx + 1]
        mov    dl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_7d8c
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_7d68
L_7d88:
        xor    ecx, ecx
        jmp    L_7d91
L_7d8c:
        sbb    ecx, ecx
        sbb    ecx, -1
L_7d91:
        test    ecx, ecx
        je    L_7da5
        mov    edi, dword ptr [edi]
        test    edi, edi
        jne    L_7d62
L_7d9b:
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        ret    4
L_7da5:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_7dc6
        mov    ecx, dword ptr [esp + 4]
L_7dbb:
        cmp    dword ptr [eax + 4], ecx
        je    L_7dc6
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_7dbb
L_7dc6:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 4]
        xor    ebp, ebp
        test    edi, edi
        mov    dword ptr [esp + 0x10], ecx
        je    L_7e55
        mov    ebx, dword ptr [esp + 0x18]
L_7de6:
        mov    esi, ebx
        lea    eax, [edi + 8]
L_7deb:
        mov    cl, byte ptr [eax]
        mov    dl, cl
        cmp    cl, byte ptr [esi]
        jne    L_7e0f
        test    dl, dl
        je    L_7e0b
        mov    cl, byte ptr [eax + 1]
        mov    dl, cl
        cmp    cl, byte ptr [esi + 1]
        jne    L_7e0f
        add    eax, 2
        add    esi, 2
        test    dl, dl
        jne    L_7deb
L_7e0b:
        xor    eax, eax
        jmp    L_7e14
L_7e0f:
        sbb    eax, eax
        sbb    eax, -1
L_7e14:
        test    eax, eax
        je    L_7e28
        mov    ebp, edi
        mov    edi, dword ptr [edi]
        test    edi, edi
        jne    L_7de6
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_7e28:
        test    edi, edi
        je    L_7e55
        test    ebp, ebp
        jne    L_7e3b
        mov    edx, dword ptr [edi]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 4], edx
        jmp    L_7e44
L_7e3b:
        mov    eax, dword ptr [edi]
        mov    dword ptr [ebp], eax
        mov    eax, dword ptr [esp + 0x10]
L_7e44:
        cmp    edi, dword ptr [eax + 8]
        jne    L_7e4c
        mov    dword ptr [eax + 8], ebp
L_7e4c:
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_7e55:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        mov    esi, dword ptr [eax + 4]
        mov    eax, esi
        test    eax, eax
        mov    dword ptr [esp + 8], 0
        je    L_7e82
L_7e78:
        inc    dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_7e78
L_7e82:
        mov    ebx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ebx]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x24]
        test    esi, esi
        je    L_7ebf
        push    ebp
        push    edi
L_7e9a:
        mov    ebp, dword ptr [ebx]
        lea    edx, [esi + 8]
        or    ecx, 0xffffffff
        mov    edi, edx
        xor    eax, eax
        repne scasb
        not    ecx
        push    ecx
        push    edx
        mov    ecx, ebx
        call    dword ptr [ebp + 0x24]
        mov    esi, dword ptr [esi]
        test    esi, esi
        jne    L_7e9a
        pop    edi
        pop    ebp
        pop    esi
        mov    eax, ebx
        pop    ebx
        pop    ecx
        ret    
L_7ebf:
        pop    esi
        mov    eax, ebx
        pop    ebx
        pop    ecx
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 8]
        mov    edx, eax
        dec    eax
        test    edx, edx
        mov    dword ptr [esp + 8], eax
        jle    L_7f31
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    edi
L_7ef8:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [ebx]
        mov    edi, eax
        push    0
        push    edi
        mov    ecx, ebx
        call    dword ptr [edx + 4]
        mov    edx, dword ptr [esi]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        mov    dword ptr [esp + 0x10], eax
        jg    L_7ef8
        pop    edi
        pop    ebx
        mov    eax, esi
        pop    esi
        ret    
L_7f31:
        mov    eax, esi
        pop    esi
        ret    
    }
}
