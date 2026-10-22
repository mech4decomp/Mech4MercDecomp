/*
 * FUN_006e7840 (2682 B) — Dialog initialization (WM_INITDIALOG-style) handler.
 * Sets up a large options/display dialog: copies a string into a heap buffer,
 * initializes several controls via GetDlgItem/SendMessageA, reads a bunch of
 * config values (FUN_00512ff0 / FUN_00513e60), and fills a resolution list
 * (via _itoa) into a combo box. Uses the log/FLT subsystem helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7dcc;          /* 0x007b7dcc */
extern int g_007b7dd0;          /* 0x007b7dd0 */
extern int g_008589cc;          /* 0x008589cc */
extern int g_00841768;          /* 0x00841768 */
extern int g_007b693c;          /* 0x007b693c (array) */
extern int g_007b6960;          /* 0x007b6960 (array) */
extern char g_007ddd2c;         /* 0x007ddd2c (byte) */
extern int g_007b4674;          /* 0x007b4674 */
extern int g_008589b4;          /* 0x008589b4 */
extern int g_007b21c4;          /* 0x007b21c4 */

extern char g_0079ed6c[];       /* 0x0079ed6c */
extern char g_0079ed68[];       /* 0x0079ed68 */
extern char g_0079ed64[];       /* 0x0079ed64 */
extern char g_0079ed60[];       /* 0x0079ed60 */
extern char g_0079ed5c[];       /* 0x0079ed5c */
extern char g_0079ed58[];       /* 0x0079ed58 */
extern char g_0079ed54[];       /* 0x0079ed54 */

extern void *g_76b528;          /* IAT: SetDlgItemTextA */
extern void *g_76b5a4;          /* IAT: GetDlgItem */
extern void *g_76b560;          /* IAT: SendMessageA */
extern void *g_76b544;          /* IAT: EnableWindow */
extern void *g_76b2d4;          /* IAT: _itoa */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00404ac0(void);
extern void __cdecl FUN_00402d70(void);
extern void __cdecl FUN_00402e60(void);
extern void __cdecl FUN_006e8470(void);
extern void __cdecl FUN_0051e8a0(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00512510(void);
extern void __cdecl FUN_00513e60(void);

__declspec(naked) void FUN_006e7840(void)
{
    __asm {
        mov     eax, dword ptr [g_007b7dcc]
        sub     esp, 0x34
        test    eax, eax
        jz      L785c
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7dcc], 0
L785c:
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     edi, dword ptr [g_008589cc]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        push    0
        mov     ecx, eax
        push    0
        and     ecx, 3
        push    0
        mov     dword ptr [g_007b7dcc], edx
        rep     movsb
        call    FUN_00404ac0
        push    0
        push    0
        push    0
        call    FUN_00402d70
        push    0
        push    0
        push    0
        call    FUN_00402e60
        mov     ecx, dword ptr [g_007b7dd0]
        mov     esi, dword ptr [esp + 0x48]
        push    ecx
        push    0x3ef
        push    esi
        call    dword ptr [g_76b528]
        mov     edi, dword ptr [g_76b5a4]
        push    0
        push    0x18
        push    0xc5
        push    0x3ef
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    eax
        call    ebx
        push    0
        push    0x10
        push    0xc5
        push    0x3f1
        push    esi
        call    edi
        push    eax
        call    ebx
        push    esi
        call    FUN_006e8470
        add     esp, 4
        push    0
        push    0
        lea     edx, [esp + 0x18]
        lea     eax, [esp + 0x24]
        push    0
        mov     dword ptr [esp + 0x1c], 0x28
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_0051e8a0
        cmp     eax, 1
        push    0
        jnz     L793a
        push    0
        jmp     L794f
L793a:
        lea     ecx, [esp + 0x24]
        push    ecx
        push    1
        push    0
        call    FUN_00512ff0
        neg     eax
        sbb     eax, eax
        neg     eax
        push    eax
L794f:
        push    0xf1
        push    0x3f3
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    0
        push    0x14b
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
        push    offset g_0079ed6c
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        push    offset g_0079ed68
        lea     ecx, [esp + 0x30]
        call    FUN_00412570
        push    offset g_0079ed64
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        push    offset g_0079ed60
        lea     ecx, [esp + 0x38]
        call    FUN_00412570
        push    offset g_0079ed5c
        lea     ecx, [esp + 0x3c]
        call    FUN_00412570
        push    offset g_0079ed58
        lea     ecx, [esp + 0x40]
        call    FUN_00412570
        push    offset g_0079ed54
        lea     ecx, [esp + 0x44]
        call    FUN_00412570
        lea     edx, [esp + 0x28]
        xor     ebp, ebp
        mov     dword ptr [esp + 0x48], edx
L79df:
        mov     eax, dword ptr [g_00841768]
        push    0x4d8
        push    eax
        call    FUN_0072d830
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    ebp
        push    0x14a
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L7a31
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7a31
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7a31:
        mov     ecx, dword ptr [esp + 0x48]
        inc     ebp
        add     ecx, 4
        cmp     ebp, 7
        mov     dword ptr [esp + 0x48], ecx
        jl      L79df
        mov     ecx, dword ptr [g_00841768]
        push    0x89c
        push    ecx
        call    FUN_0072d830
        push    eax
        push    7
        push    0x14a
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    7
        push    0x14e
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 4
        call    FUN_00512ff0
        test    eax, eax
        jz      L7ad6
        lea     eax, [esp + 0x20]
        push    eax
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 5
        call    FUN_00512ff0
        xor     edx, edx
        mov     ecx, 0x7b693c
L7ab1:
        cmp     dword ptr [ecx], eax
        jge     L7ac3
        add     ecx, 4
        inc     edx
        cmp     ecx, 0x7b6958
        jl      L7ab1
        jmp     L7ad6
L7ac3:
        push    0
        push    edx
        push    0x14e
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
L7ad6:
        lea     ecx, [esp + 0x20]
        push    ecx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 3
        call    FUN_00512ff0
        xor     edx, edx
        test    eax, eax
        setnz   dl
        push    0
        mov     ebp, edx
        push    ebp
        push    0xf1
        push    0x3f4
        push    esi
        call    edi
        push    eax
        call    ebx
        push    ebp
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        push    0
        push    1
        push    0xf1
        push    0x3f8
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    0
        push    0x14b
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [g_00841768]
        push    0x4da
        push    eax
        call    FUN_0072d830
        push    offset g_0079ed58
        lea     ecx, [esp + 0x4c]
        mov     ebp, eax
        call    FUN_00412570
        mov     ecx, dword ptr [eax]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L7b88
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7b88
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7b88:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    0
        push    0x14a
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [g_00841768]
        push    0x4d8
        push    eax
        call    FUN_0072d830
        push    offset g_0079ed6c
        lea     ecx, [esp + 0x1c]
        mov     ebp, eax
        call    FUN_00412570
        mov     ecx, dword ptr [eax]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004125e0
        lea     edx, [esp + 0x48]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L7bf5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7bf5
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7bf5:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L7c10
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7c10
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7c10:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    1
        push    0x14a
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_00841768]
        push    0x4d8
        push    ecx
        call    FUN_0072d830
        push    offset g_0079ed68
        lea     ecx, [esp + 0x1c]
        mov     ebp, eax
        call    FUN_00412570
        mov     edx, dword ptr [eax]
        push    ebp
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004125e0
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L7c7e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7c7e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7c7e:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L7c99
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7c99
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7c99:
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    2
        push    0x14a
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     edx, dword ptr [g_00841768]
        push    0x4d8
        push    edx
        call    FUN_0072d830
        push    offset g_0079ed64
        lea     ecx, [esp + 0x1c]
        mov     ebp, eax
        call    FUN_00412570
        mov     eax, dword ptr [eax]
        push    ebp
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_004125e0
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L7d07
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7d07
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7d07:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L7d22
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7d22
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7d22:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    3
        push    0x14a
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [g_00841768]
        push    0x4d8
        push    eax
        call    FUN_0072d830
        push    offset g_0079ed60
        lea     ecx, [esp + 0x1c]
        mov     ebp, eax
        call    FUN_00412570
        mov     ecx, dword ptr [eax]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004125e0
        lea     edx, [esp + 0x48]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L7d8f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7d8f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7d8f:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L7daa
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L7daa
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7daa:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    4
        push    0x14a
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    2
        push    0x14e
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x1f
        call    FUN_00512ff0
        xor     edx, edx
        mov     ecx, 0x7b6960
L7df2:
        cmp     dword ptr [ecx], eax
        jge     L7e04
        add     ecx, 4
        inc     edx
        cmp     ecx, 0x7b6974
        jl      L7df2
        jmp     L7e17
L7e04:
        push    0
        push    edx
        push    0x14e
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    ebx
L7e17:
        push    0
        push    1
        push    0xf1
        push    0x3f9
        push    esi
        call    edi
        push    eax
        call    ebx
        push    1
        push    0x3fb
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x32
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x3fa
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x31
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x3f7
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x11
        call    FUN_00512ff0
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [esp + 0x48], eax
        mov     eax, 0
        setnz   al
        push    0
        push    eax
        push    0xf1
        push    0x3fd
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0xe
        call    FUN_00512ff0
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     edx, 0
        mov     dword ptr [esp + 0x48], eax
        push    0
        setnz   dl
        push    edx
        push    0xf1
        push    0x3fe
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x20]
        push    eax
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 6
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x3ff
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0xf
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x400
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0xc
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x401
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0xb
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        push    ecx
        push    0xf1
        push    0x402
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x13
        call    FUN_00512ff0
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [esp + 0x48], eax
        mov     eax, 0
        setnz   al
        push    0
        push    eax
        push    0xf1
        push    0x403
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x2c
        call    FUN_00512ff0
        xor     edx, edx
        test    eax, eax
        setnz   dl
        push    0
        push    edx
        push    0xf1
        push    0x404
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    0
        push    0
        call    FUN_00513e60
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        push    0
        mov     ebp, ecx
        push    ebp
        push    0xf1
        push    0x405
        push    esi
        call    edi
        push    eax
        call    ebx
        push    ebp
        push    0x406
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        mov     eax, dword ptr [g_007b21c4]
        xor     edx, edx
        test    eax, eax
        setnz   dl
        push    0
        push    edx
        push    0xf1
        push    0x3f2
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0
        push    0
        push    0x14b
        push    0x3fc
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     al, byte ptr [g_007ddd2c]
        test    al, al
        mov     ebp, 2
        jz      L80e4
L80b2:
        push    0xa
        lea     eax, [esp + 0x4c]
        push    eax
        push    ebp
        call    dword ptr [g_76b2d4]
        add     esp, 0xc
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     edx, [ebp - 2]
        push    edx
        push    0x14a
        push    0x3fc
        push    esi
        call    edi
        push    eax
        call    ebx
        inc     ebp
        cmp     ebp, 0x18
        jle     L80b2
        jmp     L8114
L80e4:
        push    0xa
        lea     eax, [esp + 0x4c]
        push    eax
        push    ebp
        call    dword ptr [g_76b2d4]
        add     esp, 0xc
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     edx, [ebp - 2]
        push    edx
        push    0x14a
        push    0x3fc
        push    esi
        call    edi
        push    eax
        call    ebx
        inc     ebp
        cmp     ebp, 0x10
        jle     L80e4
L8114:
        lea     eax, [esp + 0x20]
        push    eax
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x39
        call    FUN_00512ff0
        mov     ebp, eax
        mov     eax, dword ptr [g_007b4674]
        cmp     eax, 4
        jge     L8143
        cmp     ebp, 6
        jle     L8140
        mov     ebp, 6
L8140:
        cmp     eax, 4
L8143:
        jnz     L8151
        cmp     ebp, 0xc
        jle     L8151
        mov     ebp, 0xc
        jmp     L8156
L8151:
        cmp     ebp, 2
        jl      L8171
L8156:
        mov     al, byte ptr [g_007ddd2c]
        test    al, al
        jnz     L8169
        cmp     ebp, 0x10
        jle     L8169
        mov     ebp, 0x10
L8169:
        push    0
        lea     ecx, [ebp - 2]
        push    ecx
        jmp     L8182
L8171:
        mov     al, byte ptr [g_007ddd2c]
        test    al, al
        push    0
        jz      L8180
        push    0x16
        jmp     L8182
L8180:
        push    0xe
L8182:
        push    0x14e
        push    0x3fc
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x20]
        push    edx
        push    2
        push    0
        mov     dword ptr [g_008589b4], ebp
        mov     dword ptr [esp + 0x28], ebp
        call    FUN_00512510
        lea     eax, [esp + 0x20]
        push    eax
        push    1
        push    0
        mov     dword ptr [esp + 0x1c], 0x3a
        call    FUN_00512ff0
        xor     ecx, ecx
        cmp     eax, ebp
        setl    cl
        push    0
        push    ecx
        push    0xf1
        push    0x40b
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L81f9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L81f9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L81f9:
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      L8214
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L8214
        push    eax
        call    FUN_004084e0
        add     esp, 4
L8214:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      L822f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L822f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L822f:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      L824a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L824a
        push    eax
        call    FUN_004084e0
        add     esp, 4
L824a:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      L8265
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L8265
        push    eax
        call    FUN_004084e0
        add     esp, 4
L8265:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L8280
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L8280
        push    eax
        call    FUN_004084e0
        add     esp, 4
L8280:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L829b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L829b
        push    eax
        call    FUN_004084e0
        add     esp, 4
L829b:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L82b6
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L82b6
        push    eax
        call    FUN_004084e0
        add     esp, 4
L82b6:
        add     esp, 0x34
        ret
    }
}
