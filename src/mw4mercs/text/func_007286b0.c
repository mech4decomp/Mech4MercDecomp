/*
 * FUN_007286b0 (2040 B) — text/character layout advance routine.
 *
 * Advances a text cursor (DAT_008816c0 / DAT_008816bc) by the width of the
 * given character, using per-glyph metrics from the font table at
 * DAT_008816cc (offsets 0x2f8/0x3d8/0x4b8/0x598/0x218/0x138/0x678/0x760)
 * and FPU math.  Handles newline/CR (reset), space (advance by half/whole
 * em), and normal glyphs, with two large branches selected by
 * DAT_008816dc.  __stdcall, RET 4 (1 byte param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- data symbols ---- */
extern unsigned char g_8816dc;  /* DAT_008816dc */
extern int g_8816cc;            /* DAT_008816cc (font table base) */
extern unsigned char g_8816e4;  /* DAT_008816e4 */
extern unsigned char g_8816e6;  /* DAT_008816e6 */
extern unsigned char g_8816e5;  /* DAT_008816e5 */
extern int g_8816c0;            /* DAT_008816c0 */
extern int g_8816bc;            /* DAT_008816bc */
extern float g_8816b8;          /* DAT_008816b8 */
extern float g_8816d8;          /* DAT_008816d8 */
extern int g_8816d0;            /* DAT_008816d0 */
extern unsigned char g_8816c4;  /* DAT_008816c4 */
extern float g_7b7118;          /* _DAT_007b7118 */
extern int g_7b7114;            /* DAT_007b7114 */
extern float g_76dd60;          /* _DAT_0076dd60 */
extern float g_76d070;          /* _DAT_0076d070 */
extern float g_76d3c8;          /* _DAT_0076d3c8 */
extern int g_8806a4;            /* DAT_008806a4 */
extern int g_8806a0;            /* DAT_008806a0 */
extern char g_8806a8[];         /* DAT_008806a8 */
extern char g_8806b8[];         /* DAT_008806b8 */

/* ---- internal callees ---- */
extern void __cdecl FUN_00713cc0(int a, int b);
extern void __cdecl FUN_00713ae0(void* a, int b);
extern void __cdecl FUN_007277f0(int a);

__declspec(naked) void __stdcall FUN_007286b0(unsigned char param_1)
{
    __asm {
        mov     al, byte ptr [g_8816dc]
        mov     cl, byte ptr [esp + 0x4]
        sub     esp, 0x24
        test    al, al
        push    ebx
        push    esi
        push    edi
        jz      L_728a15
        cmp     cl, 0xd
        jz      L_7289bd
        cmp     cl, 0xa
        jz      L_7289bd
        cmp     cl, 0x20
        mov     eax, dword ptr [g_8816cc]
        jc      L_7286fb
        mov     edx, dword ptr [esp + 0x34]
        mov     esi, dword ptr [eax + 0x114]
        and     edx, 0xff
        cmp     edx, esi
        jl      L_728795
    L_7286fb:
        mov     cl, 0x40
    L_7286fd:
        add     cl, 0xe0
        mov     byte ptr [esp + 0x34], cl
        mov     esi, dword ptr [esp + 0x34]
        and     esi, 0xff
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x2f8]
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x3d8]
        push    ebp
        mov     dword ptr [esp + 0x38], ecx
        fild    dword ptr [esp + 0x38]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x4b8]
        add     edx, ecx
        mov     dword ptr [esp + 0x38], edx
        fild    dword ptr [esp + 0x38]
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x598]
        fstp    dword ptr [esp + 0x38]
        fst     dword ptr [esp + 0x18]
        mov     ebp, edx
        mov     dl, byte ptr [g_8816e4]
        test    dl, dl
        mov     dword ptr [esp + 0x2c], ebp
        fild    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x14]
        jz      L_7287f9
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x218]
        inc     edx
        mov     dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x2c]
        jmp     L_728813
    L_728795:
        cmp     cl, 0x20
        jnz     L_7286fd
        fild    dword ptr [eax + 0x124]
        mov     cl, byte ptr [g_8816e4]
        test    cl, cl
        fmul    dword ptr [g_7b7118]
        jz      L_7287e9
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x34]
    L_7287c8:
        mov     ecx, dword ptr [g_8816c0]
        pop     edi
        and     eax, 0x7fffff
        lea     edx, [ecx + eax*1 + 0xffc00000]
        pop     esi
        mov     dword ptr [g_8816c0], edx
        pop     ebx
        add     esp, 0x24
        ret     0x4
    L_7287e9:
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x34]
        jmp     L_7287c8
    L_7287f9:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x2c]
    L_728813:
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x218]
        add     ebp, ecx
        and     ebx, 0x7fffff
        sub     ebx, 0x400000
        mov     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x138]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x1c], edx
        fild    dword ptr [esp + 0x1c]
        add     edx, edi
        mov     dword ptr [esp + 0x2c], edx
        fadd    st(0), st(1)
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x24]
        fstp    st(0)
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x38]
        fild    dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], ebp
        pop     ebp
        fadd    dword ptr [esp + 0x14]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [g_8816c0]
        fst     dword ptr [esp + 0x18]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_7b7118]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0xc]
        fstp    st(0)
        fild    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x28], edx
        mov     dl, byte ptr [g_8816e6]
        test    dl, dl
        fmul    dword ptr [g_7b7118]
        fiadd   dword ptr [g_8816bc]
        fstp    dword ptr [esp + 0x24]
        jz      L_728908
        mov     edx, dword ptr [eax + 0x128]
        mov     dword ptr [esp + 0x1c], edx
        sub     edx, ecx
        mov     dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fidiv   dword ptr [esp + 0x1c]
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_7b7118]
        fmul    dword ptr [g_76d3c8]
        fmulp   st(1), st(0)
        fld     st(0)
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
    L_728908:
        mov     edx, dword ptr [g_7b7114]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x678]
        cmp     edx, dword ptr [eax + ecx*4 + 0x760]
        jz      L_728999
        mov     ecx, dword ptr [g_8806a4]
        xor     edi, edi
        cmp     ecx, edi
        jz      L_728962
        cmp     dword ptr [g_8806a0], edi
        jz      L_72893d
        push    0x2
        push    0xb
        call    FUN_00713cc0
    L_72893d:
        mov     eax, dword ptr [g_8806a4]
        push    eax
        push    offset g_8806a8
        call    FUN_00713ae0
        cmp     dword ptr [g_8806a0], edi
        jz      L_72895d
        push    edi
        push    0xb
        call    FUN_00713cc0
    L_72895d:
        mov     eax, dword ptr [g_8816cc]
    L_728962:
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x678]
        mov     dword ptr [g_8806a0], edi
        mov     dword ptr [g_8806a4], edi
        mov     eax, dword ptr [eax + ecx*4 + 0x760]
        push    eax
        push    0x1
        mov     dword ptr [g_7b7114], eax
        call    FUN_00713cc0
        mov     eax, dword ptr [g_8816cc]
        mov     byte ptr [g_8816c4], 0x1
        jmp     L_72899b
    L_728999:
        xor     edi, edi
    L_72899b:
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x4b8]
        mov     dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_7b7118]
        fiadd   dword ptr [g_8816bc]
        jmp     L_728d13
    L_7289bd:
        fld     dword ptr [g_8816b8]
        mov     edx, dword ptr [g_8816bc]
        fadd    dword ptr [g_76dd60]
        pop     edi
        pop     esi
        fstp    dword ptr [esp + 0x2c]
        pop     ebx
        fld     dword ptr [g_8816d8]
        mov     eax, dword ptr [esp + 0x28]
        fadd    dword ptr [g_76dd60]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [g_8816c0], eax
        mov     ecx, dword ptr [esp + 0x28]
        and     ecx, 0x7fffff
        lea     eax, [edx + ecx*1 + 0xffc00000]
        mov     dword ptr [g_8816bc], eax
        add     esp, 0x24
        ret     0x4
    L_728a15:
        cmp     cl, 0xa
        jz      L_728e4d
        cmp     cl, 0xd
        jz      L_728e4d
        cmp     cl, 0x20
        mov     eax, dword ptr [g_8816cc]
        jc      L_728a49
        mov     edx, dword ptr [esp + 0x34]
        mov     esi, dword ptr [eax + 0x114]
        and     edx, 0xff
        cmp     edx, esi
        jl      L_728aed
    L_728a49:
        mov     cl, 0x40
    L_728a4b:
        add     cl, 0xe0
        mov     byte ptr [esp + 0x34], cl
        mov     esi, dword ptr [esp + 0x34]
        xor     ecx, ecx
        and     esi, 0xff
        mov     cl, byte ptr [esi + eax*1 + 0x2f8]
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x4b8]
        mov     dword ptr [esp + 0x34], ecx
        fild    dword ptr [esp + 0x34]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x3d8]
        mov     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x598]
        mov     dword ptr [esp + 0x28], edi
        add     ecx, edi
        mov     dword ptr [esp + 0x34], ecx
        fild    dword ptr [esp + 0x34]
        mov     cl, byte ptr [g_8816e4]
        test    cl, cl
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x14]
        fild    dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x10]
        jz      L_728b61
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x218]
        inc     ecx
        mov     dword ptr [esp + 0x2c], ecx
        fild    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x2c]
        jmp     L_728b7b
    L_728aed:
        cmp     cl, 0x20
        jnz     L_728a4b
        mov     cl, byte ptr [g_8816e4]
        test    cl, cl
        jz      L_728b45
        mov     eax, dword ptr [eax + 0x124]
        sar     eax, 0x1
        mov     dword ptr [esp + 0x34], eax
        fild    dword ptr [esp + 0x34]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x34]
    L_728b24:
        mov     edx, dword ptr [g_8816c0]
        pop     edi
        and     ecx, 0x7fffff
        lea     eax, [edx + ecx*1 + 0xffc00000]
        pop     esi
        mov     dword ptr [g_8816c0], eax
        pop     ebx
        add     esp, 0x24
        ret     0x4
    L_728b45:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x34]
        jmp     L_728b24
    L_728b61:
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_7b7118]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x2c]
    L_728b7b:
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x138]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x218]
        and     ebx, 0x7fffff
        sub     ebx, 0x400000
        mov     dword ptr [esp + 0x18], edx
        fild    dword ptr [esp + 0x18]
        add     edx, ecx
        mov     dword ptr [esp + 0x2c], edx
        fadd    st(0), st(1)
        mov     dword ptr [esp + 0xc], ecx
        mov     cl, byte ptr [g_8816e6]
        test    cl, cl
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x34]
        fild    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x14]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x11c]
        fstp    dword ptr [esp + 0x10]
        fild    dword ptr [g_8816c0]
        fst     dword ptr [esp + 0x18]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_7b7118]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0xc]
        fstp    st(0)
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [g_7b7118]
        fiadd   dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x28], edx
        fiadd   dword ptr [g_8816bc]
        fstp    dword ptr [esp + 0x24]
        jz      L_728c6b
        mov     ecx, dword ptr [eax + 0x128]
        mov     dword ptr [esp + 0x1c], ecx
        sub     ecx, edi
        mov     dword ptr [esp + 0x2c], ecx
        fild    dword ptr [esp + 0x2c]
        fidiv   dword ptr [esp + 0x1c]
        fild    dword ptr [eax + 0x124]
        fmul    dword ptr [g_7b7118]
        fmul    dword ptr [g_76d3c8]
        fmulp   st(1), st(0)
        fld     st(0)
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
    L_728c6b:
        mov     edx, dword ptr [g_7b7114]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x678]
        cmp     edx, dword ptr [eax + ecx*4 + 0x760]
        jz      L_728cfa
        mov     ecx, dword ptr [g_8806a4]
        xor     edi, edi
        cmp     ecx, edi
        jz      L_728cc5
        cmp     dword ptr [g_8806a0], edi
        jz      L_728ca0
        push    0x2
        push    0xb
        call    FUN_00713cc0
    L_728ca0:
        mov     eax, dword ptr [g_8806a4]
        push    eax
        push    offset g_8806a8
        call    FUN_00713ae0
        cmp     dword ptr [g_8806a0], edi
        jz      L_728cc0
        push    edi
        push    0xb
        call    FUN_00713cc0
    L_728cc0:
        mov     eax, dword ptr [g_8816cc]
    L_728cc5:
        xor     ecx, ecx
        mov     cl, byte ptr [esi + eax*1 + 0x678]
        mov     dword ptr [g_8806a0], edi
        mov     dword ptr [g_8806a4], edi
        mov     eax, dword ptr [eax + ecx*4 + 0x760]
        push    eax
        push    0x1
        mov     dword ptr [g_7b7114], eax
        call    FUN_00713cc0
        mov     eax, dword ptr [g_8816cc]
        mov     byte ptr [g_8816c4], 0x1
    L_728cfa:
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*1 + 0x4b8]
        add     edx, dword ptr [g_8816bc]
        mov     dword ptr [esp + 0x2c], edx
        fild    dword ptr [esp + 0x2c]
        xor     edi, edi
    L_728d13:
        mov     ecx, dword ptr [g_8816d0]
        mov     eax, dword ptr [g_8806a4]
        mov     edx, dword ptr [esp + 0x20]
        shl     eax, 0x5
        mov     dword ptr [eax + 0x8806b8], ecx
        mov     dword ptr [eax + 0x8806d8], ecx
        mov     dword ptr [eax + 0x8806f8], ecx
        mov     dword ptr [eax + 0x880718], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x8806a8], ecx
        fst     dword ptr [eax + 0x8806ac]
        fild    dword ptr [g_8816c0]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x8806c0], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x8806c4], ecx
        fstp    dword ptr [eax + 0x8806c8]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x8806cc], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8806e0], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0x8806e4], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x8806e8], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8806ec], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x880700], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x880704], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x880708], ecx
        fstp    dword ptr [eax + 0x88070c]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x880720], edx
        xor     edx, edx
        mov     dl, byte ptr [g_8816e5]
        mov     dword ptr [eax + 0x880724], ecx
        push    edx
        call    FUN_007277f0
        mov     al, byte ptr [g_8816e5]
        test    al, al
        jz      L_728deb
        inc     ebx
    L_728deb:
        cmp     dword ptr [g_8806a4], 0x7c
        jc      L_728e38
        cmp     dword ptr [g_8806a0], edi
        jz      L_728e05
        push    0x2
        push    0xb
        call    FUN_00713cc0
    L_728e05:
        mov     eax, dword ptr [g_8806a4]
        push    eax
        push    offset g_8806a8
        call    FUN_00713ae0
        cmp     dword ptr [g_8806a0], edi
        jz      L_728e25
        push    edi
        push    0xb
        call    FUN_00713cc0
    L_728e25:
        mov     dword ptr [g_8806a0], edi
        mov     dword ptr [g_8806a4], edi
        mov     byte ptr [g_8816c4], 0x1
    L_728e38:
        mov     eax, dword ptr [g_8816c0]
        pop     edi
        add     eax, ebx
        pop     esi
        mov     dword ptr [g_8816c0], eax
        pop     ebx
        add     esp, 0x24
        ret     0x4
    L_728e4d:
        fld     dword ptr [g_8816b8]
        mov     eax, dword ptr [g_8816bc]
        fadd    dword ptr [g_76dd60]
        pop     edi
        pop     esi
        fstp    dword ptr [esp + 0x2c]
        pop     ebx
        fld     dword ptr [g_8816d8]
        mov     ecx, dword ptr [esp + 0x28]
        fadd    dword ptr [g_76dd60]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [g_8816c0], ecx
        mov     edx, dword ptr [esp + 0x28]
        and     edx, 0x7fffff
        lea     ecx, [eax + edx*1 + 0xffc00000]
        mov     dword ptr [g_8816bc], ecx
        add     esp, 0x24
        ret     0x4
    }
}
