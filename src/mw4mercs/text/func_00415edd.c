/*
 * FUN_00415edd (extent 0x415edd-0x41611d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern int    g_007b8c18;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415f60(void);

__declspec(naked) void FUN_00415edd(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    ecx
        mov    edx, dword ptr [g_007b8c18]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], edx
L_5eef:
        mov    ecx, dword ptr [edx + 4]
        xor    edi, edi
        xor    ebx, ebx
        test    ecx, ecx
        je    L_5f16
        mov    ebp, dword ptr [edx + 0xc]
L_5efd:
        mov    esi, dword ptr [ecx + 4]
        xor    edx, edx
        mov    eax, esi
        div    ebp
        mov    ecx, dword ptr [ecx]
        lea    edi, [edi + esi + 8]
        add    ebx, eax
        test    ecx, ecx
        jne    L_5efd
        mov    edx, dword ptr [esp + 0x10]
L_5f16:
        mov    eax, dword ptr [edx + 0x1c]
        test    eax, eax
        je    L_5f23
L_5f1d:
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_5f1d
L_5f23:
        mov    edx, dword ptr [edx + 0x24]
        cmp    edx, dword ptr [g_007b8c18]
        mov    dword ptr [esp + 0x10], edx
        jne    L_5eef
        pop    edi
        pop    esi
        pop    ebp
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
        push    esi
        mov    esi, dword ptr [g_007b8c18]
L_5f47:
        mov    ecx, esi
        call    FUN_00415f60
        mov    esi, dword ptr [esi + 0x24]
        cmp    esi, dword ptr [g_007b8c18]
        jne    L_5f47
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x1c]
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 0xc], esi
        je    L_6071
L_5f78:
        mov    eax, dword ptr [eax]
        inc    ebp
        test    eax, eax
        jne    L_5f78
        test    ebp, ebp
        mov    dword ptr [esp + 8], ebp
        je    L_6071
        mov    eax, dword ptr [esi + 0x20]
        push    ebx
        push    edi
        push    eax
        lea    ecx, [ebp*4 + 4]
        push    ecx
        call    FUN_004084c0
        mov    edi, eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    ecx, dword ptr [eax]
        lea    ebx, [ebp - 1]
        add    esp, 8
        mov    dword ptr [edi + ebp*4], 0xffb1ffb1
        mov    dword ptr [edi + ebx*4], eax
        dec    ebx
        test    ecx, ecx
        je    L_5fe2
L_5fba:
        mov    esi, ebx
        mov    eax, dword ptr [edi + esi*4 + 4]
        dec    ebx
        cmp    eax, ecx
        jae    L_5fd5
        lea    edx, [edi + esi*4]
L_5fc8:
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [edx + 8]
        add    edx, 4
        inc    esi
        cmp    eax, ecx
        jb    L_5fc8
L_5fd5:
        mov    dword ptr [edi + esi*4], ecx
        mov    ecx, dword ptr [ecx]
        test    ecx, ecx
        jne    L_5fba
        mov    esi, dword ptr [esp + 0x14]
L_5fe2:
        mov    eax, dword ptr [esi + 4]
        mov    ebx, dword ptr [eax]
        test    ebx, ebx
        mov    dword ptr [esp + 0x18], eax
        je    L_602d
L_5fef:
        lea    ecx, [ebp - 1]
        xor    esi, esi
        test    ecx, ecx
        lea    ebp, [ebx + 8]
        jl    L_6015
L_5ffb:
        lea    eax, [ecx + esi]
        sar    eax, 1
        mov    edx, dword ptr [edi + eax*4]
        cmp    edx, ebp
        je    L_6077
        jbe    L_600e
        lea    ecx, [eax - 1]
        jmp    L_6011
L_600e:
        lea    esi, [eax + 1]
L_6011:
        cmp    esi, ecx
        jle    L_5ffb
L_6015:
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [edx], ebx
        mov    dword ptr [esp + 0x18], ebx
        mov    ebx, dword ptr [ebx]
L_6021:
        test    ebx, ebx
        mov    ebp, dword ptr [esp + 0x10]
        jne    L_5fef
        mov    esi, dword ptr [esp + 0x14]
L_602d:
        xor    ecx, ecx
        test    ebp, ebp
        jbe    L_6041
        mov    edx, edi
L_6035:
        mov    eax, dword ptr [edx]
        add    edx, 4
        dec    ebp
        mov    dword ptr [eax], ecx
        mov    ecx, eax
        jne    L_6035
L_6041:
        push    edi
        mov    dword ptr [esi + 0x1c], ecx
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esi + 0x14]
        add    esp, 4
        lea    eax, [ecx + 8]
        cmp    edx, eax
        pop    edi
        mov    dword ptr [ecx], 0
        pop    ebx
        je    L_6071
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esi + 8], ecx
        add    ecx, eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi + 0x18], ecx
L_6071:
        pop    esi
        pop    ebp
        add    esp, 0x14
        ret    
L_6077:
        cmp    esi, ecx
        jg    L_6015
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edx + 0xc]
        lea    esi, [edi + eax*4]
        mov    eax, dword ptr [ebx]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x20], eax
        je    L_6098
        mov    eax, dword ptr [ebx + 4]
        jmp    L_609e
L_6098:
        mov    eax, dword ptr [edx + 0x18]
        sub    eax, dword ptr [edx + 0x14]
L_609e:
        xor    edx, edx
        div    ecx
        mov    edx, dword ptr [esp + 0x10]
        mov    ebp, eax
        lea    esi, [esi + ebp*4 - 4]
        mov    eax, esi
        sub    eax, edi
        sar    eax, 2
        cmp    eax, edx
        jae    L_6015
        lea    edx, [ebp - 1]
        imul    edx, ecx
        mov    ecx, dword ptr [esi]
        lea    eax, [edx + ebx + 8]
        cmp    ecx, eax
        jne    L_6015
        push    ebx
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esi, 4
        lea    eax, [ecx*4]
        sub    eax, esi
        add    eax, edi
        sub    ecx, ebp
        add    esp, 4
        test    eax, eax
        mov    dword ptr [esp + 0x10], ecx
        jle    L_6104
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
L_6104:
        mov    ebx, dword ptr [esp + 0x20]
        jmp    L_6021
        nop    
        nop    
        nop    
    mov    eax, dword ptr [ecx + 0x1c]
    test    eax, eax
    je    L_end
    mov    edx, dword ptr [eax]
    mov    dword ptr [ecx + 0x1c], edx
    ret    
L_end:
    }
}
