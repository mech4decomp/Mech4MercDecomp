/*
 * FUN_100435c0 (719 B) -- __cdecl.
 * strftime-style format-string expander: parses %-directives in param_1,
 * writes formatted output through param_3/param_4, dispatches on the format
 * char (d/H/M/A/a/'/h/m/s/t/y/Y...), and calls FUN_100430f2 for the
 * multi-char directives.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1007581c;
extern unsigned char *g_10051984;
extern void __cdecl FUN_10037bf0(void);
extern void __cdecl FUN_100430f2(void);

__declspec(naked) void FUN_100435c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        cmp     byte ptr [ebx], 0
        jz      L_673
        mov     edi, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [ebp + 0x10]
    L_5d9:
        xor     ecx, ecx
        cmp     dword ptr [edi], ecx
        jz      L_673
        mov     dword ptr [g_1007581c], ecx
        mov     al, byte ptr [ebx]
        mov     byte ptr [ebp + 0xb], al
        lea     eax, [ebx + 0x1]
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x10], eax
    L_5f7:
        mov     eax, dword ptr [ebp + 0x10]
        mov     dl, byte ptr [ebp + 0xb]
        inc     ecx
        inc     dword ptr [ebp + 0x10]
        mov     al, byte ptr [eax]
        cmp     al, dl
        jz      L_5f7
        dec     dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x8], ecx
        movsx   eax, dl
        cmp     eax, 0x64
        jg      L_785
        jz      L_750
        cmp     eax, 0x27
        jz      L_6fa
        cmp     eax, 0x41
        jz      L_6c4
        cmp     eax, 0x48
        jz      L_6a9
        cmp     eax, 0x4d
        jz      L_678
        cmp     eax, 0x61
        jz      L_6c4
    L_644:
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, dl
        test    byte ptr [ecx + eax*2 + 0x1], 0x80
        jz      L_65f
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [ebp - 0x4]
        mov     byte ptr [eax], dl
        inc     dword ptr [esi]
        dec     dword ptr [edi]
    L_65f:
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax], cl
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
    L_66a:
        cmp     byte ptr [ebx], 0
        jnz     L_5d9
    L_673:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_678:
        dec     ecx
        jz      L_696
        dec     ecx
        jz      L_6a0
        dec     ecx
        jz      L_68d
        dec     ecx
        jnz     L_644
        mov     byte ptr [ebp + 0x14], 0x42
        jmp     L_87a
    L_68d:
        mov     byte ptr [ebp + 0x14], 0x62
        jmp     L_87a
    L_696:
        mov     dword ptr [g_1007581c], 1
    L_6a0:
        mov     byte ptr [ebp + 0x14], 0x6d
        jmp     L_87a
    L_6a9:
        dec     ecx
        jz      L_6b1
        dec     ecx
        jz      L_6bb
        jmp     L_644
    L_6b1:
        mov     dword ptr [g_1007581c], 1
    L_6bb:
        mov     byte ptr [ebp + 0x14], 0x48
        jmp     L_87a
    L_6c4:
        push    0x1004c074
        push    ebx
        call    FUN_10037bf0
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_6da
        add     ebx, 0x5
        jmp     L_6ee
    L_6da:
        push    0x1004c070
        push    ebx
        call    FUN_10037bf0
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_6f1
        add     ebx, 0x3
    L_6ee:
        mov     dword ptr [ebp + 0x10], ebx
    L_6f1:
        mov     byte ptr [ebp + 0x14], 0x70
        jmp     L_87a
    L_6fa:
        test    cl, 0x1
        jz      L_749
        add     ebx, ecx
    L_701:
        mov     al, byte ptr [ebx]
        test    al, al
        jz      L_66a
        cmp     dword ptr [edi], 0
        jz      L_66a
        cmp     al, 0x27
        jz      L_743
        mov     edx, dword ptr [g_10051984]
        movzx   ecx, al
        test    byte ptr [edx + ecx*2 + 0x1], 0x80
        jz      L_736
        cmp     dword ptr [edi], 0x1
        jbe     L_736
        mov     ecx, dword ptr [esi]
        mov     byte ptr [ecx], al
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
    L_736:
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax], cl
        inc     dword ptr [esi]
        inc     ebx
        dec     dword ptr [edi]
        jmp     L_701
    L_743:
        inc     ebx
        jmp     L_66a
    L_749:
        add     ebx, ecx
        jmp     L_66a
    L_750:
        dec     ecx
        jz      L_772
        dec     ecx
        jz      L_77c
        dec     ecx
        jz      L_769
        dec     ecx
        jnz     L_644
        mov     byte ptr [ebp + 0x14], 0x41
        jmp     L_87a
    L_769:
        mov     byte ptr [ebp + 0x14], 0x61
        jmp     L_87a
    L_772:
        mov     dword ptr [g_1007581c], 1
    L_77c:
        mov     byte ptr [ebp + 0x14], 0x64
        jmp     L_87a
    L_785:
        sub     eax, 0x68
        jz      L_861
        sub     eax, 0x5
        jz      L_846
        sub     eax, 0x6
        jz      L_82b
        dec     eax
        jz      L_7cc
        sub     eax, 0x5
        jnz     L_644
        mov     eax, ecx
        dec     eax
        dec     eax
        jz      L_7c3
        dec     eax
        dec     eax
        jnz     L_644
        mov     byte ptr [ebp + 0x14], 0x59
        jmp     L_87a
    L_7c3:
        mov     byte ptr [ebp + 0x14], 0x79
        jmp     L_87a
    L_7cc:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     dword ptr [eax + 0x8], 0xb
        mov     eax, dword ptr [ebp + 0x18]
        jg      L_7e0
        mov     eax, dword ptr [eax + 0x98]
        jmp     L_7e6
    L_7e0:
        mov     eax, dword ptr [eax + 0x9c]
    L_7e6:
        test    ecx, ecx
        jle     L_823
        cmp     dword ptr [edi], 0
        jbe     L_823
    L_7ea:
        mov     cl, byte ptr [eax]
        mov     ebx, dword ptr [g_10051984]
        movzx   edx, cl
        test    byte ptr [ebx + edx*2 + 0x1], 0x80
        jz      L_80f
        cmp     dword ptr [edi], 0x1
        jbe     L_80f
        mov     edx, dword ptr [esi]
        mov     byte ptr [edx], cl
        inc     dword ptr [esi]
        inc     eax
        dec     dword ptr [edi]
    L_80f:
        mov     ecx, dword ptr [esi]
        mov     dl, byte ptr [eax]
        mov     byte ptr [ecx], dl
        inc     dword ptr [esi]
        inc     eax
        dec     dword ptr [edi]
        dec     dword ptr [ebp + 0x8]
        cmp     dword ptr [ebp + 0x8], 0
        __emit 0x7F                 /* __emit: MSVC6 miscomputes backward jcc rel-offset (off-by-5) when a reloc sits between branch and target; ref is 7F C7 */
        __emit 0xC7
    L_823:
        mov     ebx, dword ptr [ebp + 0x10]
        jmp     L_66a
    L_82b:
        dec     ecx
        jz      L_836
        dec     ecx
        jz      L_840
        jmp     L_644
    L_836:
        mov     dword ptr [g_1007581c], 1
    L_840:
        mov     byte ptr [ebp + 0x14], 0x53
        jmp     L_87a
    L_846:
        dec     ecx
        jz      L_851
        dec     ecx
        jz      L_85b
        jmp     L_644
    L_851:
        mov     dword ptr [g_1007581c], 1
    L_85b:
        mov     byte ptr [ebp + 0x14], 0x4d
        jmp     L_87a
    L_861:
        dec     ecx
        jz      L_86c
        dec     ecx
        jz      L_876
        jmp     L_644
    L_86c:
        mov     dword ptr [g_1007581c], 1
    L_876:
        mov     byte ptr [ebp + 0x14], 0x49
    L_87a:
        push    dword ptr [ebp + 0x18]
        push    edi
        push    esi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x14]
        call    FUN_100430f2
        add     esp, 0x14
        jmp     L_823
    }
}
