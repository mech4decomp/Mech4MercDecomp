/*
 * FUN_006ccd90 (2392 B) - Script expression evaluator (recursive descent
 * parser). Parses a numeric/string expression from the global cursor
 * DAT_0082f328, returning the value on the x87 stack. Handles hex/float
 * literals, parentheses, unary !/-, ++/-- pre/post inc/dec on variables,
 * builtin functions (equal$, length$, fabs, random), and variable lookup.
 * Recurses into itself and FUN_006cc730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_82f328;          /* DAT_0082f328 - script parse cursor */
extern char **g_82f320;         /* DAT_0082f320 - current variable ptr */
extern int g_83a0fc;            /* DAT_0083a0fc */
extern char g_82ecf8;           /* identifier-class table */
extern char g_82ebf8;           /* identifier-class table (letters) */
extern char g_79d0fc;           /* "equal$" string */
extern char g_79d0f4;           /* "length$" string */
extern char g_79e464;           /* "fabs" string */
extern float g_76c5b0;          /* 0.0f */
extern float g_76dd60;          /* 0.5f */
extern float g_76d064;          /* 1.0f */
extern float g_79e460;
extern float g_79e42c;
extern float g_79e428;
extern float g_78d0e0;
extern float g_770168;
extern float g_79d0c8;
extern float g_79e368;
extern float g_78815c;
extern void __cdecl FUN_006bfa50(void);   /* error_log */
extern void __cdecl FUN_006cc730(void);
extern void __cdecl FUN_006c12e0(void);
extern void __cdecl FUN_006c0940(void);
extern void __cdecl FUN_006c0110(void);
extern void __cdecl FUN_006c34e0(void);
extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_007047f0(void);
extern int (__cdecl *g_76b41c)(void);     /* IAT: _strcmpi */
extern int (__cdecl *g_76b3c0)(void);     /* IAT: _mbstrlen */

__declspec(naked) float __cdecl FUN_006ccd90(void)
{
    __asm {
        sub     esp, 0x610
        mov     ecx, dword ptr [g_82f328]
        fld     dword ptr [g_76c5b0]
        mov     al, byte ptr [ecx]
        /* __emit: MSVC6 drops the 00 disp byte for fst [esp] (D9 14 24); ref needs D9 54 24 00 */
        __emit  0xD9
        __emit  0x54
        __emit  0x24
        __emit  0x00
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     al, 0x20
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], ebp
        jnz     L_cdbd
    L_cdb6:
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_cdbd:
        mov     dl, byte ptr [ecx]
        cmp     dl, 0x39
        jg      L_cdcd
        cmp     dl, 0x30
        jge     L_cf41
    L_cdcd:
        cmp     dl, 0x2e
        jz      L_cf41
        cmp     dl, 0x28
        jz      L_d0a5
        cmp     dl, 0x21
        jz      L_d0e0
        cmp     dl, 0x2d
        jnz     L_ce05
        cmp     byte ptr [ecx + 0x1], dl
        jnz     L_ce05
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x2]
        mov     bl, byte ptr [eax + g_82ecf8]
        test    bl, bl
        jnz     L_d10a
    L_ce05:
        cmp     dl, 0x2b
        jnz     L_ce22
        cmp     byte ptr [ecx + 0x1], dl
        jnz     L_ce22
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x2]
        mov     bl, byte ptr [eax + g_82ecf8]
        test    bl, bl
        jnz     L_d19a
    L_ce22:
        cmp     dl, 0x2d
        jnz     L_ce2e
        xor     dword ptr [esp + 0x1c], 0x1
        jmp     L_cdb6
    L_ce2e:
        cmp     dl, 0x2b
        jnz     L_ce3c
    L_ce33:
        mov     dword ptr [esp + 0x1c], ebp
        jmp     L_cdb6
    L_ce3c:
        mov     al, byte ptr [g_79d0fc]
        fstp    st(0)
        test    al, al
        mov     esi, offset g_79d0fc
        jz      L_d231
        mov     edi, ecx
        sub     edi, esi
    L_ce54:
        mov     al, byte ptr [edi + esi*1]
        mov     bl, byte ptr [esi]
        inc     esi
        cmp     al, bl
        jnz     L_ce69
        cmp     byte ptr [esi], 0x0
        jz      L_d231
        jmp     L_ce54
    L_ce69:
        mov     al, byte ptr [g_79d0f4]
        test    al, al
        mov     esi, offset g_79d0f4
        jz      L_d346
        mov     edi, ecx
        sub     edi, esi
    L_ce7f:
        mov     al, byte ptr [edi + esi*1]
        mov     bl, byte ptr [esi]
        inc     esi
        cmp     al, bl
        jnz     L_ce94
        cmp     byte ptr [esi], 0x0
        jz      L_d346
        jmp     L_ce7f
    L_ce94:
        mov     al, byte ptr [g_79e464]
        test    al, al
        mov     esi, offset g_79e464
        jz      L_ceb5
        mov     edi, ecx
        sub     edi, esi
    L_cea6:
        mov     al, byte ptr [edi + esi*1]
        mov     bl, byte ptr [esi]
        inc     esi
        cmp     al, bl
        jnz     L_cec8
        cmp     byte ptr [esi], 0x0
        jnz     L_cea6
    L_ceb5:
        mov     al, byte ptr [ecx + 0x4]
        cmp     al, 0x20
        jz      L_d3eb
        cmp     al, 0x28
        jz      L_d3eb
    L_cec8:
        mov     eax, edx
        and     eax, 0xff
        mov     bl, byte ptr [eax + g_82ecf8]
        test    bl, bl
        lea     eax, [eax + g_82ecf8]
        jnz     L_d4a5
        mov     bl, byte ptr [eax - 0x80]
        test    bl, bl
        jnz     L_d4a5
        cmp     dl, 0x27
        jnz     L_cf3a
        mov     al, byte ptr [ecx + 0x1]
        inc     ecx
        cmp     al, 0x5c
        jz      L_cf04
        cmp     byte ptr [ecx + 0x1], dl
        jz      L_d464
    L_cf04:
        mov     al, byte ptr [ecx + 0x1]
        inc     ecx
        cmp     al, 0x6e
        mov     dword ptr [g_82f328], ecx
        jz      L_d47d
        cmp     al, 0x74
        jz      L_d491
        push    0x79d0dc
    L_cf23:
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_82f328]
        add     esp, 0x4
        jmp     L_cdbd
    L_cf3a:
        push    0x79d0cc
        jmp     L_cf23

    L_cf41:
        cmp     byte ptr [ecx], 0x30
        jnz     L_cfdc
        cmp     byte ptr [ecx + 0x1], 0x78
        jnz     L_cfdc
        add     ecx, 0x2
    L_cf57:
        mov     al, byte ptr [ecx]
        cmp     al, 0x30
        mov     dword ptr [g_82f328], ecx
        jl      L_cf67
        cmp     al, 0x39
        jle     L_cf77
    L_cf67:
        cmp     al, 0x61
        jl      L_d6d3
        cmp     al, 0x66
        jg      L_d6d3
    L_cf77:
        fcom    dword ptr [g_79e460]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_cf9d
        push    0x79e450
        fstp    st(0)
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_82f328]
        add     esp, 0x4
    L_cf9d:
        mov     al, byte ptr [ecx]
        cmp     al, 0x39
        jg      L_cfbe
        fmul    dword ptr [g_78d0e0]
        movsx   edx, al
        sub     edx, 0x30
        mov     dword ptr [esp + 0x14], edx
        inc     ecx
        fiadd   dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x10]
        jmp     L_cf57
    L_cfbe:
        fmul    dword ptr [g_78d0e0]
        movsx   eax, al
        sub     eax, 0x57
        mov     dword ptr [esp + 0x14], eax
        inc     ecx
        fiadd   dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x10]
        jmp     L_cf57
    L_cfdc:
        mov     dword ptr [esp + 0x14], 0x3f800000
        xor     bl, bl
    L_cfe6:
        mov     al, byte ptr [ecx]
        cmp     al, 0x39
        jg      L_cff0
        cmp     al, 0x30
        jge     L_cff8
    L_cff0:
        cmp     al, 0x2e
        jnz     L_d6d3
    L_cff8:
        cmp     al, 0x2e
        jnz     L_d022
        test    bl, bl
        jz      L_d019
        push    0x79e430
        fstp    st(0)
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_82f328]
        add     esp, 0x4
    L_d019:
        inc     ecx
        mov     bl, 0x1
        mov     dword ptr [g_82f328], ecx
    L_d022:
        fcom    dword ptr [g_79e42c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_d048
        push    0x79e450
        fstp    st(0)
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_82f328]
        add     esp, 0x4
    L_d048:
        test    bl, bl
        jnz     L_d073
        movsx   edx, byte ptr [ecx]
        fmul    dword ptr [g_770168]
        mov     dword ptr [esp + 0x10], edx
        inc     ecx
        mov     dword ptr [g_82f328], ecx
        fiadd   dword ptr [esp + 0x10]
        fsub    dword ptr [g_79e428]
        fst     dword ptr [esp + 0x10]
        jmp     L_cfe6
    L_d073:
        movsx   eax, byte ptr [ecx]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_770168]
        sub     eax, 0x30
        mov     dword ptr [esp + 0x10], eax
        inc     ecx
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [g_82f328], ecx
        fild    dword ptr [esp + 0x10]
        fdiv    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fst     dword ptr [esp + 0x10]
        jmp     L_cfe6
    L_d0a5:
        inc     ecx
        fstp    st(0)
        mov     dword ptr [g_82f328], ecx
        call    FUN_006cc730
        fst     dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_82f328]
        cmp     byte ptr [ecx], 0x29
        jz      L_d0d5
        push    0x79e414
        fstp    st(0)
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x14]
        add     esp, 0x4
    L_d0d5:
        inc     dword ptr [g_82f328]
        jmp     L_d6d3
    L_d0e0:
        inc     ecx
        fstp    st(0)
        mov     dword ptr [g_82f328], ecx
        call    FUN_006ccd90
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_d33b
        fld     dword ptr [g_76c5b0]
        jmp     L_d6d3
    L_d10a:
        add     ecx, 0x2
        fstp    st(0)
        mov     dword ptr [g_82f328], ecx
        mov     esi, ecx
        call    FUN_006c12e0
        cmp     eax, 0x64
        jz      L_d183
        cmp     eax, 0x70
        jz      L_d16f
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     ecx, [esp + 0x20]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jz      L_d15a
    L_d140:
        mov     byte ptr [ecx], al
        inc     ecx
        inc     esi
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jnz     L_d140
    L_d15a:
        lea     eax, [esp + 0x20]
        push    eax
        push    0x79e3e8
        mov     byte ptr [ecx], 0x0
        call    FUN_006bfa50
        add     esp, 0x8
    L_d16f:
        mov     eax, dword ptr [g_82f320]
        fld     dword ptr [eax]
        fsub    dword ptr [g_76d064]
        fst     dword ptr [eax]
        jmp     L_d6d3
    L_d183:
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        fild    dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        jmp     L_d6d3
    L_d19a:
        add     ecx, 0x2
        fstp    st(0)
        mov     dword ptr [g_82f328], ecx
        mov     esi, ecx
        call    FUN_006c12e0
        mov     edi, eax
        cmp     edi, 0x70
        jz      L_d201
        cmp     edi, 0x64
        jz      L_d206
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     ecx, [esp + 0x20]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jz      L_d1ec
    L_d1d2:
        mov     byte ptr [ecx], al
        inc     ecx
        inc     esi
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jnz     L_d1d2
    L_d1ec:
        lea     eax, [esp + 0x20]
        push    eax
        push    0x79e3e8
        mov     byte ptr [ecx], 0x0
        call    FUN_006bfa50
        add     esp, 0x8
    L_d201:
        cmp     edi, 0x64
        jnz     L_d21d
    L_d206:
        mov     eax, dword ptr [g_82f320]
        mov     ecx, dword ptr [eax]
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        fild    dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        jmp     L_d6d3
    L_d21d:
        mov     eax, dword ptr [g_82f320]
        fld     dword ptr [eax]
        fadd    dword ptr [g_76d064]
        fst     dword ptr [eax]
        jmp     L_d6d3
    L_d231:
        mov     al, byte ptr [ecx + 0x6]
        add     ecx, 0x6
        cmp     al, 0x20
        mov     dword ptr [g_82f328], ecx
        jnz     L_d248
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d248:
        cmp     byte ptr [ecx], 0x28
        jz      L_d25c
        push    0x79e3b0
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d263
    L_d25c:
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d263:
        call    FUN_006c0940
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
    L_d26f:
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x20]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [g_82f328]
        and     ecx, 0x3
        rep     movsb
        cmp     byte ptr [eax], 0x20
        jnz     L_d2a3
    L_d295:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x20
        jz      L_d295
        mov     dword ptr [g_82f328], eax
    L_d2a3:
        cmp     byte ptr [eax], 0x2c
        jz      L_d2bc
        push    0x79e3b0
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 0x4
        jmp     L_d2c2
    L_d2bc:
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d2c2:
        cmp     byte ptr [eax], 0x20
        jnz     L_d2cd
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d2cd:
        call    FUN_006c0940
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x420]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [g_82f328]
        cmp     byte ptr [ecx], 0x29
        jz      L_d310
        push    0x79e3b0
        call    FUN_006bfa50
        add     esp, 0x4
    L_d310:
        mov     ebx, dword ptr [g_82f328]
        lea     edx, [esp + 0x420]
        push    edx
        lea     eax, [esp + 0x24]
        inc     ebx
        push    eax
        mov     dword ptr [g_82f328], ebx
        call    dword ptr [g_76b41c]
        add     esp, 0x8
        test    eax, eax
        jnz     L_d3c5
    L_d33b:
        fld     dword ptr [g_76d064]
        jmp     L_d6d3
    L_d346:
        mov     al, byte ptr [ecx + 0x7]
        add     ecx, 0x7
        cmp     al, 0x20
        mov     dword ptr [g_82f328], ecx
        jnz     L_d35d
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d35d:
        cmp     byte ptr [ecx], 0x28
        jz      L_d371
        push    0x79e414
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d378
    L_d371:
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d378:
        call    FUN_006c12e0
        cmp     eax, 0x65
        jz      L_d38f
        push    0x79e388
        call    FUN_006bfa50
        add     esp, 0x4
    L_d38f:
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_d39f
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d39f:
        cmp     byte ptr [eax], 0x29
        jz      L_d3b3
        push    0x79e414
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d3b9
    L_d3b3:
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d3b9:
        mov     ecx, dword ptr [g_82f320]
        mov     eax, dword ptr [ecx]
        cmp     eax, ebp
        jnz     L_d3d0
    L_d3c5:
        fld     dword ptr [g_76c5b0]
        jmp     L_d6d3
    L_d3d0:
        push    eax
        call    dword ptr [g_76b3c0]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebp
        fild    qword ptr [esp + 0x18]
        add     esp, 0x4
        jmp     L_d6d3
    L_d3eb:
        mov     al, byte ptr [ecx + 0x4]
        add     ecx, 0x4
        cmp     al, 0x20
        mov     dword ptr [g_82f328], ecx
        jnz     L_d402
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d402:
        cmp     byte ptr [ecx], 0x28
        jz      L_d416
        push    0x79e36c
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d41d
    L_d416:
        inc     ecx
        mov     dword ptr [g_82f328], ecx
    L_d41d:
        call    FUN_006cc730
        fstp    dword ptr [esp + 0x14]
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_d436
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d436:
        cmp     byte ptr [eax], 0x29
        jz      L_d453
        push    0x79e36c
        call    FUN_006bfa50
        fld     dword ptr [esp + 0x18]
        add     esp, 0x4
        fabs
        jmp     L_d6d3
    L_d453:
        fld     dword ptr [esp + 0x14]
        inc     eax
        mov     dword ptr [g_82f328], eax
        fabs
        jmp     L_d6d3
    L_d464:
        movsx   edx, byte ptr [ecx]
        mov     dword ptr [esp + 0x14], edx
        add     ecx, 0x2
        mov     dword ptr [g_82f328], ecx
        fild    dword ptr [esp + 0x14]
        jmp     L_d6d3
    L_d47d:
        fld     dword ptr [g_79e368]
        add     ecx, 0x2
        mov     dword ptr [g_82f328], ecx
        jmp     L_d6d3
    L_d491:
        fld     dword ptr [g_78815c]
        add     ecx, 0x2
        mov     dword ptr [g_82f328], ecx
        jmp     L_d6d3
    L_d4a5:
        mov     al, byte ptr [ecx]
        test    al, 0x80
        mov     esi, ecx
        jnz     L_d4e6
        call    FUN_006c0110
        cmp     eax, ebp
        mov     ecx, dword ptr [g_83a0fc]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ebp
        fild    qword ptr [esp + 0x14]
        jz      L_d6d3
        cmp     eax, 0x1
        fstp    st(0)
        jnz     L_d4ec
        push    ecx
        call    FUN_006c34e0
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        jmp     L_d6d3
    L_d4e6:
        and     al, 0x7f
        mov     byte ptr [ecx], al
        jmp     L_d4f2
    L_d4ec:
        mov     ecx, dword ptr [g_82f328]
    L_d4f2:
        mov     edi, ecx
        call    FUN_006c12e0
        mov     cl, byte ptr [edi]
        mov     ebp, eax
        or      cl, 0x80
        cmp     ebp, 0x29
        mov     byte ptr [edi], cl
        jnz     L_d5e1
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_d51b
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d51b:
        cmp     byte ptr [eax], 0x28
        jz      L_d52f
        push    0x79e338
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d535
    L_d52f:
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d535:
        call    FUN_006c3450
        mov     edi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        mov     dword ptr [esp + 0x10], edi
        jnz     L_d550
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d550:
        cmp     byte ptr [eax], 0x2c
        jz      L_d564
        push    0x79e338
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d56a
    L_d564:
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d56a:
        call    FUN_006c3450
        mov     esi, eax
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x20
        jnz     L_d581
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d581:
        cmp     byte ptr [eax], 0x29
        jz      L_d595
        push    0x79e338
        call    FUN_006bfa50
        add     esp, 0x4
        jmp     L_d59b
    L_d595:
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_d59b:
        call    FUN_007047f0
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        sub     esi, edi
        mov     dword ptr [esp + 0x14], esi
        fmul    dword ptr [g_79d0c8]
        fimul   dword ptr [esp + 0x14]
        fiadd   dword ptr [esp + 0x10]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        mov     dword ptr [esp + 0x14], eax
        fild    dword ptr [esp + 0x14]
        jmp     L_d6d3
    L_d5e1:
        cmp     ebp, 0x65
        jnz     L_d613
        mov     ecx, dword ptr [g_82f320]
        mov     edi, dword ptr [ecx]
        test    edi, edi
        mov     dword ptr [esp + 0x14], edi
        jz      L_d3c5
        or      ecx, 0xffffffff
        xor     eax, eax
    L_d5ff:
        repne   scasb
        not     ecx
        dec     ecx
        jz      L_d3c5
        fild    dword ptr [esp + 0x14]
        jmp     L_d6d3
    L_d613:
        cmp     ebp, 0x64
        jz      L_d66b
        cmp     ebp, 0x68
        jz      L_d66b
        cmp     ebp, 0x70
        jz      L_d670
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     ecx, [esp + 0x20]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jz      L_d656
    L_d63c:
        mov     byte ptr [ecx], al
        inc     ecx
        inc     esi
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     edx, eax
        and     edx, 0xff
        mov     bl, byte ptr [edx + g_82ebf8]
        test    bl, bl
        jnz     L_d63c
    L_d656:
        lea     eax, [esp + 0x20]
        push    eax
        push    0x79e304
        mov     byte ptr [ecx], 0x0
        call    FUN_006bfa50
        add     esp, 0x8
    L_d66b:
        cmp     ebp, 0x70
        jnz     L_d67a
    L_d670:
        mov     ecx, dword ptr [g_82f320]
        fld     dword ptr [ecx]
        jmp     L_d682
    L_d67a:
        mov     ecx, dword ptr [g_82f320]
        fild    dword ptr [ecx]
    L_d682:
        mov     eax, dword ptr [g_82f328]
        cmp     byte ptr [eax], 0x2d
        jnz     L_d6ad
        cmp     byte ptr [eax + 0x1], 0x2d
        jnz     L_d6ad
        add     eax, 0x2
        cmp     ebp, 0x70
        mov     dword ptr [g_82f328], eax
        jz      L_d6a3
        dec     dword ptr [ecx]
        jmp     L_d6ad
    L_d6a3:
        fld     dword ptr [ecx]
        fsub    dword ptr [g_76d064]
        fstp    dword ptr [ecx]
    L_d6ad:
        cmp     byte ptr [eax], 0x2b
        jnz     L_d6d3
        cmp     byte ptr [eax + 0x1], 0x2b
        jnz     L_d6d3
        add     eax, 0x2
        cmp     ebp, 0x70
        mov     dword ptr [g_82f328], eax
        jz      L_d6c9
        inc     dword ptr [ecx]
        jmp     L_d6d3
    L_d6c9:
        fld     dword ptr [ecx]
        fsub    dword ptr [g_76d064]
        fstp    dword ptr [ecx]
    L_d6d3:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L_d6e1
        fchs
    L_d6e1:
        add     esp, 0x610
        ret
    }
}
