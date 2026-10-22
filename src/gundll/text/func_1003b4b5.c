/*
 * FUN_1003b4b5 (2767 B) - __cdecl. Wide-char printf-family formatter
 * (the main wprintf implementation). No jump tables; large switch on format
 * specifier.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10051b90;
extern unsigned int g_10051984;
extern char g_10051b94[];
extern void *g_10051dc0;
extern char g_10051dd0[];
extern char g_10051ddc[];

extern void FUN_10037940(void);
extern void FUN_1003a6a8(void);
extern void FUN_1003c002(void);
extern void FUN_1003bfe9(void);
extern void FUN_100423f9(void);
extern void FUN_100399db(void);
extern void FUN_1003bfde(void);
extern void FUN_1004153c(void);
extern void FUN_1003c3c5(void);
extern void FUN_1004215d(void);
extern void FUN_1003c2dc(void);
extern void FUN_10040680(void);
extern void FUN_1004209b(void);
extern void FUN_10042470(void);
extern void FUN_10039a50(void);
extern void FUN_1003bf84(void);

__declspec(naked) void FUN_1003b4b5(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x2304
        call    FUN_10037940
        and     byte ptr [ebp - 0xe], 0x0
        push    ebx
        push    esi
        mov     ebx, dword ptr [ebp - 0x14]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        xor     esi, esi
        mov     ax, word ptr [edi]
        mov     dword ptr [ebp - 0x4], esi
        cmp     ax, si
        mov     dword ptr [ebp - 0x30], esi
        jz      L_1003bf68
        jmp     L_1003b4e7
    L_1003b4e5:
        xor     esi, esi
    L_1003b4e7:
        push    0x8
        push    eax
        call    FUN_1003a6a8
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_1003b52f
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x4]
        push    dword ptr [ebp + 0x8]
        push    eax
        call    FUN_1003c002
        pop     ecx
        pop     ecx
        push    eax
        call    FUN_1003bfe9
        inc     edi
        inc     edi
        mov     ax, word ptr [edi]
        push    eax
        call    FUN_100423f9
        add     esp, 0xc
    L_1003b51d:
        test    eax, eax
        jz      L_1003b52f
        inc     edi
        inc     edi
        mov     ax, word ptr [edi]
        push    eax
        call    FUN_100423f9
        pop     ecx
        jmp     L_1003b51d
    L_1003b52f:
        cmp     word ptr [edi], 0x25
        jnz     L_1003bf1c
        and     byte ptr [ebp - 0x15], 0x0
        and     byte ptr [ebp - 0x16], 0x0
        and     byte ptr [ebp - 0x6], 0x0
        and     byte ptr [ebp - 0x8], 0x0
        and     byte ptr [ebp - 0xd], 0x0
        and     byte ptr [ebp - 0x5], 0x0
        mov     dword ptr [ebp - 0x44], esi
        mov     dword ptr [ebp - 0x28], esi
        mov     dword ptr [ebp - 0x1c], esi
        mov     dword ptr [ebp - 0x2c], esi
        mov     dword ptr [ebp - 0xc], esi
        mov     byte ptr [ebp - 0x7], 0x1
        mov     dword ptr [ebp - 0x40], esi
    L_1003b567:
        inc     edi
        inc     edi
        movzx   esi, word ptr [edi]
        test    si, 0xff00
        jnz     L_1003b5b8
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003b58f
        mov     eax, esi
        push    0x4
        and     eax, 0xff
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003b5a2
    L_1003b58f:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, esi
        and     eax, 0xff
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003b5a2:
        test    eax, eax
        jz      L_1003b5b8
        mov     eax, dword ptr [ebp - 0xc]
        inc     dword ptr [ebp - 0x2c]
        lea     eax, [eax + eax*0x4]
        lea     eax, [esi + eax*0x2 + -0x30]
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_1003b61f
    L_1003b5b8:
        cmp     esi, 0x4e
        jg      L_1003b5fd
        jz      L_1003b61f
        cmp     esi, 0x2a
        jz      L_1003b5f8
        cmp     esi, 0x46
        jz      L_1003b61f
        cmp     esi, 0x49
        jz      L_1003b5d8
        cmp     esi, 0x4c
        jnz     L_1003b60c
        inc     byte ptr [ebp - 0x7]
        jmp     L_1003b61f
    L_1003b5d8:
        cmp     word ptr [edi + 0x2], 0x36
        jnz     L_1003b60c
        cmp     word ptr [edi + 0x4], 0x34
        lea     eax, [edi + 0x4]
        jnz     L_1003b60c
        inc     dword ptr [ebp - 0x40]
        and     dword ptr [ebp - 0x38], 0x0
        and     dword ptr [ebp - 0x34], 0x0
        mov     edi, eax
        jmp     L_1003b61f
    L_1003b5f8:
        inc     byte ptr [ebp - 0x6]
        jmp     L_1003b61f
    L_1003b5fd:
        cmp     esi, 0x68
        jz      L_1003b619
        cmp     esi, 0x6c
        jz      L_1003b611
        cmp     esi, 0x77
        jz      L_1003b614
    L_1003b60c:
        inc     byte ptr [ebp - 0x8]
        jmp     L_1003b61f
    L_1003b611:
        inc     byte ptr [ebp - 0x7]
    L_1003b614:
        inc     byte ptr [ebp - 0x5]
        jmp     L_1003b61f
    L_1003b619:
        dec     byte ptr [ebp - 0x7]
        dec     byte ptr [ebp - 0x5]
    L_1003b61f:
        cmp     byte ptr [ebp - 0x8], 0x0
        jz      L_1003b567
        cmp     byte ptr [ebp - 0x6], 0x0
        mov     dword ptr [ebp + 0xc], edi
        jnz     L_1003b644
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 0x48], eax
        add     eax, 0x4
        mov     dword ptr [ebp + 0x10], eax
        mov     eax, dword ptr [eax - 0x4]
        mov     dword ptr [ebp - 0x20], eax
    L_1003b644:
        and     byte ptr [ebp - 0x8], 0x0
        cmp     byte ptr [ebp - 0x5], 0x0
        jnz     L_1003b667
        mov     ax, word ptr [edi]
        cmp     ax, 0x53
        jz      L_1003b663
        cmp     ax, 0x43
        jz      L_1003b663
        mov     byte ptr [ebp - 0x5], 0x1
        jmp     L_1003b667
    L_1003b663:
        or      byte ptr [ebp - 0x5], 0xff
    L_1003b667:
        movzx   esi, word ptr [edi]
        or      esi, 0x20
        cmp     esi, 0x6e
        mov     dword ptr [ebp - 0x24], esi
        jz      L_1003b69f
        cmp     esi, 0x63
        jz      L_1003b68e
        cmp     esi, 0x7b
        jz      L_1003b68e
        push    dword ptr [ebp + 0x8]
        lea     eax, [ebp - 0x4]
        push    eax
        call    FUN_1003c002
        pop     ecx
        jmp     L_1003b699
    L_1003b68e:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
    L_1003b699:
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
    L_1003b69f:
        mov     ecx, dword ptr [ebp - 0x2c]
        test    ecx, ecx
        jz      L_1003b6b0
        cmp     dword ptr [ebp - 0xc], 0x0
        jz      L_1003bf5a
    L_1003b6b0:
        cmp     esi, 0x6f
        jg      L_1003b99c
        jz      L_1003bc51
        cmp     esi, 0x63
        jz      L_1003b97a
        cmp     esi, 0x64
        jz      L_1003bc51
        jle     L_1003b9c6
        cmp     esi, 0x67
        jle     L_1003b715
        cmp     esi, 0x69
        jz      L_1003b6fc
        cmp     esi, 0x6e
        jnz     L_1003b9c6
        cmp     byte ptr [ebp - 0x6], 0x0
        mov     esi, dword ptr [ebp - 0x4]
        jz      L_1003bde5
        jmp     L_1003bf12
    L_1003b6fc:
        push    0x64
        pop     esi
        mov     dword ptr [ebp - 0x24], esi
    L_1003b702:
        cmp     bx, 0x2d
        jnz     L_1003ba0d
        mov     byte ptr [ebp - 0x16], 0x1
        jmp     L_1003ba13
    L_1003b715:
        cmp     bx, 0x2d
        lea     esi, [ebp + 0xfffffcfc]
        jnz     L_1003b730
        mov     word ptr [ebp + 0xfffffcfc], bx
        lea     esi, [ebp + 0xfffffcfe]
        jmp     L_1003b736
    L_1003b730:
        cmp     bx, 0x2b
        jnz     L_1003b74a
    L_1003b736:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0xc]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
    L_1003b74a:
        cmp     dword ptr [ebp - 0x2c], 0x0
        jz      L_1003b759
        cmp     dword ptr [ebp - 0xc], 0x15d
        jle     L_1003b760
    L_1003b759:
        mov     dword ptr [ebp - 0xc], 0x15d
    L_1003b760:
        test    bh, 0xff
        jnz     L_1003b7bf
        mov     edi, 0xff
    L_1003b76a:
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003b783
        mov     eax, ebx
        push    0x4
        and     eax, edi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003b793
    L_1003b783:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, edi
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003b793:
        test    eax, eax
        jz      L_1003b7bf
        mov     eax, dword ptr [ebp - 0xc]
        dec     dword ptr [ebp - 0xc]
        test    eax, eax
        jz      L_1003b7bf
        inc     dword ptr [ebp - 0x1c]
        push    dword ptr [ebp + 0x8]
        mov     word ptr [esi], bx
        inc     esi
        inc     esi
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        test    bh, 0xff
        mov     dword ptr [ebp - 0x14], ebx
        jz      L_1003b76a
    L_1003b7bf:
        push    dword ptr [g_10051b90]
        lea     eax, [ebp - 0x3a]
        push    offset g_10051b94
        push    eax
        call    FUN_1004153c
        mov     edi, dword ptr [ebp - 0xc]
        add     esp, 0xc
        cmp     word ptr [ebp - 0x3a], bx
        jnz     L_1003b85a
        mov     eax, edi
        dec     edi
        test    eax, eax
        jz      L_1003b85a
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        mov     ax, word ptr [ebp - 0x3a]
        mov     word ptr [esi], ax
        inc     esi
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        inc     esi
        test    bh, 0xff
        jnz     L_1003b85a
    L_1003b800:
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003b821
        mov     eax, ebx
        push    0x4
        and     eax, 0xff
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003b834
    L_1003b821:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, 0xff
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003b834:
        test    eax, eax
        jz      L_1003b85a
        mov     eax, edi
        dec     edi
        test    eax, eax
        jz      L_1003b85a
        inc     dword ptr [ebp - 0x1c]
        push    dword ptr [ebp + 0x8]
        mov     word ptr [esi], bx
        inc     esi
        inc     esi
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        /* __emit: MSVC6 miscomputes this backward jmp rel-offset (EB AB); ref uses EB A6 */
        __emit 0xEB
        __emit 0xA6
    L_1003b85a:
        cmp     dword ptr [ebp - 0x1c], 0x0
        jz      L_1003b90f
        cmp     bx, 0x65
        jz      L_1003b874
        cmp     bx, 0x45
        jnz     L_1003b90f
    L_1003b874:
        mov     eax, edi
        dec     edi
        test    eax, eax
        jz      L_1003b90f
        push    dword ptr [ebp + 0x8]
        mov     word ptr [esi], 0x65
        inc     esi
        inc     esi
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        cmp     bx, 0x2d
        mov     dword ptr [ebp - 0x14], ebx
        jnz     L_1003b8a4
        mov     word ptr [esi], bx
        inc     esi
        inc     esi
        jmp     L_1003b8aa
    L_1003b8a4:
        cmp     bx, 0x2b
        jnz     L_1003b8c6
    L_1003b8aa:
        mov     eax, edi
        dec     edi
        test    eax, eax
        jnz     L_1003b8b5
        xor     edi, edi
        jmp     L_1003b8c6
    L_1003b8b5:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
    L_1003b8c6:
        test    bh, 0xff
        jnz     L_1003b90f
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003b8e7
        mov     eax, ebx
        push    0x4
        and     eax, 0xff
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003b8fa
    L_1003b8e7:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, 0xff
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003b8fa:
        test    eax, eax
        jz      L_1003b90f
        mov     eax, edi
        dec     edi
        test    eax, eax
        jz      L_1003b90f
        inc     dword ptr [ebp - 0x1c]
        mov     word ptr [esi], bx
        inc     esi
        inc     esi
        jmp     L_1003b8b5
    L_1003b90f:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        cmp     dword ptr [ebp - 0x1c], 0x0
        pop     ecx
        pop     ecx
        jz      L_1003bf68
        cmp     byte ptr [ebp - 0x6], 0x0
        jnz     L_1003bf12
        and     word ptr [esi], 0x0
        lea     eax, [ebp + 0xfffffcfc]
        inc     dword ptr [ebp - 0x30]
        sub     esi, eax
        sar     esi, 0x1
        lea     esi, [esi + esi*0x1 + 0x2]
        push    esi
        call    FUN_1003c3c5
        mov     edi, eax
        lea     eax, [ebp + 0xfffffcfc]
        push    esi
        push    eax
        push    edi
        call    FUN_1004215d
        movsx   eax, byte ptr [ebp - 0x7]
        push    edi
        dec     eax
        push    dword ptr [ebp - 0x20]
        push    eax
        call    dword ptr [g_10051dc0]
        push    edi
        call    FUN_1003c2dc
        add     esp, 0x20
        jmp     L_1003bf12
    L_1003b97a:
        test    ecx, ecx
        jnz     L_1003b988
        inc     dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x2c], 0x1
    L_1003b988:
        cmp     byte ptr [ebp - 0x5], 0x0
        jle     L_1003b992
        mov     byte ptr [ebp - 0xd], 0x1
    L_1003b992:
        mov     edi, offset g_10051ddc
        jmp     L_1003bab1
    L_1003b99c:
        mov     eax, esi
        sub     eax, 0x70
        jz      L_1003bc4d
        sub     eax, 0x3
        jz      L_1003baa2
        dec     eax
        dec     eax
        jz      L_1003bc51
        sub     eax, 0x3
        jz      L_1003b702
        sub     eax, 0x3
        jz      L_1003b9e7
    L_1003b9c6:
        cmp     word ptr [edi], bx
        jnz     L_1003bf5a
        dec     byte ptr [ebp - 0xe]
        cmp     byte ptr [ebp - 0x6], 0x0
        jnz     L_1003bf12
        mov     eax, dword ptr [ebp - 0x48]
        mov     dword ptr [ebp + 0x10], eax
        jmp     L_1003bf12
    L_1003b9e7:
        cmp     byte ptr [ebp - 0x5], 0x0
        jle     L_1003b9f1
        mov     byte ptr [ebp - 0xd], 0x1
    L_1003b9f1:
        mov     edi, dword ptr [ebp + 0xc]
        inc     edi
        inc     edi
        mov     dword ptr [ebp + 0xc], edi
        cmp     word ptr [edi], 0x5e
        jnz     L_1003bab5
        mov     eax, edi
        lea     edi, [eax + 0x2]
        jmp     L_1003bab1
    L_1003ba0d:
        cmp     bx, 0x2b
        jnz     L_1003ba33
    L_1003ba13:
        dec     dword ptr [ebp - 0xc]
        jnz     L_1003ba22
        test    ecx, ecx
        jz      L_1003ba22
        mov     byte ptr [ebp - 0x8], 0x1
        jmp     L_1003ba33
    L_1003ba22:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
    L_1003ba33:
        cmp     bx, 0x30
        jnz     L_1003bc83
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        pop     ecx
        mov     ebx, eax
        push    0x78
        mov     dword ptr [ebp - 0x14], ebx
        pop     edi
        cmp     bx, di
        jz      L_1003ba89
        cmp     bx, 0x58
        jz      L_1003ba89
        cmp     esi, edi
        mov     dword ptr [ebp - 0x1c], 0x1
        jz      L_1003ba73
        mov     dword ptr [ebp - 0x24], 0x6f
        jmp     L_1003bc83
    L_1003ba73:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
        push    0x30
        pop     ebx
        jmp     L_1003bc80
    L_1003ba89:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0x24], edi
        jmp     L_1003bc83
    L_1003baa2:
        cmp     byte ptr [ebp - 0x5], 0x0
        jle     L_1003baac
        mov     byte ptr [ebp - 0xd], 0x1
    L_1003baac:
        mov     edi, offset g_10051dd0
    L_1003bab1:
        or      byte ptr [ebp - 0x15], 0xff
    L_1003bab5:
        push    0x2000
        lea     eax, [ebp + 0xffffdcfc]
        push    0x0
        push    eax
        call    FUN_10040680
        add     esp, 0xc
        cmp     esi, 0x7b
        jnz     L_1003bae4
        push    0x5d
        pop     eax
        cmp     word ptr [edi], ax
        jnz     L_1003bae4
        inc     edi
        mov     dword ptr [ebp - 0x28], eax
        inc     edi
        mov     byte ptr [ebp + 0xffffdd07], 0x20
    L_1003bae4:
        mov     ax, word ptr [edi]
        cmp     ax, 0x5d
        jz      L_1003bb6b
        inc     edi
        inc     edi
        cmp     ax, 0x2d
        jnz     L_1003bb4b
        cmp     word ptr [ebp - 0x28], 0x0
        jz      L_1003bb4b
        mov     cx, word ptr [edi]
        cmp     cx, 0x5d
        jz      L_1003bb4b
        inc     edi
        inc     edi
        cmp     word ptr [ebp - 0x28], cx
        jnc     L_1003bb11
        mov     eax, ecx
        jmp     L_1003bb17
    L_1003bb11:
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x28], ecx
    L_1003bb17:
        cmp     word ptr [ebp - 0x28], ax
        ja      L_1003bb45
        movzx   edx, word ptr [ebp - 0x28]
        movzx   esi, ax
        sub     esi, edx
        inc     esi
    L_1003bb27:
        mov     ecx, edx
        mov     eax, edx
        and     ecx, 0x7
        mov     bl, 0x1
        shr     eax, 0x3
        shl     bl, cl
        lea     eax, [ebp + eax*0x1 + 0xffffdcfc]
        or      byte ptr [eax], bl
        inc     edx
        dec     esi
        jnz     L_1003bb27
        mov     ebx, dword ptr [ebp - 0x14]
    L_1003bb45:
        and     dword ptr [ebp - 0x28], 0x0
        jmp     L_1003bae4
    L_1003bb4b:
        movzx   ecx, ax
        mov     dword ptr [ebp - 0x28], eax
        mov     eax, ecx
        and     ecx, 0x7
        mov     dl, 0x1
        shr     eax, 0x3
        shl     dl, cl
        lea     eax, [ebp + eax*0x1 + 0xffffdcfc]
        or      byte ptr [eax], dl
        jmp     L_1003bae4
    L_1003bb6b:
        cmp     word ptr [edi], 0x0
        jz      L_1003bf68
        cmp     dword ptr [ebp - 0x24], 0x7b
        jnz     L_1003bb7e
        mov     dword ptr [ebp + 0xc], edi
    L_1003bb7e:
        push    dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebp - 0x20]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
    L_1003bb8f:
        cmp     dword ptr [ebp - 0x2c], 0x0
        jz      L_1003bb9f
        mov     eax, dword ptr [ebp - 0xc]
        dec     dword ptr [ebp - 0xc]
        test    eax, eax
        jz      L_1003bc13
    L_1003bb9f:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        /* __emit: MSVC6 encodes cmp bx,0xffff as 66 83 FB FF (imm8 sign-extended); ref uses 66 81 FB FF FF (imm16) */
        __emit 0x66
        __emit 0x81
        __emit 0xFB
        __emit 0xFF
        __emit 0xFF
        mov     dword ptr [ebp - 0x14], ebx
        jz      L_1003bc05
        movzx   eax, bx
        mov     ecx, eax
        push    0x1
        and     ecx, 0x7
        pop     edx
        shr     eax, 0x3
        shl     edx, cl
        movsx   eax, byte ptr [ebp + eax*0x1 + 0xffffdcfc]
        movsx   ecx, byte ptr [ebp - 0x15]
        xor     eax, ecx
        /* __emit: MSVC6 swaps test operands (emits 85 C2 for test eax,edx); ref uses 85 D0 */
        __emit 0x85
        __emit 0xD0
        jz      L_1003bc05
        cmp     byte ptr [ebp - 0x6], 0x0
        jnz     L_1003bc01
        cmp     byte ptr [ebp - 0xd], 0x0
        jz      L_1003bbf1
        mov     eax, dword ptr [ebp - 0x20]
        add     dword ptr [ebp - 0x20], 0x2
        mov     word ptr [eax], bx
        jmp     L_1003bb8f
    L_1003bbf1:
        push    ebx
        push    dword ptr [ebp - 0x20]
        call    FUN_1004209b
        add     dword ptr [ebp - 0x20], eax
        pop     ecx
        pop     ecx
        jmp     L_1003bb8f
    L_1003bc01:
        inc     esi
        inc     esi
        jmp     L_1003bb8f
    L_1003bc05:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
    L_1003bc13:
        cmp     esi, dword ptr [ebp - 0x20]
        jz      L_1003bf68
        cmp     byte ptr [ebp - 0x6], 0x0
        jnz     L_1003bf12
        inc     dword ptr [ebp - 0x30]
        cmp     dword ptr [ebp - 0x24], 0x63
        jz      L_1003bf12
        cmp     byte ptr [ebp - 0xd], 0x0
        mov     eax, dword ptr [ebp - 0x20]
        jz      L_1003bc45
        and     word ptr [eax], 0x0
        jmp     L_1003bf12
    L_1003bc45:
        and     byte ptr [eax], 0x0
        jmp     L_1003bf12
    L_1003bc4d:
        mov     byte ptr [ebp - 0x7], 0x1
    L_1003bc51:
        cmp     bx, 0x2d
        jnz     L_1003bc5d
        mov     byte ptr [ebp - 0x16], 0x1
        jmp     L_1003bc63
    L_1003bc5d:
        cmp     bx, 0x2b
        jnz     L_1003bc83
    L_1003bc63:
        dec     dword ptr [ebp - 0xc]
        jnz     L_1003bc72
        test    ecx, ecx
        jz      L_1003bc72
        mov     byte ptr [ebp - 0x8], 0x1
        jmp     L_1003bc83
    L_1003bc72:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        pop     ecx
        mov     ebx, eax
    L_1003bc80:
        mov     dword ptr [ebp - 0x14], ebx
    L_1003bc83:
        cmp     dword ptr [ebp - 0x40], 0x0
        jz      L_1003be02
        cmp     byte ptr [ebp - 0x8], 0x0
        jnz     L_1003bda8
        mov     esi, dword ptr [ebp - 0x38]
        mov     edi, 0xff
    L_1003bc9f:
        cmp     dword ptr [ebp - 0x24], 0x78
        jnz     L_1003bd04
        test    bh, 0xff
        jnz     L_1003bd9a
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003bcca
        mov     eax, ebx
        push    0x80
        and     eax, edi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003bcdc
    L_1003bcca:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, edi
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x80
    L_1003bcdc:
        test    eax, eax
        jz      L_1003bd9a
        mov     edx, dword ptr [ebp - 0x34]
        push    0x4
        pop     ecx
        mov     eax, esi
        call    FUN_10042470
        push    ebx
        mov     esi, eax
        mov     dword ptr [ebp - 0x34], edx
        call    FUN_1003bf84
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        jmp     L_1003bd67
    L_1003bd04:
        test    bh, 0xff
        jnz     L_1003bd9a
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003bd26
        mov     eax, ebx
        push    0x4
        and     eax, edi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003bd36
    L_1003bd26:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, edi
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003bd36:
        test    eax, eax
        jz      L_1003bd9a
        cmp     dword ptr [ebp - 0x24], 0x6f
        jnz     L_1003bd55
        cmp     bx, 0x38
        jnc     L_1003bd9a
        mov     edx, dword ptr [ebp - 0x34]
        push    0x3
        pop     ecx
        mov     eax, esi
        call    FUN_10042470
        jmp     L_1003bd62
    L_1003bd55:
        push    0x0
        push    0xa
        push    dword ptr [ebp - 0x34]
        push    esi
        call    FUN_10039a50
    L_1003bd62:
        mov     esi, eax
        mov     dword ptr [ebp - 0x34], edx
    L_1003bd67:
        inc     dword ptr [ebp - 0x1c]
        movzx   eax, bx
        sub     eax, 0x30
        cdq
        add     esi, eax
        adc     dword ptr [ebp - 0x34], edx
        cmp     dword ptr [ebp - 0x2c], 0x0
        mov     dword ptr [ebp - 0x38], esi
        jz      L_1003bd84
        dec     dword ptr [ebp - 0xc]
        jz      L_1003bda8
    L_1003bd84:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        jmp     L_1003bc9f
    L_1003bd9a:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
    L_1003bda8:
        cmp     byte ptr [ebp - 0x16], 0x0
        jz      L_1003bdc1
        mov     eax, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x34]
        neg     eax
        adc     ecx, 0x0
        mov     dword ptr [ebp - 0x38], eax
        neg     ecx
        mov     dword ptr [ebp - 0x34], ecx
    L_1003bdc1:
        mov     esi, dword ptr [ebp - 0x44]
    L_1003bdc4:
        cmp     dword ptr [ebp - 0x24], 0x46
        jnz     L_1003bdce
        and     dword ptr [ebp - 0x1c], 0x0
    L_1003bdce:
        cmp     dword ptr [ebp - 0x1c], 0x0
        jz      L_1003bf68
        cmp     byte ptr [ebp - 0x6], 0x0
        jnz     L_1003bf12
        inc     dword ptr [ebp - 0x30]
    L_1003bde5:
        cmp     dword ptr [ebp - 0x40], 0x0
        jz      L_1003bf02
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x38]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x34]
        mov     dword ptr [eax + 0x4], ecx
        jmp     L_1003bf12
    L_1003be02:
        cmp     byte ptr [ebp - 0x8], 0x0
        mov     esi, dword ptr [ebp - 0x44]
        jnz     L_1003bef1
        mov     edi, 0xff
    L_1003be14:
        cmp     dword ptr [ebp - 0x24], 0x78
        jz      L_1003be72
        cmp     dword ptr [ebp - 0x24], 0x70
        jz      L_1003be72
        test    bh, 0xff
        jnz     L_1003bee3
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003be42
        mov     eax, ebx
        push    0x4
        and     eax, edi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003be52
    L_1003be42:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, edi
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x4
    L_1003be52:
        test    eax, eax
        jz      L_1003bee3
        cmp     dword ptr [ebp - 0x24], 0x6f
        jnz     L_1003be6b
        cmp     bx, 0x38
        jnc     L_1003bee3
        shl     esi, 0x3
        jmp     L_1003beb8
    L_1003be6b:
        lea     esi, [esi + esi*0x4]
        shl     esi, 0x1
        jmp     L_1003beb8
    L_1003be72:
        test    bh, 0xff
        jnz     L_1003bee3
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003be93
        mov     eax, ebx
        push    0x80
        and     eax, edi
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003bea5
    L_1003be93:
        mov     ecx, dword ptr [g_10051984]
        mov     eax, ebx
        and     eax, edi
        mov     al, byte ptr [ecx + eax*0x2]
        and     eax, 0x80
    L_1003bea5:
        test    eax, eax
        jz      L_1003bee3
        push    ebx
        shl     esi, 0x4
        call    FUN_1003bf84
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
    L_1003beb8:
        inc     dword ptr [ebp - 0x1c]
        cmp     dword ptr [ebp - 0x2c], 0x0
        movzx   eax, bx
        lea     esi, [esi + eax*0x1 + -0x30]
        jz      L_1003becd
        dec     dword ptr [ebp - 0xc]
        jz      L_1003bef1
    L_1003becd:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        pop     ecx
        mov     dword ptr [ebp - 0x14], ebx
        jmp     L_1003be14
    L_1003bee3:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
    L_1003bef1:
        cmp     byte ptr [ebp - 0x16], 0x0
        jz      L_1003bdc4
        neg     esi
        jmp     L_1003bdc4
    L_1003bf02:
        cmp     byte ptr [ebp - 0x7], 0x0
        mov     eax, dword ptr [ebp - 0x20]
        jz      L_1003bf0f
        mov     dword ptr [eax], esi
        jmp     L_1003bf12
    L_1003bf0f:
        mov     word ptr [eax], si
    L_1003bf12:
        mov     edi, dword ptr [ebp + 0xc]
        inc     byte ptr [ebp - 0xe]
        inc     edi
        inc     edi
        jmp     L_1003bf37
    L_1003bf1c:
        push    dword ptr [ebp + 0x8]
        inc     dword ptr [ebp - 0x4]
        call    FUN_1003bfde
        mov     ebx, eax
        mov     ax, word ptr [edi]
        inc     edi
        pop     ecx
        inc     edi
        cmp     ax, bx
        mov     dword ptr [ebp - 0x14], ebx
        jnz     L_1003bf5a
    L_1003bf37:
        movzx   eax, bx
        cmp     eax, -0x1
        jnz     L_1003bf4c
        cmp     word ptr [edi], 0x25
        jnz     L_1003bf68
        cmp     word ptr [edi + 0x2], 0x6e
        jnz     L_1003bf68
    L_1003bf4c:
        mov     ax, word ptr [edi]
        test    ax, ax
        jnz     L_1003b4e5
        jmp     L_1003bf68
    L_1003bf5a:
        push    dword ptr [ebp + 0x8]
        dec     dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1003bfe9
        pop     ecx
        pop     ecx
    L_1003bf68:
        movzx   eax, bx
        pop     edi
        pop     esi
        cmp     eax, -0x1
        mov     eax, dword ptr [ebp - 0x30]
        pop     ebx
        jnz     L_1003bf82
        test    eax, eax
        jnz     L_1003bf82
        cmp     byte ptr [ebp - 0xe], al
        jnz     L_1003bf82
        or      eax, 0xffffffff
    L_1003bf82:
        leave
        ret
    }
}
