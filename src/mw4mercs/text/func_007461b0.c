/*
 * FUN_007461b0 (1790 B) — CPU/vendor string detection.
 *
 * Detects CPUID support (PUSHFD/POPFD/SAHF/LAHF trick), then builds a cache
 * size from the DAT_00858a58 descriptor bytes (jump table 0x7468b0), and
 * selects a vendor/model string based on the CPUID vendor string
 * (GenuineIntel / AuthenticAMD / CyrixInstead / CentaurHauls) via several
 * jump tables (0x74696c, 0x7469e0, 0x746a50).  Appends the model string,
 * MMX flag, and system-info processor type into DAT_008b2624.
 *
 * __cdecl, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- IAT function pointers ---- */
extern int (__cdecl *g_76b2e0)(const char*, const char*, unsigned int); /* strncmp */
extern int (__cdecl *g_76b420)(char*, const char*, ...);                /* sprintf */
extern void (__stdcall *g_76b200)(void*);                               /* GetSystemInfo */

/* ---- data symbols ---- */
extern int g_858a9c;            /* DAT_00858a9c */
extern int g_858a68;            /* DAT_00858a68 */
extern char g_858a58[];         /* DAT_00858a58 */
extern char g_858a7c[];         /* DAT_00858a7c */
extern int g_858a98;            /* DAT_00858a98 */
extern int g_858a8c;            /* DAT_00858a8c */
extern int g_858a90;            /* DAT_00858a90 */
extern char g_8b26a4[];         /* DAT_008b26a4 */
extern char g_8b272c[];         /* DAT_008b272c */
extern char g_8b2624[];         /* DAT_008b2624 */
extern int g_8b2774;            /* DAT_008b2774 */
extern int g_8b276c;            /* DAT_008b276c */
extern int g_8b2770;            /* DAT_008b2770 */

/* ---- in-function jump/byte tables (data, outside compared slice) ---- */
extern char g_7468ec[];         /* byte table 1 */
extern int g_7468b0[];          /* jump table 1 */
extern char g_74697c[];         /* byte table 2 */
extern int g_74696c[];          /* jump table 2 */
extern char g_7469ec[];         /* byte table 3 */
extern int g_7469e0[];          /* jump table 3 */
extern char g_746a60[];         /* byte table 4 */
extern int g_746a50[];          /* jump table 4 */

/* ---- string literals ---- */
extern char g_7aa0e8[];
extern char g_7aa0b8[];
extern char g_7aa098[];
extern char g_7aa088[];         /* "GenuineIntel" */
extern char g_7aa064[];         /* "L1: %dK code / %dK data  L2: %dK" */
extern char g_79e7f8[];         /* "Unknown" */
extern char g_7aa058[];         /* "Intel 486 " */
extern char g_7aa04c[];         /* "Intel PII " */
extern char g_7aa038[];         /* "Intel Celeron-A " */
extern char g_7aa028[];         /* "Intel Celeron " */
extern char g_7aa00c[];         /* "Intel PII (Possibly Xeon) " */
extern char g_7a9ffc[];         /* "Intel PII-Xeon " */
extern char g_7a9fe8[];         /* "Intel PIII-Xeon " */
extern char g_7a9fcc[];         /* "Intel PIII (Possibly Xeon) " */
extern char g_7a9fc0[];         /* "Intel PIII " */
extern char g_7a9fb4[];         /* "Intel P4 " */
extern char g_7a9f9c[];         /* "Intel Pentium Pro (P6) " */
extern char g_7a9f84[];         /* "Intel Unknown (0x%x) " */
extern char g_7a9f6c[];         /* "Intel Pentium (P55) " */
extern char g_7a9f54[];         /* "Intel Pentium (P54) " */
extern char g_7a9f40[];         /* "Intel Pentium (P5) " */
extern char g_7a9f30[];         /* "AuthenticAMD" */
extern char g_7a9f24[];         /* "AMD 486 " */
extern char g_7a9f1c[];         /* "AMD K6_2 " */
extern char g_7a9f14[];         /* "AMD K6_3 " */
extern char g_7a9f08[];         /* "AMD Athlon " */
extern char g_7a9efc[];         /* "AMD Unknown " */
extern char g_7a9ef0[];         /* "AMD K5 " */
extern char g_7a9ee0[];         /* "AMD K6 " */
extern char g_7a9ed0[];         /* "CyrixInstead" */
extern char g_7a9ec4[];         /* "Cyrix 486 " */
extern char g_7a9eb4[];         /* "Cyrix MediaGX " */
extern char g_7a9ea4[];         /* "Cyrix GXM " */
extern char g_7a9e98[];         /* "Cyrix 5x86 " */
extern char g_7a9e8c[];         /* "Cyrix 6x86/L " */
extern char g_7a9e7c[];         /* "Cyrix 6x86MX / MII " */
extern char g_7a9e70[];         /* "Cyrix MX " */
extern char g_7a9e5c[];         /* "Cyrix Unknown " */
extern char g_7a9e4c[];         /* "CentaurHauls" */
extern char g_7a9e38[];         /* "Centaur C6 (Winchip) " */
extern char g_7a9e1c[];         /* "Centaur C6-2 (Winchip2) " */
extern char g_7a9e04[];         /* "Centaur Unknown " */
extern char g_7a9df4[];         /* "Unknown Chip " */
extern char g_7a9dec[];         /* "MMX " */
extern char g_7a9de0[];         /* "NON-MMX " */
extern char g_7a9dd8[];
extern char g_7a9dd0[];
extern char g_7a9db0[];         /* sprintf format */
extern char g_7a9d9c[];
extern char g_7a9d88[];
extern char g_7a9d74[];
extern char g_7a9d60[];         /* sprintf format */

__declspec(naked) char* __cdecl FUN_007461b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb8
        mov     eax, dword ptr [g_858a9c]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jnz     L_74623d
        mov     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x4], 0x0
        pushad
        pushfd
        pop     eax
        mov     ecx, eax
        xor     eax, 0x40000
        push    eax
        popfd
        pushfd
        pop     eax
        cmp     eax, ecx
        jz      L_746207
        mov     dword ptr [ebp - 0x4], 0x1
        xor     ax, ax
        sahf
        mov     ax, 0x5
        mov     bx, 0x2
        div     bl
        lahf
        cmp     ah, 0x2
        jnz     L_746207
        mov     dword ptr [ebp - 0x4], 0x2
    L_746207:
        popad
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jnz     L_74621b
        mov     eax, offset g_7aa0e8
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_74621b:
        cmp     eax, 0x1
        jnz     L_74622c
        mov     eax, offset g_7aa0b8
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_74622c:
        cmp     eax, 0x2
        jnz     L_74623d
        mov     eax, offset g_7aa098
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_74623d:
        mov     edx, dword ptr [g_858a68]
        mov     eax, edx
        and     eax, 0xff
        mov     dl, dh
        mov     ecx, eax
        shr     eax, 0x4
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [g_858a58]
        xor     ebx, ebx
        and     ecx, 0xf
        and     edx, 0x3f
        mov     dword ptr [ebp - 0x14], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp - 0x8], ebx
        and     eax, 0xff
        mov     edi, 0x1
        xor     ecx, ecx
    L_746277:
        mov     cl, byte ptr [edi + g_858a58]
        lea     esi, [ecx + -0x6]
        cmp     esi, 0x7f
        ja      L_74631e
        xor     ecx, ecx
        mov     cl, byte ptr [esi + g_7468ec]
        jmp     dword ptr [ecx*4 + g_7468b0]
    L_74629a:
        mov     edx, dword ptr [ebp - 0x4]
        lea     ecx, [edx + eax*8]
        mov     dword ptr [ebp - 0x4], ecx
        jmp     L_74631e
    L_7462a5:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, eax
        shl     edx, 0x4
        add     ecx, edx
        mov     dword ptr [ebp - 0x4], ecx
        jmp     L_74631e
    L_7462b4:
        mov     ecx, dword ptr [ebp - 0x8]
        lea     edx, [ecx + eax*8]
        mov     dword ptr [ebp - 0x8], edx
        jmp     L_74631e
    L_7462bf:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, eax
        shl     ecx, 0x4
        add     edx, ecx
        mov     dword ptr [ebp - 0x8], edx
        jmp     L_74631e
    L_7462ce:
        mov     edx, eax
        shl     edx, 0x7
        add     ebx, edx
        jmp     L_74631e
    L_7462d7:
        mov     ecx, eax
        shl     ecx, 0x8
        jmp     L_74631c
    L_7462de:
        mov     edx, eax
        shl     edx, 0x9
        add     ebx, edx
        jmp     L_74631e
    L_7462e7:
        mov     ecx, eax
        shl     ecx, 0xa
        jmp     L_74631c
    L_7462ee:
        mov     edx, eax
        shl     edx, 0xb
        add     ebx, edx
        jmp     L_74631e
    L_7462f7:
        mov     ecx, eax
        shl     ecx, 0x7
        jmp     L_74631c
    L_7462fe:
        mov     edx, eax
        shl     edx, 0x8
        add     ebx, edx
        jmp     L_74631e
    L_746307:
        mov     ecx, eax
        shl     ecx, 0x9
        jmp     L_74631c
    L_74630e:
        mov     edx, eax
        shl     edx, 0xa
        add     ebx, edx
        jmp     L_74631e
    L_746317:
        mov     ecx, eax
        shl     ecx, 0xb
    L_74631c:
        add     ebx, ecx
    L_74631e:
        inc     edi
        cmp     edi, 0x10
        __emit 0x0F                 /* __emit: backward jl rel32 off-by-2 (MSVC6 miscomputes) */
        __emit 0x8C
        __emit 0x4F
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        push    0xc
        push    offset g_7aa088
        push    offset g_858a7c
        call    dword ptr [g_76b2e0]
        add     esp, 0xc
        test    eax, eax
        jnz     L_74635f
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        push    ebx
        push    edx
        push    eax
        push    offset g_7aa064
        push    offset g_8b26a4
        call    dword ptr [g_76b420]
        add     esp, 0x14
        jmp     L_746372
    L_74635f:
        push    offset g_79e7f8
        push    offset g_8b26a4
        call    dword ptr [g_76b420]
        add     esp, 0x8
    L_746372:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_8b272c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_8b2624
        rep     movsd
        push    0xc
        mov     ecx, edx
        and     ecx, 0x3
        push    offset g_7aa088
        push    offset g_858a7c
        rep     movsb
        call    dword ptr [g_76b2e0]
        add     esp, 0xc
        test    eax, eax
        jnz     L_746564
        mov     eax, dword ptr [g_858a68]
        mov     ecx, eax
        and     ecx, 0xf00
        cmp     ecx, 0x400
        mov     dword ptr [g_8b2774], 0x1
        jnc     L_7463dd
        mov     edi, offset g_7aa058
        jmp     L_746712
    L_7463dd:
        and     eax, 0x3ff0
        cmp     eax, 0x660
        ja      L_7464a8
        jz      L_746436
        cmp     eax, 0x580
        ja      L_74641a
        jz      L_746550
        lea     ecx, [eax + 0xfffffaf0]
        cmp     ecx, 0x60
        ja      L_74652b
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_74697c]
        jmp     dword ptr [edx*4 + g_74696c]
    L_74641a:
        mov     ecx, eax
        sub     ecx, 0x610
        jz      L_746546
        sub     ecx, 0x20
        jz      L_746436
        sub     ecx, 0x20
        jnz     L_74652b
    L_746436:
        cmp     ebx, 0x80000
        ja      L_746484
        jz      L_746472
        test    ebx, ebx
        jz      L_746468
        cmp     ebx, 0x20000
        jz      L_74645e
        cmp     ebx, 0x40000
        jz      L_746472
        mov     edi, offset g_7aa04c
        jmp     L_746712
    L_74645e:
        mov     edi, offset g_7aa038
        jmp     L_746712
    L_746468:
        mov     edi, offset g_7aa028
        jmp     L_746712
    L_746472:
        cmp     ebx, 0x80000
        jc      L_746494
        mov     edi, offset g_7aa00c
        jmp     L_746712
    L_746484:
        cmp     ebx, 0x100000
        jz      L_74649e
        cmp     ebx, 0x200000
        jz      L_74649e
    L_746494:
        mov     edi, offset g_7aa04c
        jmp     L_746712
    L_74649e:
        mov     edi, offset g_7a9ffc
        jmp     L_746712
    L_7464a8:
        cmp     eax, 0x1520
        ja      L_746514
        jz      L_74650a
        cmp     eax, 0xf20
        ja      L_746501
        jz      L_7464f7
        mov     ecx, eax
        sub     ecx, 0x670
        jz      L_7464c9
        sub     ecx, 0x10
        jnz     L_74652b
    L_7464c9:
        cmp     ebx, 0x100000
        jc      L_7464db
        mov     edi, offset g_7a9fe8
        jmp     L_746712
    L_7464db:
        cmp     ebx, 0x80000
        jc      L_7464ed
        mov     edi, offset g_7a9fcc
        jmp     L_746712
    L_7464ed:
        mov     edi, offset g_7a9fc0
        jmp     L_746712
    L_7464f7:
        mov     edi, offset g_7a9fb4
        jmp     L_746712
    L_746501:
        cmp     eax, 0x1510
        jz      L_74655a
        jmp     L_74652b
    L_74650a:
        mov     edi, offset g_7a9f9c
        jmp     L_746712
    L_746514:
        mov     ecx, eax
        sub     ecx, 0x1530
        jz      L_74655a
        sub     ecx, 0x10
        jz      L_746550
        sub     ecx, 0xf0
        jz      L_746546
    L_74652b:
        push    eax
        lea     eax, [ebp - 0x78]
        push    offset g_7a9f84
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     edi, [ebp - 0x78]
        jmp     L_746712
    L_746546:
        mov     edi, offset g_7a9f6c
        jmp     L_746712
    L_746550:
        mov     edi, offset g_7a9f54
        jmp     L_746712
    L_74655a:
        mov     edi, offset g_7a9f40
        jmp     L_746712
    L_746564:
        mov     esi, dword ptr [g_76b2e0]
        push    0xc
        push    offset g_7a9f30
        push    offset g_858a7c
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L_74662a
        mov     eax, dword ptr [g_858a68]
        mov     ecx, eax
        and     ecx, 0xf00
        cmp     ecx, 0x500
        mov     dword ptr [g_8b276c], 0x1
        jnc     L_7465ac
        mov     edi, offset g_7a9f24
        jmp     L_746712
    L_7465ac:
        and     eax, 0xff0
        cmp     eax, 0x570
        ja      L_7465e7
        jz      L_7465dd
        add     eax, 0xfffffb00
        cmp     eax, 0x60
        ja      L_746620
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_7469ec]
        jmp     dword ptr [ecx*4 + g_7469e0]
    L_7465d3:
        mov     edi, offset g_7a9f1c
        jmp     L_746712
    L_7465dd:
        mov     edi, offset g_7a9f14
        jmp     L_746712
    L_7465e7:
        add     eax, 0xfffffa80
        cmp     eax, 0xc0
        ja      L_746620
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_746a60]
        jmp     dword ptr [ecx*4 + g_746a50]
    L_746602:
        mov     edi, offset g_7a9f08
        jmp     L_746712
    L_74660c:
        mov     edi, offset g_7a9efc
        jmp     L_746712
    L_746616:
        mov     edi, offset g_7a9ef0
        jmp     L_746712
    L_746620:
        mov     edi, offset g_7a9ee0
        jmp     L_746712
    L_74662a:
        push    0xc
        push    offset g_7a9ed0
        push    offset g_858a7c
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L_7466cd
        mov     eax, dword ptr [g_858a68]
        cmp     eax, 0x440
        mov     dword ptr [g_8b2770], 0x1
        jnc     L_746663
        mov     edi, offset g_7a9ec4
        jmp     L_746712
    L_746663:
        mov     ecx, eax
        and     ecx, 0xf00
        cmp     ecx, 0x500
        jnc     L_74667d
        mov     edi, offset g_7a9eb4
        jmp     L_746712
    L_74667d:
        and     eax, 0xff0
        cmp     eax, 0x540
        ja      L_7466ac
        jz      L_7466a5
        sub     eax, 0x500
        jz      L_74669e
        sub     eax, 0x20
        jnz     L_7466b8
        mov     edi, offset g_7a9ea4
        jmp     L_746712
    L_74669e:
        mov     edi, offset g_7a9e98
        jmp     L_746712
    L_7466a5:
        mov     edi, offset g_7a9e8c
        jmp     L_746712
    L_7466ac:
        sub     eax, 0x600
        jz      L_7466c6
        sub     eax, 0x20
        jz      L_7466bf
    L_7466b8:
        mov     edi, offset g_7a9e7c
        jmp     L_746712
    L_7466bf:
        mov     edi, offset g_7a9e70
        jmp     L_746712
    L_7466c6:
        mov     edi, offset g_7a9e5c
        jmp     L_746712
    L_7466cd:
        push    0xc
        push    offset g_7a9e4c
        push    offset g_858a7c
        call    esi
        add     esp, 0xc
        test    eax, eax
        jnz     L_74670d
        mov     eax, dword ptr [g_858a68]
        and     eax, 0xff0
        sub     eax, 0x540
        jz      L_746706
        sub     eax, 0x20
        jz      L_7466ff
        mov     edi, offset g_7a9e38
        jmp     L_746712
    L_7466ff:
        mov     edi, offset g_7a9e1c
        jmp     L_746712
    L_746706:
        mov     edi, offset g_7a9e04
        jmp     L_746712
    L_74670d:
        mov     edi, offset g_7a9df4
    L_746712:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     eax, dword ptr [g_858a98]
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        test    eax, eax
        rep     movsb
        mov     edi, offset g_7a9dec
        jnz     L_74674d
        mov     edi, offset g_7a9de0
    L_74674d:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     eax, dword ptr [g_858a8c]
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        test    eax, eax
        rep     movsb
        jz      L_7467ab
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a9dd8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_7467ab:
        mov     eax, dword ptr [g_858a90]
        test    eax, eax
        jz      L_7467e1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a9dd0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_7467e1:
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [g_76b420]
        push    eax
        push    ecx
        push    edx
        lea     eax, [ebp - 0xb8]
        push    offset g_7a9db0
        push    eax
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0x14
        lea     edi, [ebp - 0xb8]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [ebp - 0x38]
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    dword ptr [g_76b200]
        mov     eax, dword ptr [ebp - 0x24]
        cmp     eax, 0x1
        jbe     L_7468a2
        cmp     eax, 0x2
        jnz     L_746850
        mov     edi, offset g_7a9d9c
        jmp     L_74687a
    L_746850:
        cmp     eax, 0x3
        jnz     L_74685c
        mov     edi, offset g_7a9d88
        jmp     L_74687a
    L_74685c:
        cmp     eax, 0x4
        jnz     L_746868
        mov     edi, offset g_7a9d74
        jmp     L_74687a
    L_746868:
        push    eax
        lea     eax, [ebp - 0x58]
        push    offset g_7a9d60
        push    eax
        call    ebx
        add     esp, 0xc
        lea     edi, [ebp - 0x58]
    L_74687a:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b2624
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
    L_7468a2:
        pop     edi
        pop     esi
        mov     eax, offset g_8b2624
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
