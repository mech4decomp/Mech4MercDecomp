/*
 * FUN_007397a4 (extent 0x7397a4-0x739b68) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0e0;
extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b1d4;
extern int    g_0076b1fc;
extern int    g_0076b214;
extern int    g_008aac84;
extern int    g_008aac94;
extern int    g_008aacb8;
extern int    g_008aacc0;
extern void __cdecl FUN_007397d0(void);

__declspec(naked) void FUN_007397a4(void)
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
        mov    ecx, dword ptr [esp + 4]
        call    FUN_007397d0
        push    0
        call    dword ptr [g_0076b1d4]
        xor    eax, eax
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
        sub    esp, 0x88
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        push    1
        mov    dword ptr [esp + 0x1c], ebx
        mov    dword ptr [esp + 0x18], 0x10
        call    dword ptr [g_0076b214]
        push    eax
        call    dword ptr [g_0076b1fc]
L_97f7:
        mov    esi, dword ptr [ebx + 0x20]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        push    0
        push    0x64
        lea    edx, [esp + 0x44]
        push    edx
        push    esi
        mov    dword ptr [esp + 0x34], 1
        call    dword ptr [g_008aacc0]
        cmp    eax, 4
        jne    L_9b36
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, eax
        and    ecx, 0xf0000000
        cmp    ecx, 0x90000000
        jne    L_97f7
        shr    eax, 0x1a
        and    eax, 3
        cmp    eax, 3
        ja    L_97f7
        jmp    dword ptr [eax*4 + 0x739b68]
        mov    eax, dword ptr [ebx + 8]
        test    eax, eax
        je    L_9873
        call    dword ptr [g_0076b0e0]
        mov    edx, dword ptr [esp + 0x34]
        and    eax, 0x1fff
        or    eax, 0xfffca000
        shl    eax, 0xd
        and    edx, 0x1fff
        or    eax, edx
        jmp    L_9892
L_9873:
        call    dword ptr [g_0076b0e0]
        mov    ecx, dword ptr [esp + 0x34]
        and    eax, 0x1fff
        or    eax, 0xfffce000
        shl    eax, 0xd
        and    ecx, 0x1fff
        or    eax, ecx
L_9892:
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    dword ptr [esp + 0x14], eax
        lea    eax, [esp + 0x28]
        push    eax
        push    0
        push    4
        lea    ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    dword ptr [g_008aacb8]
        jmp    L_97f7
        mov    dword ptr [esp + 0x1c], 0
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        call    dword ptr [g_008aac94]
        mov    ebp, eax
        mov    dword ptr [esp + 0x20], ebp
        call    dword ptr [g_0076b0e0]
        lea    esi, [ebx + 0x30]
        push    esi
        mov    edi, eax
        call    dword ptr [g_0076b110]
        mov    ecx, dword ptr [ebx + 4]
        test    ecx, ecx
        je    L_9a2e
        mov    eax, ebp
        xor    edx, edx
        and    eax, 0xff
        div    dword ptr [ebx + 0x18]
        shl    edx, 5
        mov    esi, dword ptr [edx + ecx + 0x1c]
        test    esi, esi
        je    L_9a1f
L_9906:
        cmp    dword ptr [esi], ebp
        je    L_9920
        mov    esi, dword ptr [esi + 0x1c]
        test    esi, esi
        jne    L_9906
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b100]
        jmp    L_97f7
L_9920:
        mov    ecx, dword ptr [esi + 0xc]
        cmp    edi, ecx
        mov    ebp, dword ptr [esi + 4]
        mov    eax, edi
        jb    L_9930
        sub    eax, ecx
        jmp    L_9933
L_9930:
        sub    eax, ecx
        dec    eax
L_9933:
        cmp    eax, 0x7d0
        jbe    L_9942
        xor    eax, eax
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], eax
L_9942:
        mov    ecx, dword ptr [esp + 0x34]
        mov    eax, edi
        and    eax, 0x1fff
        and    ecx, 0x1fff
        cmp    eax, ecx
        jb    L_995b
        sub    eax, ecx
        jmp    L_9962
L_995b:
        sub    eax, ecx
        add    eax, 0x1fff
L_9962:
        mov    edx, eax
        mov    eax, dword ptr [esi + 8]
        inc    eax
        mov    ecx, eax
        mov    dword ptr [esi + 8], eax
        mov    eax, dword ptr [esi + 4]
        imul    eax, ecx
        add    eax, edx
        xor    edx, edx
        div    ecx
        cmp    ecx, 1
        jne    L_9986
        cmp    eax, ebp
        jbe    L_9986
        add    eax, ebp
        shr    eax, 1
L_9986:
        mov    ebp, dword ptr [esp + 0x1c]
        test    ebp, ebp
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 0xc], edi
        mov    dword ptr [esi + 0x18], 1
        je    L_99d6
        call    dword ptr [g_0076b0e0]
        cmp    eax, edi
        jb    L_99a9
        sub    eax, edi
        jmp    L_99ac
L_99a9:
        sub    eax, edi
        dec    eax
L_99ac:
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esi + 4]
        and    ecx, 0xffffe000
        shl    eax, 0xd
        add    ecx, eax
        and    ecx, 0x3ffe000
        and    edx, 0x1fff
        or    ecx, edx
        or    ecx, 0x98000000
        mov    dword ptr [esp + 0x10], ecx
L_99d6:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_99ec
        mov    ecx, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi + 4]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        call    eax
L_99ec:
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b100]
        test    ebp, ebp
        je    L_9a17
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [ebx + 0x20]
        lea    eax, [esp + 0x28]
        push    eax
        push    0
        push    4
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edx
        call    dword ptr [g_008aacb8]
L_9a17:
        test    esi, esi
        jne    L_97f7
L_9a1f:
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b100]
        jmp    L_97f7
L_9a2e:
        push    esi
        call    dword ptr [g_0076b100]
        jmp    L_97f7
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        call    dword ptr [g_008aac94]
        mov    ebp, eax
        call    dword ptr [g_0076b0e0]
        mov    edi, eax
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b110]
        mov    ecx, dword ptr [ebx + 4]
        xor    esi, esi
        cmp    ecx, esi
        je    L_9b27
        mov    eax, ebp
        xor    edx, edx
        and    eax, 0xff
        div    dword ptr [ebx + 0x18]
        shl    edx, 5
        mov    ecx, dword ptr [edx + ecx + 0x1c]
        cmp    ecx, esi
        je    L_9b27
L_9a81:
        cmp    dword ptr [ecx], ebp
        je    L_9a9b
        mov    ecx, dword ptr [ecx + 0x1c]
        cmp    ecx, esi
        jne    L_9a81
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b100]
        jmp    L_97f7
L_9a9b:
        mov    edx, dword ptr [ecx + 0xc]
        cmp    edi, edx
        mov    eax, edi
        jb    L_9aa8
        sub    eax, edx
        jmp    L_9aab
L_9aa8:
        sub    eax, edx
        dec    eax
L_9aab:
        cmp    eax, 0x7d0
        jbe    L_9ab8
        mov    dword ptr [ecx + 4], esi
        mov    dword ptr [ecx + 8], esi
L_9ab8:
        mov    edx, dword ptr [ecx + 8]
        add    edx, 2
        mov    dword ptr [ecx + 8], edx
        mov    eax, dword ptr [esp + 0x34]
        mov    ebx, edx
        mov    esi, eax
        shr    esi, 0xd
        mov    edx, edi
        and    edx, 0x1fff
        and    esi, 0x1fff
        cmp    edx, esi
        jb    L_9ae2
        sub    edx, esi
        jmp    L_9aea
L_9ae2:
        sub    edx, esi
        add    edx, 0x1fff
L_9aea:
        mov    esi, dword ptr [ecx + 4]
        imul    esi, ebx
        and    eax, 0x1fff
        add    edx, esi
        add    eax, edx
        xor    edx, edx
        div    ebx
        mov    dword ptr [ecx + 0xc], edi
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jne    L_9b11
        mov    dword ptr [ecx + 0x18], 2
L_9b11:
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_9b23
        mov    edx, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [ecx + 4]
        push    edx
        push    ecx
        push    ebp
        call    eax
L_9b23:
        mov    ebx, dword ptr [esp + 0x18]
L_9b27:
        lea    eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_0076b100]
        jmp    L_97f7
L_9b36:
        cmp    eax, -1
        jne    L_97f7
        call    dword ptr [g_008aac84]
        cmp    eax, 0x2746
        je    L_97f7
        cmp    eax, 0x2738
        je    L_97f7
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x88
        ret    
        mov    edi, edi
        // jump-table data @ 0x00739B68 (0 relocated pointers)
    }
}
