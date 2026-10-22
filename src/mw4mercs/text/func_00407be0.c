/*
 * FUN_00407be0 (1857 B) — engine/option initialization. Copies the caller's
 * path string into the global buffer at 0x007b86b8, reads an option value via
 * the 3-arg IAT at 0x0076b0cc, initializes a large block of global config
 * (0x008589xx / 0x007dddxx), lowercases + strstr-scans the option string, and
 * registers a set of callback/string pointers. __stdcall, RET 0x4, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b86b8[];            /* 0x007b86b8 buffer */
extern char g_007b82b8[];            /* 0x007b82b8 buffer */
extern char g_007ee7bc[];            /* 0x007ee7bc buffer */
extern char g_79fb94[];              /* 0x0079fb94 */

extern int  g_007b87b8;              /* 0x007b87b8 */
extern char g_007b86b7;              /* 0x007b86b7 */
extern int  g_00858920;              /* 0x00858920 */
extern int  g_0085892c;              /* 0x0085892c */
extern int  g_00858924;              /* 0x00858924 */
extern int  g_00858940;              /* 0x00858940 */
extern int  g_00858944;              /* 0x00858944 */
extern int  g_00858948;              /* 0x00858948 */
extern int  g_0085894c;              /* 0x0085894c */
extern int  g_00858950;              /* 0x00858950 */
extern char g_00858955;              /* 0x00858955 */
extern char g_00858956;              /* 0x00858956 */
extern int  g_00858938;              /* 0x00858938 */
extern int  g_00858964;              /* 0x00858964 */
extern int  g_00858968;              /* 0x00858968 */
extern int  g_0085896c;              /* 0x0085896c */
extern int  g_00858970;              /* 0x00858970 */
extern int  g_00858974;              /* 0x00858974 */
extern int  g_00858978;              /* 0x00858978 */
extern char g_0085897c;              /* 0x0085897c */
extern int  g_00858988;              /* 0x00858988 */
extern int  g_008589b4;              /* 0x008589b4 */
extern char g_008589a7;              /* 0x008589a7 */
extern char g_008589ad;              /* 0x008589ad */
extern char g_007ddd21;              /* 0x007ddd21 */
extern int  g_0085898c;              /* 0x0085898c */
extern char g_00858991;              /* 0x00858991 */
extern int  g_00858994;              /* 0x00858994 */
extern int  g_00858998;              /* 0x00858998 */
extern char g_00858934;              /* 0x00858934 */
extern int  g_008589ec;              /* 0x008589ec */
extern char g_008589a1;              /* 0x008589a1 */
extern char g_008589a4;              /* 0x008589a4 */
extern char g_008589a5;              /* 0x008589a5 */
extern char g_008589a6;              /* 0x008589a6 */
extern char g_008589a8;              /* 0x008589a8 */
extern char g_008589a9;              /* 0x008589a9 */
extern char g_008589aa;              /* 0x008589aa */
extern char g_008589ab;              /* 0x008589ab */
extern char g_008589ac;              /* 0x008589ac */
extern char g_008589ae;              /* 0x008589ae */
extern char g_008589af;              /* 0x008589af */
extern char g_008589b0;              /* 0x008589b0 */
extern char g_008589b1;              /* 0x008589b1 */
extern char g_008589b2;              /* 0x008589b2 */
extern char g_008589b3;              /* 0x008589b3 */
extern char g_008589d6;              /* 0x008589d6 */
extern int  g_00858a30;              /* 0x00858a30 */
extern int  g_008589e0;              /* 0x008589e0 */
extern int  g_008589d8;              /* 0x008589d8 */
extern int  g_008589dc;              /* 0x008589dc */
extern int  g_008589e4;              /* 0x008589e4 */
extern int  g_00858a34;              /* 0x00858a34 */
extern int  g_00858a38;              /* 0x00858a38 */
extern int  g_00858a3c;              /* 0x00858a3c */
extern int  g_00858a40;              /* 0x00858a40 */
extern int  g_00858a2c;              /* 0x00858a2c */
extern char g_007ddd1e;              /* 0x007ddd1e */
extern char g_007ddd2c;              /* 0x007ddd2c */
extern int  g_007ddd18;              /* 0x007ddd18 */
extern int  g_007ddd0c;              /* 0x007ddd0c */
extern int  g_007ddd10;              /* 0x007ddd10 */
extern int  g_007ddd14;              /* 0x007ddd14 */
extern char g_007ddd20;              /* 0x007ddd20 */
extern char g_007ddd1c;              /* 0x007ddd1c */
extern char g_007ddd1d;              /* 0x007ddd1d */
extern int  g_007ddd24;              /* 0x007ddd24 */
extern int  g_007ddd28;              /* 0x007ddd28 */
extern int  g_007eebbc;              /* 0x007eebbc */
extern int  g_0085b4a0;              /* 0x0085b4a0 */
extern char g_00858990;              /* 0x00858990 */
extern char g_00858954;              /* 0x00858954 */
extern char g_008589a2;              /* 0x008589a2 */
extern char g_007b87bd;              /* 0x007b87bd */
extern char g_007dc10c;              /* 0x007dc10c */
extern char g_007b4319;              /* 0x007b4319 */
extern char g_007b4318;              /* 0x007b4318 */
extern char g_007b21f4;              /* 0x007b21f4 */
extern char g_007db08c;              /* 0x007db08c */
extern char g_007b87bc;              /* 0x007b87bc */
extern char g_007dde2c;              /* 0x007dde2c */
extern char g_007ddd22;              /* 0x007ddd22 */
extern char g_008493d4;              /* 0x008493d4 */
extern char g_007dc118;              /* 0x007dc118 */
extern int  g_008589d0;              /* 0x008589d0 */

extern char g_str_76cb8c[];          /* 0x76cb8c */
extern char g_str_76cb88[];          /* 0x76cb88 */
extern char g_str_76cb70[];          /* 0x76cb70 */
extern char g_str_76cb4c[];          /* 0x76cb4c */
extern char g_str_76cb3c[];          /* 0x76cb3c */
extern char g_str_76cb28[];          /* 0x76cb28 */
extern char g_str_76cb18[];          /* 0x76cb18 */
extern char g_str_76cb04[];          /* 0x76cb04 */
extern char g_str_76cae8[];          /* 0x76cae8 */
extern char g_str_76cac8[];          /* 0x76cac8 */
extern char g_str_76ca8c[];          /* 0x76ca8c */
extern char g_str_76ca7c[];          /* 0x76ca7c */
extern char g_str_76ca74[];          /* 0x76ca74 */
extern char g_str_76ca64[];          /* 0x76ca64 */
extern char g_str_76ca5c[];          /* 0x76ca5c */
extern char g_str_76ca4c[];          /* 0x76ca4c */
extern char g_str_76ca40[];          /* 0x76ca40 */
extern char g_str_76ca34[];          /* 0x76ca34 */
extern char g_str_76ca24[];          /* 0x76ca24 */
extern char g_str_76ca14[];          /* 0x76ca14 */
extern char g_str_76c9e8[];          /* 0x76c9e8 */
extern char g_str_76c9dc[];          /* 0x76c9dc */
extern char g_str_76c9d4[];          /* 0x76c9d4 */
extern char g_str_76c9c0[];          /* 0x76c9c0 */
extern char g_str_76c988[];          /* 0x76c988 */
extern char g_str_76c954[];          /* 0x76c954 */
extern char g_str_76c944[];          /* 0x76c944 */
extern char g_str_76c938[];          /* 0x76c938 */
extern char g_str_76c92c[];          /* 0x76c92c */
extern char g_str_76c920[];          /* 0x76c920 */
extern char g_str_76c918[];          /* 0x76c918 */
extern char g_str_76c908[];          /* 0x76c908 */
extern char g_str_76c8f4[];          /* 0x76c8f4 */
extern char g_str_76c8ec[];          /* 0x76c8ec */
extern char g_str_76c8e4[];          /* 0x76c8e4 */
extern char g_str_76c8dc[];          /* 0x76c8dc */
extern char g_str_76c8c4[];          /* 0x76c8c4 */
extern char g_str_76c8b4[];          /* 0x76c8b4 */
extern char g_str_76c8a0[];          /* 0x76c8a0 */
extern char g_str_76c88c[];          /* 0x76c88c */
extern char g_str_76c884[];          /* 0x76c884 */

extern char g_406ee0[];              /* 0x00406ee0 */
extern char g_534d40[];              /* 0x00534d40 */
extern char g_537fc0[];              /* 0x00537fc0 */
extern char g_4078c0[];              /* 0x004078c0 */
extern char g_523040[];              /* 0x00523040 */
extern char g_6e45a0[];              /* 0x006e45a0 */
extern char g_535260[];              /* 0x00535260 */
extern char g_6e4a30[];              /* 0x006e4a30 */

extern int  (*g_76b0cc)(char *, char *, int);   /* 0x0076b0cc */
extern int  (*g_strncpy)(char *, const char *, int); /* 0x0076b320 */
extern int  (*g_tolower)(int);       /* 0x0076b29c */
extern char *(*g_strstr)(const char *, const char *); /* 0x0076b298 */
extern int  (*g_atoi)(const char *); /* 0x0076b318 */

extern int  __cdecl FUN_00704820(int, int);
extern char *__cdecl FUN_00407b30(char *);
extern int  __cdecl FUN_006fc4d0(char *);
extern void __cdecl FUN_004084e0(void *);
extern int  __cdecl FUN_006fab90(char *);
extern int  __cdecl FUN_007089b0(int, int, int);
extern int  __cdecl FUN_00564950(void);
extern int  __cdecl FUN_005637c0(void);
extern int  __cdecl FUN_00563470(void);
extern int  __cdecl FUN_0070cbb0(char *, int);

__declspec(naked) int __stdcall FUN_00407be0(char *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        or      ecx, 0xffffffff
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [g_007b87b8], edi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_007b86b8
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_007b86b8
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     byte ptr [ebp - 0x100], al
        push    0x100
        lea     eax, [ebp - 0x100]
        mov     ecx, edx
        push    eax
        and     ecx, 3
        push    offset g_str_76cb88
        rep     movsb
        call    dword ptr [g_76b0cc]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x100]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_007b86b8
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        xor     esi, esi
        mov     eax, 0x10
        mov     dword ptr [g_007b87b8], offset g_007b86b8
        mov     dword ptr [g_00858920], offset g_str_76cb70
        mov     dword ptr [g_0085892c], offset g_str_76cb4c
        mov     dword ptr [g_00858924], offset g_str_76cb3c
        mov     dword ptr [g_00858940], 0x320
        mov     dword ptr [g_00858944], 0x258
        mov     dword ptr [g_00858948], eax
        mov     dword ptr [g_0085894c], esi
        mov     dword ptr [g_00858950], esi
        mov     byte ptr [g_00858955], 0
        mov     byte ptr [g_00858956], 0
        mov     dword ptr [g_00858938], 0xc0
        mov     dword ptr [g_00858964], 0x1400
        mov     dword ptr [g_00858968], esi
        mov     dword ptr [g_0085896c], esi
        mov     dword ptr [g_00858970], esi
        mov     dword ptr [g_00858974], offset g_str_76cb28
        mov     dword ptr [g_00858978], offset g_str_76cb18
        mov     byte ptr [g_0085897c], 0
        mov     dword ptr [g_00858988], 0x3e800000
        mov     dword ptr [g_008589b4], eax
        mov     al, 0xd5
        mov     byte ptr [g_008589a7], al
        mov     byte ptr [g_008589ad], al
        mov     al, byte ptr [g_007ddd21]
        test    al, al
        mov     cl, 0x95
        mov     dword ptr [g_0085898c], 0x3e800000
        mov     byte ptr [g_00858991], 0
        mov     dword ptr [g_00858994], esi
        mov     dword ptr [g_00858998], 0x20
        mov     byte ptr [g_00858934], 0
        mov     dword ptr [g_008589ec], 1
        mov     byte ptr [g_008589a1], 1
        mov     byte ptr [g_008589a4], cl
        mov     byte ptr [g_008589a5], 0x78
        mov     byte ptr [g_008589a6], 0xff
        mov     byte ptr [g_008589a8], 0x13
        mov     byte ptr [g_008589a9], 0x81
        mov     byte ptr [g_008589aa], 0x9f
        mov     byte ptr [g_008589ab], 0x47
        mov     byte ptr [g_008589ac], 0xbb
        mov     byte ptr [g_008589ae], 0xd3
        mov     byte ptr [g_008589af], cl
        mov     byte ptr [g_008589b0], 0xe5
        mov     byte ptr [g_008589b1], 0x51
        mov     byte ptr [g_008589b2], 0xd0
        mov     byte ptr [g_008589b3], 0xa8
        mov     byte ptr [g_008589d6], 1
        mov     dword ptr [g_00858a30], esi
        mov     dword ptr [g_008589e0], offset g_str_76cb04
        mov     dword ptr [g_008589d8], offset g_str_76cae8
        mov     dword ptr [g_008589dc], offset g_str_76cac8
        mov     dword ptr [g_008589e4], offset g_str_76ca8c
        mov     dword ptr [g_00858a34], offset g_406ee0
        mov     dword ptr [g_00858a38], offset g_534d40
        mov     dword ptr [g_00858a3c], offset g_537fc0
        mov     dword ptr [g_00858a40], offset g_4078c0
        mov     dword ptr [g_00858a2c], offset g_523040
        jz      L7E79
        mov     dword ptr [g_00858a34], offset g_6e45a0
        mov     dword ptr [g_00858a38], offset g_535260
        mov     dword ptr [g_00858a3c], esi
        mov     dword ptr [g_00858a40], offset g_6e4a30
L7E79:
        push    ebx
        push    1
        push    5
        call    FUN_00704820
        push    0x400
        push    offset g_007b86b8
        push    offset g_007b82b8
        call    dword ptr [g_strncpy]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        mov     edi, offset g_007b82b8
        mov     byte ptr [g_007b86b7], 0
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, esi
        mov     edi, offset g_007b82b8
        jle     L7ECF
        mov     ebx, ecx
L7EBC:
        movsx   eax, byte ptr [edi]
        push    eax
        call    dword ptr [g_tolower]
        add     esp, 4
        mov     byte ptr [edi], al
        inc     edi
        dec     ebx
        jnz     L7EBC
L7ECF:
        mov     ebx, dword ptr [g_strstr]
        push    offset g_str_76ca7c
        push    offset g_007b82b8
        call    ebx
        test    eax, eax
        setnz   cl
        push    offset g_str_76ca74
        push    offset g_007b82b8
        mov     byte ptr [g_00858934], cl
        call    ebx
        test    eax, eax
        setnz   dl
        push    offset g_str_76ca64
        push    offset g_007b82b8
        mov     byte ptr [g_007ddd1e], dl
        call    ebx
        test    eax, eax
        setnz   al
        push    offset g_str_76ca5c
        push    offset g_007b82b8
        mov     byte ptr [g_007ddd2c], al
        call    ebx
        add     esp, 0x20
        cmp     eax, esi
        mov     dword ptr [g_007ddd18], esi
        jz      L7F66
        mov     cl, byte ptr [eax + 7]
        add     eax, 7
        test    cl, cl
        jz      L7F66
        push    eax
        call    FUN_00407b30
        add     esp, 4
        push    eax
        mov     dword ptr [g_007ddd18], eax
        call    FUN_006fc4d0
        test    al, al
        jnz     L7F78
        mov     eax, dword ptr [g_007ddd18]
        cmp     eax, esi
        jz      L7F66
        push    eax
        call    FUN_004084e0
        add     esp, 4
L7F66:
        push    offset g_str_76ca4c
        call    FUN_00407b30
        add     esp, 4
        mov     dword ptr [g_007ddd18], eax
L7F78:
        push    offset g_str_76ca40
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        cmp     eax, esi
        jz      L7FA3
        mov     cl, byte ptr [eax + 0xa]
        add     eax, 0xa
        test    cl, cl
        jz      L7FA3
        push    eax
        call    FUN_00407b30
        add     esp, 4
        mov     dword ptr [g_007ddd0c], eax
L7FA3:
        push    offset g_str_76ca34
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        cmp     eax, esi
        jz      L7FCE
        mov     cl, byte ptr [eax + 0xa]
        add     eax, 0xa
        test    cl, cl
        jz      L7FCE
        push    eax
        call    FUN_00407b30
        add     esp, 4
        mov     dword ptr [g_007ddd10], eax
L7FCE:
        push    offset g_str_76ca24
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        cmp     eax, esi
        jz      L7FF9
        mov     cl, byte ptr [eax + 0xc]
        add     eax, 0xc
        test    cl, cl
        jz      L7FF9
        push    eax
        call    FUN_00407b30
        add     esp, 4
        mov     dword ptr [g_007ddd14], eax
L7FF9:
        push    offset g_str_76ca14
        push    offset g_007b82b8
        call    ebx
        mov     edi, dword ptr [g_atoi]
        add     esp, 8
        cmp     eax, esi
        jz      L8054
        mov     cl, byte ptr [eax + 0xf]
        add     eax, 0xf
        test    cl, cl
        jz      L8054
        push    eax
        call    edi
        add     esp, 4
        cmp     eax, esi
        mov     dword ptr [ebp + 8], eax
        jg      L803B
        push    offset g_str_76c9e8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L803B
        int     3
L803B:
        push    4
        lea     ecx, [ebp + 8]
        push    ecx
        push    offset g_79fb94
        call    FUN_007089b0
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [g_008589d0], edx
L8054:
        push    offset g_str_76c9dc
        push    offset g_007b82b8
        call    ebx
        test    eax, eax
        setnz   al
        push    offset g_str_76c9d4
        push    offset g_007b82b8
        mov     byte ptr [g_007ddd20], al
        call    ebx
        test    eax, eax
        setnz   cl
        push    offset g_str_76c9c0
        push    offset g_007b82b8
        mov     byte ptr [g_007ddd1c], cl
        call    ebx
        add     esp, 0x18
        test    eax, eax
        mov     al, byte ptr [g_007ddd1c]
        setnz   dl
        test    al, al
        mov     byte ptr [g_008589a2], dl
        jnz     L80AD
        mov     al, byte ptr [g_007ddd1d]
        test    al, al
        jz      L80E1
L80AD:
        cmp     dword ptr [g_007ddd14], esi
        jnz     L80C7
        push    offset g_str_76c988
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L80C7
        int     3
L80C7:
        cmp     dword ptr [g_007ddd0c], esi
        jnz     L80E1
        push    offset g_str_76c954
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L80E1
        int     3
L80E1:
        call    FUN_00564950
        cmp     eax, 0x80004005
        jnz     L8111
        push    offset g_str_76c944
        call    FUN_006fc4d0
        test    al, al
        jnz     L8107
        mov     dword ptr [g_007ddd24], 1
        jmp     L8111
L8107:
        mov     dword ptr [g_007ddd28], 1
L8111:
        call    FUN_005637c0
        push    offset g_str_76c938
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        cmp     eax, esi
        jz      L813E
        mov     cl, byte ptr [eax + 0xb]
        add     eax, 0xb
        test    cl, cl
        jz      L813E
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [g_007eebbc], eax
L813E:
        push    offset g_str_76c92c
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        cmp     eax, esi
        jz      L8188
        mov     cl, byte ptr [eax + 0xa]
        add     eax, 0xa
        test    cl, cl
        jz      L8188
        push    eax
        call    FUN_00407b30
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, offset g_007ee7bc
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        xor     esi, esi
L8188:
        cmp     dword ptr [g_0085b4a0], esi
        jnz     L8257
        push    offset g_str_76c920
        push    offset g_007b82b8
        call    ebx
        test    eax, eax
        setnz   cl
        push    offset g_str_76c918
        push    offset g_007b82b8
        mov     byte ptr [g_00858990], cl
        call    ebx
        neg     eax
        sbb     al, al
        inc     al
        push    offset g_str_76c908
        push    offset g_007b82b8
        mov     byte ptr [g_00858954], al
        call    ebx
        test    eax, eax
        setnz   dl
        push    esi
        mov     byte ptr [g_007b87bd], dl
        mov     byte ptr [g_007dc10c], 0
        mov     byte ptr [g_007b4319], 1
        mov     byte ptr [g_007b4318], 0
        mov     byte ptr [g_007b21f4], 1
        call    FUN_00563470
        push    offset g_str_76c8f4
        push    offset g_007b82b8
        mov     byte ptr [g_007db08c], 1
        mov     byte ptr [g_007b87bc], 0
        call    ebx
        test    eax, eax
        setnz   al
        push    offset g_str_76c8ec
        push    offset g_007b82b8
        mov     byte ptr [g_007dde2c], al
        call    ebx
        test    eax, eax
        setnz   cl
        push    offset g_str_76c8e4
        push    offset g_007b82b8
        mov     byte ptr [g_007ddd22], cl
        call    ebx
        add     esp, 0x34
        test    eax, eax
        setnz   dl
        mov     byte ptr [g_008493d4], dl
        mov     byte ptr [g_007dc118], 0
L8257:
        push    offset g_str_76c8dc
        push    offset g_007b82b8
        call    ebx
        add     esp, 8
        test    eax, eax
        pop     ebx
        jz      L82F9
        push    offset g_str_76c8c4
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76ca7c
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76ca74
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c8b4
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c8a0
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c88c
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c9d4
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c884
        push    esi
        call    FUN_0070cbb0
        add     esp, 0x40
        push    offset g_str_76c920
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c918
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c8ec
        push    esi
        call    FUN_0070cbb0
        push    offset g_str_76c8e4
        push    esi
        call    FUN_0070cbb0
        add     esp, 0x20
L82F9:
        mov     al, byte ptr [g_007ddd1c]
        test    al, al
        pop     edi
        pop     esi
        jnz     L830D
        mov     al, byte ptr [g_007ddd21]
        test    al, al
        jz      L831B
L830D:
        mov     byte ptr [g_00858990], 1
        mov     byte ptr [g_00858954], 0
L831B:
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
