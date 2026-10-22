/*
 * FUN_00700b89 (extent 0x700b89-0x700ec4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_0076b2d0;
extern int    g_0076b2f0;
extern int    g_0076b300;
extern int    g_0076b3e8;
extern int    g_0076b420;
extern int    g_0076b4f8;
extern int    g_00856860;
extern int    g_00858a2c;
extern char   g_008aaac0;
extern int    g_008aaaf4;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_007008e0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00700b89(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    esi
        je    L_0bbb
        mov    esi, dword ptr [esp + 8]
        push    0xff
        push    eax
        lea    eax, [esi + 0x18]
        push    eax
        call    dword ptr [g_0076b3e8]
        add    esp, 0xc
        mov    word ptr [esi + 0x216], 0
        jmp    L_0bc5
L_0bbb:
        mov    esi, dword ptr [esp + 8]
        mov    word ptr [esi + 0x18], 0
L_0bc5:
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        lea    ecx, [esi + 0x229]
        push    0x772f4c
        push    ecx
        mov    dword ptr [esi + 0x14], eax
        call    dword ptr [g_0076b420]
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_007008e0
        pop    esi
        ret    0x1c
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
        cmp    dword ptr [g_008aaaf4], 5
        jne    L_0c77
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        je    L_0c77
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        lea    edi, [ecx + 1]
        lea    eax, [edi + edi]
        push    eax
        call    dword ptr [g_0076b294]
        push    edi
        mov    esi, eax
        push    ebx
        push    esi
        call    dword ptr [g_0076b3e8]
        mov    ecx, dword ptr [g_00856860]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [eax]
        add    esp, 0x10
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        push    esi
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0x10
L_0c77:
        mov    al, 1
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [g_008aaaf4], 5
        jne    L_0ca5
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        je    L_0ca5
        mov    eax, dword ptr [g_00856860]
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
L_0ca5:
        mov    al, 1
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    eax
        lea    edi, [esi + 0x229]
        push    0x772f4c
        push    edi
        call    dword ptr [g_0076b420]
        mov    ecx, dword ptr [esi]
        add    esp, 0xc
        push    edi
        push    0x79fae0
        push    0
        push    esi
        call    dword ptr [ecx + 0x20]
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x160
        cmp    dword ptr [g_008aaaf4], 5
        push    ebx
        push    edi
        jne    L_0eba
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        je    L_0eba
        mov    eax, dword ptr [g_00856860]
        test    eax, eax
        je    L_0eba
        mov    eax, dword ptr [ebp + 0x10]
        push    esi
        mov    esi, 0x79fa6c
L_0d2b:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_0d53
        test    cl, cl
        je    L_0d4f
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_0d53
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_0d2b
L_0d4f:
        xor    eax, eax
        jmp    L_0d58
L_0d53:
        sbb    eax, eax
        sbb    eax, -1
L_0d58:
        test    eax, eax
        jne    L_0e24
        mov    edi, dword ptr [ebp + 0x14]
        mov    ebx, dword ptr [g_0076b300]
        xor    esi, esi
L_0d6b:
        lea    eax, [ebp - 0x160]
        push    eax
        push    0x100
        push    esi
        push    0
        call    dword ptr [g_00858a2c]
        lea    ecx, [ebp - 0x160]
        push    edi
        push    ecx
        call    ebx
        add    esp, 0x18
        test    eax, eax
        mov    al, byte ptr [ebp - 0x160]
        je    L_0d9e
        test    al, al
        je    L_0da2
        inc    esi
        jmp    L_0d6b
L_0d9e:
        test    al, al
        jne    L_0de2
L_0da2:
        mov    ebx, dword ptr [g_0076b2f0]
        xor    esi, esi
L_0daa:
        lea    edx, [ebp - 0x160]
        push    edx
        push    0x100
        push    esi
        push    0
        call    dword ptr [g_00858a2c]
        lea    eax, [ebp - 0x160]
        push    edi
        push    eax
        call    ebx
        add    esp, 0x18
        test    eax, eax
        mov    al, byte ptr [ebp - 0x160]
        je    L_0ddd
        test    al, al
        je    L_0de1
        inc    esi
        jmp    L_0daa
L_0ddd:
        test    al, al
        jne    L_0de2
L_0de1:
        dec    esi
L_0de2:
        push    esi
        lea    ecx, [ebp - 0x20]
        push    0x772f4c
        push    ecx
        call    dword ptr [g_0076b4f8]
        push    0x20
        lea    edx, [ebp - 0x20]
        push    edx
        lea    eax, [ebp - 0x60]
        push    eax
        call    dword ptr [g_0076b3e8]
        mov    ecx, dword ptr [g_00856860]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ebx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [eax]
        add    esp, 0x18
        lea    ecx, [ebp - 0x60]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    ebx
        push    eax
        call    dword ptr [edx + 0x24]
        mov    edi, eax
        jmp    L_0e71
L_0e24:
        mov    ebx, dword ptr [ebp + 0x14]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        lea    edi, [ecx + 1]
        lea    edx, [edi + edi]
        push    edx
        call    dword ptr [g_0076b294]
        push    edi
        mov    esi, eax
        push    ebx
        push    esi
        call    dword ptr [g_0076b3e8]
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [g_00856860]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ebx, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [eax]
        add    esp, 0x10
        push    esi
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x24]
        push    esi
        mov    edi, eax
        call    dword ptr [g_0076b2d0]
        add    esp, 4
L_0e71:
        test    edi, edi
        pop    esi
        jge    L_0eba
        cmp    edi, 0xc1120c01
        jne    L_0e88
        pop    edi
        xor    al, al
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_0e88:
        mov    eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jne    L_0e94
        mov    eax, 0x76b9a0
L_0e94:
        push    eax
        push    ebx
        push    edi
        call    FUN_0073e160
        push    eax
        push    edi
        push    0x7a1164
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_0eb0
        int 3    
L_0eb0:
        pop    edi
        xor    al, al
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_0eba:
        pop    edi
        mov    al, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
    }
}
