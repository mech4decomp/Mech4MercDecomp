/*
 * FUN_0075c240 (1590 B) — parse a version-info / config text file.
 *
 * Reads a file path + a set of parameters from the stack, zero-fills the
 * DAT_008bc9c0 result array, copies the file name into DAT_008bc580, and
 * (when the flags are clear) reads the file's version info via
 * GetFileVersionInfoSizeA / GetFileVersionInfoA / VerQueryValueA.  It then
 * opens the file with CreateFileA, reads it into a malloc'd buffer, and runs
 * a small line-oriented parser that recognizes "vendor", "if"/"endif" and
 * numeric tokens, building up the DAT_008bc9c0 result array.
 *
 * __stdcall, RET 0x438 (many stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- IAT function pointers ---- */
extern void* (__cdecl *g_76b294)(unsigned int);                 /* malloc */
extern int (__cdecl *g_76b2b0)(const char*, const char*, unsigned int); /* _strnicmp */
extern void (__cdecl *g_76b2d0)(void*);                         /* free */
extern void* (__stdcall *g_76b0e8)(const char*, unsigned int, unsigned int,
                                   void*, unsigned int, unsigned int, void*); /* CreateFileA */
extern int (__cdecl *g_76b420)(char*, const char*, ...);        /* sprintf */
extern unsigned int (__stdcall *g_76b15c)(void*, void*);        /* GetFileSize */
extern int (__stdcall *g_76b164)(void*, void*, unsigned int, void*, void*); /* ReadFile */
extern int (__stdcall *g_76b0ec)(void*);                        /* CloseHandle */
extern void* (__cdecl *g_76b28c)(void*, const void*, unsigned int); /* memmove */

/* ---- data symbols ---- */
extern int g_8bc9c0;            /* DAT_008bc9c0 (result array base) */
extern int g_8bc9c4;            /* DAT_008bc9c4 */
extern int g_8bc9c8;            /* DAT_008bc9c8 */
extern int g_8bc9ac;            /* DAT_008bc9ac */
extern int g_8bc9b0;            /* DAT_008bc9b0 */
extern int g_8bc9b8;            /* DAT_008bc9b8 */
extern int g_8bc9bc;            /* DAT_008bc9bc */
extern int g_8bc980;            /* DAT_008bc980 */
extern int g_8bc984;            /* DAT_008bc984 */
extern unsigned char g_8bc9b4;  /* DAT_008bc9b4 */
extern char g_8bc580[];         /* DAT_008bc580 (file name buffer) */
extern char g_8bcac0[];         /* DAT_008bcac0 */
extern int g_8bd2c0;            /* DAT_008bd2c0 */
extern int g_8bd2c4;            /* DAT_008bd2c4 */
extern int g_8bd2c8;            /* DAT_008bd2c8 */
extern int g_8bd2cc;            /* DAT_008bd2cc */
extern int g_8bd2d0;            /* DAT_008bd2d0 */

/* ---- string literals ---- */
extern char g_7af968[];         /* "Cannot find %s" */
extern char g_7af960[];         /* "vendor" */
extern char g_7af954[];
extern char g_7af93c[];
extern char g_7928fc[];         /* "if" */
extern char g_792898[];         /* "endif" */
extern char g_7af924[];
extern char g_7af910[];
extern char g_7af900[];
extern char g_76c5a8[];         /* "\\" */
extern char g_76b768[];

/* ---- internal callees ---- */
extern unsigned int __cdecl FUN_0075e352(void*, void*);         /* GetFileVersionInfoSizeA */
extern int __cdecl FUN_0075e34c(void*, unsigned int, unsigned int, void*); /* GetFileVersionInfoA */
extern int __cdecl FUN_0075e346(void*, const char*, void**, void*); /* VerQueryValueA */
extern void __cdecl FUN_0075c8c0(void);
extern int __cdecl FUN_0075c990(void);
extern void __cdecl FUN_0075c880(void);
extern void __cdecl FUN_0075cb40(void*);
extern char* __cdecl FUN_0075cad0(void);
extern int __cdecl FUN_0075cba0(void);
extern void __cdecl FUN_0075c8e0(void*);
extern int __cdecl FUN_0075cde0(int);
extern int __cdecl FUN_0075ce10(void);

__declspec(naked) void* __stdcall FUN_0075c240(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x408]
        sub     esp, 0x48
        push    ebx
        mov     ebx, dword ptr [g_76b294]
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x40
        mov     edi, offset g_8bc9c0
        rep     stosd
        mov     ecx, dword ptr [esp + 0x490]
        mov     dword ptr [g_8bc9bc], eax
        mov     eax, dword ptr [esp + 0x48c]
        mov     dword ptr [g_8bc9b0], eax
        or      edx, dword ptr [esp + 0x45c]
        mov     dword ptr [g_8bc9ac], ecx
        mov     ecx, 0x10b
        lea     esi, [esp + 0x5c]
        mov     edi, offset g_8bc580
        mov     dword ptr [g_8bc9b8], offset g_8bcac0
        rep     movsd
        mov     byte ptr [g_8bc9b4], 0
        jnz     L_75c336
        lea     eax, [esp + 0x48c]
        push    eax
        push    offset g_8bc580
        call    FUN_0075e352
        mov     esi, eax
        test    esi, esi
        jz      L_75c336
        push    esi
        call    ebx
        mov     ecx, dword ptr [esp + 0x490]
        add     esp, 0x4
        mov     ebp, eax
        push    ebp
        push    esi
        push    ecx
        push    offset g_8bc580
        call    FUN_0075e34c
        test    eax, eax
        jz      L_75c328
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x494]
        push    eax
        push    offset g_76c5a8
        push    ebp
        call    FUN_0075e346
        test    eax, eax
        jz      L_75c328
        mov     esi, dword ptr [esp + 0x490]
        mov     ecx, 0xd
        lea     edi, [esp + 0x18]
        rep     movsd
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [g_8bc984], ecx
        mov     dword ptr [g_8bc980], edx
    L_75c328:
        push    ebp
        mov     ebp, dword ptr [g_76b2d0]
        call    ebp
        add     esp, 0x4
        jmp     L_75c33c
    L_75c336:
        mov     ebp, dword ptr [g_76b2d0]
    L_75c33c:
        mov     edi, dword ptr [esp + 0x488]
        push    0x0
        push    0x0
        push    0x3
        push    0x0
        push    0x1
        push    0x80000000
        push    edi
        call    dword ptr [g_76b0e8]
        mov     esi, eax
        cmp     esi, -0x1
        jnz     L_75c399
        push    edi
        xor     eax, eax
        push    offset g_7af968
        push    offset g_8bcac0
        mov     dword ptr [g_8bc9c0], eax
        mov     dword ptr [g_8bc9c4], offset g_8bcac0
        mov     dword ptr [g_8bc9c8], eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c399:
        push    0x0
        push    esi
        call    dword ptr [g_76b15c]
        mov     edi, eax
        lea     eax, [edi + 0x10]
        push    eax
        call    ebx
        add     esp, 0x4
        push    0x0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        push    eax
        push    esi
        mov     dword ptr [g_8bd2d0], eax
        call    dword ptr [g_76b164]
        push    esi
        call    dword ptr [g_76b0ec]
        mov     eax, dword ptr [g_8bd2d0]
        mov     ebx, dword ptr [g_76b2b0]
        lea     ecx, [eax + edi*1]
        mov     esi, 0x1
        mov     byte ptr [ecx], 0xd
        mov     dword ptr [g_8bd2cc], eax
        mov     dword ptr [g_8bd2c4], eax
        mov     dword ptr [g_8bd2c0], esi
        mov     dword ptr [g_8bd2c8], ecx
    L_75c3f5:
        push    0x6
        push    eax
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_75c432
        add     dword ptr [g_8bd2cc], 0x6
        call    FUN_0075c8c0
        mov     edx, dword ptr [g_8bd2cc]
        cmp     byte ptr [edx], 0x3d
        jnz     L_75c432
        inc     edx
        mov     dword ptr [g_8bd2cc], edx
        call    FUN_0075c990
        cmp     eax, dword ptr [esp + 0x464]
        jz      L_75c446
    L_75c432:
        call    FUN_0075c880
        mov     eax, dword ptr [g_8bd2cc]
        cmp     eax, dword ptr [g_8bd2c8]
        jnc     L_75c44b
        jmp     L_75c3f5
    L_75c446:
        cmp     eax, -0x1
        jnz     L_75c485
    L_75c44b:
        mov     eax, dword ptr [esp + 0x464]
        push    eax
        push    offset g_7af954
        call    FUN_0075cb40
        lea     ecx, [esp + 0x264]
        push    ecx
        call    FUN_0075cb40
        mov     edx, dword ptr [g_8bd2d0]
        push    edx
        call    ebp
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c485:
        call    FUN_0075cad0
        push    eax
        call    FUN_0075cb40
        push    offset g_76b768
        call    FUN_0075cb40
        add     esp, 0x8
    L_75c49d:
        call    FUN_0075c880
        mov     eax, dword ptr [g_8bd2cc]
        push    0x6
        push    eax
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jz      L_75c4e1
        call    FUN_0075c8c0
        mov     ecx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [ecx]
        cmp     al, 0x30
        jl      L_75c4cd
        cmp     al, 0x39
        jle     L_75c512
    L_75c4cd:
        cmp     al, 0xd
        jz      L_75c4e7
        cmp     word ptr [ecx], 0x2f2f
        jz      L_75c4e7
        call    FUN_0075cba0
        test    eax, eax
        jnz     L_75c4f1
    L_75c4e1:
        mov     ecx, dword ptr [g_8bd2cc]
    L_75c4e7:
        cmp     ecx, dword ptr [g_8bd2c8]
        jnc     L_75c512
        jmp     L_75c49d
    L_75c4f1:
        push    eax
        call    FUN_0075c8e0
        mov     ecx, dword ptr [g_8bd2d0]
        push    ecx
        call    ebp
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c512:
        push    0x6
        push    ecx
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jz      L_75c570
    L_75c523:
        call    FUN_0075c8c0
        mov     edx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [edx]
        cmp     al, 0x30
        jl      L_75c546
        cmp     al, 0x39
        jg      L_75c546
        call    FUN_0075c990
        cmp     eax, dword ptr [esp + 0x468]
        jz      L_75c56b
    L_75c546:
        call    FUN_0075c880
        mov     eax, dword ptr [g_8bd2cc]
        cmp     eax, dword ptr [g_8bd2c8]
        jnc     L_75c570
        push    0x6
        push    eax
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_75c523
        jmp     L_75c570
    L_75c56b:
        cmp     eax, -0x1
        jnz     L_75c598
    L_75c570:
        lea     eax, [esp + 0x25c]
        push    eax
        call    FUN_0075cb40
        mov     ecx, dword ptr [g_8bd2d0]
        push    ecx
        call    ebp
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c598:
        mov     edx, dword ptr [g_8bd2cc]
        cmp     byte ptr [edx], 0x3d
        jz      L_75c5c7
        push    offset g_7af93c
        call    FUN_0075c8e0
        mov     eax, dword ptr [g_8bd2d0]
        push    eax
        call    ebp
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c5c7:
        mov     ecx, dword ptr [g_8bd2cc]
        mov     eax, dword ptr [g_8bc9bc]
        inc     ecx
        cmp     eax, 0x2
        mov     dword ptr [g_8bd2cc], ecx
        jnz     L_75c603
        mov     ecx, dword ptr [g_8bc9c4]
        mov     dword ptr [g_8bc9bc], esi
        mov     dword ptr [g_8bc9b8], ecx
        call    FUN_0075cad0
        push    eax
        call    FUN_0075cb40
        add     esp, 0x4
        jmp     L_75c6b8
    L_75c603:
        call    FUN_0075cad0
        mov     edx, dword ptr [g_8bc9c8]
        mov     ebp, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, offset g_8bd2c0
        sub     eax, edx
        sub     eax, ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, edx
        push    ecx
        call    dword ptr [g_76b28c]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [g_8bc9c4]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edx, offset g_8bc9c8
    L_75c667:
        mov     esi, dword ptr [edx]
        test    esi, esi
        jz      L_75c69a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        mov     dword ptr [edx], ecx
        mov     esi, dword ptr [edx + 0x4]
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        add     esi, ecx
        mov     dword ptr [edx + 0x4], esi
        add     edx, 0x8
        cmp     edx, offset g_8bcac0
        jc      L_75c667
    L_75c69a:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        mov     ebp, dword ptr [g_76b2d0]
        repne   scasb
        mov     eax, dword ptr [g_8bc9b8]
        not     ecx
        dec     ecx
        add     eax, ecx
        mov     dword ptr [g_8bc9b8], eax
    L_75c6b8:
        xor     edi, edi
        xor     esi, esi
        call    FUN_0075c880
        mov     eax, dword ptr [g_8bd2cc]
        push    0x6
        push    eax
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jz      L_75c7f7
        lea     ebp, [esp + 0x18]
    L_75c6df:
        call    FUN_0075c8c0
        mov     ecx, dword ptr [g_8bd2cc]
        mov     al, byte ptr [ecx]
        cmp     al, 0xd
        jz      L_75c7bc
        cmp     word ptr [ecx], 0x2f2f
        jz      L_75c7bc
        cmp     al, 0x30
        jl      L_75c70b
        cmp     al, 0x39
        jle     L_75c7e9
    L_75c70b:
        push    0x2
        push    offset g_7928fc
        push    ecx
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_75c76a
        mov     ecx, dword ptr [g_8bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x2]
        push    edx
        call    FUN_0075cde0
        test    al, al
        jz      L_75c76a
        add     dword ptr [g_8bd2cc], 0x2
        call    FUN_0075ce10
        mov     dword ptr [ebp], esi
        inc     edi
        add     ebp, 0x4
        cmp     edi, 0x10
        jz      L_75c822
        cmp     eax, 0x1
        jnz     L_75c75b
        cmp     esi, 0x2
        jz      L_75c7bc
        mov     esi, eax
        jmp     L_75c7bc
    L_75c75b:
        test    eax, eax
        jnz     L_75c829
        mov     esi, 0x2
        jmp     L_75c7bc
    L_75c76a:
        mov     eax, dword ptr [g_8bd2cc]
        push    0x5
        push    offset g_792898
        push    eax
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_75c7a6
        mov     ecx, dword ptr [g_8bd2cc]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x5]
        push    edx
        call    FUN_0075cde0
        test    al, al
        jz      L_75c7a6
        test    edi, edi
        jz      L_75c837
        mov     esi, dword ptr [ebp + -0x4]
        dec     edi
        sub     ebp, 0x4
        jmp     L_75c7bc
    L_75c7a6:
        test    esi, esi
        jz      L_75c7af
        cmp     esi, 0x1
        jnz     L_75c7bc
    L_75c7af:
        call    FUN_0075cba0
        test    eax, eax
        jnz     L_75c84a
    L_75c7bc:
        mov     eax, dword ptr [g_8bd2cc]
        cmp     eax, dword ptr [g_8bd2c8]
        jnc     L_75c7e9
        call    FUN_0075c880
        mov     ecx, dword ptr [g_8bd2cc]
        push    0x6
        push    ecx
        push    offset g_7af960
        call    ebx
        add     esp, 0xc
        test    eax, eax
        jnz     L_75c6df
    L_75c7e9:
        test    esi, esi
        jnz     L_75c84d
        test    edi, edi
        jnz     L_75c84d
        mov     ebp, dword ptr [g_76b2d0]
    L_75c7f7:
        mov     ecx, dword ptr [g_8bd2d0]
        mov     eax, dword ptr [g_8bc9bc]
        push    ecx
        mov     dword ptr [eax*4 + g_8bc9c0], 0
        call    ebp
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    L_75c822:
        push    offset g_7af924
        jmp     L_75c852
    L_75c829:
        push    eax
        call    FUN_0075c8e0
        mov     eax, dword ptr [g_8bd2d0]
        push    eax
        jmp     L_75c85e
    L_75c837:
        push    offset g_7af910
        call    FUN_0075c8e0
        mov     ecx, dword ptr [g_8bd2d0]
        push    ecx
        jmp     L_75c85e
    L_75c84a:
        push    eax
        jmp     L_75c852
    L_75c84d:
        push    offset g_7af900
    L_75c852:
        call    FUN_0075c8e0
        mov     edx, dword ptr [g_8bd2d0]
        push    edx
    L_75c85e:
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, offset g_8bc9c0
        pop     ebx
        add     esp, 0x48
        ret     0x438
    }
}
