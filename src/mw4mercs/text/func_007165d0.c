/*
 * FUN_007165d0 (876 B) — texture coordinate validation. Iterates over a
 * set of vertices, applying color-mask fixups and running a series of
 * FPU range checks (assert-style, calling FUN_006fabf0 and trapping via
 * int 3 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_87c5dc;      /* 0x0087c5dc */
extern int    g_8aae5c;      /* 0x008aae5c */
extern char   g_87bc35;      /* 0x0087bc35 */
extern float  g_76c5b0;      /* 0x0076c5b0 */
extern float  g_76d064;      /* 0x0076d064 */
extern int    g_87c298;      /* 0x0087c298 */
extern int    g_858aa8;      /* 0x00858aa8 */
extern float  g_87c294;      /* 0x0087c294 */
extern float  g_87c290;      /* 0x0087c290 */
extern float  g_87c28c;      /* 0x0087c28c */
extern float  g_87c288;      /* 0x0087c288 */
extern int    g_87c1fc;      /* 0x0087c1fc */
extern int    g_858940;      /* 0x00858940 */
extern int    g_858944;      /* 0x00858944 */
extern float  g_87c2c8;      /* 0x0087c2c8 */
extern float  g_87c2c4;      /* 0x0087c2c4 */
extern char   g_7a2488[];    /* 0x007a2488 */
extern char   g_7a247c[];    /* 0x007a247c */
extern char   g_7a2520[];    /* 0x007a2520 */
extern char   g_7a24dc[];    /* 0x007a24dc */
extern char   g_7a23bc[];    /* 0x007a23bc */
extern char   g_7a23b4[];    /* 0x007a23b4 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00704a80(void);

__declspec(naked) void FUN_007165d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [g_87c5dc]
        mov     ecx, eax
        shl     ecx, 0x5
        add     edx, ecx
        test    eax, eax
        mov     dword ptr [g_87c5dc], edx
        jbe     L_16942
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        mov     bl, byte ptr [ebp + 0x10]
        push    esi
        push    edi
        lea     esi, [edx + 0x10]
        mov     dword ptr [ebp + 0xc], eax
        mov     edi, 0xff81ff81
    L_16605:
        mov     eax, dword ptr [g_8aae5c]
        test    eax, eax
        jz      L_1664e
        mov     cl, byte ptr [g_87bc35]
        test    cl, cl
        jnz     L_1664e
        test    al, 0x1
        jz      L_16626
        mov     ecx, dword ptr [esi]
        or      ecx, 0xff000000
        jmp     L_16632
    L_16626:
        test    al, 0x8
        jz      L_16634
        mov     ecx, dword ptr [esi]
        and     ecx, 0xff000000
    L_16632:
        mov     dword ptr [esi], ecx
    L_16634:
        test    al, 0x2
        jz      L_16641
        mov     eax, dword ptr [esi]
        or      eax, 0xffffff
        jmp     L_1664c
    L_16641:
        test    al, 0x4
        jz      L_1664e
        mov     eax, dword ptr [esi]
        and     eax, 0xffffff
    L_1664c:
        mov     dword ptr [esi], eax
    L_1664e:
        fld     dword ptr [esi - 0x4]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_16679
        fld     dword ptr [esi - 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a2488
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_16679
        int     3
    L_16679:
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_16699
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_166b4
    L_16699:
        fld     dword ptr [esi - 0x8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a247c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_166b4
        int     3
    L_166b4:
        cmp     dword ptr [esi + 0x8], edi
        jz      L_166be
        cmp     dword ptr [esi + 0xc], edi
        jnz     L_166d0
    L_166be:
        push    0x7a2520
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_166d0
        int     3
    L_166d0:
        mov     eax, dword ptr [g_87c298]
        test    eax, eax
        jz      L_16782
        mov     eax, dword ptr [g_858aa8]
        test    eax, eax
        jnz     L_16782
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c294]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1672a
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c290]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_1672a
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c28c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1672a
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c288]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_16782
    L_1672a:
        fld     dword ptr [g_87c28c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [g_87c294]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [g_87c288]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [g_87c290]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [esi + 0xc]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x8]
        fstp    qword ptr [esp]
        push    0x7a24dc
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_16782
        int     3
    L_16782:
        mov     eax, dword ptr [g_87c1fc]
        test    eax, eax
        jnz     L_1689f
        test    bl, bl
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        jz      L_16827
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_167bd
        mov     eax, dword ptr [g_858940]
        dec     eax
        mov     dword ptr [ebp + 0x10], eax
        fild    dword ptr [ebp + 0x10]
        fcomp   dword ptr [esi - 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_167d8
    L_167bd:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_167d8
        int     3
    L_167d8:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_16803
        mov     ecx, dword ptr [g_858944]
        dec     ecx
        mov     dword ptr [ebp + 0x10], ecx
        fild    dword ptr [ebp + 0x10]
        fcomp   dword ptr [esi - 0xc]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1692f
    L_16803:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_1692f
        int     3
        jmp     L_1692f
    L_16827:
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_1683c
        fild    dword ptr [g_858940]
        fcomp   dword ptr [esi - 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_16857
    L_1683c:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_16857
        int     3
    L_16857:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_1687b
        fild    dword ptr [g_858944]
        fcomp   dword ptr [esi - 0xc]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1692f
    L_1687b:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_1692f
        int     3
        jmp     L_1692f
    L_1689f:
        cmp     eax, 0x2
        jnz     L_1692f
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        call    FUN_00704a80
        test    eax, eax
        jz      L_1692f
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_168d9
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_168f4
    L_168d9:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_168f4
        int     3
    L_168f4:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_16914
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_1692f
    L_16914:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_1692f
        int     3
    L_1692f:
        mov     eax, dword ptr [ebp + 0xc]
        add     esi, 0x20
        dec     eax
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_16605
        pop     edi
        pop     esi
        pop     ebx
    L_16942:
        pop     ebp
        ret     0xc
    }
}
