/*
 * FUN_00729AE0 (2962 B) - Font/texture loader. Parses .d3f/.ttf font files,
 * builds a font object (0x780-byte struct), caches it in a linked list
 * (DAT_008816c8), and returns the object.
 *
 * __stdcall RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8816c8;   /* DAT_008816c8 - font cache linked list head */
extern void *g_8492fc;   /* DAT_008492fc - allocator arg */
extern void *g_849308;   /* DAT_00849308 - allocator arg */
extern float g_76d064;   /* float constant divisor */

/* IAT function pointers */
extern int (__cdecl *g_76b2ac)(const char *, const char *);        /* _stricmp */
extern char *(__cdecl *g_76b2a4)(const char *, int);               /* _mbschr */
extern int (__cdecl *g_76b29c)(int);                               /* tolower */
extern char *(__cdecl *g_76b2a0)(const char *, int);               /* _mbsrchr */
extern void *(__cdecl *g_76b28c)(void *, const void *, unsigned int); /* memmove */
extern unsigned long (__cdecl *g_76b36c)(const char *, char **, int);  /* strtoul */

/* direct calls */
extern void __cdecl FUN_006fbc60(void *, void *);
extern void *__cdecl FUN_006f3c80(unsigned int, void *);
extern void __cdecl FUN_006f4950(void *);
extern void __cdecl FUN_006faca0(void *, void *, void *);
extern void __cdecl FUN_006f49a0(void);
extern void *__cdecl FUN_00717a10(int, void *, int, int, int, int);
extern void __cdecl FUN_00717b30(void *, int, int, void *);
extern void __cdecl FUN_00717ac0(void *);
extern int __cdecl FUN_006fab90(const char *, ...);
extern void __cdecl FUN_006f4230(void *);
extern char __cdecl FUN_00729aa0(void *, void *);
extern void *__cdecl FUN_00717a60(int, void *, int, int, int);

__declspec(naked) void __stdcall FUN_00729AE0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x160
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        mov     esi, dword ptr [ebp + 0x14]
        test    esi, esi
        push    edi
        mov     byte ptr [ebp - 0x160], 0
        jnz     L_729b4d
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        lea     ecx, [ebp - 0x160]
        push    ecx
        call    FUN_006fbc60
        mov     edi, dword ptr [g_8816c8]
        test    edi, edi
        jz      L_729b4d
L_729b17:
        mov     edx, dword ptr [edi + 0x110]
        cmp     edx, dword ptr [ebp + 0xc]
        jnz     L_729b46
        cmp     dword ptr [edi + 0x114], ebx
        jl      L_729b46
        lea     eax, [ebp - 0x160]
        push    eax
        lea     ecx, [edi + 0xc]
        push    ecx
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_729c58
L_729b46:
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        jnz     L_729b17
L_729b4d:
        mov     edx, dword ptr [g_8492fc]
        push    edx
        push    0x780
        call    FUN_006f3c80
        mov     ebx, eax
        xor     eax, eax
        test    esi, esi
        mov     ecx, 0x1e0
        mov     edi, ebx
        rep stosd
        mov     eax, dword ptr [g_8816c8]
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx], 0x4587abba
        mov     dword ptr [ebx + 0x8], 0x1
        mov     dword ptr [g_8816c8], ebx
        jnz     L_729b9d
        lea     edi, [ebx + 0xc]
        mov     ecx, 0x41
        lea     esi, [ebp - 0x160]
        rep movsd
        mov     esi, dword ptr [ebp + 0x14]
L_729b9d:
        test    esi, esi
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebx + 0x110], ecx
        mov     dword ptr [ebx + 0x114], edx
        mov     dword ptr [ebx + 0x758], 0x1
        mov     dword ptr [ebx + 0x134], esi
        mov     dword ptr [ebx + 0x75c], 0x0
        mov     dword ptr [ebp - 0x4], eax
        /* __emit: MSVC6 miscomputes forward jcc rel32 displacement (off-by-2) */
        __emit 0x0F
        __emit 0x85
        __emit 0xDA
        __emit 0x06
        __emit 0x00
        __emit 0x00
        mov     esi, eax
        push    0x2e
        push    esi
        call    dword ptr [g_76b2a4]
        add     esp, 0x8
        test    eax, eax
        mov     dword ptr [ebp - 0x4], eax
        jz      L_729d27
L_729bf6:
        mov     edi, dword ptr [g_76b29c]
        inc     eax
        mov     dword ptr [ebp - 0x4], eax
        movsx   ecx, byte ptr [eax]
        push    ecx
        call    edi
        add     esp, 0x4
        cmp     eax, 0x74
        jnz     L_729c3d
        mov     edx, dword ptr [ebp - 0x4]
        movsx   eax, byte ptr [edx + 0x1]
        push    eax
        call    edi
        add     esp, 0x4
        cmp     eax, 0x74
        jnz     L_729c3d
        mov     ecx, dword ptr [ebp - 0x4]
        movsx   edx, byte ptr [ecx + 0x2]
        push    edx
        call    edi
        add     esp, 0x4
        cmp     eax, 0x66
        jz      L_729c66
        mov     eax, dword ptr [ebp - 0x4]
        movsx   ecx, byte ptr [eax]
        push    ecx
        call    edi
        add     esp, 0x4
        cmp     eax, 0x63
        jz      L_729c66
L_729c3d:
        mov     edx, dword ptr [ebp - 0x4]
        push    0x2e
        push    edx
        call    dword ptr [g_76b2a4]
        add     esp, 0x8
        test    eax, eax
        mov     dword ptr [ebp - 0x4], eax
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-6) */
        __emit 0x75
        __emit 0xA3
        jmp     L_729d27
L_729c58:
        inc     dword ptr [edi + 0x8]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_729c66:
        mov     edi, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
L_729c6e:
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx + 0xc]
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x8]
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp - 0x4]
        sub     ecx, eax
        push    0x5c
        push    edx
        mov     byte ptr [ecx + ebx + 0xf], 0x0
        call    dword ptr [g_76b2a0]
        add     esp, 0x8
        test    eax, eax
        jz      L_729ccb
        lea     edx, [eax + 0x1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        push    esi
        push    edx
        lea     eax, [ebx + 0xc]
        push    eax
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        mov     byte ptr [esi + ebx + 0xc], 0x0
L_729ccb:
        mov     esi, 0xc
        mov     dword ptr [ebx + 0x75c], 0x1
        mov     dword ptr [ebx + 0x128], esi
        mov     eax, dword ptr [ebp - 0x4]
        add     eax, 0x3
        mov     dword ptr [ebp - 0x4], eax
        mov     dl, byte ptr [eax]
        inc     eax
        cmp     dl, 0x2c
        mov     dword ptr [ebp - 0x4], eax
        /* __emit: MSVC6 miscomputes forward jcc rel32 displacement (off-by-2) */
        __emit 0x0F
        __emit 0x85
        __emit 0x71
        __emit 0x09
        __emit 0x00
        __emit 0x00
        push    0x0
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    eax
        call    dword ptr [g_76b36c]
        add     esp, 0xc
        test    eax, eax
        mov     dword ptr [ebx + 0x128], eax
        /* __emit: MSVC6 miscomputes forward jcc rel32 displacement (off-by-2) */
        __emit 0x0F
        __emit 0x85
        __emit 0x53
        __emit 0x09
        __emit 0x00
        __emit 0x00
        pop     edi
        mov     dword ptr [ebx + 0x128], esi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_729d27:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        lea     edx, [ecx + esi - 0x4]
        push    edx
        push    0x7a58f0
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        /* __emit: MSVC6 miscomputes forward jcc rel32 displacement (off-by-2) */
        __emit 0x0F
        __emit 0x85
        __emit 0x6B
        __emit 0x05
        __emit 0x00
        __emit 0x00
        mov     dword ptr [ebp + 0x14], eax
        mov     eax, dword ptr [g_849308]
        push    eax
        call    FUN_006f4950
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     edx, [ebp + 0x14]
        push    edx
        push    esi
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     edi, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edi]
        cmp     eax, 0x34463344
        jnz     L_72a075
        mov     esi, dword ptr [edi + 0x655]
        lea     eax, [edi + 0x4d]
        mov     dword ptr [ebp - 0x48], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x8], edi
        add     edi, 0x655
        test    eax, eax
        mov     dword ptr [ebx + 0x758], eax
        mov     dword ptr [ebp - 0x44], 0x0
        jle     L_729e47
        mov     eax, esi
        imul    eax, esi
        mov     dword ptr [ebp - 0x10], eax
        lea     eax, [ebx + 0x760]
        mov     dword ptr [ebp + 0xc], eax
L_729dbc:
        mov     ecx, dword ptr [ebp + 0x8]
        push    0x0
        push    0x0
        push    0x41
        push    esi
        push    ecx
        push    0x2
        call    FUN_00717a10
        mov     edx, dword ptr [ebp + 0xc]
        lea     ecx, [ebp - 0x5c]
        push    ecx
        push    0x0
        push    0x0
        push    eax
        mov     dword ptr [edx], eax
        call    FUN_00717b30
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x50]
        mov     ecx, dword ptr [ebp - 0x5c]
        add     edi, 0x4
        test    eax, eax
        mov     dword ptr [ebx + 0x120], edx
        jz      L_729e1f
        mov     dword ptr [ebp - 0x40], eax
L_729dfa:
        mov     dl, byte ptr [edi]
        xor     eax, eax
        mov     al, dl
        neg     al
        sbb     al, al
        and     eax, 0xff
        mov     byte ptr [ecx], al
        inc     ecx
        mov     byte ptr [ecx], al
        inc     ecx
        mov     byte ptr [ecx], al
        mov     eax, dword ptr [ebp - 0x40]
        inc     ecx
        mov     byte ptr [ecx], dl
        inc     ecx
        inc     edi
        dec     eax
        mov     dword ptr [ebp - 0x40], eax
        jnz     L_729dfa
L_729e1f:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_00717ac0
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp - 0x44]
        add     ecx, 0x4
        mov     dword ptr [ebp + 0xc], ecx
        mov     ecx, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [ecx]
        inc     eax
        cmp     eax, edx
        mov     dword ptr [ebp - 0x44], eax
        jl      L_729dbc
L_729e47:
        xor     edx, edx
        mov     dword ptr [ebp - 0x3c], edx
        mov     dword ptr [ebp - 0x38], edx
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x30], edx
        mov     dword ptr [ebp - 0x2c], edx
        mov     byte ptr [ebx + 0x2f8], dl
        mov     byte ptr [ebx + 0x3d8], dl
        mov     byte ptr [ebx + 0x138], dl
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x8], 0x0
        fild    qword ptr [ebp - 0xc]
        mov     ecx, dword ptr [edx + 0x51]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x355]
        fdivr   dword ptr [g_76d064]
        mov     byte ptr [ebx + 0x218], al
        sub     ecx, 0x2
        mov     dword ptr [ebx + 0x128], ecx
        mov     dword ptr [ebx + 0x118], esi
        lea     esi, [edx + 0x75]
        lea     edi, [ebx + 0x678]
        and     eax, 0xff
        mov     dword ptr [ebx + 0x124], eax
        cmp     dword ptr [ebp + 0x10], 0x21
        mov     ecx, 0x38
        mov     byte ptr [ebp + 0xc], 0xff
        mov     dword ptr [ebx + 0x130], 0x1
        rep movsd
        fstp    dword ptr [ebx + 0x11c]
        jle     L_72a04b
        add     edx, 0x276
        mov     eax, 0xfffffe08
        sub     eax, ebx
        mov     dword ptr [ebp - 0x10], edx
        lea     esi, [ebx + 0x219]
        mov     dword ptr [ebp + 0x8], eax
L_729ef2:
        mov     al, byte ptr [ebp + 0xc]
        cmp     al, byte ptr [esi + 0x460]
        jz      L_729f42
        cmp     al, 0xff
        jz      L_729f17
        mov     edx, dword ptr [ebp + 0xc]
        and     edx, 0xff
        mov     eax, dword ptr [ebx + edx * 4 + 0x760]
        push    eax
        call    FUN_00717ac0
L_729f17:
        xor     eax, eax
        mov     al, byte ptr [esi + 0x460]
        lea     ecx, [ebp - 0x3c]
        push    ecx
        push    0x1
        push    0x0
        and     eax, 0xff
        mov     edx, dword ptr [ebx + eax * 4 + 0x760]
        push    edx
        call    FUN_00717b30
        mov     al, byte ptr [esi + 0x460]
        mov     byte ptr [ebp + 0xc], al
L_729f42:
        mov     eax, dword ptr [ebp - 0x10]
        mov     cl, byte ptr [eax - 0x100]
        mov     dl, byte ptr [eax]
        mov     al, byte ptr [eax + 0x100]
        mov     byte ptr [esi + 0xe0], cl
        mov     byte ptr [esi + 0x1c0], dl
        mov     byte ptr [esi - 0xe0], 0x0
        dec     al
        mov     byte ptr [esi], al
        mov     eax, dword ptr [ebp - 0x3c]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x1c0]
        xor     edx, edx
        mov     dl, byte ptr [esi + 0xe0]
        mov     byte ptr [esi + 0x2a0], 0x0
        imul    ecx, dword ptr [ebp - 0x30]
        add     ecx, edx
        lea     edi, [eax + ecx * 4]
        mov     cl, byte ptr [ebx + 0x128]
        mov     byte ptr [esi + 0x380], cl
L_729f99:
        xor     edx, edx
        mov     dl, byte ptr [esi]
        xor     eax, eax
        test    edx, edx
        jle     L_729fb3
L_729fa5:
        mov     ecx, edi
        test    byte ptr [ecx + 0x3], 0xff
        jnz     L_729fd7
        inc     eax
        add     ecx, 0x4
        cmp     eax, edx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
L_729fb3:
        mov     cl, byte ptr [esi + 0x2a0]
        mov     edx, dword ptr [ebp - 0x30]
        inc     cl
        mov     byte ptr [esi + 0x2a0], cl
        mov     al, byte ptr [esi + 0x380]
        dec     al
        lea     edi, [edi + edx * 4]
        mov     byte ptr [esi + 0x380], al
        jnz     L_729f99
L_729fd7:
        mov     ecx, dword ptr [ebp - 0x30]
        xor     eax, eax
        mov     al, byte ptr [esi + 0x380]
        mov     edx, eax
        and     edx, 0xff
        imul    edx, ecx
        test    al, al
        lea     edi, [edi + edx * 4]
        jz      L_72a025
        lea     eax, [ecx * 4 + 0]
        mov     dword ptr [ebp - 0x8], eax
L_729ffe:
        mov     eax, dword ptr [ebp - 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        sub     edi, eax
        xor     eax, eax
        test    ecx, ecx
        jle     L_72a01d
L_72a00f:
        mov     edx, edi
        test    byte ptr [edx + 0x3], 0xff
        jnz     L_72a025
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
L_72a01d:
        dec     byte ptr [esi + 0x380]
        jnz     L_729ffe
L_72a025:
        mov     al, byte ptr [esi + 0x380]
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp + 0x8]
        add     al, 0x2
        inc     edx
        mov     byte ptr [esi + 0x380], al
        mov     eax, dword ptr [ebp + 0x10]
        inc     esi
        add     ecx, esi
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x10], edx
        jl      L_729ef2
L_72a04b:
        mov     edx, dword ptr [ebp + 0xc]
        and     edx, 0xff
        mov     eax, dword ptr [ebx + edx * 4 + 0x760]
        push    eax
        call    FUN_00717ac0
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        call    FUN_006f4230
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72a075:
        cmp     eax, 0x46443344
        jnz     L_72a29d
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, 0x100
        lea     esi, [edi + 0x4]
        jbe     L_72a09f
        push    0x7a58e0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_72a09f
        int     3
L_72a09f:
        mov     esi, dword ptr [esi]
        mov     edx, dword ptr [ebp + 0x8]
        push    0x0
        push    0x0
        push    0x41
        push    esi
        push    edx
        push    0x2
        call    FUN_00717a10
        lea     ecx, [ebp - 0x3c]
        push    ecx
        push    0x0
        push    0x0
        push    eax
        mov     dword ptr [ebx + 0x760], eax
        call    FUN_00717b30
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [ebp - 0x3c]
        imul    eax, esi
        test    eax, eax
        lea     esi, [edi + 0x1410]
        jz      L_72a102
        mov     dword ptr [ebp + 0x8], eax
L_72a0dd:
        mov     dl, byte ptr [esi]
        xor     eax, eax
        mov     al, dl
        neg     al
        sbb     al, al
        and     eax, 0xff
        mov     byte ptr [ecx], al
        inc     ecx
        mov     byte ptr [ecx], al
        inc     ecx
        mov     byte ptr [ecx], al
        mov     eax, dword ptr [ebp + 0x8]
        inc     ecx
        mov     byte ptr [ecx], dl
        inc     ecx
        inc     esi
        dec     eax
        mov     dword ptr [ebp + 0x8], eax
        jnz     L_72a0dd
L_72a102:
        mov     eax, dword ptr [edi + 0x8]
        sub     eax, 0x2
        mov     dword ptr [ebx + 0x128], eax
        mov     eax, dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], 0x0
        fild    qword ptr [ebp - 0xc]
        mov     dl, byte ptr [edi + 0x810]
        mov     ecx, dword ptr [edi + 0x810]
        mov     dword ptr [ebx + 0x118], eax
        fdivr   dword ptr [g_76d064]
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, 0x21
        mov     byte ptr [ebx + 0x218], dl
        mov     edx, dword ptr [ebp - 0x30]
        mov     byte ptr [ebx + 0x2f8], 0x0
        mov     byte ptr [ebx + 0x3d8], 0x0
        mov     byte ptr [ebx + 0x138], 0x0
        mov     dword ptr [ebx + 0x124], ecx
        mov     dword ptr [ebx + 0x130], 0x1
        mov     dword ptr [ebx + 0x120], edx
        fstp    dword ptr [ebx + 0x11c]
        jle     L_72a27d
        add     edi, 0x494
        mov     ecx, 0xfffffe08
        sub     ecx, ebx
        lea     eax, [ebx + 0x219]
        mov     dword ptr [ebp + 0xc], edi
        mov     dword ptr [ebp + 0x8], ecx
L_72a195:
        mov     esi, dword ptr [ebp + 0xc]
        mov     cl, byte ptr [esi - 0x400]
        mov     dl, byte ptr [esi]
        mov     byte ptr [eax + 0xe0], cl
        mov     cl, byte ptr [esi + 0x400]
        mov     byte ptr [eax + 0x1c0], dl
        xor     edx, edx
        mov     byte ptr [eax - 0xe0], 0x0
        dec     cl
        mov     byte ptr [eax], cl
        mov     dl, byte ptr [eax + 0x1c0]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     esi, edx
        xor     edx, edx
        imul    esi, ecx
        mov     dl, byte ptr [eax + 0xe0]
        mov     byte ptr [eax + 0x2a0], 0x0
        add     esi, edx
        mov     edx, dword ptr [ebp - 0x3c]
        lea     esi, [edx + esi * 4]
        mov     dl, byte ptr [ebx + 0x128]
        mov     byte ptr [eax + 0x380], dl
L_72a1f0:
        xor     edx, edx
        mov     dl, byte ptr [eax]
        xor     edi, edi
        test    edx, edx
        jle     L_72a20d
L_72a1fc:
        mov     ecx, esi
        test    byte ptr [ecx + 0x3], 0xff
        jnz     L_72a228
        inc     edi
        add     ecx, 0x4
        cmp     edi, edx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
        mov     ecx, dword ptr [ebp - 0x30]
L_72a20d:
        inc     byte ptr [eax + 0x2a0]
        mov     dl, byte ptr [eax + 0x380]
        dec     dl
        lea     esi, [esi + ecx * 4]
        mov     byte ptr [eax + 0x380], dl
        jnz     L_72a1f0
        jmp     L_72a22b
L_72a228:
        mov     ecx, dword ptr [ebp - 0x30]
L_72a22b:
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x380]
        imul    edx, ecx
        shl     ecx, 0x2
        lea     esi, [esi + edx * 4]
        mov     dword ptr [ebp - 0x8], ecx
L_72a23f:
        sub     esi, dword ptr [ebp - 0x8]
        xor     edx, edx
        mov     dl, byte ptr [eax]
        xor     edi, edi
        test    edx, edx
        jle     L_72a25c
L_72a24e:
        mov     ecx, esi
        test    byte ptr [ecx + 0x3], 0xff
        jnz     L_72a264
        inc     edi
        add     ecx, 0x4
        cmp     edi, edx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
L_72a25c:
        dec     byte ptr [eax + 0x380]
        jmp     L_72a23f
L_72a264:
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        add     edi, 0x4
        inc     eax
        lea     ecx, [eax + edx]
        cmp     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0xc], edi
        jl      L_72a195
L_72a27d:
        mov     edx, dword ptr [ebx + 0x760]
        push    edx
        call    FUN_00717ac0
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        call    FUN_006f4230
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_72a29d:
        push    0x7a58c4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        /* __emit: MSVC6 miscomputes forward jcc rel8 displacement (off-by-2) */
        __emit 0x74
        __emit 0x22
        int     3
        /* __emit: Ghidra missed this EB 1F jmp (obfuscation); MSVC6 jmp would miscompute */
        __emit 0xEB
        __emit 0x1F
L_72a2b1:
        mov     dword ptr [ebx + 0x760], esi
        jmp     L_72a2d0
L_72a2b9:
        push    0x0
        push    0x0
        push    0x2041
        push    esi
        push    -0x1
        call    FUN_00717a60
        mov     dword ptr [ebx + 0x760], eax
L_72a2d0:
        mov     edx, dword ptr [ebx + 0x760]
        lea     ecx, [ebp - 0x24]
        push    ecx
        push    0x1
        push    0x0
        push    edx
        call    FUN_00717b30
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [ebp - 0x24]
        xor     eax, eax
        cmp     ecx, 0x2
        setz    al
        mov     dword ptr [ebp - 0x8], 0x0
        mov     esi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebx + 0x130], eax
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebx + 0x118], ecx
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0xc], edx
        fild    qword ptr [ebp - 0xc]
        fdivr   dword ptr [g_76d064]
        fstp    dword ptr [ebx + 0x11c]
        mov     eax, dword ptr [ebp - 0x18]
        mov     dword ptr [ebx + 0x120], eax
        cmp     esi, dword ptr [ebp - 0x1c]
        jc      L_72a340
        push    0x7a589c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_72a340
        int     3
L_72a340:
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, eax
        imul    ecx, esi
        mov     edx, dword ptr [edi + ecx * 4]
        lea     edi, [edi + ecx * 4]
        and     edx, 0xff000000
        cmp     edx, 0xff000000
        jnz     L_72a380
        mov     ecx, dword ptr [edi + eax * 4]
        and     ecx, edx
        cmp     ecx, edx
        jnz     L_72a380
        mov     edx, dword ptr [edi + 0x4]
        and     edx, 0xff000000
        cmp     edx, 0xff000000
        jnz     L_72a380
        mov     eax, dword ptr [edi + eax * 4 + 0x4]
        and     eax, edx
        cmp     eax, edx
        jnz     L_72a392
L_72a380:
        push    0x7a5874
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_72a392
        int     3
L_72a392:
        mov     ecx, 0x1
        mov     dword ptr [ebx + 0x124], ecx
L_72a39d:
        mov     eax, dword ptr [ebx + 0x124]
        mov     edx, dword ptr [edi + 0x4]
        add     edi, 0x4
        inc     eax
        and     edx, 0xff000000
        cmp     edx, 0xff000000
        mov     dword ptr [ebx + 0x124], eax
        jnz     L_72a3cd
        mov     edx, dword ptr [ebp - 0x18]
        test    byte ptr [edi + edx * 4 + 0x3], 0xff
        jnz     L_72a3cd
        cmp     eax, dword ptr [ebp - 0x20]
        jc      L_72a39d
L_72a3cd:
        mov     dword ptr [ebx + 0x128], ecx
        mov     eax, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x24]
        imul    eax, esi
        lea     eax, [ecx + eax * 4]
        mov     edx, 0xff000000
L_72a3e4:
        mov     ecx, dword ptr [ebx + 0x128]
        inc     ecx
        mov     dword ptr [ebx + 0x128], ecx
        mov     edi, dword ptr [ebp - 0x18]
        lea     eax, [eax + edi * 4]
        mov     edi, dword ptr [eax]
        and     edi, edx
        cmp     edi, edx
        jnz     L_72a40c
        test    dword ptr [eax + 0x4], edx
        jnz     L_72a40c
        lea     edi, [ecx + esi]
        cmp     edi, dword ptr [ebp - 0x1c]
        jc      L_72a3e4
L_72a40c:
        mov     eax, dword ptr [ebp - 0x20]
        xor     edx, edx
        div     dword ptr [ebx + 0x124]
        mov     esi, dword ptr [ebp + 0x10]
        xor     edx, edx
        mov     edi, eax
        lea     eax, [esi - 0x20]
        div     edi
        mov     dword ptr [ebx + 0x12c], edi
        mov     edi, dword ptr [ebp + 0xc]
        imul    eax, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        add     eax, edi
        cmp     eax, ecx
        jbe     L_72a452
        lea     edx, [esi - 0x1]
        push    edx
        lea     eax, [esi - 0x20]
        push    eax
        push    0x7a5844
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_72a452
        int     3
L_72a452:
        mov     eax, dword ptr [ebx + 0x124]
        mov     dword ptr [ebp + 0xc], eax
        sar     eax, 0x1
        cmp     esi, 0x21
        mov     dword ptr [ebp + 0x14], edi
        mov     byte ptr [ebx + 0x2f8], 0x1
        mov     byte ptr [ebx + 0x3d8], 0x1
        mov     byte ptr [ebx + 0x138], 0x0
        mov     byte ptr [ebx + 0x218], al
        jle     L_72a65d
        mov     eax, 0xfffffe08
        sub     eax, ebx
        lea     edi, [ebx + 0x219]
        mov     dword ptr [ebp + 0x8], eax
L_72a494:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     byte ptr [edi + 0xe0], al
        mov     byte ptr [edi + 0x1c0], cl
        imul    ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x24]
        add     ecx, eax
        lea     esi, [edx + ecx * 4]
        push    esi
        mov     byte ptr [edi - 0xe0], 0x0
        push    ebx
        mov     byte ptr [edi], 0x0
        call    FUN_00729aa0
        test    al, al
        jz      L_72a4fa
L_72a4c7:
        mov     al, byte ptr [edi - 0xe0]
        add     esi, 0x4
        inc     al
        mov     byte ptr [edi - 0xe0], al
        mov     ecx, dword ptr [ebx + 0x124]
        xor     eax, eax
        mov     al, byte ptr [edi - 0xe0]
        and     eax, 0xff
        cmp     eax, ecx
        jz      L_72a4fa
        push    esi
        push    ebx
        call    FUN_00729aa0
        test    al, al
        jnz     L_72a4c7
L_72a4fa:
        mov     ecx, dword ptr [ebx + 0x124]
        xor     eax, eax
        mov     al, byte ptr [edi - 0xe0]
        cmp     eax, ecx
        jnz     L_72a522
        mov     byte ptr [edi - 0xe0], 0x0
        mov     ecx, dword ptr [ebx + 0x124]
        sar     ecx, 0x1
        mov     byte ptr [edi], cl
        jmp     L_72a64b
L_72a522:
        push    esi
        push    ebx
        call    FUN_00729aa0
        test    al, al
        jnz     L_72a55e
L_72a52d:
        mov     al, byte ptr [edi]
        add     esi, 0x4
        inc     al
        mov     byte ptr [edi], al
        mov     ecx, dword ptr [ebx + 0x124]
        xor     eax, eax
        mov     al, byte ptr [edi]
        xor     edx, edx
        mov     dl, byte ptr [edi - 0xe0]
        and     eax, 0xff
        add     eax, edx
        cmp     eax, ecx
        jz      L_72a55e
        push    esi
        push    ebx
        call    FUN_00729aa0
        test    al, al
        jz      L_72a52d
L_72a55e:
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1c0]
        xor     ecx, ecx
        mov     cl, byte ptr [edi - 0xe0]
        xor     edx, edx
        mov     dl, byte ptr [edi + 0xe0]
        imul    eax, dword ptr [ebp - 0x18]
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0x24]
        add     eax, edx
        mov     edx, dword ptr [ebp + 0x8]
        lea     esi, [ecx + eax * 4]
        lea     eax, [edi + edx]
        mov     byte ptr [eax + ebx + 0x498], 0x0
        mov     cl, byte ptr [ebx + 0x128]
        mov     dword ptr [ebp - 0x8], eax
        mov     byte ptr [eax + ebx + 0x578], cl
L_72a5a2:
        xor     edx, edx
        mov     dl, byte ptr [edi]
        xor     eax, eax
        test    edx, edx
        jle     L_72a5bc
L_72a5ae:
        mov     ecx, esi
        test    byte ptr [ecx + 0x3], 0xff
        jnz     L_72a5e0
        inc     eax
        add     ecx, 0x4
        cmp     eax, edx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
L_72a5bc:
        mov     cl, byte ptr [edi + 0x2a0]
        mov     edx, dword ptr [ebp - 0x18]
        inc     cl
        mov     byte ptr [edi + 0x2a0], cl
        mov     al, byte ptr [edi + 0x380]
        dec     al
        lea     esi, [esi + edx * 4]
        mov     byte ptr [edi + 0x380], al
        jnz     L_72a5a2
L_72a5e0:
        mov     ecx, dword ptr [ebp - 0x8]
        xor     eax, eax
        mov     al, byte ptr [ecx + ebx + 0x578]
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x18]
        imul    edx, eax
        lea     esi, [esi + edx * 4]
L_72a5f7:
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        neg     eax
        lea     esi, [esi + eax * 4]
        xor     eax, eax
        test    ecx, ecx
        jle     L_72a616
L_72a608:
        mov     edx, esi
        test    byte ptr [edx + 0x3], 0xff
        jnz     L_72a621
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        /* __emit: MSVC6 miscomputes backward jcc rel8 displacement (off-by-2) */
        __emit 0x7C
        __emit 0xF2
L_72a616:
        dec     byte ptr [edi + 0x380]
        mov     eax, dword ptr [ebp - 0x18]
        jmp     L_72a5f7
L_72a621:
        mov     eax, dword ptr [ebx + 0x124]
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        add     eax, ecx
        mov     dword ptr [ebp + 0xc], ecx
        cmp     eax, dword ptr [ebp - 0x20]
        jbe     L_72a64b
        mov     ecx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebx + 0x128]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], 0x0
        mov     dword ptr [ebp + 0x14], ecx
L_72a64b:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        inc     edi
        lea     edx, [edi + ecx]
        cmp     edx, eax
        jl      L_72a494
L_72a65d:
        mov     eax, dword ptr [ebx + 0x760]
        push    eax
        call    FUN_00717ac0
L_72a669:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
