/*
 * FUN_007374b0 (2061 B) — Game/process initialization routine.
 *
 * Sets up thread duplication, char-class table, current-directory probing
 * (blade.dll / Assets\Binaries), loads dbghelp.dll, initializes PDB symbol
 * handling, checks OS version, and calls FUN_00746b30 / FUN_0070d2f0.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b158;   /* GetCurrentThreadId */
extern void *g_0076b23c;   /* DuplicateHandle */
extern void *g_0076b214;   /* GetCurrentProcess */
extern void *g_0076b1d8;   /* GetCurrentThread */
extern void *g_0076b258;   /* GetCurrentDirectoryA */
extern void *g_0076b368;   /* __p__pgmptr */
extern void *g_0076b370;   /* _splitpath */
extern void *g_0076b2ac;   /* _stricmp */
extern void *g_0076b194;   /* SetCurrentDirectoryA */
extern void *g_0076b2b0;   /* _strnicmp */
extern void *g_0076b308;   /* strchr */
extern void *g_0076b0b8;   /* FreeLibrary */
extern void *g_0076b0c0;   /* LoadLibraryA */
extern void *g_0076b350;   /* _mbslwr */
extern void *g_0076b598;   /* MessageBoxA */
extern void *g_0076b1dc;   /* SetErrorMode */
extern void *g_0076b204;   /* GetVersionExA */
extern void *g_0076b38c;   /* exit */

/* dbghelp.dll function pointers (data) */
extern void *g_008aa5f0;
extern void *g_008aa5f4;
extern void *g_008aa5f8;

/* Data symbols */
extern char          g_007b7068;
extern unsigned long g_008aaa00;
extern unsigned long g_008aa9e8;
extern char          g_008aa610[];
extern unsigned long g_00859278;
extern char          g_008aa9f4;
extern unsigned long g_0085b188;
extern char          g_00858955;
extern unsigned long g_00858940;
extern unsigned long g_00858944;
extern char          g_0085a0c5;
extern unsigned long g_00859ae0;
extern unsigned long g_0085a0d4;
extern char          g_00858954;
extern unsigned long g_0085a0d0;
extern char          g_0085a0c4;
extern char          g_00858990;
extern char         *g_0085892c;
extern char          g_008597cc[];
extern char          g_008598d0[];
extern char          g_00896b88[];
extern unsigned long g_008aa9fc;
extern unsigned long g_008aad8c;
extern char          g_008aa9e4;
extern unsigned long g_00858c08;
extern unsigned long g_008597a0;

/* Direct callees */
extern void __cdecl FUN_00737300(void);
extern void __cdecl FUN_00737020(void *param);
extern int  __cdecl FUN_006fc4d0(void *param);
extern int  __cdecl FUN_007368d0(void);
extern int  __cdecl FUN_0073ce10(void);
extern void __cdecl FUN_006faa30(int a, int b);
extern void __cdecl FUN_00746b30(void);
extern void __cdecl FUN_0070d2f0(void);

__declspec(naked) void __stdcall FUN_007374b0(void *param)
{
    __asm {
        sub     esp, 0x7a0
        push    esi
        mov     byte ptr [g_007b7068], 1
        call    dword ptr [g_0076b158]      /* GetCurrentThreadId */
        push    0x7a6b1c
        push    eax
        mov     dword ptr [g_008aaa00], eax
        call    FUN_00737300
        mov     esi, dword ptr [g_0076b23c] /* DuplicateHandle */
        push    2
        push    0
        push    0
        push    0x8aa9e8
        call    esi
        push    eax
        call    dword ptr [g_0076b214]      /* GetCurrentProcess */
        push    eax
        call    esi
        push    eax
        call    dword ptr [g_0076b1d8]      /* GetCurrentThread */
        mov     edx, 0x20
        xor     eax, eax
        sub     edx, 0x8aa610
L_737505:
        cmp     eax, 0x41
        jl      L_737516
        cmp     eax, 0x5a
        lea     ecx, [edx + eax + 0x8aa610]
        jle     L_737518
L_737516:
        mov     ecx, eax
L_737518:
        mov     byte ptr [eax + 0x8aa610], cl
        inc     eax
        cmp     eax, 0x100
        jl      L_737505
        cmp     dword ptr [g_00859278], 2
        jz      L_737540
        mov     byte ptr [g_008aa9f4], 0
        mov     dword ptr [g_0085b188], 0
L_737540:
        mov     eax, dword ptr [esp + 0x7a8]
        push    eax
        call    FUN_00737020
        mov     al, byte ptr [g_00858955]
        mov     ecx, dword ptr [g_00858940]
        mov     edx, dword ptr [g_00858944]
        mov     byte ptr [g_0085a0c5], al
        mov     eax, dword ptr [g_00859ae0]
        test    eax, eax
        mov     dword ptr [g_0085a0d4], ecx
        mov     cl, byte ptr [g_00858954]
        mov     dword ptr [g_0085a0d0], edx
        mov     byte ptr [g_0085a0c4], cl
        jz      L_73758b
        mov     byte ptr [g_00858990], 1
L_73758b:
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x10]
        push    edx
        push    0x104
        call    dword ptr [g_0076b258]      /* GetCurrentDirectoryA */
        mov     ebp, eax
        cmp     byte ptr [esp + ebp + 0xf], 0x5c
        jnz     L_7375ad
        mov     byte ptr [esp + ebp + 0xf], 0
        dec     ebp
L_7375ad:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6b10
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x118]
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_006fc4d0
        test    al, al
        jnz     L_73774a
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6af4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x118]
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_006fc4d0
        test    al, al
        jnz     L_73774a
        lea     ecx, [esp + 0x5b0]
        push    ecx
        lea     edx, [esp + 0x6b4]
        push    edx
        lea     eax, [esp + 0x4b8]
        push    eax
        lea     ecx, [esp + 0x224]
        push    ecx
        call    dword ptr [g_0076b368]      /* __p__pgmptr */
        mov     edx, dword ptr [eax]
        push    edx
        call    dword ptr [g_0076b370]      /* _splitpath */
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        lea     edi, [esp + 0x218]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x4b0]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b194] /* SetCurrentDirectoryA */
        lea     eax, [esp + 0x118]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebx
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x104
        call    dword ptr [g_0076b258]      /* GetCurrentDirectoryA */
        mov     ebp, eax
        cmp     byte ptr [esp + ebp + 0xf], 0x5c
        jnz     L_737750
        mov     byte ptr [esp + ebp + 0xf], 0
        dec     ebp
        jmp     L_737750
L_73774a:
        mov     ebx, dword ptr [g_0076b194] /* SetCurrentDirectoryA */
L_737750:
        mov     eax, dword ptr [g_0085892c]
        test    eax, eax
        mov     edi, dword ptr [g_0076b2ac] /* _stricmp */
        jz      L_737772
        push    0x7a6af0
        push    eax
        call    edi
        add     esp, 8
        test    eax, eax
        jz      L_737931
L_737772:
        cmp     ebp, 6
        jl      L_737793
        lea     esi, [esp + ebp + 0xa]
        push    0x7a6ae8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_737793
        lea     edx, [esp + 0x10]
        push    edx
        mov     byte ptr [esi], al
        call    ebx
L_737793:
        cmp     ebp, 0x10
        jl      L_7377b4
        __emit  0x8D  /* __emit: MSVC6 drops the 00 disp byte for lea esi,[esp+ebp] (8D 34 2C); ref needs 8D 74 2C 00 */
        __emit  0x74
        __emit  0x2C
        __emit  0x00
        push    0x7a6ad4
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_7377b4
        mov     byte ptr [esi], al
        lea     eax, [esp + 0x10]
        push    eax
        call    ebx
L_7377b4:
        cmp     ebp, 9
        jl      L_7377d5
        lea     esi, [esp + ebp + 7]
        push    0x7a6ac8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_7377d5
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     byte ptr [esi], al
        call    ebx
L_7377d5:
        cmp     ebp, 8
        jl      L_73782d
        lea     ebp, [esp + ebp + 0x10]
        lea     esi, [ebp - 8]
        push    0x7a6abc
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_7377f9
        lea     edx, [esp + 0x10]
        push    edx
        mov     byte ptr [esi], al
        call    ebx
L_7377f9:
        add     ebp, -6
        push    0x7a6ab4
        push    ebp
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_737815
        mov     byte ptr [ebp], al
        lea     eax, [esp + 0x10]
        push    eax
        call    ebx
L_737815:
        push    0x7a6aa8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_73782d
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     byte ptr [esi], al
        call    ebx
L_73782d:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x104
        call    dword ptr [g_0076b258]      /* GetCurrentDirectoryA */
        mov     ebx, eax
        cmp     byte ptr [esp + ebx + 0xf], 0x5c
        jnz     L_73784c
        mov     byte ptr [esp + ebx + 0xf], 0
        dec     ebx
L_73784c:
        mov     eax, dword ptr [g_0085892c]
        test    eax, eax
        jz      L_737931
        cmp     byte ptr [eax], 0
        jz      L_737931
        mov     ebp, dword ptr [g_0076b308] /* strchr */
        push    0x3b
        push    eax
        xor     esi, esi
        call    ebp
        add     esp, 8
        test    eax, eax
        jz      L_73788f
        mov     eax, dword ptr [g_0085892c]
        push    0x3b
        push    eax
        call    ebp
        mov     edx, dword ptr [g_0085892c]
        mov     edi, eax
        add     esp, 8
        sub     edi, edx
        jmp     L_7378a3
L_73788f:
        mov     edx, dword ptr [g_0085892c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
L_7378a3:
        mov     eax, edi
        sub     eax, esi
        cmp     ebx, eax
        jle     L_7378d3
        mov     ecx, esi
        push    eax
        add     edx, esi
        sub     ecx, edi
        push    edx
        add     ecx, ebx
        lea     edx, [esp + ecx + 0x18]
        push    edx
        call    dword ptr [g_0076b2b0]      /* _strnicmp */
        mov     edx, dword ptr [g_0085892c]
        add     esp, 0xc
        test    eax, eax
        jnz     L_7378d3
        cmp     byte ptr [edx + esi], 0x3b
        jnz     L_73791d
L_7378d3:
        lea     esi, [edi + 1]
        add     edx, esi
        push    0x3b
        push    edx
        call    ebp
        add     esp, 8
        test    eax, eax
        jz      L_7378ff
        mov     eax, dword ptr [g_0085892c]
        add     eax, esi
        push    0x3b
        push    eax
        call    ebp
        mov     edx, dword ptr [g_0085892c]
        mov     edi, eax
        add     esp, 8
        sub     edi, edx
        jmp     L_737913
L_7378ff:
        mov     edx, dword ptr [g_0085892c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
L_737913:
        mov     al, byte ptr [edx + esi - 1]
        test    al, al
        jz      L_737931
        jmp     L_7378a3
L_73791d:
        sub     esi, edi
        lea     ecx, [esp + 0x10]
        add     esi, ebx
        push    ecx
        mov     byte ptr [esp + esi + 0x14], 0
        call    dword ptr [g_0076b194]      /* SetCurrentDirectoryA */
L_737931:
        push    0x8597cc
        push    0x104
        call    dword ptr [g_0076b258]      /* GetCurrentDirectoryA */
        mov     ebx, dword ptr [g_0076b368] /* __p__pgmptr */
        call    ebx
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x8598d0
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [g_0076b350] /* _mbslwr */
        push    0x8598d0
        call    esi
        push    0x8597cc
        call    esi
        mov     cl, byte ptr [g_008598d0]
        add     esp, 8
        test    cl, cl
        mov     edx, 0x8598d0
        mov     eax, edx
        jz      L_7379b3
L_737993:
        mov     cl, byte ptr [eax]
        movsx   esi, cl
        cmp     byte ptr [esi + 0x896b88], 0
        jz      L_7379a6
        add     eax, 2
        jmp     L_7379ae
L_7379a6:
        cmp     cl, 0x5c
        jnz     L_7379ad
        mov     edx, eax
L_7379ad:
        inc     eax
L_7379ae:
        cmp     byte ptr [eax], 0
        jnz     L_737993
L_7379b3:
        push    0
        push    0
        mov     byte ptr [edx], 0
        call    FUN_006faa30
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8597cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x3b0]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6a88
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x3b0]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [g_0076b0c0] /* LoadLibraryA */
        lea     eax, [esp + 0x3b0]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebp
        test    eax, eax
        mov     dword ptr [g_008aa9fc], eax
        jnz     L_737aa1
        or      ecx, 0xffffffff
        mov     edi, 0x8598d0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x3b0]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a6a78
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x3b0]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [esp + 0x3b0]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebp
        test    eax, eax
        mov     dword ptr [g_008aa9fc], eax
        jz      L_737c35
L_737aa1:
        call    FUN_007368d0
        test    al, al
        jnz     L_737ac6
        mov     ecx, dword ptr [g_008aa9fc]
        push    ecx
        call    dword ptr [g_0076b0b8]      /* FreeLibrary */
        mov     dword ptr [g_008aa9fc], 0
        jmp     L_737c35
L_737ac6:
        mov     eax, dword ptr [g_008aa9fc]
        test    eax, eax
        jz      L_737c35
        push    0
        call    dword ptr [g_008aa5f0]
        push    0x32
        call    dword ptr [g_008aa5f0]
        lea     edx, [esp + 0x6b0]
        push    edx
        lea     eax, [esp + 0x5b4]
        push    eax
        lea     ecx, [esp + 0x4b8]
        push    ecx
        lea     edx, [esp + 0x224]
        push    edx
        call    ebx
        mov     eax, dword ptr [eax]
        push    eax
        call    dword ptr [g_0076b370]      /* _splitpath */
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        lea     edi, [esp + 0x4b0]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x218]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x792798
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x218]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x8597cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x218]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x7a6a64
        repne   scasb
        not     ecx
        sub     edi, ecx
        lea     edx, [esp + 0x218]
        mov     esi, edi
        mov     ebp, ecx
        mov     edi, edx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        call    FUN_0073ce10
        mov     edi, dword ptr [g_0076b23c] /* DuplicateHandle */
        mov     esi, eax
        mov     eax, dword ptr [g_008597a0]
        push    eax
        lea     ecx, [esp + 0x21c]
        push    ecx
        call    edi
        push    eax
        call    dword ptr [g_008aa5f4]
        test    eax, eax
        jnz     L_737c0c
        push    0x30
        push    0x859694
        push    0x7a6a44
        push    eax
        call    dword ptr [g_0076b598]      /* MessageBoxA */
L_737c0c:
        push    0
        push    0
        push    0
        call    ebx
        mov     edx, dword ptr [eax]
        push    edx
        push    0
        call    edi
        push    eax
        call    dword ptr [g_008aa5f8]
        call    FUN_0073ce10
        sub     eax, esi
        cmp     eax, 0x80000000
        mov     dword ptr [g_008aad8c], eax
        jbe     L_737c3f
L_737c35:
        mov     dword ptr [g_008aad8c], 0
L_737c3f:
        push    3
        call    dword ptr [g_0076b1dc]      /* SetErrorMode */
        lea     eax, [esp + 0x31c]
        push    eax
        mov     dword ptr [esp + 0x320], 0x94
        call    dword ptr [g_0076b204]      /* GetVersionExA */
        cmp     dword ptr [esp + 0x32c], 2
        pop     edi
        setz    al
        test    al, al
        pop     ebp
        mov     byte ptr [g_008aa9e4], al
        pop     ebx
        jz      L_737ca9
        mov     eax, dword ptr [esp + 0x314]
        mov     esi, 5
        cmp     eax, esi
        jnc     L_737ca9
        push    0x30
        push    0x7a6a24
        push    0x79fe24
        push    0
        call    dword ptr [g_0076b598]      /* MessageBoxA */
        push    1
        mov     dword ptr [g_00858c08], esi
        call    dword ptr [g_0076b38c]      /* exit */
L_737ca9:
        call    FUN_00746b30
        call    FUN_0070d2f0
        pop     esi
        add     esp, 0x7a0
        ret     4
    }
}
