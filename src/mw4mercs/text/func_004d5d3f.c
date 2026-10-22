/*
 * FUN_004d5d3f (extent 0x4d5d3f-0x4d5f31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004d5d40(void);

__declspec(naked) void FUN_004d5d3f(void)
{
    __asm {
        nop    
        sub    esp, 0x10
        mov    al, byte ptr [esp + 0x18]
        test    al, al
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, ecx
        push    edi
        mov    dword ptr [esp + 0x18], esi
        jne    L_5dc1
        mov    edi, dword ptr [esi + 4]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        mov    eax, dword ptr [esi + 0x14]
        not    ecx
        dec    ecx
        mov    edx, ecx
        mov    ebx, 1
        add    edx, 9
        cmp    eax, ebx
        jl    L_5db6
        cmp    ebx, eax
        mov    dword ptr [esp + 0x24], 0xc
        jg    L_5d90
L_5d83:
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esp + 0x24]
        lea    eax, [eax + ecx - 0xc]
        jmp    L_5d92
L_5d90:
        xor    eax, eax
L_5d92:
        mov    edi, dword ptr [eax + 4]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        mov    eax, dword ptr [esi + 0x14]
        not    ecx
        dec    ecx
        lea    edx, [edx + ecx + 1]
        mov    ecx, dword ptr [esp + 0x24]
        inc    ebx
        add    ecx, 0xc
        cmp    ebx, eax
        mov    dword ptr [esp + 0x24], ecx
        jle    L_5d83
L_5db6:
        lea    edi, [edx + 3]
        and    edi, 0xfffffffc
        jmp    L_5ea5
L_5dc1:
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x20], eax
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ebp]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x2c], edx
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi + 4]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        mov    eax, dword ptr [ebp]
        not    ecx
        dec    ecx
        mov    esi, ecx
        inc    esi
        push    esi
        push    edx
        mov    ecx, ebp
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esp + 0x14]
        mov    ebx, 1
        cmp    eax, ebx
        mov    dword ptr [esp + 0x10], esi
        jl    L_5e77
        mov    dword ptr [esp + 0x24], 0xc
L_5e24:
        cmp    ebx, dword ptr [esp + 0x1c]
        jg    L_5e3b
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [esp + 0x24]
        lea    eax, [edx + eax - 0xc]
        jmp    L_5e3d
L_5e3b:
        xor    eax, eax
L_5e3d:
        mov    edx, dword ptr [eax + 4]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        mov    eax, dword ptr [ebp]
        not    ecx
        dec    ecx
        mov    esi, ecx
        inc    esi
        push    esi
        push    edx
        mov    ecx, ebp
        call    dword ptr [eax + 0x24]
        mov    edi, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x14]
        add    edi, esi
        inc    ebx
        add    ecx, 0xc
        cmp    ebx, eax
        mov    dword ptr [esp + 0x10], edi
        mov    dword ptr [esp + 0x24], ecx
        jle    L_5e24
L_5e77:
        test    byte ptr [esp + 0x10], 3
        je    L_5e9f
L_5e7e:
        mov    edx, dword ptr [ebp]
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, ebp
        mov    byte ptr [esp + 0x2c], 0
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        test    al, 3
        mov    dword ptr [esp + 0x10], eax
        jne    L_5e7e
L_5e9f:
        mov    esi, dword ptr [esp + 0x18]
        xor    edi, edi
L_5ea5:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        je    L_5ec2
L_5eac:
        mov    ecx, dword ptr [esp + 0x28]
        push    ecx
        push    ebp
        mov    ecx, esi
        call    FUN_004d5d40
        mov    esi, dword ptr [esi + 0xc]
        add    edi, eax
        test    esi, esi
        jne    L_5eac
L_5ec2:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    8
        nop    
        nop    
        push    ecx
        push    ebx
        mov    ebx, dword ptr [ecx + 0x14]
        push    ebp
        push    esi
        xor    esi, esi
        test    ebx, ebx
        push    edi
        jle    L_5f05
        mov    ecx, dword ptr [ecx + 0x18]
        mov    ebp, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], ecx
        lea    edi, [ecx + 4]
L_5eec:
        mov    eax, dword ptr [edi]
        push    eax
        push    ebp
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        je    L_5f0f
        inc    esi
        add    edi, 0xc
        cmp    esi, ebx
        jl    L_5eec
L_5f05:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    4
L_5f0f:
        mov    edx, dword ptr [esp + 0x10]
        pop    edi
        lea    ecx, [esi + esi*2]
        pop    esi
        pop    ebp
        lea    eax, [edx + ecx*4]
        pop    ebx
        pop    ecx
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
        nop    
        nop    
        ret    
    }
}
