/*
 * FUN_006baf60 (1894 B) — Recursive statement/expression parser.
 *
 * Parses the token stream (DAT_0082f328) driven by the current token type
 * (DAT_0082f31c), handling braces, function calls, if/while, and a
 * jump-table dispatch (0x6bb6c8) for operator tokens. Recurses into itself
 * and calls FUN_006ce280 / FUN_006b4b20 / FUN_006cc730 / FUN_006c3450 /
 * FUN_006bfa50 / FUN_006ce450 / FUN_0075db4a (_ftol).
 *
 * __stdcall (3 params), RET 0xC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f328;    /* 0x0082f328 token stream pointer */
extern int g_82f318;    /* 0x0082f318 */
extern int g_82f31c;    /* 0x0082f31c token type */
extern int g_82f324;    /* 0x0082f324 */
extern int g_82f334;    /* 0x0082f334 */
extern int g_82f3b0;    /* 0x0082f3b0 */
extern int g_82ef08[];  /* 0x0082ef08 */
extern float g_76c5b0;  /* 0x0076c5b0 float constant */

extern int __cdecl FUN_006ce280(void);
extern void __cdecl FUN_006b4b20(void);
extern float __cdecl FUN_006cc730(void);
extern int __cdecl FUN_006c3450(void);
extern void __cdecl FUN_006bfa50(void);
extern int __cdecl FUN_006ce450(void);
extern int __cdecl FUN_0075db4a(void);
extern int __stdcall FUN_006baf60(int, char, int);

__declspec(naked) int __stdcall FUN_006baf60(int param_1, char param_2, int param_3)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, 0x1
        xor     esi, esi
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], esi
        call    FUN_006ce280
        test    eax, eax
        mov     ebp, dword ptr [esp + 0x30]
        jz      LAB_61c
        jmp     LAB_8d
LAB_89:
        mov     esi, dword ptr [esp + 0x18]
LAB_8d:
        mov     eax, dword ptr [g_82f328]
        mov     bl, byte ptr [eax]
        cmp     bl, 0x7b
        jne     LAB_a9
        inc     eax
        inc     ebp
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x30], ebp
        jmp     LAB_60f
LAB_a9:
        cmp     bl, 0x7d
        jne     LAB_e6
        inc     eax
        dec     ebp
        cmp     ebp, -1
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x30], ebp
        jne     LAB_d4
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        jne     LAB_62d
        push    0x79b404
        jmp     LAB_566
LAB_d4:
        test    ebp, ebp
        jge     LAB_570
        push    0x79b404
        jmp     LAB_566
LAB_e6:
        mov     ecx, dword ptr [g_82f31c]
        cmp     ecx, 0x8
        jne     LAB_026
        mov     dl, byte ptr [esp + 0x28]
        test    dl, dl
        jz      LAB_067
        mov     al, byte ptr [esp + 0x2c]
        test    al, al
        mov     byte ptr [esp + 0x28], 0
        jz      LAB_010
        dec     ebp
        mov     dword ptr [esp + 0x30], ebp
        mov     byte ptr [esp + 0x2c], 0
LAB_010:
        test    ebp, ebp
        mov     edi, 0x2
        mov     dword ptr [esp + 0x14], edi
        jz      LAB_639
        jmp     LAB_60f
LAB_026:
        cmp     ecx, 0x9
        jne     LAB_04e
        mov     dl, byte ptr [esp + 0x28]
        test    dl, dl
        jz      LAB_063
        test    ebp, ebp
        mov     edi, 0x3
        mov     byte ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x14], edi
        jz      LAB_648
        jmp     LAB_60f
LAB_04e:
        cmp     ecx, 0x3c
        jne     LAB_0df
        mov     dl, byte ptr [esp + 0x28]
        test    dl, dl
        jne     LAB_657
LAB_063:
        mov     dl, byte ptr [esp + 0x28]
LAB_067:
        cmp     ecx, 0x5
        mov     dword ptr [esp + 0x18], 0
        jne     LAB_439
        test    dl, dl
        mov     dword ptr [esp + 0x1c], 0
        jz      LAB_446
        cmp     bl, 0x28
        jne     LAB_09b
        inc     eax
        mov     dword ptr [esp + 0x1c], 1
        mov     dword ptr [g_82f328], eax
LAB_09b:
        cmp     byte ptr [eax], 0x20
        jne     LAB_0a6
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_0a6:
        cmp     byte ptr [eax], 0x3b
        jz      LAB_310
LAB_0af:
        mov     dword ptr [g_82f31c], 0xfe
        call    FUN_006b4b20
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jne     LAB_0ce
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_0ce:
        cmp     byte ptr [eax], 0x2c
        jne     LAB_2f9
        inc     eax
        mov     dword ptr [g_82f328], eax
        jmp     LAB_0af
LAB_0df:
        test    ecx, ecx
        jne     LAB_17e
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        jz      LAB_11c
        call    FUN_006cc730
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jne     LAB_11c
        push    0
        push    0
        push    1
        mov     dword ptr [esp + 0x24], 1
        call    FUN_006baf60
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     LAB_14b
LAB_11c:
        mov     ecx, dword ptr [g_82f318]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 2
        jz      LAB_137
        mov     dword ptr [g_82f324], eax
        jmp     LAB_14b
LAB_137:
        push    0
        push    0
        push    0
        mov     esi, ecx
        call    FUN_006baf60
        mov     eax, dword ptr [g_82f324]
        mov     dword ptr [esi], eax
LAB_14b:
        cmp     edi, 0x2
        jz      LAB_155
        cmp     edi, 0x3
        jne     LAB_15a
LAB_155:
        mov     byte ptr [esp + 0x28], 0
LAB_15a:
        cmp     edi, 0x4
        jz      LAB_670
        test    ebp, ebp
        jne     LAB_60f
        call    FUN_006ce450
        cmp     eax, 0x1
        jne     LAB_6ba
        jmp     LAB_60f
LAB_17e:
        cmp     ecx, 0x53
        jne     LAB_27e
        mov     cl, byte ptr [esp + 0x28]
        xor     esi, esi
        test    cl, cl
        jz      LAB_1db
        cmp     bl, 0x28
        jne     LAB_19c
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_19c:
        cmp     byte ptr [eax], 0x28
        jne     LAB_1a7
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_1a7:
        cmp     byte ptr [eax], 0x20
        jne     LAB_1b2
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_1b2:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jne     LAB_1c9
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_1c9:
        cmp     byte ptr [eax], 0x29
        jz      LAB_1db
        push    0x79b3f0
        call    FUN_006bfa50
        add     esp, 0x4
LAB_1db:
        xor     bl, bl
        mov     byte ptr [esp + 0x13], bl
LAB_1e1:
        mov     ecx, dword ptr [esp + 0x28]
        push    0
        push    1
        push    ecx
        call    FUN_006baf60
        mov     edi, eax
        cmp     edi, 0x6
        mov     dword ptr [esp + 0x14], edi
        ja      LAB_60f
LAB_1fe:
        jmp     dword ptr [edi*4 + 0x6bb6c8]
LAB_205:
        call    FUN_006c3450
        cmp     esi, eax
        jz      LAB_222
        test    bl, bl
        jz      LAB_21a
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      LAB_222
LAB_21a:
        push    1
        push    0
        push    0
        jmp     LAB_22d
LAB_222:
        mov     edx, dword ptr [esp + 0x28]
        push    1
        push    1
        mov     bl, 1
        push    edx
LAB_22d:
        call    FUN_006baf60
        mov     edi, eax
        cmp     edi, 0x6
        mov     dword ptr [esp + 0x14], edi
        ja      LAB_60f
        jmp     LAB_1fe
LAB_243:
        mov     byte ptr [esp + 0x13], 1
        jmp     LAB_1e1
LAB_24a:
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        jne     LAB_67f
        jmp     LAB_60f
LAB_25b:
        test    bl, bl
        push    1
        push    1
        jne     LAB_272
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        call    FUN_006baf60
        jmp     LAB_60f
LAB_272:
        push    0
        call    FUN_006baf60
        jmp     LAB_60f
LAB_27e:
        cmp     ecx, 0x54
        jz      LAB_68e
        cmp     ecx, 0x55
        jz      LAB_69d
        cmp     ecx, 0x1
        jne     LAB_063
        test    esi, esi
        jne     LAB_2aa
        push    0x79b3dc
        call    FUN_006bfa50
        add     esp, 0x4
LAB_2aa:
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        jz      LAB_2ca
        cmp     esi, 0x1
        jz      LAB_2ca
        push    0
        push    0
        push    1
        call    FUN_006baf60
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     LAB_2d5
LAB_2ca:
        push    0
        push    0
        push    0
        call    FUN_006baf60
LAB_2d5:
        cmp     edi, 0x2
        jz      LAB_2df
        cmp     edi, 0x3
        jne     LAB_2e4
LAB_2df:
        mov     byte ptr [esp + 0x28], 0
LAB_2e4:
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], 0
        jz      LAB_6ba
        jmp     LAB_60f
LAB_2f9:
        cmp     byte ptr [eax], 0x3b
        jz      LAB_310
        push    0x79b3c8
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_310:
        mov     esi, dword ptr [g_82f324]
        mov     edi, dword ptr [g_82f318]
        mov     ebx, dword ptr [g_82f334]
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_006cc730
        fstp    st(0)
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x3b
        jz      LAB_34f
        push    0x79b3c8
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
LAB_34f:
        inc     eax
        mov     ebp, eax
LAB_352:
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [g_82f328], edx
        mov     dword ptr [g_82f324], esi
        mov     dword ptr [g_82f318], edi
        mov     dword ptr [g_82f334], ebx
        call    FUN_006cc730
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jne     LAB_40a
        push    0
        push    0
        push    1
        call    FUN_006baf60
        cmp     eax, 0x2
        mov     ecx, edi
        mov     dword ptr [g_82f328], ebp
        mov     dword ptr [g_82f324], esi
        mov     dword ptr [g_82f334], ebx
        mov     dword ptr [g_82f318], ecx
        jz      LAB_410
        cmp     eax, 0x4
        jz      LAB_62d
LAB_3b7:
        mov     dword ptr [g_82f31c], 0xfe
        call    FUN_006b4b20
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jne     LAB_3d6
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_3d6:
        cmp     byte ptr [eax], 0x2c
        jne     LAB_3e3
        inc     eax
        mov     dword ptr [g_82f328], eax
        jmp     LAB_3b7
LAB_3e3:
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jz      LAB_352
        cmp     byte ptr [eax], 0x29
        jz      LAB_352
        push    0x79b3ac
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     LAB_352
LAB_40a:
        mov     ecx, dword ptr [g_82f318]
LAB_410:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      LAB_420
        mov     dword ptr [g_82f324], eax
        jmp     LAB_5ea
LAB_420:
        push    0
        push    0
        push    0
        mov     esi, ecx
        call    FUN_006baf60
        mov     eax, dword ptr [g_82f324]
        mov     dword ptr [esi], eax
        jmp     LAB_5ea
LAB_439:
        cmp     ecx, 0x6
        jne     LAB_521
        test    dl, dl
        jne     LAB_479
LAB_446:
        mov     esi, dword ptr [g_82f318]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      LAB_459
        mov     dword ptr [g_82f324], eax
        jmp     LAB_46c
LAB_459:
        push    0
        push    0
        push    0
        call    FUN_006baf60
        mov     ecx, dword ptr [g_82f324]
        mov     dword ptr [esi], ecx
LAB_46c:
        test    ebp, ebp
        jz      LAB_6ba
        jmp     LAB_60f
LAB_479:
        cmp     bl, 0x28
        jne     LAB_484
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_484:
        cmp     byte ptr [eax], 0x20
        jne     LAB_48f
        inc     eax
        mov     dword ptr [g_82f328], eax
LAB_48f:
        mov     edi, dword ptr [g_82f324]
        mov     ebp, dword ptr [g_82f334]
        mov     ebx, dword ptr [g_82f318]
        mov     esi, eax
        call    FUN_006cc730
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jne     LAB_4f1
LAB_4b5:
        push    0
        push    0
        push    1
        call    FUN_006baf60
        cmp     eax, 0x2
        mov     ecx, ebx
        mov     dword ptr [g_82f328], esi
        mov     dword ptr [g_82f318], ecx
        mov     dword ptr [g_82f324], edi
        mov     dword ptr [g_82f334], ebp
        jz      LAB_4f7
        call    FUN_006cc730
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      LAB_4b5
LAB_4f1:
        mov     ecx, dword ptr [g_82f318]
LAB_4f7:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      LAB_507
        mov     dword ptr [g_82f324], eax
        jmp     LAB_5ea
LAB_507:
        push    0
        push    0
        push    0
        mov     esi, ecx
        call    FUN_006baf60
        mov     edx, dword ptr [g_82f324]
        mov     dword ptr [esi], edx
        jmp     LAB_5ea
LAB_521:
        cmp     ecx, 0x7
        jne     LAB_5fe
        test    dl, dl
        jne     LAB_57b
        mov     esi, dword ptr [g_82f318]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      LAB_541
        mov     dword ptr [g_82f324], eax
        jmp     LAB_553
LAB_541:
        push    0
        push    0
        push    0
        call    FUN_006baf60
        mov     eax, dword ptr [g_82f324]
        mov     dword ptr [esi], eax
LAB_553:
        call    FUN_006ce280
        cmp     dword ptr [g_82f31c], 0x6
        jz      LAB_56e
        push    0x79b398
LAB_566:
        call    FUN_006bfa50
        add     esp, 0x4
LAB_56e:
        test    ebp, ebp
LAB_570:
        jz      LAB_6ba
        jmp     LAB_60f
LAB_57b:
        mov     ecx, dword ptr [g_82f318]
        mov     ebx, dword ptr [g_82f324]
        mov     ebp, dword ptr [g_82f334]
        mov     edi, eax
        mov     dword ptr [esp + 0x20], ecx
LAB_593:
        mov     edx, dword ptr [esp + 0x20]
        push    0
        push    0
        push    1
        mov     dword ptr [g_82f328], edi
        mov     dword ptr [g_82f324], ebx
        mov     dword ptr [g_82f318], edx
        mov     dword ptr [g_82f334], ebp
        call    FUN_006baf60
        mov     esi, eax
        call    FUN_006ce280
        cmp     dword ptr [g_82f31c], 0x6
        jz      LAB_5d7
        push    0x79b398
        call    FUN_006bfa50
        add     esp, 0x4
LAB_5d7:
        cmp     esi, 0x2
        jz      LAB_5ea
        call    FUN_006cc730
        call    FUN_0075db4a
        test    eax, eax
        jne     LAB_593
LAB_5ea:
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      LAB_6ac
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, eax
        jmp     LAB_60f
LAB_5fe:
        test    dl, dl
        jz      LAB_607
        call    FUN_006b4b20
LAB_607:
        test    ebp, ebp
        jz      LAB_6ba
LAB_60f:
        call    FUN_006ce280
        test    eax, eax
        jne     LAB_89
LAB_61c:
        test    ebp, ebp
        jz      LAB_62d
        push    0x79b384
        call    FUN_006bfa50
        add     esp, 0x4
LAB_62d:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_639:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_648:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_657:
        cmp     byte ptr [eax], 0
        jz      LAB_670
        call    FUN_006c3450
        mov     ecx, dword ptr [g_82f3b0]
        shl     ecx, 0x5
        mov     dword ptr [ecx + g_82ef08], eax
LAB_670:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x4
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_67f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_68e:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x5
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_69d:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x6
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_6ac:
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0xc
LAB_6ba:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
