/*
 * FUN_5e015e90 (2100 B) — DirectDraw surface format/creation body.
 * 0x800-flag dispatch between 3-channel (FUN_5e015290/5e014fc0) and
 * 4-channel (FUN_5e0158a0/5e015590) interpolation paths. Heavy FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a580;      /* DAT_5e77a580 */
extern int g_5e77a594;      /* DAT_5e77a594 */
extern int g_5e77a7ac;      /* DAT_5e77a7ac */
extern int g_5e77a7a4;      /* DAT_5e77a7a4 */
extern int g_5e77a7a8;      /* DAT_5e77a7a8 */
extern int g_5e77a7a0;      /* DAT_5e77a7a0 */
extern int g_5e038928;      /* DAT_5e038928 */
extern int g_5e77a788;      /* DAT_5e77a788 */
extern int g_5e038994;      /* DAT_5e038994 */
extern int (*g_5e77a6a8)(void);  /* code* DAT_5e77a6a8 */
extern int g_5e77a6ac;      /* DAT_5e77a6ac */
extern int g_5e77a6bc;      /* DAT_5e77a6bc */
extern int g_5e77a6b8;      /* DAT_5e77a6b8 */
extern int g_5e77a6c0;      /* DAT_5e77a6c0 */
extern int g_5e77a6c4;      /* DAT_5e77a6c4 */
extern int g_5e77a5ec;      /* DAT_5e77a5ec */
extern int g_5e77a694;      /* DAT_5e77a694 */
extern int g_5e77a840;      /* DAT_5e77a840 */
extern int g_5e77a5e8;      /* DAT_5e77a5e8 */
extern int g_5e77a5e4;      /* DAT_5e77a5e4 */
extern int g_5e77a844;      /* DAT_5e77a844 */
extern int g_5e77a6cc;      /* DAT_5e77a6cc */
extern int g_5e77a6d0;      /* DAT_5e77a6d0 */
extern int g_5e77a510;      /* DAT_5e77a510 */
extern int g_5e77a514;      /* DAT_5e77a514 */
extern int g_5e77a7dc;      /* DAT_5e77a7dc */
extern int g_5e77a68c;      /* DAT_5e77a68c */
extern int g_5e77a834;      /* DAT_5e77a834 */
extern int g_5e77a7bc;      /* DAT_5e77a7bc */
extern int g_5e77a7c0;      /* DAT_5e77a7c0 */
extern int g_5e77a7c8;      /* DAT_5e77a7c8 */
extern int g_5e77a6b4;      /* DAT_5e77a6b4 */
extern int g_5e77a560;      /* DAT_5e77a560 */
extern int g_5e77a55c;      /* DAT_5e77a55c */
extern int g_5e77a578;      /* DAT_5e77a578 */
extern int g_5e77a7c4;      /* DAT_5e77a7c4 */
extern int g_5e77a7cc;      /* DAT_5e77a7cc */
extern int g_5e77a7d0;      /* DAT_5e77a7d0 */
extern int g_5e77a7d4;      /* DAT_5e77a7d4 */
extern int g_5e77a7d8;      /* DAT_5e77a7d8 */
extern int g_5e77a698;      /* DAT_5e77a698 */
extern int g_5e77a6a4;      /* DAT_5e77a6a4 */
extern int g_5e77a69c;      /* DAT_5e77a69c */
extern int g_5e77a6a0;      /* DAT_5e77a6a0 */
extern int g_5e77a6d4;      /* DAT_5e77a6d4 */
extern int g_5e77a6d8;      /* DAT_5e77a6d8 */

extern unsigned char g_5e036089[];  /* byte table */
extern unsigned char g_5e036088[];  /* byte table */
extern unsigned char g_5e038524[];  /* byte table */
extern int g_5e038990[];            /* dword table */
extern int g_5e038924[];            /* dword table */
extern int g_5e03852c[];            /* dword table */

extern float g_5e77a530;    /* DAT_5e77a530 */
extern float g_5e036290;    /* DAT_5e036290 */
extern float g_5e77a630;    /* DAT_5e77a630 */
extern float g_5e77a63c;    /* DAT_5e77a63c */
extern float g_5e77a650;    /* DAT_5e77a650 */
extern float g_5e035aa4;    /* DAT_5e035aa4 */
extern float g_5e77a65c;    /* DAT_5e77a65c */
extern float g_5e0384e8;    /* DAT_5e0384e8 */
extern float g_5e77a53c;    /* DAT_5e77a53c */
extern float g_5e77a548;    /* DAT_5e77a548 */
extern float g_5e77a554;    /* DAT_5e77a554 */
extern float g_5e77a538;    /* DAT_5e77a538 */
extern float g_5e77a544;    /* DAT_5e77a544 */
extern float g_5e77a550;    /* DAT_5e77a550 */
extern float g_5e77a6c8;    /* DAT_5e77a6c8 */
extern float g_5e77a668;    /* DAT_5e77a668 */
extern float g_5e77a674;    /* DAT_5e77a674 */

extern void __cdecl FUN_5e015980(void);
extern void __cdecl FUN_5e015350(void);
extern void __cdecl FUN_5e015590(void);
extern void __cdecl FUN_5e014fc0(void);
extern void __cdecl FUN_5e015cc0(void);
extern void __cdecl FUN_5e0158a0(void);
extern void __cdecl FUN_5e015290(void);

__declspec(naked) void FUN_5e015e90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    ebx
        mov     ebx, dword ptr [g_5e77a580]
        push    esi
        push    edi
        test    bl, 0x18
        jz      L_5eea
        mov     ecx, dword ptr [g_5e77a594]
        mov     eax, ecx
        mov     esi, ecx
        shr     eax, 0x3
        mov     edx, eax
        and     esi, 0xf800
        and     edx, 0x1f
        and     eax, 0x1f0000
        or      esi, edx
        mov     dword ptr [g_5e77a7ac], edx
        mov     dword ptr [g_5e77a7a4], esi
        mov     esi, ecx
        and     esi, 0xf800ffff
        or      eax, esi
        shr     eax, 0x10
        shr     ecx, 0x1b
        mov     dword ptr [g_5e77a7a8], eax
        mov     dword ptr [g_5e77a7a0], ecx
    L_5eea:
        mov     esi, ebx
        xor     ecx, ecx
        shr     esi, 0x10
        mov     eax, ebx
        mov     cl, byte ptr [esi*2 + g_5e036089]
        and     eax, 0xff
        mov     edx, dword ptr [ecx*4 + g_5e038990]
        lea     edi, [eax*4 + g_5e038524]
        mov     dword ptr [g_5e038928], edx
        xor     ecx, ecx
        mov     eax, 0x5e77a788
        xor     edx, edx
        add     eax, 0x4
    L_5f1a:
        mov     dl, byte ptr [ecx + edi]
        inc     ecx
        cmp     eax, 0x5e77a798
        mov     edx, dword ptr [edx*4 + g_5e038924]
        mov     dword ptr [eax - 0x4], edx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-5) across reloc'd mov edx,[edx*4+...] */
        __emit 0xE6
        mov     eax, dword ptr [g_5e77a788]
        xor     ecx, ecx
        mov     cl, byte ptr [esi*2 + g_5e036088]
        mov     dword ptr [g_5e038994], eax
        mov     esi, 0x800
        mov     edx, dword ptr [ecx*4 + g_5e038990]
        test    ebx, esi
        mov     dword ptr [g_5e77a6a8], edx
        jz      L_5f64
        call    FUN_5e015980
        jmp     L_5f69
    L_5f64:
        call    FUN_5e015350
    L_5f69:
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        mov     eax, dword ptr [g_5e77a580]
        jnz     L_5fc0
        test    eax, esi
        jz      L_5f8f
        mov     eax, dword ptr [g_5e77a6bc]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e015590
        jmp     L_5fa1
    L_5f8f:
        mov     edx, dword ptr [g_5e77a6bc]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e014fc0
    L_5fa1:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e015cc0
        mov     eax, dword ptr [g_5e77a5ec]
        mov     dword ptr [g_5e77a6c4], eax
        jmp     L_6009
    L_5fc0:
        test    eax, esi
        jz      L_5fd9
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e015590
        jmp     L_5feb
    L_5fd9:
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e014fc0
    L_5feb:
        mov     edx, dword ptr [g_5e77a6bc]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e015cc0
        mov     ecx, dword ptr [g_5e77a694]
        mov     dword ptr [g_5e77a6c4], ecx
    L_6009:
        mov     edx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a5e8]
        imul    edx, eax
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [g_5e036290]
        fstp    dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [g_5e77a844]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6cc]
        imul    ecx, eax
        mov     eax, dword ptr [g_5e77a6d0]
        mov     dword ptr [g_5e77a510], edx
        add     ecx, eax
        mov     dword ptr [g_5e77a514], ecx
        fld     dword ptr [ebp - 0x1c]
        fistp   qword ptr [ebp - 0x24]
        mov     edx, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [g_5e77a6c4]
        mov     dword ptr [g_5e77a7dc], edx
        mov     dword ptr [ebp - 0x14], 0
    L_6066:
        test    dword ptr [g_5e77a580], esi
        jz      L_643a
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_663e
    L_6083:
        mov     edi, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_6095:
        mov     eax, dword ptr [g_5e77a5e4]
        mov     ebx, eax
        sub     ebx, edi
        mov     dword ptr [g_5e77a578], ebx
        jns     L_63ad
        mov     ecx, dword ptr [g_5e77a834]
        mov     edi, eax
        fld     dword ptr [g_5e77a630]
        fmul    dword ptr [g_5e036290]
        shl     edi, cl
        fstp    dword ptr [ebp - 0x1c]
        lea     ecx, [edx + edi*2]
        lea     edx, [esi + eax*2]
        mov     dword ptr [g_5e77a7bc], ecx
        mov     dword ptr [g_5e77a7c0], edx
        fld     dword ptr [ebp - 0x1c]
        fistp   qword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [g_5e77a63c]
        mov     edx, dword ptr [g_5e77a650]
        fld     dword ptr [g_5e035aa4]
        mov     dword ptr [ebp - 0x4], ecx
        mov     eax, dword ptr [ebp - 0x2c]
        fdiv    dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [g_5e77a7c8], eax
        mov     eax, dword ptr [g_5e77a65c]
        mov     dword ptr [ebp - 0xc], eax
        fst     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [g_5e77a6b4]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a560]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     edi, dword ptr [g_5e77a55c]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a578]
        add     eax, edi
        cmp     ecx, -0x10
        jge     L_617f
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_61ab
    L_617f:
        inc     ecx
        mov     dword ptr [ebp - 0x1c], ecx
        fild    dword ptr [ebp - 0x1c]
        fld     st(0)
        fmul    dword ptr [g_5e77a538]
        fsubr   dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    dword ptr [g_5e77a544]
        fsubr   dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e77a550]
        fsubr   dword ptr [ebp - 0xc]
    L_61ab:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [g_5e77a578]
    L_61bd:
        mov     dword ptr [g_5e77a7c4], ecx
        mov     dword ptr [g_5e77a7cc], eax
        mov     dword ptr [g_5e77a7d0], edx
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [g_5e77a6b4]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a560]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     edi, dword ptr [g_5e77a55c]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a578]
        add     eax, edi
        cmp     ecx, -0x10
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        jge     L_62c1
        mov     esi, dword ptr [g_5e77a7cc]
        mov     edi, dword ptr [g_5e77a7d0]
        sub     eax, esi
        sub     edx, edi
        sar     eax, 0x4
        mov     dword ptr [g_5e77a7d4], eax
        lea     eax, [ecx + 0x10]
        sar     edx, 0x4
        cmp     eax, -0x10
        mov     dword ptr [g_5e77a7c4], 0xfffffff0
        mov     dword ptr [g_5e77a7d8], edx
        jge     L_6287
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_62b3
    L_6287:
        inc     eax
        mov     dword ptr [ebp - 0x20], eax
        fild    dword ptr [ebp - 0x20]
        fld     st(0)
        fmul    dword ptr [g_5e77a538]
        fsubr   dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    dword ptr [g_5e77a544]
        fsubr   dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e77a550]
        fsubr   dword ptr [ebp - 0xc]
    L_62b3:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        jmp     L_6332
    L_62c1:
        cmp     ecx, -0x2
        jl      L_62e2
        jnz     L_6332
        sub     eax, dword ptr [g_5e77a7cc]
        mov     dword ptr [g_5e77a7d4], eax
        mov     eax, dword ptr [g_5e77a7d0]
        sub     edx, eax
        mov     dword ptr [g_5e77a7d8], edx
        jmp     L_6332
    L_62e2:
        mov     ecx, dword ptr [g_5e77a578]
        mov     eax, dword ptr [ebp - 0x1c]
        sub     eax, dword ptr [g_5e77a7cc]
        jns     L_6300
        neg     eax
        mul     dword ptr [ecx*4 + g_5e03852c]
        neg     edx
        jmp     L_6307
    L_6300:
        mul     dword ptr [ecx*4 + g_5e03852c]
    L_6307:
        mov     dword ptr [g_5e77a7d4], edx
        mov     eax, dword ptr [ebp - 0x18]
        sub     eax, dword ptr [g_5e77a7d0]
        jns     L_6325
        neg     eax
        mul     dword ptr [ecx*4 + g_5e03852c]
        neg     edx
        jmp     L_632c
    L_6325:
        mul     dword ptr [ecx*4 + g_5e03852c]
    L_632c:
        mov     dword ptr [g_5e77a7d8], edx
    L_6332:
        mov     eax, dword ptr [g_5e77a7c4]
        mov     ecx, dword ptr [g_5e77a834]
        mov     edx, eax
        shl     edx, cl
        mov     ecx, dword ptr [g_5e77a7bc]
        neg     eax
        neg     edx
        lea     edx, [ecx + edx*2]
        mov     ecx, dword ptr [g_5e77a7c0]
        mov     dword ptr [g_5e77a7bc], edx
        lea     edx, [ecx + eax*2]
        mov     dword ptr [g_5e77a7c0], edx
        push    ebx
        push    esi
        push    edi
        push    ebp
        call    dword ptr [g_5e77a6a8]
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [g_5e77a578]
        mov     eax, dword ptr [g_5e77a7c4]
        sub     ecx, eax
        mov     dword ptr [g_5e77a578], ecx
        jns     L_63a7
        mov     eax, dword ptr [g_5e77a7dc]
        mov     edx, dword ptr [g_5e77a7c8]
        shl     eax, 0x4
        add     edx, eax
        mov     eax, dword ptr [ebp - 0x1c]
        mov     dword ptr [g_5e77a7c8], edx
        mov     edx, dword ptr [ebp - 0x18]
        jmp     L_61bd
    L_63a7:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_63ad:
        cmp     ecx, dword ptr [ebp - 0x14]
        jl      L_66bd
        call    FUN_5e0158a0
        mov     edi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     edi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_63f7
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     edi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
    L_63f7:
        mov     edx, dword ptr [g_5e77a510]
        mov     ecx, dword ptr [g_5e77a840]
        mov     esi, dword ptr [g_5e77a514]
        mov     eax, dword ptr [g_5e77a6cc]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6c4]
        add     esi, eax
        mov     eax, ecx
        dec     ecx
        mov     dword ptr [g_5e77a510], edx
        test    eax, eax
        mov     dword ptr [g_5e77a514], esi
        mov     dword ptr [g_5e77a6c4], ecx
        jnz     L_6095
        jmp     L_6639
    L_643a:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_663e
    L_644b:
        mov     edi, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_645d:
        mov     eax, dword ptr [g_5e77a5e4]
        mov     ebx, eax
        sub     ebx, edi
        mov     dword ptr [g_5e77a578], ebx
        jns     L_65b1
        mov     ecx, dword ptr [g_5e77a834]
        mov     edi, eax
        fld     dword ptr [g_5e77a630]
        fmul    dword ptr [g_5e036290]
        shl     edi, cl
        fstp    dword ptr [ebp - 0x20]
        lea     ecx, [edx + edi*2]
        lea     edx, [esi + eax*2]
        mov     dword ptr [g_5e77a7bc], ecx
        mov     dword ptr [g_5e77a7c0], edx
        fld     dword ptr [ebp - 0x20]
        fistp   qword ptr [ebp - 0x34]
        mov     eax, dword ptr [ebp - 0x34]
        mov     dword ptr [g_5e77a7c8], eax
        fld     dword ptr [g_5e77a668]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a7cc], ecx
        fld     dword ptr [g_5e77a674]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a55c]
        mov     eax, dword ptr [g_5e77a7cc]
        mov     ecx, dword ptr [g_5e77a6b4]
        add     eax, edx
        mov     dword ptr [g_5e77a7cc], eax
        mov     eax, dword ptr [g_5e77a560]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a578]
        mov     dword ptr [g_5e77a7d0], ecx
    L_6505:
        cmp     eax, -0x10
        mov     dword ptr [g_5e77a7c4], eax
        jge     L_6519
        mov     eax, 0xfffffff0
        mov     dword ptr [g_5e77a7c4], eax
    L_6519:
        mov     ecx, dword ptr [g_5e77a834]
        mov     edx, eax
        shl     edx, cl
        mov     ecx, dword ptr [g_5e77a7bc]
        neg     eax
        neg     edx
        lea     edx, [ecx + edx*2]
        mov     ecx, dword ptr [g_5e77a7c0]
        mov     dword ptr [g_5e77a7bc], edx
        lea     edx, [ecx + eax*2]
        mov     dword ptr [g_5e77a7c0], edx
        push    ebx
        push    esi
        push    edi
        push    ebp
        call    dword ptr [g_5e77a6a8]
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, dword ptr [g_5e77a578]
        mov     ecx, dword ptr [g_5e77a7c4]
        sub     eax, ecx
        mov     dword ptr [g_5e77a578], eax
        jns     L_65ab
        mov     ecx, dword ptr [g_5e77a7dc]
        mov     edi, dword ptr [g_5e77a7c8]
        mov     edx, dword ptr [g_5e77a6d4]
        mov     esi, dword ptr [g_5e77a7cc]
        shl     ecx, 0x4
        add     edi, ecx
        mov     ecx, dword ptr [g_5e77a6d8]
        add     esi, edx
        mov     edx, dword ptr [g_5e77a7d0]
        add     edx, ecx
        mov     dword ptr [g_5e77a7c8], edi
        mov     dword ptr [g_5e77a7cc], esi
        mov     dword ptr [g_5e77a7d0], edx
        jmp     L_6505
    L_65ab:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_65b1:
        cmp     ecx, dword ptr [ebp - 0x14]
        jl      L_66bd
        call    FUN_5e015290
        mov     edi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     edi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_65fb
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     edi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
    L_65fb:
        mov     edx, dword ptr [g_5e77a510]
        mov     ecx, dword ptr [g_5e77a840]
        mov     esi, dword ptr [g_5e77a514]
        mov     eax, dword ptr [g_5e77a6cc]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6c4]
        add     esi, eax
        mov     eax, ecx
        dec     ecx
        mov     dword ptr [g_5e77a510], edx
        test    eax, eax
        mov     dword ptr [g_5e77a514], esi
        mov     dword ptr [g_5e77a6c4], ecx
        jnz     L_645d
    L_6639:
        mov     esi, 0x800
    L_663e:
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, ecx
        jz      L_66bd
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 0x14], ecx
        jnz     L_66a0
        test    dword ptr [g_5e77a580], esi
        jz      L_6682
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e015590
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_6066
    L_6682:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6bc]
        push    ecx
        push    edx
        call    FUN_5e014fc0
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_6066
    L_66a0:
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6bc]
        push    eax
        push    ecx
        call    FUN_5e015cc0
        mov     ecx, dword ptr [g_5e77a694]
        jmp     L_6066
    L_66bd:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
