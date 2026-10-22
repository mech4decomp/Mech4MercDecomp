/*
 * FUN_0061c1b0 (1878 B) — __cdecl, EBP frame, RET (no stack cleanup).
 *
 * Large initialization routine: allocates several objects, initializes a
 * large set of global configuration variables, and builds string buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(int a);
extern void __cdecl FUN_0061ed60(void *p, void *q, int a);
extern void __cdecl FUN_0061eb90(void *p);
extern void __cdecl FUN_006f4710(void *p, void *q, void *r);
extern void __cdecl FUN_0061ecb0(void *p, int a);
extern void __cdecl FUN_0061eb50(void *p, void *q, void *r);
extern void __cdecl FUN_006f3c80(void *p, void *q);
extern void __cdecl FUN_006fab90(void *p);
extern void __cdecl FUN_0061eb20(void *p);
extern void __cdecl FUN_0061ee60(void *p, void *q);
extern void __cdecl FUN_0061ebc0(void *p, void *q, void *r, void *s);
extern void __cdecl FUN_00562f10(void *p, void *q);
extern void __cdecl FUN_0061ea00(void *p, void *q);
extern void __cdecl FUN_006505a0(void);
extern void __cdecl FUN_0064a8f0(void *p);
extern void __cdecl FUN_0064ad90(int a);
extern void __cdecl FUN_0061fa90(int a);
extern void __cdecl FUN_0061fbf0(void *p);
extern void __cdecl FUN_0061fc30(void *p, void *q, void *r);
extern void __cdecl FUN_0064a870(void);
extern void __cdecl FUN_00699cd0(void *p);

extern int   g_80da7c;   /* 0x0080da7c */
extern int   g_7b5a30;   /* 0x007b5a30 */
extern int   g_7b5a34;   /* 0x007b5a34 */
extern int   g_7dde28;   /* 0x007dde28 */
extern char  g_7f2995;   /* 0x007f2995 */
extern int   g_7b55ec;   /* 0x007b55ec */
extern int   g_7b55f0;   /* 0x007b55f0 */
extern int   g_7f2ba8;   /* 0x007f2ba8 */
extern int   g_80d96c;   /* 0x0080d96c */
extern int   g_80d970;   /* 0x0080d970 */
extern int   g_80d974;   /* 0x0080d974 */
extern int   g_80d98c;   /* 0x0080d98c */
extern int   g_80d978;   /* 0x0080d978 */
extern int   g_80d990;   /* 0x0080d990 */
extern int   g_80d97c;   /* 0x0080d97c */
extern int   g_80d980;   /* 0x0080d980 */
extern int   g_80d984;   /* 0x0080d984 */
extern int   g_7de630;   /* 0x007de630 */
extern int   g_805910;   /* 0x00805910 */
extern int   g_805914;   /* 0x00805914 */
extern int   g_805918;   /* 0x00805918 */
extern int   g_80591c;   /* 0x0080591c */
extern int   g_805920;   /* 0x00805920 */
extern int   g_805924;   /* 0x00805924 */
extern int   g_805928;   /* 0x00805928 */
extern int   g_80592c;   /* 0x0080592c */
extern int   g_805930;   /* 0x00805930 */
extern int   g_805934;   /* 0x00805934 */
extern int   g_805938;   /* 0x00805938 */
extern int   g_80593c;   /* 0x0080593c */
extern int   g_805948;   /* 0x00805948 */
extern int   g_805940;   /* 0x00805940 */
extern int   g_805944;   /* 0x00805944 */
extern int   g_80594c;   /* 0x0080594c */
extern int   g_805950;   /* 0x00805950 */
extern char  g_805958;   /* 0x00805958 */
extern char  g_805959;   /* 0x00805959 */
extern int   g_7b5a28;   /* 0x007b5a28 */
extern char  g_80595a;   /* 0x0080595a */
extern char  g_7b5a2c;   /* 0x007b5a2c */
extern char  g_7b5a2d;   /* 0x007b5a2d */
extern char  g_7b5a2e;   /* 0x007b5a2e */
extern char  g_7b5a2f;   /* 0x007b5a2f */
extern char  g_80595c;   /* 0x0080595c */
extern int   g_8058b4;   /* 0x008058b4 */
extern int   g_8058b8;   /* 0x008058b8 */
extern int   g_8058bc;   /* 0x008058bc */
extern int   g_8058c0;   /* 0x008058c0 */
extern int   g_8058c8;   /* 0x008058c8 */
extern int   g_8058cc;   /* 0x008058cc */
extern int   g_8058d0;   /* 0x008058d0 */
extern char  g_7b5a18;   /* 0x007b5a18 */
extern char  g_8058d4;   /* 0x008058d4 */
extern int   g_8058d8;   /* 0x008058d8 */
extern int   g_8058dc;   /* 0x008058dc */
extern int   g_8058e0;   /* 0x008058e0 */
extern char  g_8058e4;   /* 0x008058e4 */
extern int   g_8058e8;   /* 0x008058e8 */
extern int   g_8058ec;   /* 0x008058ec */
extern int   g_8058f0;   /* 0x008058f0 */
extern int   g_7b5a1c;   /* 0x007b5a1c */
extern int   g_7b5a20;   /* 0x007b5a20 */
extern int   g_8058f8;   /* 0x008058f8 */
extern char  g_8058fc;   /* 0x008058fc */
extern int   g_805900;   /* 0x00805900 */
extern int   g_7b5a24;   /* 0x007b5a24 */
extern char  g_7f2994;   /* 0x007f2994 */
extern char  g_80d968;   /* 0x0080d968 */
extern char  g_80d969;   /* 0x0080d969 */
extern char  g_80d96a;   /* 0x0080d96a */
extern int   g_80d9a8;   /* 0x0080d9a8 */
extern int   g_7f2998;   /* 0x007f2998 */
extern int   g_7f2448;   /* 0x007f2448 */
extern int   g_7f2dc0;   /* 0x007f2dc0 */
extern int   g_7f2f34;   /* 0x007f2f34 */
extern int   g_805954;   /* 0x00805954 */
extern int   g_7f29a0;   /* 0x007f29a0 */
extern char  g_7f2996;   /* 0x007f2996 */

__declspec(naked) void __cdecl FUN_0061c1b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        push    ebx
        xor     ebx, ebx
        push    0xc
        mov     dword ptr [ebp - 0x4], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      LAB_61c1da
        mov     cl, byte ptr [ebp + 0x33]
        mov     dword ptr [eax], ebx
        mov     byte ptr [eax + 0x8], cl
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        jmp     LAB_61c1dc
LAB_61c1da:
        xor     eax, eax
LAB_61c1dc:
        push    esi
        lea     edx, [ebp - 0x8]
        push    edx
        push    0x11
        mov     ecx, eax
        mov     dword ptr [g_80da7c], eax
        mov     dword ptr [ebp - 0x8], ebx
        call    FUN_0061ed60
        mov     ecx, 0x14
        mov     eax, 0x32
        mov     dword ptr [g_7b5a30], ecx
        mov     dword ptr [g_7b5a34], ecx
        mov     cl, byte ptr [ebp + 0x30]
        mov     dword ptr [g_7dde28], ebx
        mov     byte ptr [g_7f2995], 0x1
        mov     dword ptr [g_7b55ec], eax
        mov     dword ptr [g_7b55f0], eax
        mov     dword ptr [g_7f2ba8], ebx
        mov     dword ptr [g_80d96c], ebx
        mov     dword ptr [g_80d970], ebx
        mov     dword ptr [g_80d974], ebx
        mov     dword ptr [g_80d98c], ebx
        mov     dword ptr [g_80d978], ebx
        mov     dword ptr [g_80d990], ebx
        mov     dword ptr [g_80d97c], ebx
        mov     dword ptr [g_80d980], ebx
        mov     dword ptr [g_80d984], ebx
        mov     dword ptr [g_7de630], ebx
        mov     dword ptr [g_805910], ebx
        mov     dword ptr [g_805914], ebx
        mov     dword ptr [g_805918], ebx
        mov     dword ptr [g_80591c], ebx
        mov     dword ptr [g_805920], ebx
        mov     dword ptr [g_805924], ebx
        mov     dword ptr [g_805928], ebx
        mov     dword ptr [g_80592c], ebx
        mov     dword ptr [g_805930], ebx
        mov     dword ptr [g_805934], ebx
        mov     dword ptr [g_805938], ebx
        mov     dword ptr [g_80593c], ebx
        mov     dword ptr [g_805948], 0x1388
        mov     dword ptr [g_805940], ebx
        mov     dword ptr [g_805944], ebx
        mov     dword ptr [g_80594c], ebx
        mov     dword ptr [g_805950], ebx
        mov     byte ptr [g_805958], bl
        mov     byte ptr [g_805959], bl
        mov     dword ptr [g_7b5a28], 0x186a1
        mov     byte ptr [g_80595a], bl
        mov     byte ptr [g_7b5a2c], bl
        mov     byte ptr [g_7b5a2d], 0x1
        mov     byte ptr [g_7b5a2e], 0x1
        mov     byte ptr [g_80595c], cl
        mov     byte ptr [g_7b5a2f], 0x1
        mov     dword ptr [g_8058b4], ebx
        mov     dword ptr [g_8058b8], ebx
        mov     dword ptr [g_8058bc], ebx
        mov     dword ptr [g_8058c0], ebx
        mov     dword ptr [g_8058c8], ebx
        mov     dword ptr [g_8058cc], ebx
        mov     dword ptr [g_8058d0], ebx
        mov     byte ptr [g_7b5a18], 0x1
        mov     byte ptr [g_8058d4], bl
        mov     dword ptr [g_8058d8], ebx
        mov     dword ptr [g_8058dc], ebx
        mov     dword ptr [g_8058e0], ebx
        mov     byte ptr [g_8058e4], bl
        mov     dword ptr [g_8058e8], ebx
        mov     dword ptr [g_8058ec], ebx
        mov     dword ptr [g_8058f0], ebx
        mov     dword ptr [g_7b5a1c], 0x7f4254
        mov     dword ptr [g_7b5a20], 0x7f3a54
        mov     dword ptr [g_8058f8], ebx
        mov     byte ptr [g_8058fc], bl
        mov     dword ptr [g_805900], ebx
        mov     dword ptr [g_7b5a24], eax
        mov     byte ptr [g_7f2994], bl
        mov     byte ptr [g_80d968], bl
        mov     byte ptr [g_80d969], bl
        mov     byte ptr [g_80d96a], bl
        mov     dword ptr [g_80d9a8], ebx
        push    0x28
        mov     dword ptr [g_7f2998], ebx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      LAB_61c3e9
        lea     edx, [ebp + 0x33]
        push    edx
        lea     ecx, [esi + 0x10]
        call    FUN_0061eb90
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x78c804
        mov     dword ptr [esi + 0x1c], ebx
        mov     byte ptr [esi + 0x20], 0x1
        jmp     LAB_61c3eb
LAB_61c3e9:
        xor     esi, esi
LAB_61c3eb:
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, 0x78c7f0
        test    eax, eax
        mov     dword ptr [g_8058b4], esi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0xc], ebx
        jz      LAB_61c40f
        mov     ecx, dword ptr [g_7f2448]
        push    ecx
        push    ebx
        push    eax
        jmp     LAB_61c41c
LAB_61c40f:
        mov     edx, dword ptr [g_7f2448]
        push    edx
        push    ebx
        push    0x78c7e4
LAB_61c41c:
        call    FUN_006f4710
        cmp     eax, ebx
        mov     dword ptr [esi + 0xc], eax
        jz      LAB_61c491
        mov     dword ptr [esi + 0x8], edi
        lea     edi, [esi + 0x10]
        push    0x2710
        mov     ecx, edi
        call    FUN_0061ecb0
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_0061eb50
        mov     edx, 0x78c7f0
        test    edx, edx
        jz      LAB_61c48c
        or      ecx, 0xffffffff
        mov     edi, edx
        xor     eax, eax
        repne   scasb
        push    ebx
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x78c7f0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x24], edx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     LAB_61c4a3
LAB_61c48c:
        mov     dword ptr [esi + 0x24], ebx
        jmp     LAB_61c4a3
LAB_61c491:
        push    0x78c7bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LAB_61c4a3
        int     3
LAB_61c4a3:
        push    0x28
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      LAB_61c4d1
        lea     ecx, [ebp + 0x33]
        push    ecx
        lea     ecx, [esi + 0x10]
        call    FUN_0061eb90
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x78c804
        mov     dword ptr [esi + 0x1c], ebx
        mov     byte ptr [esi + 0x20], 0x1
        jmp     LAB_61c4d3
LAB_61c4d1:
        xor     esi, esi
LAB_61c4d3:
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, 0x78c7b0
        test    edx, edx
        mov     dword ptr [g_8058b8], esi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0xc], ebx
        jz      LAB_61c4f5
        mov     eax, dword ptr [g_7f2448]
        push    eax
        push    ebx
        push    edx
        jmp     LAB_61c502
LAB_61c4f5:
        mov     ecx, dword ptr [g_7f2448]
        push    ecx
        push    ebx
        push    0x78c7e4
LAB_61c502:
        call    FUN_006f4710
        cmp     eax, ebx
        mov     dword ptr [esi + 0xc], eax
        jz      LAB_61c570
        mov     dword ptr [esi + 0x8], edi
        lea     edi, [esi + 0x10]
        push    0x2710
        mov     ecx, edi
        call    FUN_0061ecb0
        mov     ecx, edi
        call    FUN_0061eb20
        mov     edx, 0x78c7b0
        test    edx, edx
        jz      LAB_61c56b
        or      ecx, 0xffffffff
        mov     edi, edx
        xor     eax, eax
        repne   scasb
        push    ebx
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x78c7b0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x24], edx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     LAB_61c582
LAB_61c56b:
        mov     dword ptr [esi + 0x24], ebx
        jmp     LAB_61c582
LAB_61c570:
        push    0x78c790
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LAB_61c582
        int     3
LAB_61c582:
        push    0x28
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      LAB_61c5b0
        lea     ecx, [ebp + 0x33]
        push    ecx
        lea     ecx, [esi + 0x10]
        call    FUN_0061eb90
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x78c804
        mov     dword ptr [esi + 0x1c], ebx
        mov     byte ptr [esi + 0x20], 0x1
        jmp     LAB_61c5b2
LAB_61c5b0:
        xor     esi, esi
LAB_61c5b2:
        mov     edi, dword ptr [ebp + 0x10]
        mov     edx, 0x78c784
        test    edx, edx
        mov     dword ptr [g_8058bc], esi
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0xc], ebx
        jz      LAB_61c5d4
        mov     eax, dword ptr [g_7f2448]
        push    eax
        push    ebx
        push    edx
        jmp     LAB_61c5e1
LAB_61c5d4:
        mov     ecx, dword ptr [g_7f2448]
        push    ecx
        push    ebx
        push    0x78c7e4
LAB_61c5e1:
        call    FUN_006f4710
        cmp     eax, ebx
        mov     dword ptr [esi + 0xc], eax
        jz      LAB_61c64f
        mov     dword ptr [esi + 0x8], edi
        lea     edi, [esi + 0x10]
        push    0x2710
        mov     ecx, edi
        call    FUN_0061ecb0
        mov     ecx, edi
        call    FUN_0061eb20
        mov     edx, 0x78c784
        test    edx, edx
        jz      LAB_61c64a
        or      ecx, 0xffffffff
        mov     edi, edx
        xor     eax, eax
        repne   scasb
        push    ebx
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x78c784
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x24], edx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     LAB_61c661
LAB_61c64a:
        mov     dword ptr [esi + 0x24], ebx
        jmp     LAB_61c661
LAB_61c64f:
        push    0x78c764
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LAB_61c661
        int     3
LAB_61c661:
        mov     esi, dword ptr [g_8058bc]
        mov     eax, 0x3
        mov     ecx, 0x100
        mov     edi, 0x7f2d38
        rep     stosd
        mov     eax, 0x1
        mov     ecx, 0xa
        mov     edi, 0x7f2df8
        rep     stosd
        xor     eax, eax
        mov     ecx, 0x1a
        mov     edi, 0x7f2e3c
        rep     stosd
        mov     ecx, 0x1a
        mov     edi, 0x7f2ebc
        rep     stosd
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        mov     ecx, dword ptr [ebp + 0x18]
        mov     dword ptr [g_7f2dc0], 0x2
        mov     dword ptr [g_7f2f34], 0x4
        mov     dword ptr [g_805954], ecx
        jz      LAB_61c707
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        add     esi, 0x10
        mov     dword ptr [ebp + 0x30], eax
        cmp     edi, dword ptr [esi + 0x8]
        jz      LAB_61c6f4
        lea     ecx, [ebp + 0x30]
        push    ecx
        push    edi
        call    FUN_0061ee60
        mov     eax, dword ptr [ebp + 0x30]
        add     esp, 0x8
        add     edi, 0x4
        mov     dword ptr [esi + 0x4], edi
        jmp     LAB_61c709
LAB_61c6f4:
        push    0x1
        lea     edx, [ebp + 0x30]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_0061ebc0
        mov     eax, dword ptr [ebp + 0x30]
        jmp     LAB_61c709
LAB_61c707:
        xor     eax, eax
LAB_61c709:
        cmp     eax, ebx
        mov     dword ptr [g_805910], eax
        jnz     LAB_61c720
        push    0x78c728
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
LAB_61c720:
        mov     eax, dword ptr [ebp + 0x20]
        cmp     eax, ebx
        mov     dword ptr [g_805944], eax
        mov     dword ptr [g_80594c], ebx
        mov     dword ptr [g_805934], ebx
        mov     dword ptr [g_805938], ebx
        jle     LAB_61c7ab
        mov     esi, dword ptr [g_8058b8]
        lea     ecx, [eax * 0x4 + 0x0]
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jz      LAB_61c792
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        add     esi, 0x10
        mov     dword ptr [ebp + 0x30], eax
        cmp     edi, dword ptr [esi + 0x8]
        jz      LAB_61c77f
        lea     eax, [ebp + 0x30]
        push    eax
        push    edi
        call    FUN_0061ee60
        mov     eax, dword ptr [ebp + 0x30]
        add     esp, 0x8
        add     edi, 0x4
        mov     dword ptr [esi + 0x4], edi
        jmp     LAB_61c794
LAB_61c77f:
        push    0x1
        lea     ecx, [ebp + 0x30]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_0061ebc0
        mov     eax, dword ptr [ebp + 0x30]
        jmp     LAB_61c794
LAB_61c792:
        xor     eax, eax
LAB_61c794:
        cmp     eax, ebx
        mov     dword ptr [g_805938], eax
        jnz     LAB_61c7ab
        push    0x78c6ec
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
LAB_61c7ab:
        mov     esi, dword ptr [g_8058b8]
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        pop     edi
        jz      LAB_61c7dd
        mov     edx, dword ptr [ebp + 0x14]
        shr     edx, 0x2
        push    eax
        shl     edx, 0x2
        push    edx
        call    FUN_006f3c80
        mov     dword ptr [ebp + 0x30], eax
        lea     eax, [ebp + 0x30]
        push    eax
        lea     ecx, [esi + 0x10]
        call    FUN_0061ea00
        mov     eax, dword ptr [ebp + 0x30]
        jmp     LAB_61c7df
LAB_61c7dd:
        xor     eax, eax
LAB_61c7df:
        cmp     eax, ebx
        mov     dword ptr [g_805928], eax
        jnz     LAB_61c7f6
        push    0x78c6c0
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
LAB_61c7f6:
        mov     eax, dword ptr [g_805948]
        cmp     eax, ebx
        jle     LAB_61c847
        mov     esi, dword ptr [g_8058b8]
        lea     ecx, [eax * 0x4 + 0x0]
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jz      LAB_61c82e
        push    eax
        push    ecx
        call    FUN_006f3c80
        lea     ecx, [ebp + 0x30]
        push    ecx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [ebp + 0x30], eax
        call    FUN_0061ea00
        mov     eax, dword ptr [ebp + 0x30]
        jmp     LAB_61c830
LAB_61c82e:
        xor     eax, eax
LAB_61c830:
        cmp     eax, ebx
        mov     dword ptr [g_80593c], eax
        jnz     LAB_61c847
        push    0x78c684
        push    ebx
        call    FUN_00562f10
        add     esp, 0x8
LAB_61c847:
        call    FUN_006505a0
        mov     edx, dword ptr [ebp + 0x1c]
        push    edx
        call    FUN_0064a8f0
        push    0xa
        call    FUN_0064ad90
        mov     al, byte ptr [ebp + 0x28]
        mov     byte ptr [g_7b5a2e], al
        mov     al, byte ptr [ebp + 0x2c]
        add     esp, 0x8
        cmp     al, bl
        jz      LAB_61c8b8
        push    0x1c
        mov     byte ptr [g_7b5a2e], 0x1
        call    FUN_0061fa90
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      LAB_61c894
        mov     ecx, esi
        call    FUN_0061fbf0
        mov     dword ptr [g_7f2ba8], esi
        jmp     LAB_61c8a8
LAB_61c894:
        push    0x78c65c
        push    ebx
        mov     dword ptr [g_7f2ba8], ebx
        call    FUN_00562f10
        add     esp, 0x8
LAB_61c8a8:
        mov     ecx, dword ptr [ebp + 0x24]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [g_7f2ba8]
        call    FUN_0061fc30
LAB_61c8b8:
        cmp     byte ptr [g_80595c], bl
        pop     esi
        jz      LAB_61c8c6
        call    FUN_0064a870
LAB_61c8c6:
        cmp     dword ptr [g_7f29a0], ebx
        jnz     LAB_61c8fa
        push    0x1c
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      LAB_61c8f4
        mov     ecx, eax
        call    FUN_00699cd0
        mov     dword ptr [g_7f29a0], eax
        mov     byte ptr [g_7f2996], 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
LAB_61c8f4:
        mov     dword ptr [g_7f29a0], ebx
LAB_61c8fa:
        mov     byte ptr [g_7f2996], 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
