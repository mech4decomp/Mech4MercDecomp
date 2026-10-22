/*
 * FUN_00715e00 (910 B) — texture coordinate validation (variant 2).
 * Iterates over a set of vertices (0x28 stride), applying color-mask
 * fixups and running FPU range checks (assert-style via FUN_006fabf0
 * and int 3 traps), including separate u1/v1 and u2/v2 range checks.
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
extern char   g_7a2468[];    /* 0x007a2468 */
extern char   g_7a2454[];    /* 0x007a2454 */
extern char   g_7a240c[];    /* 0x007a240c */
extern char   g_7a23c4[];    /* 0x007a23c4 */
extern char   g_7a23bc[];    /* 0x007a23bc */
extern char   g_7a23b4[];    /* 0x007a23b4 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00704a80(void);

__declspec(naked) void FUN_00715e00(void)
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
        jbe     L_1618f
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        lea     esi, [edx + 0x10]
        mov     ebx, eax
        mov     edi, 0xff81ff81
    L_15e31:
        mov     eax, dword ptr [g_8aae5c]
        test    eax, eax
        jz      L_15e7a
        mov     cl, byte ptr [g_87bc35]
        test    cl, cl
        jnz     L_15e7a
        test    al, 0x1
        jz      L_15e52
        mov     ecx, dword ptr [esi]
        or      ecx, 0xff000000
        jmp     L_15e5e
    L_15e52:
        test    al, 0x8
        jz      L_15e60
        mov     ecx, dword ptr [esi]
        and     ecx, 0xff000000
    L_15e5e:
        mov     dword ptr [esi], ecx
    L_15e60:
        test    al, 0x2
        jz      L_15e6d
        mov     eax, dword ptr [esi]
        or      eax, 0xffffff
        jmp     L_15e78
    L_15e6d:
        test    al, 0x4
        jz      L_15e7a
        mov     eax, dword ptr [esi]
        and     eax, 0xffffff
    L_15e78:
        mov     dword ptr [esi], eax
    L_15e7a:
        fld     dword ptr [esi - 0x4]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_15ea5
        fld     dword ptr [esi - 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a2488
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_15ea5
        int     3
    L_15ea5:
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_15ec5
        fld     dword ptr [esi - 0x8]
        fcomp   dword ptr [g_76d064]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_15ee0
    L_15ec5:
        fld     dword ptr [esi - 0x8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a247c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_15ee0
        int     3
    L_15ee0:
        cmp     dword ptr [esi + 0x8], edi
        jz      L_15eea
        cmp     dword ptr [esi + 0xc], edi
        jnz     L_15efc
    L_15eea:
        push    0x7a2468
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_15efc
        int     3
    L_15efc:
        cmp     dword ptr [esi + 0x10], edi
        jz      L_15f06
        cmp     dword ptr [esi + 0x14], edi
        jnz     L_15f18
    L_15f06:
        push    0x7a2454
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_15f18
        int     3
    L_15f18:
        mov     eax, dword ptr [g_87c298]
        test    eax, eax
        jz      L_16062
        mov     eax, dword ptr [g_858aa8]
        test    eax, eax
        jnz     L_16062
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c294]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_15f72
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [g_87c290]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_15f72
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c28c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_15f72
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [g_87c288]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_15fca
    L_15f72:
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
        push    0x7a240c
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_15fca
        int     3
    L_15fca:
        fld     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_87c294]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1600a
        fld     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_87c290]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_1600a
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [g_87c28c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_1600a
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [g_87c288]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_16062
    L_1600a:
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
        fld     dword ptr [esi + 0x14]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x10]
        fstp    qword ptr [esp]
        push    0x7a23c4
        call    FUN_006fabf0
        add     esp, 0x34
        test    eax, eax
        jz      L_16062
        int     3
    L_16062:
        mov     eax, dword ptr [g_87c1fc]
        test    eax, eax
        jnz     L_160f2
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_1608f
        fild    dword ptr [g_858940]
        fcomp   dword ptr [esi - 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_160aa
    L_1608f:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_160aa
        int     3
    L_160aa:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_160ce
        fild    dword ptr [g_858944]
        fcomp   dword ptr [esi - 0xc]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_16182
    L_160ce:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_16182
        int     3
        jmp     L_16182
    L_160f2:
        cmp     eax, 0x2
        jnz     L_16182
        push    0x0
        push    0x0
        push    0x0
        push    0x1
        call    FUN_00704a80
        test    eax, eax
        jz      L_16182
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_1612c
        fld     dword ptr [esi - 0x10]
        fcomp   dword ptr [g_87c2c4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_16147
    L_1612c:
        fld     dword ptr [esi - 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23bc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_16147
        int     3
    L_16147:
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_16167
        fld     dword ptr [esi - 0xc]
        fcomp   dword ptr [g_87c2c4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_16182
    L_16167:
        fld     dword ptr [esi - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7a23b4
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_16182
        int     3
    L_16182:
        add     esi, 0x28
        dec     ebx
        jnz     L_15e31
        pop     edi
        pop     esi
        pop     ebx
    L_1618f:
        pop     ebp
        ret     0x8
    }
}
