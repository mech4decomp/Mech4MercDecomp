/*
 * FUN_00730990 (2853 B) — Large message/command handler.
 *
 * Dispatches on a message id (EAX = param - 0x110). Handles a wide range
 * of window/input/display commands including file-mapping setup, string
 * formatting, and message-box prompts.
 *
 * __stdcall, RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b43c;
extern void *g_0076b25c;
extern void *g_0076b0e8;
extern void *g_0076b0e4;
extern void *g_0076b0ec;
extern void *g_0076b294;
extern void *g_0076b2f8;
extern void *g_0076b258;
extern void *g_0076b194;
extern void *g_0076b2d0;
extern void *g_0076b598;
extern void *g_0076b0c0;
extern void *g_0076b0c8;
extern void *g_0076b370;
extern void *g_0076b4f8;
extern void *g_0076b0b8;
extern void *g_0076b570;
extern void *g_0076b5a4;
extern void *g_0076b494;
extern void *g_0076b51c;
extern void *g_0076b528;
extern void *g_0076b544;
extern void *g_0076b478;

/* Data symbols */
extern unsigned long g_008a9860;
extern char          g_008a9863;
extern unsigned long g_00849eb0;
extern unsigned long g_008a9868;
extern char          g_008a9864;
extern unsigned long g_0085b4a0;
extern char          g_008a9862;
extern unsigned long g_008a985c;
extern unsigned long g_00898f38;
extern unsigned long g_00898f3c;
extern unsigned long g_00898f44;
extern unsigned long g_00898f48;
extern unsigned long g_00898f4c;
extern unsigned long g_00898f50;
extern unsigned long g_00898f54;
extern unsigned long g_00898f58;
extern unsigned long g_00898f5c;
extern unsigned long g_00898f60;
extern unsigned long g_00898f64;
extern unsigned long g_00898f68;
extern unsigned short g_00898f70;
extern unsigned short g_00898f72;
extern unsigned long g_00898f74;
extern unsigned long g_00898f6c;
extern char          g_00898720;
extern unsigned long g_008589e0;
extern unsigned long g_0089870c;
extern unsigned long g_00898714;
extern unsigned long g_00898708;
extern unsigned long g_0089871c;
extern unsigned long g_00898718;
extern unsigned long g_00898710;
extern unsigned long g_00898700;
extern unsigned long g_008986fc;
extern unsigned long g_008986f4;
extern unsigned long g_00858924;
extern unsigned long g_008986f8;
extern unsigned long g_008986f0;
extern unsigned long g_008986e8;
extern unsigned long g_008589dc;
extern unsigned long g_00858920;
extern unsigned long g_0087dbf4;
extern unsigned long g_0087dbfc;
extern char          g_0087dc00;
extern unsigned long g_00859278;
extern unsigned long g_0087dbf8;
extern unsigned long g_008498b4;

/* Direct callees */
extern int  __cdecl FUN_0070dd00(void *a);
extern void __cdecl FUN_0071dc90(void *a);
extern void *__cdecl FUN_007218c0(void *a);
extern void __cdecl FUN_0075af00(void);
extern void *__cdecl FUN_00731520(void *a);
extern void __cdecl FUN_007596c0(void);
extern void __cdecl FUN_0075dbbe(void *a);
extern void __cdecl FUN_0075a900(void);
extern int  __cdecl FUN_00759b40(void *a);
extern void *__cdecl FUN_0072fc00(void *a);
extern void __cdecl FUN_00759cd0(void);
extern void *__cdecl FUN_0071f230(void);
extern void *__cdecl FUN_0075ac80(void);
extern int  __cdecl FUN_00759e60(void *a);
extern int  __cdecl FUN_0075a020(void *a);
extern int  __cdecl FUN_0075a950(void *a);
extern int  __cdecl FUN_0075a250(void *a);
extern void *__cdecl FUN_007599f0(void *a);
extern void *__cdecl FUN_00731640(int a, void *b, int c);
extern void *__cdecl FUN_00708a60(void *a, void *b, int c);

__declspec(naked) void __stdcall FUN_00730990(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        sub     eax, 0x110
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_731379
        dec     eax
        jnz     L_7314ab
        mov     esi, dword ptr [esp + 0x20]
        cmp     si, 1
        jnz     L_7309c7
        mov     eax, dword ptr [g_008a9860]
        and     esi, 0xffff0000
        and     eax, 0xffff
        add     esi, eax
L_7309c7:
        cmp     si, 0x3e8
        jnz     L_730d7b
        mov     ebp, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [g_0076b43c]
        push    0
        push    0
        push    0xf0
        push    0x3ed
        push    ebp
        call    ebx
        dec     eax
        neg     eax
        sbb     al, al
        inc     al
        mov     byte ptr [g_008a9863], al
        mov     dword ptr [esp + 0x20], 0
        jz      L_730ab1
        mov     eax, dword ptr [g_00849eb0]
        test    eax, eax
        jz      L_730ab1
        push    0x899190
        push    0x104
        call    dword ptr [g_0076b25c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6098
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x899190
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        push    eax
        dec     edi
        rep     movsd
        push    0x8000080
        push    2
        push    eax
        push    eax
        mov     ecx, edx
        push    0x40000000
        and     ecx, 3
        push    0x899190
        rep     movsb
        call    dword ptr [g_0076b0e8]
        mov     esi, eax
        cmp     esi, -1
        jz      L_730ab1
        mov     ecx, dword ptr [g_008a9868]
        mov     edx, dword ptr [g_00849eb0]
        push    0
        lea     eax, [esp + 0x20]
        push    eax
        push    ecx
        push    edx
        push    esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b0ec]
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [g_008a9868]
        jnz     L_730ab1
        mov     dword ptr [esp + 0x20], 0x899190
L_730ab1:
        push    0
        push    0
        push    0xf0
        push    0x3ee
        push    ebp
        call    ebx
        dec     eax
        neg     eax
        sbb     al, al
        inc     al
        mov     byte ptr [g_008a9864], al
        mov     dword ptr [esp + 0x1c], 0
        jz      L_730b34
        mov     eax, dword ptr [g_0085b4a0]
        test    eax, eax
        jnz     L_730b34
        push    0x89908c
        push    0x104
        call    dword ptr [g_0076b25c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a608c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x89908c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x89908c
        rep     movsb
        call    FUN_0070dd00
        test    al, al
        jz      L_730b34
        mov     dword ptr [esp + 0x1c], 0x89908c
L_730b34:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_0071dc90
        push    0x80
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [g_0076b294]
        mov     ecx, 0x7a6084
        add     esp, 4
        mov     ebx, eax
        xor     ebp, ebp
        test    ecx, ecx
        mov     byte ptr [ebx], 0
        jz      L_730b98
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        inc     ebp
        cmp     ebp, 0x80
        jle     L_730b7c
        mov     ebp, 0x80
L_730b7c:
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, 0x7a6084
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        dec     ebp
        rep     movsb
        mov     byte ptr [ebx + ebp], 0
L_730b98:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_007218c0
        mov     esi, eax
        test    esi, esi
        jz      L_730bd4
        mov     cl, byte ptr [esi]
        xor     edx, edx
        test    cl, cl
        jz      L_730bc3
L_730bb0:
        cmp     cl, 0xd
        jz      L_730bc3
        cmp     cl, 0xa
        jz      L_730bc3
        mov     cl, byte ptr [edx + esi + 1]
        inc     edx
        test    cl, cl
        jnz     L_730bb0
L_730bc3:
        push    edx
        push    esi
        push    ebx
        call    dword ptr [g_0076b2f8]
        add     esp, 0xc
        jmp     L_730cf4
L_730bd4:
        mov     esi, dword ptr [g_0087dbf8]
        test    esi, esi
        jz      L_730c1a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [eax + ebp]
        cmp     ecx, 0x80
        jle     L_730bff
        mov     eax, 0x80
        sub     eax, ebp
L_730bff:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [ebx + ebp]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        lea     ebp, [eax + ebp - 1]
        rep     movsb
        mov     byte ptr [ebx + ebp], 0
L_730c1a:
        mov     eax, 0x78852c
        test    eax, eax
        jz      L_730c64
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [eax + ebp]
        cmp     ecx, 0x80
        jle     L_730c44
        mov     eax, 0x80
        sub     eax, ebp
L_730c44:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [ebx + ebp]
        mov     esi, 0x78852c
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        lea     ebp, [eax + ebp - 1]
        rep     movsb
        mov     byte ptr [ebx + ebp], 0
L_730c64:
        mov     esi, dword ptr [g_008498b4]
        test    esi, esi
        jz      L_730caa
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [eax + ebp]
        cmp     ecx, 0x80
        jle     L_730c8f
        mov     eax, 0x80
        sub     eax, ebp
L_730c8f:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [ebx + ebp]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        lea     ebp, [eax + ebp - 1]
        rep     movsb
        mov     byte ptr [ebx + ebp], 0
L_730caa:
        mov     eax, 0x77e7d8
        test    eax, eax
        jz      L_730cf4
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [eax + ebp]
        cmp     ecx, 0x80
        jle     L_730cd4
        mov     eax, 0x80
        sub     eax, ebp
L_730cd4:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [ebx + ebp]
        mov     esi, 0x77e7d8
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        lea     ebp, [eax + ebp - 1]
        rep     movsb
        mov     byte ptr [ebx + ebp], 0
L_730cf4:
        push    0x898f84
        push    0x104
        call    dword ptr [g_0076b258]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        push    ebx
        push    edx
        call    FUN_0075af00
        push    0x898f84
        mov     esi, eax
        call    dword ptr [g_0076b194]
        push    edi
        mov     edi, dword ptr [g_0076b2d0]
        call    edi
        add     esp, 4
        test    esi, esi
        jz      L_730d61
        mov     eax, dword ptr [esp + 0x18]
        push    0
        push    0x7a6074
        push    esi
        push    eax
        call    dword ptr [g_0076b598]
        push    ebx
        call    edi
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_730d61:
        push    ebx
        mov     byte ptr [g_008a9862], 1
        call    edi
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_730d7b:
        cmp     si, 0x3ea
        jnz     L_7310aa
        push    0x7a1c6c
        call    dword ptr [g_0076b0c0]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jnz     L_730da8
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_730da8:
        push    0x7a6060
        push    eax
        call    dword ptr [g_0076b0c8]
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [g_0076b43c]
        push    ebx
        push    ebx
        push    0xf0
        push    0x3ed
        push    esi
        mov     dword ptr [g_008a985c], eax
        call    edi
        push    ebx
        dec     eax
        push    ebx
        neg     eax
        push    0xf0
        sbb     al, al
        push    0x3ee
        inc     al
        push    esi
        mov     byte ptr [g_008a9863], al
        call    edi
        mov     cl, byte ptr [g_008a9863]
        mov     edx, dword ptr [g_0085b4a0]
        dec     eax
        neg     eax
        sbb     al, al
        inc     al
        test    cl, cl
        mov     byte ptr [g_008a9864], al
        mov     dword ptr [g_00898f38], 0x4c
        mov     dword ptr [g_00898f3c], esi
        jz      L_730e47
        mov     ecx, dword ptr [g_00849eb0]
        cmp     ecx, ebx
        jz      L_730e47
        test    al, al
        jz      L_730e37
        cmp     edx, ebx
        jnz     L_730e37
        mov     dword ptr [g_00898f44], 0x7a6024
        jmp     L_730e63
L_730e37:
        cmp     ecx, ebx
        jz      L_730e47
        mov     dword ptr [g_00898f44], 0x7a5ff0
        jmp     L_730e63
L_730e47:
        test    al, al
        jz      L_730e59
        cmp     edx, ebx
        mov     dword ptr [g_00898f44], 0x7a5fc0
        jz      L_730e63
L_730e59:
        mov     dword ptr [g_00898f44], 0x7a5fa0
L_730e63:
        push    0x898f38
        mov     dword ptr [g_00898f48], ebx
        mov     dword ptr [g_00898f4c], ebx
        mov     dword ptr [g_00898f50], ebx
        mov     dword ptr [g_00898f54], 0x8a9870
        mov     dword ptr [g_00898f58], 0x104
        mov     dword ptr [g_00898f5c], ebx
        mov     dword ptr [g_00898f60], ebx
        mov     dword ptr [g_00898f64], ebx
        mov     dword ptr [g_00898f68], 0x7a5f88
        mov     word ptr [g_00898f70], bx
        mov     word ptr [g_00898f72], bx
        mov     dword ptr [g_00898f74], 0x7a5f84
        mov     dword ptr [g_00898f6c], 0x28080e
        call    dword ptr [g_008a985c]
        test    eax, eax
        jz      L_73136c
        mov     ecx, dword ptr [g_00898f54]
        push    ebx
        push    0x8000080
        push    2
        push    ebx
        push    ebx
        push    0x40000000
        push    ecx
        mov     byte ptr [esp + 0x38], 0
        mov     dword ptr [esp + 0x3c], ebx
        call    dword ptr [g_0076b0e8]
        mov     ebp, eax
        cmp     ebp, -1
        jz      L_730f53
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_0071dc90
        mov     ebx, eax
        push    ebx
        call    FUN_00731520
        mov     esi, eax
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        push    eax
        not     ecx
        dec     ecx
        lea     eax, [esp + 0x24]
        push    eax
        mov     edi, ecx
        push    edi
        push    esi
        push    ebp
        call    dword ptr [g_0076b0e4]
        push    esi
        mov     esi, dword ptr [g_0076b2d0]
        call    esi
        push    ebx
        call    esi
        add     esp, 8
        push    ebp
        call    dword ptr [g_0076b0ec]
        cmp     dword ptr [esp + 0x20], edi
        jz      L_730f58
L_730f53:
        mov     byte ptr [esp + 0x1c], 1
L_730f58:
        mov     al, byte ptr [g_008a9863]
        test    al, al
        mov     edi, dword ptr [g_0076b370]
        mov     ebx, dword ptr [g_0076b4f8]
        jz      L_731010
        mov     eax, dword ptr [g_00849eb0]
        test    eax, eax
        jz      L_731010
        mov     ecx, dword ptr [g_00898f54]
        push    0x898e34
        push    0x898d34
        push    0x898c34
        push    0x898c30
        push    ecx
        call    edi
        push    0x898d34
        push    0x898c34
        push    0x898c30
        push    0x7a5f78
        push    0x898b2c
        call    ebx
        add     esp, 0x28
        push    0
        push    0x8000080
        push    2
        push    0
        push    0
        push    0x40000000
        push    0x898b2c
        call    dword ptr [g_0076b0e8]
        mov     esi, eax
        cmp     esi, -1
        jz      L_73100b
        mov     eax, dword ptr [g_008a9868]
        mov     ecx, dword ptr [g_00849eb0]
        push    0
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        push    ecx
        push    esi
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b0ec]
        mov     edx, dword ptr [esp + 0x20]
        cmp     edx, dword ptr [g_008a9868]
        jz      L_731010
L_73100b:
        mov     byte ptr [esp + 0x1c], 1
L_731010:
        mov     al, byte ptr [g_008a9864]
        test    al, al
        jz      L_73106f
        mov     eax, dword ptr [g_0085b4a0]
        test    eax, eax
        jnz     L_73106f
        mov     eax, dword ptr [g_00898f54]
        push    0x898a2c
        push    0x89892c
        push    0x89882c
        push    0x898828
        push    eax
        call    edi
        push    0x89892c
        push    0x89882c
        push    0x898828
        push    0x7a5f6c
        push    0x898724
        call    ebx
        add     esp, 0x28
        push    0x898724
        call    FUN_0070dd00
        test    al, al
        jnz     L_73106f
        mov     byte ptr [esp + 0x1c], 1
L_73106f:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    dword ptr [g_0076b0b8]
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jz      L_73128c
        mov     edx, dword ptr [esp + 0x18]
        push    0
        push    0x7a5f58
        push    0x7a5f44
        push    edx
        call    dword ptr [g_0076b598]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_7310aa:
        cmp     si, 0x3f0
        jnz     L_7312a0
        mov     al, byte ptr [g_00898720]
        test    al, 1
        jnz     L_7310e0
        mov     dl, al
        or      dl, 1
        mov     ecx, 0x8986e8
        mov     byte ptr [g_00898720], dl
        call    FUN_007596c0
        push    0x7314d0
        call    FUN_0075dbbe
        add     esp, 4
L_7310e0:
        mov     al, byte ptr [g_00898720]
        test    al, 2
        jnz     L_73110b
        mov     dl, al
        or      dl, 2
        mov     ecx, 0x897dc8
        mov     byte ptr [g_00898720], dl
        call    FUN_0075a900
        push    0x7314c0
        call    FUN_0075dbbe
        add     esp, 4
L_73110b:
        mov     eax, dword ptr [g_008589e0]
        push    eax
        mov     ecx, 0x897dc8
        call    FUN_00759b40
        test    al, al
        mov     ebp, dword ptr [esp + 0x18]
        jz      L_73125b
        push    ebp
        call    FUN_0072fc00
        mov     edx, eax
        test    edx, edx
        jnz     L_73114a
        mov     ecx, 0x897dc8
        call    FUN_00759cd0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_73114a:
        mov     edi, dword ptr [edx]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x897cc8
        rep     movsd
        mov     ebx, 3
        mov     ecx, eax
        and     ecx, ebx
        rep     movsb
        mov     edi, dword ptr [edx + 4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x8974c8
        rep     movsd
        mov     ecx, edx
        and     ecx, ebx
        rep     movsb
        mov     dword ptr [g_0089870c], 1
        mov     dword ptr [g_00898714], 2
        mov     dword ptr [g_00898708], eax
        mov     dword ptr [g_0089871c], ebx
        mov     dword ptr [g_00898718], ebx
        mov     dword ptr [g_00898710], 5
        mov     dword ptr [g_00898700], 0x779d48
        call    FUN_0071f230
        mov     dword ptr [g_008986fc], eax
        mov     dword ptr [g_008986f4], eax
        mov     eax, dword ptr [g_00858924]
        mov     dword ptr [g_008986f8], eax
        call    FUN_0075ac80
        push    0x8986e8
        mov     ecx, 0x897dc8
        mov     dword ptr [g_008986f0], eax
        mov     dword ptr [g_008986e8], 0x897cc8
        call    FUN_00759e60
        test    al, al
        jz      L_73125b
        mov     ecx, dword ptr [g_008589dc]
        push    ecx
        mov     ecx, 0x897dc8
        call    FUN_0075a020
        test    al, al
        jz      L_73125b
        push    0x8974c8
        mov     ecx, 0x897dc8
        call    FUN_0075a950
        test    al, al
        jz      L_73125b
        push    0x896cc8
        mov     ecx, 0x897dc8
        call    FUN_0075a250
        test    al, al
        jz      L_73125b
        mov     edx, dword ptr [g_00858920]
        push    0
        push    edx
        push    0x896cc8
        push    ebp
        call    dword ptr [g_0076b598]
L_73125b:
        mov     ecx, 0x897dc8
        call    FUN_00759cd0
        mov     ecx, 0x897dc8
        call    FUN_007599f0
        test    eax, eax
        jz      L_73128c
        push    0x30
        push    0x7a5f1c
        mov     ecx, 0x897dc8
        call    FUN_007599f0
        push    eax
        push    ebp
        call    dword ptr [g_0076b598]
L_73128c:
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_008a9862], 1
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_7312a0:
        cmp     si, 0x3eb
        jz      L_7312c5
        cmp     si, 3
        jz      L_7312c5
        cmp     si, 0x3f1
        jz      L_7312c5
        cmp     si, 4
        jz      L_7312c5
        cmp     si, 0x3ec
        jnz     L_73136c
L_7312c5:
        mov     al, byte ptr [g_008a9862]
        test    al, al
        mov     edi, dword ptr [esp + 0x18]
        jnz     L_731317
        push    edi
        call    FUN_007218c0
        test    eax, eax
        jz      L_731317
        push    4
        push    0x76cc28
        push    0x9e
        call    FUN_00731640
        push    eax
        push    0x7a5ef8
        push    0x9d
        call    FUN_00731640
        push    eax
        push    edi
        call    dword ptr [g_0076b598]
        cmp     eax, 7
        jnz     L_731317
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_731317:
        mov     ebx, dword ptr [g_0076b43c]
        push    0
        push    0
        push    0xf0
        push    0x3ed
        push    edi
        call    ebx
        push    0
        dec     eax
        push    0
        neg     eax
        push    0xf0
        sbb     al, al
        push    0x3ee
        inc     al
        push    edi
        mov     byte ptr [g_008a9863], al
        call    ebx
        dec     eax
        neg     eax
        sbb     al, al
        push    0
        inc     al
        and     esi, 0xffff
        push    edi
        mov     byte ptr [g_008a9864], al
        mov     dword ptr [g_0087dbfc], esi
        call    dword ptr [g_0076b570]
L_73136c:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     0x10
L_731379:
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [g_0076b5a4]
        push    0x3ea
        push    esi
        call    ebx
        push    eax
        call    dword ptr [g_0076b494]
        push    0x7a5e94
        push    esi
        mov     byte ptr [g_008a9862], 0
        call    dword ptr [g_0076b51c]
        lea     eax, [esp + 0x18]
        push    eax
        push    1
        push    0xcb
        push    0x3e9
        push    esi
        mov     dword ptr [esp + 0x2c], 0x14
        call    dword ptr [g_0076b43c]
        mov     edx, dword ptr [g_0087dbf4]
        mov     cl, byte ptr [edx]
        test    cl, cl
        mov     eax, 0x899294
        jz      L_7313f4
L_7313d6:
        cmp     cl, 0xa
        jnz     L_7313e3
        mov     byte ptr [eax], 0xd
        inc     eax
        mov     byte ptr [eax], cl
        jmp     L_7313e5
L_7313e3:
        mov     byte ptr [eax], cl
L_7313e5:
        inc     eax
        inc     edx
        cmp     eax, 0x8a9290
        jnc     L_7313f4
        mov     cl, byte ptr [edx]
        test    cl, cl
        jnz     L_7313d6
L_7313f4:
        mov     edi, dword ptr [g_0076b528]
        push    0x899294
        push    0x3e9
        push    esi
        mov     byte ptr [eax], 0
        call    edi
        push    0x87cf30
        push    0x3ef
        push    esi
        call    edi
        test    byte ptr [g_0087dc00], 1
        mov     edi, dword ptr [g_0076b544]
        jz      L_73143a
        push    0
        push    3
        push    esi
        call    ebx
        push    eax
        call    edi
        push    0
        push    4
        push    esi
        call    ebx
        push    eax
        call    edi
L_73143a:
        mov     eax, dword ptr [g_0087dc00]
        test    ah, 8
        jz      L_73144e
        push    0
        push    4
        push    esi
        call    ebx
        push    eax
        call    edi
L_73144e:
        push    1
        push    0x7a5ef0
        push    0x7a5ec0
        call    FUN_00708a60
        push    0x3f
        mov     ebp, eax
        call    dword ptr [g_0076b478]
        test    al, 1
        jz      L_73147b
        test    ebp, ebp
        jz      L_73147b
        cmp     byte ptr [ebp], 0x31
        jnz     L_73147b
        push    1
        jmp     L_73147d
L_73147b:
        push    0
L_73147d:
        push    0x3e8
        push    esi
        call    ebx
        push    eax
        call    edi
        push    0
        push    0x3f0
        push    esi
        call    ebx
        push    eax
        call    edi
        mov     eax, dword ptr [g_00859278]
        test    eax, eax
        jz      L_7314ab
        push    0
        push    0x3f1
        push    esi
        call    ebx
        push    eax
        call    edi
L_7314ab:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
