/*
 * FUN_00691e89 (extent 0x691e89-0x692255) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00691e89(void)
{
    __asm {
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
        mov    edi, 0x79903c
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x79903c
        mov    ebx, ebp
        sub    ebx, 0x79903c
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_1eeb
        cmp    edi, edx
        je    L_1edf
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_1ee1
L_1edf:
        xor    eax, eax
L_1ee1:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_1eeb:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x79903c
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x79903c
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
        mov    edi, 0x799048
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x799048
        mov    ebx, ebp
        sub    ebx, 0x799048
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_1f7b
        cmp    edi, edx
        je    L_1f6f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_1f71
L_1f6f:
        xor    eax, eax
L_1f71:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_1f7b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x799048
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x799048
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
        mov    edi, 0x799054
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x799054
        mov    ebx, ebp
        sub    ebx, 0x799054
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_200b
        cmp    edi, edx
        je    L_1fff
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_2001
L_1fff:
        xor    eax, eax
L_2001:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_200b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x799054
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x799054
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
        mov    edi, 0x79905c
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x79905c
        mov    ebx, ebp
        sub    ebx, 0x79905c
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_209b
        cmp    edi, edx
        je    L_208f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_2091
L_208f:
        xor    eax, eax
L_2091:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_209b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x79905c
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x79905c
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
        mov    edi, 0x799068
        repne scasb
        not    ecx
        dec    ecx
        mov    ebp, ecx
        add    ebp, 0x799068
        mov    ebx, ebp
        sub    ebx, 0x799068
        lea    edi, [ebx + 1]
        cmp    edi, -2
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], edx
        ja    L_212b
        cmp    edi, edx
        je    L_211f
        push    edi
        call    FUN_004084d0
        add    esp, 4
        jmp    L_2121
L_211f:
        xor    eax, eax
L_2121:
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        add    eax, edi
        mov    dword ptr [esi + 8], eax
L_212b:
        mov    edi, dword ptr [esi]
        push    ebx
        push    0x799068
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        sub    edi, 0x799068
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_2179
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2179:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_2199
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2199:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_21b9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_21b9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_21d9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_21d9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_21f9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_21f9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799070
        je    L_2219
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2219:
        mov    eax, esi
        pop    esi
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    bl, byte ptr [esp + 0xc]
        mov    edx, 1
        cmp    bl, dl
        mov    dword ptr [ecx], eax
        pop    ebx
        jne    L_2249
        or    eax, edx
        mov    dword ptr [ecx], eax
L_2249:
        cmp    byte ptr [esp + 0xc], dl
        jne    L_2252
        or    dword ptr [ecx], 2
L_2252:
        ret    0xc
    }
}
