/*
 * FUN_00737D60 (3072 B) - DirectX setup / DLL loader. Loads dsetup.dll,
 * checks the DirectX version, then loads bladed.dll/blade.dll/ddraw.dll and
 * resolves a table of DirectDraw functions into globals at 0x008aadxx.
 *
 * __cdecl, no params, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void (__stdcall *g_76b644)(void *);                 /* CoInitialize */
extern void *(__stdcall *g_76b0c0)(const char *);          /* LoadLibraryA */
extern int (__cdecl *g_76b420)(char *, const char *, ...); /* sprintf */
extern int (__stdcall *g_76b598)(void *, const char *, const char *, unsigned int); /* MessageBoxA */
extern void (__cdecl *g_76b38c)(int);                      /* exit */
extern void *(__stdcall *g_76b0c8)(void *, const char *);  /* GetProcAddress */
extern int (__stdcall *g_76b0b8)(void *);                  /* FreeLibrary */
extern int (__cdecl *g_76b2b0)(const char *, const char *, unsigned int); /* _strnicmp */

/* direct calls */
extern void __cdecl FUN_006faa30(int, int);
extern void *__cdecl FUN_0072d830(void *, int);
extern void *__cdecl FUN_00738a40(void);

/* data globals */
extern char g_8598d0[];    /* DAT_008598d0 */
extern char g_8597cc[];    /* DAT_008597cc */
extern void *g_896c88;     /* DAT_00896c88 */
extern int g_858c08;       /* DAT_00858c08 */
extern unsigned short g_8aac70; /* DAT_008aac70 */
extern int g_8aac6c;       /* DAT_008aac6c */
extern int g_8597a4;       /* DAT_008597a4 */
extern char g_8aa9e4;      /* DAT_008aa9e4 */
extern char g_859afe;      /* DAT_00859afe */
extern void *g_8aad9c;     /* DAT_008aad9c */
extern void *g_8aad84;     /* DAT_008aad84 */
extern void *g_8aad80;     /* DAT_008aad80 */
extern void *g_8aad7c;     /* DAT_008aad7c */
extern void *g_8aad88;     /* DAT_008aad88 */
extern char g_8aab68[];    /* DAT_008aab68 */
extern void *g_8aadac;     /* DAT_008aadac */
extern void *g_8aad0c;     /* DAT_008aad0c */
extern void *g_8aad08;     /* DAT_008aad08 */
extern void *g_8aad04;     /* DAT_008aad04 */
extern void *g_8aad00;     /* DAT_008aad00 */
extern void *g_8aada4;     /* DAT_008aada4 */
extern void *g_8aad70;     /* DAT_008aad70 */
extern void *g_8aad6c;     /* DAT_008aad6c */
extern void *g_8aada0;     /* DAT_008aada0 */
extern void *g_8aad74;     /* DAT_008aad74 */
extern void *g_8aada8;     /* DAT_008aada8 */
extern void *g_8aad68;     /* DAT_008aad68 */
extern void *g_8aad64;     /* DAT_008aad64 */
extern void *g_8aad60;     /* DAT_008aad60 */
extern void *g_8aad5c;     /* DAT_008aad5c */
extern void *g_8aad58;     /* DAT_008aad58 */
extern void *g_8aad54;     /* DAT_008aad54 */
extern void *g_8aad50;     /* DAT_008aad50 */
extern void *g_8aad4c;     /* DAT_008aad4c */
extern void *g_8aad48;     /* DAT_008aad48 */
extern void *g_8aad34;     /* DAT_008aad34 */
extern void *g_8aad28;     /* DAT_008aad28 */
extern void *g_8aad2c;     /* DAT_008aad2c */
extern void *g_8aad30;     /* DAT_008aad30 */
extern void *g_8aad24;     /* DAT_008aad24 */
extern void *g_8aad20;     /* DAT_008aad20 */
extern void *g_8aad44;     /* DAT_008aad44 */
extern void *g_8aad40;     /* DAT_008aad40 */
extern void *g_8aad3c;     /* DAT_008aad3c */
extern void *g_8aad38;     /* DAT_008aad38 */
extern char g_8589a1;      /* DAT_008589a1 */
extern int g_8aadb0;       /* DAT_008aadb0 */
extern int g_8597c4;       /* DAT_008597c4 */
extern void *g_8aadb8;     /* DAT_008aadb8 */
extern void *g_8aacc8;     /* DAT_008aacc8 */
extern void *g_8aacc4;     /* DAT_008aacc4 */
extern void *g_8aacc0;     /* DAT_008aacc0 */
extern void *g_8aacbc;     /* DAT_008aacbc */
extern void *g_8aacb8;     /* DAT_008aacb8 */
extern void *g_8aacb4;     /* DAT_008aacb4 */
extern void *g_8aacb0;     /* DAT_008aacb0 */
extern void *g_8aacac;     /* DAT_008aacac */
extern void *g_8aaca8;     /* DAT_008aaca8 */
extern void *g_8aaca4;     /* DAT_008aaca4 */
extern void *g_8aaca0;     /* DAT_008aaca0 */
extern void *g_8aac9c;     /* DAT_008aac9c */
extern void *g_8aac98;     /* DAT_008aac98 */
extern void *g_8aac94;     /* DAT_008aac94 */
extern void *g_8aac90;     /* DAT_008aac90 */
extern void *g_8aac8c;     /* DAT_008aac8c */
extern void *g_8aac88;     /* DAT_008aac88 */
extern void *g_8aac84;     /* DAT_008aac84 */
extern void *g_8aac80;     /* DAT_008aac80 */
extern void *g_8aad90;     /* DAT_008aad90 */
extern void *g_8aad94;     /* DAT_008aad94 */
extern void *g_8aad98;     /* DAT_008aad98 */
extern void *g_8aac74;     /* DAT_008aac74 */
extern char g_859694[];    /* DAT_00859694 */

__declspec(naked) void __cdecl FUN_00737D60(void)
{
    __asm {
        sub     esp, 0x38c
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x0
        push    0x0
        call    FUN_006faa30
        push    0x0
        call    dword ptr [g_76b644]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6fb4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_76b0c0]
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    ebx
        mov     esi, eax
        test    esi, esi
        jnz     L_737e9a
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6f98
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebp
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    ebx
        mov     esi, eax
        test    esi, esi
        jnz     L_737e9a
        mov     ecx, dword ptr [g_896c88]
        push    0x8598d0
        push    0x8597cc
        push    0x2743
        push    ecx
        call    FUN_0072d830
        push    eax
        lea     edx, [esp + 0x1a0]
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        push    0x30
        push    0x859694
        lea     eax, [esp + 0x19c]
        push    eax
        push    esi
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_737e9a:
        mov     ebp, dword ptr [g_76b0c8]
        push    0x7a6f80
        push    esi
        call    ebp
        xor     edi, edi
        cmp     eax, edi
        jz      L_737ebe
        push    0x8aac6c
        push    0x8aac70
        call    eax
        test    eax, eax
        jnz     L_737eca
L_737ebe:
        mov     dword ptr [g_8aac70], edi
        mov     dword ptr [g_8aac6c], edi
L_737eca:
        push    esi
        call    dword ptr [g_76b0b8]
        cmp     dword ptr [g_8597a4], edi
        jz      L_737f3f
        mov     al, byte ptr [g_8aa9e4]
        test    al, al
        jnz     L_737f60
        mov     eax, dword ptr [g_8aac70]
        cmp     ax, 0x7
        jc      L_737efb
        jnz     L_737f60
        cmp     dword ptr [g_8aac6c], 0x2cc
        jnc     L_737f60
L_737efb:
        call    FUN_00738a40
        push    eax
        lea     ecx, [esp + 0x118]
        push    0x7a6f54
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0x30
        push    0x859694
        lea     edx, [esp + 0x11c]
        push    edx
        push    edi
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_737f3f:
        mov     eax, dword ptr [g_8aac70]
        cmp     ax, 0x8
        jc      L_738901
        jnz     L_737f60
        cmp     dword ptr [g_8aac6c], 0x190
        jc      L_738901
L_737f60:
        mov     al, byte ptr [g_859afe]
        test    al, al
        jz      L_738038
        push    0x7a46c4
        call    ebx
        cmp     eax, edi
        mov     dword ptr [g_8aad9c], eax
        jnz     L_737fc7
        mov     eax, dword ptr [g_896c88]
        push    0x272f
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x198]
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x8
        push    0x30
        push    0x859694
        lea     edx, [esp + 0x19c]
        push    edx
        push    edi
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_737fc7:
        push    0x7a6f40
        push    eax
        call    ebp
        mov     dword ptr [g_8aad84], eax
        mov     eax, dword ptr [g_8aad9c]
        push    0x7a6f28
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aad9c]
        push    0x7a6f10
        push    ecx
        mov     dword ptr [g_8aad80], eax
        call    ebp
        mov     dword ptr [g_8aad7c], eax
        cmp     dword ptr [g_8aad84], edi
        mov     dword ptr [g_8aad88], edi
        jz      L_738013
        cmp     dword ptr [g_8aad80], edi
        jnz     L_7382bc
L_738013:
        push    0x30
        push    0x859694
        push    0x7a6ef4
        push    edi
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_738038:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8aab68
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7a6ee8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8aab68
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    0x8aab68
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aad9c], eax
        jnz     L_738253
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8aab68
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6ecc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8aab68
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    0x8aab68
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aad9c], eax
        jnz     L_738253
        or      ecx, 0xffffffff
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x10
        jc      L_73813a
        or      ecx, 0xffffffff
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        mov     eax, 0x8598d0
        push    0x10
        dec     ecx
        sub     eax, 0x10
        add     ecx, eax
        push    0x7a6ad4
        push    ecx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
L_73813a:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8aab68
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7a6b10
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8aab68
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    0x8aab68
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aad9c], eax
        jnz     L_738253
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x8aab68
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6eb0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8aab68
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    0x8aab68
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aad9c], eax
        jnz     L_738253
        mov     eax, dword ptr [g_896c88]
        push    0x8598d0
        push    0x8597cc
        push    0x2731
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x1a0]
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        push    0x30
        push    0x859694
        lea     edx, [esp + 0x19c]
        push    edx
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_738253:
        push    0x7a6f40
        push    eax
        call    ebp
        mov     dword ptr [g_8aad84], eax
        mov     eax, dword ptr [g_8aad9c]
        push    0x7a6f28
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aad9c]
        push    0x7a6f10
        push    ecx
        mov     dword ptr [g_8aad80], eax
        call    ebp
        mov     edx, dword ptr [g_8aad9c]
        push    0x7a6ea8
        push    edx
        mov     dword ptr [g_8aad7c], eax
        call    ebp
        mov     ecx, dword ptr [g_8aad84]
        test    ecx, ecx
        mov     dword ptr [g_8aad88], eax
        jz      L_7388db
        mov     ecx, dword ptr [g_8aad80]
        test    ecx, ecx
        jz      L_7388db
        test    eax, eax
        jz      L_7388db
L_7382bc:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8598d0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6e9c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aadac], eax
        jnz     L_738382
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6e80
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aadac], eax
        jz      L_7383c7
L_738382:
        push    0x7a6e78
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadac]
        push    0x7a6e70
        push    ecx
        mov     dword ptr [g_8aad0c], eax
        call    ebp
        mov     edx, dword ptr [g_8aadac]
        push    0x7a6e68
        push    edx
        mov     dword ptr [g_8aad08], eax
        call    ebp
        mov     dword ptr [g_8aad04], eax
        mov     eax, dword ptr [g_8aadac]
        push    0x7a6e5c
        push    eax
        call    ebp
        mov     dword ptr [g_8aad00], eax
L_7383c7:
        push    0x7a46e8
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aada4], eax
        jnz     L_73840a
        mov     ecx, dword ptr [g_896c88]
        push    0x30
        push    0x859694
        push    0x2734
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_73840a:
        push    0x7a6e48
        push    eax
        call    ebp
        mov     edx, dword ptr [g_8aada4]
        push    0x7a6e30
        push    edx
        mov     dword ptr [g_8aad70], eax
        call    ebp
        mov     ecx, dword ptr [g_8aad70]
        test    ecx, ecx
        mov     dword ptr [g_8aad6c], eax
        jnz     L_73845d
        test    eax, eax
        jnz     L_73845d
        push    0x30
        push    0x859694
        push    0x7a6e0c
        push    eax
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_73845d:
        push    0x7a46dc
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aada0], eax
        jnz     L_73849f
        mov     eax, dword ptr [g_896c88]
        push    0x30
        push    0x859694
        push    0x2736
        push    eax
        call    FUN_0072d830
        push    eax
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_73849f:
        push    0x7a6df8
        push    eax
        call    ebp
        test    eax, eax
        mov     dword ptr [g_8aad74], eax
        jnz     L_7384d5
        push    0x30
        push    0x859694
        push    0x7a6dd4
        push    eax
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_7384d5:
        push    0x7a6dc8
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aada8], eax
        jz      L_738646
        push    0x7a6db8
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        push    0x7a6da4
        push    ecx
        mov     dword ptr [g_8aad68], eax
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6d90
        push    edx
        mov     dword ptr [g_8aad64], eax
        call    ebp
        mov     dword ptr [g_8aad60], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6d74
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        push    0x7a6d60
        push    ecx
        mov     dword ptr [g_8aad5c], eax
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6d4c
        push    edx
        mov     dword ptr [g_8aad58], eax
        call    ebp
        mov     dword ptr [g_8aad54], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6d34
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        push    0x7a6d1c
        push    ecx
        mov     dword ptr [g_8aad50], eax
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6d08
        push    edx
        mov     dword ptr [g_8aad4c], eax
        call    ebp
        mov     dword ptr [g_8aad48], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6cfc
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        push    0x7a6cec
        push    ecx
        mov     dword ptr [g_8aad34], eax
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6ce0
        push    edx
        mov     dword ptr [g_8aad28], eax
        call    ebp
        mov     dword ptr [g_8aad2c], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6cd0
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        push    0x7a6cbc
        push    ecx
        mov     dword ptr [g_8aad30], eax
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6ca8
        push    edx
        mov     dword ptr [g_8aad24], eax
        call    ebp
        mov     dword ptr [g_8aad20], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6c98
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aada8]
        mov     dword ptr [g_8aad44], eax
        push    0x7a6c80
        push    ecx
        call    ebp
        mov     edx, dword ptr [g_8aada8]
        push    0x7a6c6c
        push    edx
        mov     dword ptr [g_8aad40], eax
        call    ebp
        mov     dword ptr [g_8aad3c], eax
        mov     eax, dword ptr [g_8aada8]
        push    0x7a6c60
        push    eax
        call    ebp
        mov     dword ptr [g_8aad38], eax
L_738646:
        mov     al, byte ptr [g_8589a1]
        test    al, al
        mov     dword ptr [g_8aadb0], 0x0
        jnz     L_738666
        mov     eax, dword ptr [g_8597c4]
        test    eax, eax
        jz      L_7387e7
L_738666:
        push    0x7a6c54
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aadb8], eax
        jnz     L_73868a
        push    0x7a6c48
        call    ebx
        test    eax, eax
        mov     dword ptr [g_8aadb8], eax
        jz      L_7387e7
L_73868a:
        push    0x7a6c3c
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        push    0x7a6c34
        push    ecx
        mov     dword ptr [g_8aacc8], eax
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6c28
        push    edx
        mov     dword ptr [g_8aacc4], eax
        call    ebp
        mov     dword ptr [g_8aacc0], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6c20
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        push    0x7a6c18
        push    ecx
        mov     dword ptr [g_8aacbc], eax
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6c10
        push    edx
        mov     dword ptr [g_8aacb8], eax
        call    ebp
        mov     dword ptr [g_8aacb4], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6c08
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        push    0x7a6c00
        push    ecx
        mov     dword ptr [g_8aacb0], eax
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6bf8
        push    edx
        mov     dword ptr [g_8aacac], eax
        call    ebp
        mov     dword ptr [g_8aaca8], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6bf0
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        push    0x7a6be8
        push    ecx
        mov     dword ptr [g_8aaca4], eax
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6bdc
        push    edx
        mov     dword ptr [g_8aaca0], eax
        call    ebp
        mov     dword ptr [g_8aac9c], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6bcc
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        push    0x7a6bc4
        push    ecx
        mov     dword ptr [g_8aac98], eax
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6bb8
        push    edx
        mov     dword ptr [g_8aac94], eax
        call    ebp
        mov     dword ptr [g_8aac90], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6bac
        push    eax
        call    ebp
        mov     ecx, dword ptr [g_8aadb8]
        mov     dword ptr [g_8aac8c], eax
        push    0x7a6ba0
        push    ecx
        call    ebp
        mov     edx, dword ptr [g_8aadb8]
        push    0x7a6b90
        push    edx
        mov     dword ptr [g_8aac88], eax
        call    ebp
        mov     dword ptr [g_8aac84], eax
        mov     eax, dword ptr [g_8aadb8]
        push    0x7a6b80
        push    eax
        call    ebp
        mov     dword ptr [g_8aac80], eax
L_7387e7:
        push    0x7a470c
        call    ebx
        push    0x7a4700
        mov     dword ptr [g_8aad90], eax
        call    ebx
        push    0x7a6b74
        mov     dword ptr [g_8aad94], eax
        call    ebx
        mov     ecx, dword ptr [g_8aad90]
        test    ecx, ecx
        mov     dword ptr [g_8aad98], eax
        jz      L_7388a8
        mov     ecx, dword ptr [g_8aad94]
        test    ecx, ecx
        jz      L_7388a8
        test    eax, eax
        jnz     L_73885e
        mov     ecx, dword ptr [g_896c88]
        push    0x30
        push    0x859694
        push    0x273a
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_73885e:
        push    0x7a6b64
        push    ecx
        call    ebp
        test    eax, eax
        mov     dword ptr [g_8aac74], eax
        jnz     L_738894
        push    0x30
        push    0x859694
        push    0x7a6b40
        push    eax
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_738894:
        push    0x0
        push    0x1
        call    FUN_006faa30
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38c
        ret
L_7388a8:
        mov     edx, dword ptr [g_896c88]
        push    0x30
        push    0x859694
        push    0x2738
        push    edx
        call    FUN_0072d830
        push    eax
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_7388db:
        push    0x30
        push    0x859694
        push    0x7a6b24
        push    0x0
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
L_738901:
        call    FUN_00738a40
        push    eax
        mov     eax, dword ptr [g_896c88]
        push    0x272e
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x11c]
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0x30
        push    0x859694
        lea     edx, [esp + 0x11c]
        push    edx
        push    edi
        call    dword ptr [g_76b598]
        push    0x1
        mov     dword ptr [g_858c08], 0x5
        call    dword ptr [g_76b38c]
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
        nop
        nop
        nop
    }
}
