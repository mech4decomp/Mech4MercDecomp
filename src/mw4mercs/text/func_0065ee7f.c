/*
 * FUN_0065ee7f (extent 0x65ee7f-0x660104) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_00661e70(void);
extern void __cdecl FUN_006a4320(void);

__declspec(naked) void FUN_0065ee7f(void)
{
    __asm {
        nop    
        mov    eax, 0x7d1
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795124
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795124
        mov    ebx, ebp
        sub    ebx, 0x795124
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_eeeb
        cmp    edi, edx
        je    L_eedf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_eee1
L_eedf:
        xor    eax, eax
L_eee1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_eeeb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795124
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795124
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d2
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795134
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795134
        mov    ebx, ebp
        sub    ebx, 0x795134
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_efcb
        cmp    edi, edx
        je    L_efbf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_efc1
L_efbf:
        xor    eax, eax
L_efc1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_efcb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795134
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795134
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d3
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795138
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795138
        mov    ebx, ebp
        sub    ebx, 0x795138
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f0ab
        cmp    edi, edx
        je    L_f09f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f0a1
L_f09f:
        xor    eax, eax
L_f0a1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f0ab:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795138
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795138
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d4
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795140
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795140
        mov    ebx, ebp
        sub    ebx, 0x795140
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f18b
        cmp    edi, edx
        je    L_f17f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f181
L_f17f:
        xor    eax, eax
L_f181:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f18b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795140
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795140
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d5
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795148
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795148
        mov    ebx, ebp
        sub    ebx, 0x795148
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f26b
        cmp    edi, edx
        je    L_f25f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f261
L_f25f:
        xor    eax, eax
L_f261:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f26b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795148
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795148
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d6
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795154
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795154
        mov    ebx, ebp
        sub    ebx, 0x795154
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f34b
        cmp    edi, edx
        je    L_f33f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f341
L_f33f:
        xor    eax, eax
L_f341:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f34b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795154
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795154
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d7
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x79515c
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x79515c
        mov    ebx, ebp
        sub    ebx, 0x79515c
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f42b
        cmp    edi, edx
        je    L_f41f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f421
L_f41f:
        xor    eax, eax
L_f421:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f42b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x79515c
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x79515c
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d8
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795164
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795164
        mov    ebx, ebp
        sub    ebx, 0x795164
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f50b
        cmp    edi, edx
        je    L_f4ff
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f501
L_f4ff:
        xor    eax, eax
L_f501:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f50b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795164
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795164
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7da
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x79516c
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x79516c
        mov    ebx, ebp
        sub    ebx, 0x79516c
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f5eb
        cmp    edi, edx
        je    L_f5df
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f5e1
L_f5df:
        xor    eax, eax
L_f5e1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f5eb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x79516c
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x79516c
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7d9
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795174
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795174
        mov    ebx, ebp
        sub    ebx, 0x795174
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f6cb
        cmp    edi, edx
        je    L_f6bf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f6c1
L_f6bf:
        xor    eax, eax
L_f6c1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f6cb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795174
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795174
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7db
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795188
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795188
        mov    ebx, ebp
        sub    ebx, 0x795188
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f7ab
        cmp    edi, edx
        je    L_f79f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f7a1
L_f79f:
        xor    eax, eax
L_f7a1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f7ab:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795188
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795188
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7dc
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x795198
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x795198
        mov    ebx, ebp
        sub    ebx, 0x795198
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f88b
        cmp    edi, edx
        je    L_f87f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f881
L_f87f:
        xor    eax, eax
L_f881:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f88b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x795198
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x795198
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    al, 1
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
        mov    eax, 0x7dd
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951a0
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951a0
        mov    ebx, ebp
        sub    ebx, 0x7951a0
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_f97b
        cmp    edi, edx
        je    L_f96f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_f971
L_f96f:
        xor    eax, eax
L_f971:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_f97b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951a0
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951a0
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7de
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951b0
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951b0
        mov    ebx, ebp
        sub    ebx, 0x7951b0
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_fa5b
        cmp    edi, edx
        je    L_fa4f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_fa51
L_fa4f:
        xor    eax, eax
L_fa51:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_fa5b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951b0
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951b0
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7df
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951c0
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951c0
        mov    ebx, ebp
        sub    ebx, 0x7951c0
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_fb3b
        cmp    edi, edx
        je    L_fb2f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_fb31
L_fb2f:
        xor    eax, eax
L_fb31:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_fb3b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951c0
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951c0
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7e0
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951c8
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951c8
        mov    ebx, ebp
        sub    ebx, 0x7951c8
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_fc1b
        cmp    edi, edx
        je    L_fc0f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_fc11
L_fc0f:
        xor    eax, eax
L_fc11:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_fc1b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951c8
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951c8
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7e1
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7831c8
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7831c8
        mov    ebx, ebp
        sub    ebx, 0x7831c8
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_fcfb
        cmp    edi, edx
        je    L_fcef
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_fcf1
L_fcef:
        xor    eax, eax
L_fcf1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_fcfb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7831c8
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7831c8
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7e2
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951d4
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951d4
        mov    ebx, ebp
        sub    ebx, 0x7951d4
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_fddb
        cmp    edi, edx
        je    L_fdcf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_fdd1
L_fdcf:
        xor    eax, eax
L_fdd1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_fddb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951d4
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951d4
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7e3
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951e4
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951e4
        mov    ebx, ebp
        sub    ebx, 0x7951e4
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_febb
        cmp    edi, edx
        je    L_feaf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_feb1
L_feaf:
        xor    eax, eax
L_feb1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_febb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951e4
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951e4
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        mov    eax, 0x7e4
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x7951f0
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x7951f0
        mov    ebx, ebp
        sub    ebx, 0x7951f0
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_ff9b
        cmp    edi, edx
        je    L_ff8f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_ff91
L_ff8f:
        xor    eax, eax
L_ff91:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_ff9b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x7951f0
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x7951f0
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
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
        push    esi
        mov    esi, ecx
        call    FUN_00661da0
        lea    ecx, [esi + 0x24]
        call    FUN_006a4320
        mov    dword ptr [esi], 0x7951f8
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x7e5
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
        mov    al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        xor    edx, edx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    dword ptr [esi], edx
        or    ecx, 0xffffffff
        mov    byte ptr [esi + 8], al
        xor    eax, eax
        mov    edi, 0x79521c
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x79521c
        mov    ebx, ebp
        sub    ebx, 0x79521c
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_009b
        cmp    edi, edx
        je    L_008f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_0091
L_008f:
        xor    eax, eax
L_0091:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_009b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x79521c
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x79521c
        lea    eax, [edi + ebp]
        pop    edi
        mov    dword ptr [esi + 4], eax
        mov    byte ptr [eax], 0
        mov    eax, esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        add    ecx, 0x24
        jmp    dword ptr [eax + 8]
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00661e70
        mov    eax, dword ptr [esi + 0x24]
        lea    ecx, [esi + 0x24]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x28]
        ret    
    }
}
