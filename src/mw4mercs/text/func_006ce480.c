/*
 * FUN_006ce480 (1624 B) — Script parser/compiler.
 *
 * Parses a script token stream (DAT_0082f328) into an object tree, building
 * function/message tables and a "main" object. Uses the allocator
 * FUN_006f3c80, the log FUN_006bfa50, and helpers FUN_006cd6f0 /
 * FUN_006cd810 / FUN_006cdd40 / FUN_006bfe50 / FUN_006ce280 /
 * FUN_006cd9e0 / FUN_006cd710 / FUN_00707e70 / FUN_006bf6c0 /
 * FUN_006cbfe0.
 *
 * __stdcall (3 params), RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82e21c;    /* 0x0082e21c */
extern int g_82e228;    /* 0x0082e228 */
extern int g_82f348;    /* 0x0082f348 */
extern int g_82f338;    /* 0x0082f338 */
extern int g_82f330;    /* 0x0082f330 */
extern int g_82f32c;    /* 0x0082f32c */
extern int g_82f334;    /* 0x0082f334 */
extern int g_82f328;    /* 0x0082f328 */
extern int g_82f324;    /* 0x0082f324 */
extern int g_82f33c;    /* 0x0082f33c */
extern char g_82ebf8[]; /* 0x0082ebf8 char-class table */
extern int g_7b686c[];  /* 0x007b686c string-pointer table */

extern void * __cdecl FUN_006f3c80(unsigned int, int);
extern void __cdecl FUN_006cd6f0(void);
extern void __cdecl FUN_006cd810(void *);
extern void * __cdecl FUN_006cdd40(void);
extern unsigned char __cdecl FUN_006bfe50(void);
extern int __cdecl FUN_006ce280(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006cd9e0(void);
extern void __cdecl FUN_006cd710(void);
extern float __cdecl FUN_00707e70(int);
extern void __cdecl FUN_006bf6c0(void *, void *);
extern void __cdecl FUN_006cbfe0(void *, int);

__declspec(naked) void * __stdcall FUN_006ce480(void *param_1, void *param_2, void *param_3)
{
    __asm {
        sub     esp, 0x2a0
        mov     eax, dword ptr [g_82e21c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    0x24
        call    FUN_006f3c80
        mov     edx, eax
        xor     eax, eax
        mov     edi, edx
        mov     ecx, 0x9
        rep     stosd
        mov     ecx, dword ptr [esp + 0x2bc]
        mov     eax, dword ptr [g_82f348]
        mov     edi, dword ptr [esp + 0x2b4]
        mov     dword ptr [edx + 0x1c], ecx
        mov     ecx, dword ptr [g_82f338]
        mov     dword ptr [esp + 0x28], ecx
        or      ecx, 0xffffffff
        mov     dword ptr [edx], eax
        mov     dword ptr [g_82f330], edi
        mov     dword ptr [g_82f32c], edi
        xor     eax, eax
        xor     ebx, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [g_82f348], edx
        mov     dword ptr [g_82f338], edx
        shr     ecx, 0x2
        lea     edx, [esp + 0x1ac]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        mov     dword ptr [esp + 0x18], ebx
        rep     movsb
        call    FUN_006cd6f0
        lea     ecx, [esp + 0x1ac]
        push    ecx
        call    FUN_006cd810
        mov     edx, dword ptr [g_82e21c]
        push    edx
        push    0xfdec
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_82f338]
        mov     ebp, eax
        mov     esi, ebp
        mov     dword ptr [ecx + 0x18], eax
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [ebp + 0xfde8], ebx
        mov     dword ptr [g_82f334], ebx
LAB_54c:
        call    FUN_006cdd40
        test    eax, eax
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x10], ebp
        jz      LAB_621
        call    FUN_006bfe50
        mov     edi, dword ptr [g_82f328]
        or      ecx, 0xffffffff
        mov     dword ptr [esp + 0x1c], eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebx, ecx
        inc     ebx
        lea     edx, [ebx + 0x1]
        and     edx, 0x3
        neg     edx
        and     edx, 0x3
        add     ebx, edx
        mov     eax, ebx
        sub     eax, esi
        lea     ecx, [eax + ebp*1 + 0xd]
        cmp     ecx, 0xfddb
        jbe     LAB_5d2
        mov     edx, dword ptr [g_82e21c]
        push    edx
        push    0xfdec
        call    FUN_006f3c80
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0xfde8], ebp
        mov     word ptr [eax], 0xfffe
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [ebp + 0xfde8], 0
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], ebp
LAB_5d2:
        mov     esi, dword ptr [g_82f328]
        mov     edx, dword ptr [g_82f32c]
        mov     ecx, ebx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [ebp + 0xd]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        and     ecx, 0x3
        rep     movsb
        mov     cx, word ptr [g_82f334]
        mov     esi, dword ptr [esp + 0x14]
        mov     word ptr [eax], cx
        mov     cl, byte ptr [esp + 0x1c]
        lea     ebp, [ebx + ebp*1 + 0xd]
        mov     dword ptr [eax + 0x4], edx
        mov     word ptr [eax + 0x2], bx
        mov     dword ptr [eax + 0x8], 0
        mov     byte ptr [eax + 0xc], cl
        jmp     LAB_54c
LAB_621:
        mov     word ptr [ebp], 0xffff
        call    FUN_006cd9e0
        call    FUN_006cd710
        mov     edx, dword ptr [g_82f338]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [g_82f324], eax
        call    FUN_006ce280
        test    eax, eax
        jz      LAB_8cc
LAB_64c:
        mov     eax, dword ptr [g_82f328]
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        xor     ebp, ebp
        mov     ebx, eax
        mov     dl, byte ptr [ecx + g_82ebf8]
        test    dl, dl
        jne     LAB_675
        push    0x79e7ac
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_675:
        xor     edx, edx
        mov     dl, byte ptr [eax]
        mov     cl, byte ptr [edx + g_82ebf8]
        test    cl, cl
        jz      LAB_698
LAB_683:
        inc     eax
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        inc     ebp
        mov     dl, byte ptr [ecx + g_82ebf8]
        test    dl, dl
        jne     LAB_683
        mov     dword ptr [g_82f328], eax
LAB_698:
        mov     edx, dword ptr [g_82f338]
        mov     edi, dword ptr [edx + 0x14]
        test    edi, edi
        jz      LAB_6eb
LAB_6a5:
        mov     esi, ebx
        lea     eax, [edi + 0xc]
LAB_6aa:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     LAB_6ce
        test    cl, cl
        jz      LAB_6ca
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jne     LAB_6ce
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jne     LAB_6aa
LAB_6ca:
        xor     eax, eax
        jmp     LAB_6d3
LAB_6ce:
        sbb     eax, eax
        sbb     eax, -1
LAB_6d3:
        test    eax, eax
        jne     LAB_6e5
        push    ebx
        push    0x79e790
        call    FUN_006bfa50
        add     esp, 0x8
LAB_6e5:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jne     LAB_6a5
LAB_6eb:
        mov     eax, dword ptr [g_82e21c]
        push    eax
        lea     ecx, [ebp + 0x10]
        push    ecx
        call    FUN_006f3c80
        mov     edx, eax
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        lea     edi, [edx + 0xc]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [g_82f338]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [eax + 0x14]
        xor     esi, esi
        mov     dword ptr [eax + 0x14], edx
        cmp     dword ptr [esp + 0x18], esi
        mov     dword ptr [edx + 0x8], ebp
        mov     byte ptr [edx + ebp*1 + 0xc], 0
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [edx + 0x4], esi
        mov     dword ptr [edx], ecx
        jne     LAB_746
        cmp     ebp, 0x4
        jne     LAB_746
        cmp     dword ptr [ebx], 0x6e69616d
        jne     LAB_746
        mov     dword ptr [esp + 0x18], edx
LAB_746:
        mov     dword ptr [esp + 0x10], esi
        call    FUN_006ce280
        test    eax, eax
        jz      LAB_8b7
LAB_757:
        mov     eax, dword ptr [g_82f328]
        mov     cl, byte ptr [eax]
        cmp     cl, 0x7b
        jne     LAB_773
        inc     eax
        inc     esi
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x10], esi
        jmp     LAB_899
LAB_773:
        cmp     cl, 0x7d
        jne     LAB_79f
        inc     eax
        dec     esi
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x10], esi
        jns     LAB_792
        push    0x79b404
        call    FUN_006bfa50
        add     esp, 0x4
LAB_792:
        test    esi, esi
        jz      LAB_8b7
        jmp     LAB_899
LAB_79f:
        cmp     esi, 0x1
        jg      LAB_899
        test    esi, esi
        jne     LAB_7be
        push    0x79e778
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_7be:
        xor     edx, edx
        mov     dl, byte ptr [eax]
        xor     esi, esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], eax
        mov     cl, byte ptr [edx + g_82ebf8]
        test    cl, cl
        jz      LAB_7ef
LAB_7d6:
        inc     eax
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        inc     esi
        mov     dl, byte ptr [ecx + g_82ebf8]
        test    dl, dl
        jne     LAB_7d6
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [g_82f328], eax
LAB_7ef:
        xor     ebx, ebx
        mov     ebp, 0x7b686c
LAB_7f6:
        mov     edx, dword ptr [ebp]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jne     LAB_82b
        mov     ecx, edx
        mov     al, byte ptr [ecx]
        test    al, al
        jz      LAB_849
        mov     esi, dword ptr [esp + 0x1c]
        sub     esi, edx
LAB_817:
        mov     dl, byte ptr [esi + ecx*1]
        inc     ecx
        cmp     dl, al
        jne     LAB_827
        mov     al, byte ptr [ecx]
        test    al, al
        jz      LAB_849
        jmp     LAB_817
LAB_827:
        mov     esi, dword ptr [esp + 0x14]
LAB_82b:
        add     ebp, 0x4
        inc     ebx
        cmp     ebp, 0x7b68c4
        jc      LAB_7f6
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    0x79e758
        call    FUN_006bfa50
        add     esp, 0x8
LAB_849:
        mov     ebp, dword ptr [esp + 0x24]
        mov     edi, dword ptr [ebp + 0x4]
        mov     esi, edi
        test    esi, esi
        jz      LAB_876
LAB_856:
        cmp     dword ptr [esi + 0x4], ebx
        jne     LAB_870
        mov     ecx, dword ptr [ebx*4 + g_7b686c]
        push    ecx
        push    0x79e740
        call    FUN_006bfa50
        add     esp, 0x8
LAB_870:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jne     LAB_856
LAB_876:
        mov     edx, dword ptr [g_82e21c]
        push    edx
        push    0xc
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_82f324]
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], edi
        mov     dword ptr [ebp + 0x4], eax
LAB_899:
        call    FUN_006ce280
        test    eax, eax
        jne     LAB_757
        test    esi, esi
        jz      LAB_8b7
        push    0x79e720
        call    FUN_006bfa50
        add     esp, 0x4
LAB_8b7:
        call    FUN_006ce280
        test    eax, eax
        jne     LAB_64c
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jne     LAB_8e1
LAB_8cc:
        mov     edx, dword ptr [esp + 0x2b4]
        push    edx
        push    0x79e6fc
        call    FUN_006bfa50
        add     esp, 0x8
LAB_8e1:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x1ac]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0xac]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     cl, byte ptr [esp + 0xac]
        xor     eax, eax
        test    cl, cl
        jz      LAB_92a
LAB_919:
        cmp     cl, 0x2e
        jz      LAB_92a
        mov     cl, byte ptr [esp + eax*1 + 0xad]
        inc     eax
        test    cl, cl
        jne     LAB_919
LAB_92a:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        lea     esi, [esp + 0xac]
        lea     edi, [esp + 0x2c]
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        lea     ebp, [esp + eax*1 + 0x2c]
        rep     movsb
        mov     byte ptr [ebp], 0
        mov     al, byte ptr [ebp + -0x1]
        dec     ebp
        test    al, al
        jz      LAB_96c
LAB_955:
        lea     eax, [esp + 0x2c]
        cmp     eax, ebp
        jz      LAB_96c
        mov     al, byte ptr [ebp + -0x1]
        dec     ebp
        cmp     al, 0x5c
        jz      LAB_96b
        test    al, al
        jne     LAB_955
        jmp     LAB_96c
LAB_96b:
        inc     ebp
LAB_96c:
        mov     ecx, dword ptr [g_82e228]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x30]
        repne   scasb
        not     ecx
        add     ecx, 0x48
        push    ecx
        call    FUN_006f3c80
        mov     edx, dword ptr [g_82f338]
        or      ecx, 0xffffffff
        mov     dword ptr [edx + 0x8], eax
        lea     ebx, [eax + 0x44]
        mov     dword ptr [g_82f33c], eax
        xor     eax, eax
        mov     edi, 0x792748
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ebx, dword ptr [edx + 0x8]
        or      ecx, 0xffffffff
        add     ebx, 0x44
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edi, ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ebx, dword ptr [edx + 0x8]
        or      ecx, 0xffffffff
        add     ebx, 0x44
        mov     edi, 0x792748
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        mov     edi, ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [edx + 0x8]
        mov     al, byte ptr [esi + 0x44]
        test    al, al
        lea     ecx, [esi + 0x44]
        jz      LAB_a38
LAB_a24:
        cmp     al, 0x41
        jl      LAB_a30
        cmp     al, 0x5a
        jg      LAB_a30
        add     al, 0x20
        mov     byte ptr [ecx], al
LAB_a30:
        mov     al, byte ptr [ecx + 0x1]
        inc     ecx
        test    al, al
        jne     LAB_a24
LAB_a38:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        inc     ecx
        mov     dword ptr [esi + 0x40], ecx
        xor     ebx, ebx
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x8], edx
        mov     eax, dword ptr [edx + 0x8]
        mov     ecx, dword ptr [eax + 0x34]
        mov     esi, dword ptr [edx + 0x8]
        and     ecx, 0xfffffffb
        or      ecx, 0x1
        lea     edi, [edx + 0x8]
        push    0x1
        mov     dword ptr [eax + 0x34], ecx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        mov     dword ptr [esi + 0xc], ebx
        and     dword ptr [esi + 0x34], 0xfffffff5
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [esp + 0x2b8]
        mov     dword ptr [esi + 0x4], ebx
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + 0x2c], ebx
        mov     dword ptr [eax + 0x30], ebx
        mov     dword ptr [eax + 0x3c], ebx
        mov     dword ptr [eax + 0x38], ebx
        and     dword ptr [eax + 0x34], 0xffffffcf
        mov     ecx, dword ptr [g_82f338]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [edi]
        push    edx
        push    eax
        call    FUN_006bf6c0
        mov     ecx, dword ptr [g_82f338]
        mov     edx, dword ptr [ecx + 0x8]
        push    0xe
        push    edx
        call    FUN_006cbfe0
        mov     eax, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        jz      LAB_acb
        mov     dword ptr [g_82f338], eax
LAB_acb:
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0x2a0
        ret     0xc
    }
}
