/*
 * FUN_0072c0d0 (1499 B) — build a 3D radar/compass display list.
 *
 * Sets up a series of render states (FUN_00713cc0), computes a 2D position
 * from DAT_00882588 via a 5-way switch (jump table at 0x0072c6ac), generates
 * a 16-vertex fan of points (sin/cos), fills a color table, and issues a
 * series of draw calls (FUN_007274d0 / FUN_00727630 / FUN_00727660 /
 * FUN_007275f0 / FUN_00728fd0 / FUN_0072b230).
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_882588;      /* DAT_00882588 */
extern unsigned char g_88258a;      /* DAT_0088258a (high byte of 0x882588) */
extern int g_881724;                /* DAT_00881724 */
extern float g_76d978;              /* _DAT_0076d978 */
extern int g_858940;                /* DAT_00858940 */
extern float g_76df00;              /* _DAT_0076df00 */
extern int g_88171c;                /* DAT_0088171c */
extern int g_881728;                /* DAT_00881728 */
extern float g_76d070;              /* _DAT_0076d070 */
extern int g_858944;                /* DAT_00858944 */
extern double g_8816f8;             /* _DAT_008816f8 */
extern double g_77d038;             /* _DAT_0077d038 */
extern unsigned long g_8825e0;      /* DAT_008825e0 */
extern unsigned long g_8825c8;      /* DAT_008825c8 */
extern float g_7a5980;              /* _DAT_007a5980 */
extern float g_7a597c;              /* _DAT_007a597c */
extern double g_76d970;             /* _DAT_0076d970 */
extern unsigned long g_882580;      /* DAT_00882580 */
extern float g_773948;              /* _DAT_00773948 */
extern float g_77a198;              /* _DAT_0077a198 */
extern unsigned long g_882584;      /* DAT_00882584 */
extern unsigned long g_88170c;      /* DAT_0088170c */
extern float g_76dd60;              /* _DAT_0076dd60 */
extern unsigned long g_85895c;      /* DAT_0085895c */

extern void __cdecl FUN_00713cc0(int a, int b);
extern double __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_00713bc0(void *a, int b);
extern void __cdecl FUN_007274d0(int a, int b, float c, int d, int e, int f, int g, int h, int i);
extern void __cdecl FUN_00727630(int a, int b, int c, int d);
extern void __cdecl FUN_00727660(void *a, void *b, void *c);
extern void __cdecl FUN_007275f0(int a, int b);
extern void __cdecl FUN_00728fd0(void *a);
extern void __cdecl FUN_0072b230(int a, int b, int c, int d);

__declspec(naked) void __stdcall FUN_0072c0d0(unsigned int param_1)
{
    __asm {
        sub     esp, 0x23c
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebp, ebp
        push    ebp
        push    0x1
        call    FUN_00713cc0
        push    0x1
        push    0x4
        call    FUN_00713cc0
        push    ebp
        push    0x5
        call    FUN_00713cc0
        push    ebp
        push    0x6
        call    FUN_00713cc0
        push    ebp
        push    0x7
        call    FUN_00713cc0
        push    ebp
        push    0x8
        call    FUN_00713cc0
        push    ebp
        push    0x9
        call    FUN_00713cc0
        push    ebp
        push    0xa
        call    FUN_00713cc0
        push    0x2
        push    0xb
        call    FUN_00713cc0
        push    0x2
        push    0x10
        call    FUN_00713cc0
        push    0x2
        push    0xf
        call    FUN_00713cc0
        push    ebp
        push    0x13
        call    FUN_00713cc0
        push    ebp
        push    0x12
        call    FUN_00713cc0
        push    0x3
        push    0xd
        call    FUN_00713cc0
        mov     ebx, dword ptr [g_882588]
        mov     eax, ebx
        and     eax, 0xff
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        xor     eax, eax
        lea     edi, [esp + 0x2c]
        fstp    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, 0x88
        rep     stosd
        mov     al, byte ptr [g_88258a]
        cmp     eax, 0x4
        ja      L_72c2ab
        jmp     dword ptr [eax*4 + 0x72c6ac]
    L_72c194:
        fild    dword ptr [g_881724]
        fld     st(0)
        fadd    dword ptr [esp + 0x14]
        fadd    dword ptr [g_76d978]
        fild    dword ptr [g_858940]
        fcompp
        __emit 0xDF                 /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_72c1f4
        fstp    st(0)
        xor     edx, edx
        fld     dword ptr [esp + 0x14]
        mov     dl, bl
        fmul    dword ptr [g_76df00]
        shr     dl, 0x1
        fiadd   dword ptr [g_88171c]
        and     edx, 0xff
        fsub    dword ptr [g_76d978]
        mov     dword ptr [esp + 0x10], edx
        fstp    dword ptr [esp + 0x2c]
        fild    dword ptr [g_881728]
        fisub   dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x30]
        jmp     L_72c2ab
    L_72c1f4:
        fld     dword ptr [esp + 0x14]
        xor     eax, eax
        fmul    dword ptr [g_76d070]
        mov     al, bl
        shr     al, 0x1
        fsubr   st(0), st(1)
        fadd    dword ptr [esp + 0x10]
        and     eax, 0xff
        fadd    dword ptr [g_76d978]
        mov     dword ptr [esp + 0x10], eax
        fstp    dword ptr [esp + 0x2c]
        fstp    st(0)
        fild    dword ptr [g_881728]
        fisub   dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x30]
        jmp     L_72c2ab
    L_72c22f:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [g_76d978]
        fst     dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x30]
        jmp     L_72c2ab
    L_72c249:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [g_76d978]
        fild    dword ptr [g_858940]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x30]
        jmp     L_72c2ab
    L_72c26b:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [g_76d978]
        fild    dword ptr [g_858940]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x2c]
        jmp     L_72c29d
    L_72c289:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [g_76d978]
        fst     dword ptr [esp + 0x2c]
    L_72c29d:
        fild    dword ptr [g_858944]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x30]
        fstp    st(0)
    L_72c2ab:
        mov     al, byte ptr [esp + 0x250]
        test    al, al
        mov     dword ptr [esp + 0x38], 0x3f800000
        jz      L_72c3fd
        push    ebp
        call    FUN_00707e70
        fsub    qword ptr [g_8816f8]
        fcomp   qword ptr [g_77d038]
        __emit 0xDF                 /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_72c303
        mov     edx, dword ptr [g_8825e0]
        inc     edx
        push    ebp
        mov     dword ptr [g_8825e0], edx
        call    FUN_00707e70
        fstp    qword ptr [g_8816f8]
        cmp     dword ptr [g_8825e0], 0xd
        jbe     L_72c303
        mov     dword ptr [g_8825e0], ebp
    L_72c303:
        mov     ebx, dword ptr [g_882588]
    L_72c309:
        mov     eax, dword ptr [esp + 0x250]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_76d070]
        and     eax, 0xff
        imul    eax, dword ptr [g_8825e0]
        inc     eax
        lea     ecx, [esp + 0x50]
        mov     edx, 0xf
        mov     esi, 0x3f800000
    L_72c335:
        lea     edi, [eax + -0x1]
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], ebp
        fild    qword ptr [esp + 0x18]
        inc     eax
        add     ecx, 0x20
        dec     edx
        fmul    dword ptr [g_7a5980]
        fmul    dword ptr [g_7a597c]
        fld     st(0)
        fsin
        fld     st(2)
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [ecx + -0x24]
        fld     dword ptr [esp + 0x30]
        fxch    st(1)
        fcos
        fld     st(2)
        fmulp   st(1), st(0)
        fsubp   st(1), st(0)
        fstp    dword ptr [ecx + -0x20]
        mov     dword ptr [ecx + -0x18], esi
        jnz     L_72c335
        fld     qword ptr [g_76d970]
        mov     ecx, dword ptr [g_882580]
        cmp     ecx, ebp
        fsin
        mov     dword ptr [esp + 0x238], 0x3f800000
        fld     st(1)
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x22c]
        fld     dword ptr [esp + 0x30]
        fld     qword ptr [g_76d970]
        fcos
        fxch    st(2)
        fmulp   st(2), st(0)
        fxch    st(1)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x230]
        jnz     L_72c4d7
        mov     al, byte ptr [esp + 0x250]
        test    al, al
        jnz     L_72c408
        xor     eax, eax
        mov     al, bh
        shl     eax, 0x18
        lea     ecx, [eax + 0xffffff]
        mov     dword ptr [esp + 0x3c], ecx
        lea     edx, [eax + 0x404040]
        lea     eax, [esp + 0x5c]
        mov     ecx, 0xf
    L_72c3f0:
        mov     dword ptr [eax], edx
        add     eax, 0x20
        dec     ecx
        jnz     L_72c3f0
        jmp     L_72c4fc
    L_72c3fd:
        mov     dword ptr [g_8825e0], ebp
        jmp     L_72c309
    L_72c408:
        xor     eax, eax
        mov     al, bh
        shl     eax, 0x18
        lea     edx, [eax + 0xffffff]
        mov     dword ptr [esp + 0x3c], edx
        lea     ecx, [eax + 0xff0000]
        mov     dword ptr [esp + 0x5c], ecx
        lea     edx, [eax + 0xff3000]
        mov     dword ptr [esp + 0x7c], edx
        lea     ecx, [eax + 0xff6000]
        mov     dword ptr [esp + 0x9c], ecx
        lea     edx, [eax + 0xff9000]
        mov     dword ptr [esp + 0xbc], edx
        lea     ecx, [eax + 0xffc000]
        lea     edx, [eax + 0xffff00]
        mov     dword ptr [esp + 0xdc], ecx
        mov     dword ptr [esp + 0xfc], edx
        lea     ecx, [eax + 0xc0ff00]
        lea     edx, [eax + 0x90ff00]
        mov     dword ptr [esp + 0x11c], ecx
        mov     dword ptr [esp + 0x13c], edx
        lea     ecx, [eax + 0x60ff00]
        lea     edx, [eax + 0x30c0ff]
        mov     dword ptr [esp + 0x15c], ecx
        mov     dword ptr [esp + 0x17c], edx
        lea     ecx, [eax + 0xa0ff]
        lea     edx, [eax + 0x3090ff]
        mov     dword ptr [esp + 0x19c], ecx
        mov     dword ptr [esp + 0x1bc], edx
        lea     ecx, [eax + 0x6060ff]
        lea     edx, [eax + 0x9030ff]
        add     eax, 0xc000ff
        mov     dword ptr [esp + 0x1dc], ecx
        mov     dword ptr [esp + 0x1fc], edx
        mov     dword ptr [esp + 0x21c], eax
        jmp     L_72c4fc
    L_72c4d7:
        xor     eax, eax
        mov     al, bh
        shl     eax, 0x18
        lea     edx, [eax + 0xffffff]
        mov     dword ptr [esp + 0x3c], edx
        lea     edx, [eax + ecx*1]
        lea     eax, [esp + 0x5c]
        mov     ecx, 0xf
    L_72c4f4:
        mov     dword ptr [eax], edx
        add     eax, 0x20
        dec     ecx
        jnz     L_72c4f4
    L_72c4fc:
        push    0x10
        lea     eax, [esp + 0x30]
        push    eax
        call    FUN_00713bc0
        mov     eax, dword ptr [g_882588]
        mov     ebx, dword ptr [esp + 0x250]
        mov     ecx, eax
        and     ecx, 0xff
        neg     ecx
        mov     dword ptr [esp + 0x10], ecx
        fild    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_8825c8]
        cmp     ecx, 0x3b5
        fmul    dword ptr [g_773948]
        fstp    dword ptr [esp + 0x14]
        jnz     L_72c550
        test    bl, bl
        jz      L_72c550
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [g_77a198]
        fstp    dword ptr [esp + 0x14]
    L_72c550:
        mov     edx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [g_882584]
        push    0x1
        push    ebp
        xor     ecx, ecx
        push    ebp
        mov     cl, ah
        push    ebx
        push    0x1
        push    ebp
        push    edx
        mov     edx, dword ptr [g_88170c]
        shl     ecx, 0x18
        or      ecx, esi
        push    ecx
        push    edx
        call    FUN_007274d0
        mov     eax, dword ptr [g_858944]
        mov     ecx, dword ptr [g_858940]
        push    eax
        push    ecx
        push    ebp
        push    ebp
        call    FUN_00727630
        test    bl, bl
        mov     esi, 0x8816f4
        jnz     L_72c59b
        mov     esi, 0x7a5978
    L_72c59b:
        push    esi
        lea     edx, [esp + 0x28]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_00727660
        fld     dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x2c]
        fadd    dword ptr [g_76dd60]
        shr     ecx, 0x1
        shr     eax, 0x1
        fstp    dword ptr [esp + 0x1c]
        add     esp, 0xc
        fld     dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x10]
        fadd    dword ptr [g_76dd60]
        and     edx, 0x7fffff
        sub     edx, ecx
        fstp    dword ptr [esp + 0x14]
        sub     edx, 0x400000
        mov     ecx, dword ptr [esp + 0x14]
        and     ecx, 0x7fffff
        sub     ecx, eax
        push    edx
        sub     ecx, 0x400000
        push    ecx
        call    FUN_007275f0
        push    esi
        call    FUN_00728fd0
        mov     eax, dword ptr [g_85895c]
        add     esp, 0x4
        pop     edi
        pop     esi
        cmp     eax, ebp
        pop     ebp
        pop     ebx
        jz      L_72c6a2
        fld     dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_882588]
        fadd    dword ptr [g_76dd60]
        and     eax, 0xff
        shr     eax, 0x1
        fst     dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     ecx, 0x7fffff
        __emit 0xD9                 /* __emit: MSVC6 drops 00 disp on fst [esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        __emit 0x8B                 /* __emit: MSVC6 drops 00 disp on mov edx,[esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fstp    dword ptr [esp + 0x18]
        __emit 0x89                 /* __emit: MSVC6 drops 00 disp on mov [esp+0],edx */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        lea     edx, [ecx + eax*1 + 0xffc00000]
        fstp    dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        and     ecx, 0x7fffff
        lea     edx, [ecx + eax*1 + 0xffc00000]
        mov     ecx, dword ptr [esp + 0xc]
        push    edx
        mov     edx, dword ptr [esp + 0x8]
        and     ecx, 0x7fffff
        and     edx, 0x7fffff
        sub     ecx, eax
        sub     ecx, 0x400000
        sub     edx, eax
        push    ecx
        sub     edx, 0x400000
        push    edx
        call    FUN_0072b230
    L_72c6a2:
        add     esp, 0x23c
        ret     0x4
    }
}
