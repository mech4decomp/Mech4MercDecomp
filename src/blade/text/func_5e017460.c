/*
 * FUN_5e017460 (1823 B) — main render/update dispatcher with FPU + calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e016fa0(void);
extern void __cdecl FUN_5e016a00(void);
extern void __cdecl FUN_5e016c00(void);
extern void __cdecl FUN_5e0166d0(void);
extern void __cdecl FUN_5e017290(void);
extern void __cdecl FUN_5e016ee0(void);
extern void __cdecl FUN_5e016960(void);
extern void (*g_5e77a6a8)(void);   /* DAT_5e77a6a8 (function pointer) */

extern int g_5e77a580;   /* DAT_5e77a580 */
extern int g_5e77a594;   /* DAT_5e77a594 */
extern int g_5e77a7ac;   /* DAT_5e77a7ac */
extern int g_5e77a7a4;   /* DAT_5e77a7a4 */
extern int g_5e77a7a8;   /* DAT_5e77a7a8 */
extern int g_5e77a7a0;   /* DAT_5e77a7a0 */
extern int g_5e038928;   /* DAT_5e038928 */
extern int g_5e77a788;   /* DAT_5e77a788 */
extern int g_5e038994;   /* DAT_5e038994 */
extern int g_5e77a6ac;   /* DAT_5e77a6ac */
extern int g_5e77a6bc;   /* DAT_5e77a6bc */
extern int g_5e77a6b8;   /* DAT_5e77a6b8 */
extern int g_5e77a6c0;   /* DAT_5e77a6c0 */
extern int g_5e77a5ec;   /* DAT_5e77a5ec */
extern int g_5e77a694;   /* DAT_5e77a694 */
extern int g_5e77a510;   /* DAT_5e77a510 */
extern int g_5e77a840;   /* DAT_5e77a840 */
extern int g_5e77a844;   /* DAT_5e77a844 */
extern int g_5e77a5e8;   /* DAT_5e77a5e8 */
extern int g_5e77a6c4;   /* DAT_5e77a6c4 */
extern int g_5e77a68c;   /* DAT_5e77a68c */
extern int g_5e77a5e4;   /* DAT_5e77a5e4 */
extern int g_5e77a578;   /* DAT_5e77a578 */
extern int g_5e77a834;   /* DAT_5e77a834 */
extern int g_5e77a7bc;   /* DAT_5e77a7bc */
extern int g_5e77a6b4;   /* DAT_5e77a6b4 */
extern int g_5e77a55c;   /* DAT_5e77a55c */
extern int g_5e77a560;   /* DAT_5e77a560 */
extern int g_5e77a7cc;   /* DAT_5e77a7cc */
extern int g_5e77a7d0;   /* DAT_5e77a7d0 */
extern int g_5e77a7c4;   /* DAT_5e77a7c4 */
extern int g_5e77a7d4;   /* DAT_5e77a7d4 */
extern int g_5e77a7d8;   /* DAT_5e77a7d8 */
extern int g_5e77a6d4;   /* DAT_5e77a6d4 */
extern int g_5e77a6d8;   /* DAT_5e77a6d8 */
extern int g_5e77a698;   /* DAT_5e77a698 */
extern int g_5e77a6a4;   /* DAT_5e77a6a4 */
extern int g_5e77a69c;   /* DAT_5e77a69c */
extern int g_5e77a6a0;   /* DAT_5e77a6a0 */
extern float g_5e035aa4; /* DAT_5e035aa4 */
extern float g_5e77a63c; /* DAT_5e77a63c */
extern float g_5e77a650; /* DAT_5e77a650 */
extern float g_5e77a65c; /* DAT_5e77a65c */
extern float g_5e0384e8; /* DAT_5e0384e8 */
extern float g_5e77a538; /* DAT_5e77a538 */
extern float g_5e77a544; /* DAT_5e77a544 */
extern float g_5e77a550; /* DAT_5e77a550 */
extern float g_5e77a6c8; /* DAT_5e77a6c8 */
extern float g_5e77a668; /* DAT_5e77a668 */
extern float g_5e77a674; /* DAT_5e77a674 */
extern float g_5e77a53c; /* DAT_5e77a53c */
extern float g_5e77a548; /* DAT_5e77a548 */
extern float g_5e77a554; /* DAT_5e77a554 */

__declspec(naked) void FUN_5e017460(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [g_5e77a580]
        push    esi
        push    edi
        test    bl, 0x18
        jz      L_174ba
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
    L_174ba:
        mov     esi, ebx
        xor     ecx, ecx
        shr     esi, 0x10
        mov     eax, ebx
        mov     cl, byte ptr [esi*2 + 0x5e036089]
        and     eax, 0xff
        mov     edx, dword ptr [ecx*4 + 0x5e038990]
        lea     edi, [eax*4 + 0x5e038524]
        mov     dword ptr [g_5e038928], edx
        xor     ecx, ecx
        mov     eax, 0x5e77a788
        xor     edx, edx
        add     eax, 0x4
    L_174ea:
        mov     dl, byte ptr [ecx + edi*1]
        inc     ecx
        cmp     eax, 0x5e77a798
        mov     edx, dword ptr [edx*4 + 0x5e038924]
        mov     dword ptr [eax - 0x4], edx
        __emit 0x7C   /* jl L_174ea: MSVC6 miscomputes backward rel8 (off-by-5) */
        __emit 0xE6
        mov     eax, dword ptr [g_5e77a788]
        xor     ecx, ecx
        mov     cl, byte ptr [esi*2 + 0x5e036088]
        mov     dword ptr [g_5e038994], eax
        mov     esi, 0x800
        mov     edx, dword ptr [ecx*4 + 0x5e038990]
        test    ebx, esi
        mov     dword ptr [g_5e77a6a8], edx
        jz      L_17534
        call    FUN_5e016fa0
        jmp     L_17539
    L_17534:
        call    FUN_5e016a00
    L_17539:
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        mov     eax, dword ptr [g_5e77a580]
        jnz     L_1758c
        test    eax, esi
        jz      L_1755f
        mov     eax, dword ptr [g_5e77a6bc]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e016c00
        jmp     L_17571
    L_1755f:
        mov     edx, dword ptr [g_5e77a6bc]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e0166d0
    L_17571:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e017290
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_175cf
    L_1758c:
        test    eax, esi
        jz      L_175a4
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e016c00
        jmp     L_175b6
    L_175a4:
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e0166d0
    L_175b6:
        mov     ecx, dword ptr [g_5e77a6bc]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e017290
        mov     ecx, dword ptr [g_5e77a694]
    L_175cf:
        mov     edx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a844]
        imul    edx, dword ptr [g_5e77a5e8]
        add     edx, eax
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [g_5e77a510], edx
    L_175f0:
        test    dword ptr [g_5e77a580], esi
        mov     eax, ecx
        jz      L_17954
        dec     ecx
        test    eax, eax
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_17ae3
    L_17613:
        mov     esi, dword ptr [g_5e77a68c]
        mov     eax, dword ptr [g_5e77a5e4]
        mov     edi, eax
        sub     edi, esi
        mov     dword ptr [g_5e77a578], edi
        jns     L_178db
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        fld     dword ptr [g_5e035aa4]
        lea     ecx, [edx + eax*2]
        mov     edx, dword ptr [g_5e77a63c]
        mov     dword ptr [ebp - 0x4], edx
        mov     eax, dword ptr [g_5e77a650]
        fdiv    dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [g_5e77a7bc], ecx
        mov     ecx, dword ptr [g_5e77a65c]
        mov     dword ptr [ebp - 0xc], ecx
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
        mov     edx, dword ptr [g_5e77a560]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     edi, dword ptr [g_5e77a55c]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a578]
        add     eax, edi
        cmp     ecx, -0x10
        jge     L_176d5
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_17701
    L_176d5:
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
    L_17701:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [g_5e77a578]
        jmp     L_1771b
    L_17715:
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
    L_1771b:
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
        mov     edx, dword ptr [g_5e77a560]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     edi, dword ptr [g_5e77a55c]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a578]
        add     eax, edi
        cmp     ecx, -0x10
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x18], edx
        jge     L_1781f
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
        jge     L_177e5
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_17811
    L_177e5:
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
    L_17811:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        jmp     L_17890
    L_1781f:
        cmp     ecx, -0x2
        jl      L_17840
        jnz     L_17890
        sub     eax, dword ptr [g_5e77a7cc]
        mov     dword ptr [g_5e77a7d4], eax
        mov     eax, dword ptr [g_5e77a7d0]
        sub     edx, eax
        mov     dword ptr [g_5e77a7d8], edx
        jmp     L_17890
    L_17840:
        mov     ecx, dword ptr [g_5e77a578]
        mov     eax, dword ptr [ebp - 0x1c]
        sub     eax, dword ptr [g_5e77a7cc]
        jns     L_1785e
        neg     eax
        mul     dword ptr [ecx*4 + 0x5e03852c]
        neg     edx
        jmp     L_17865
    L_1785e:
        mul     dword ptr [ecx*4 + 0x5e03852c]
    L_17865:
        mov     dword ptr [g_5e77a7d4], edx
        mov     eax, dword ptr [ebp - 0x18]
        sub     eax, dword ptr [g_5e77a7d0]
        jns     L_17883
        neg     eax
        mul     dword ptr [ecx*4 + 0x5e03852c]
        neg     edx
        jmp     L_1788a
    L_17883:
        mul     dword ptr [ecx*4 + 0x5e03852c]
    L_1788a:
        mov     dword ptr [g_5e77a7d8], edx
    L_17890:
        mov     edx, dword ptr [g_5e77a7c4]
        mov     ecx, dword ptr [g_5e77a834]
        mov     eax, dword ptr [g_5e77a7bc]
        shl     edx, cl
        neg     edx
        lea     ecx, [eax + edx*2]
        mov     dword ptr [g_5e77a7bc], ecx
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
        js      L_17715
        mov     ecx, dword ptr [g_5e77a6c4]
    L_178db:
        cmp     ecx, dword ptr [ebp - 0x14]
        jl      L_17b78
        call    FUN_5e016ee0
        mov     esi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     esi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], esi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_17925
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     esi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], esi
        mov     dword ptr [g_5e77a6a4], eax
    L_17925:
        mov     edx, dword ptr [g_5e77a510]
        mov     eax, dword ptr [g_5e77a840]
        mov     ecx, dword ptr [g_5e77a6c4]
        add     edx, eax
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        mov     dword ptr [g_5e77a510], edx
        mov     dword ptr [g_5e77a6c4], ecx
        __emit 0x0F   /* jnz L_17613: MSVC6 miscomputes backward rel32 (off-by-6) */
        __emit 0x85
        __emit 0xC4
        __emit 0xFC
        __emit 0xFF
        __emit 0xFF
        jmp     L_17ade
    L_17954:
        dec     ecx
        test    eax, eax
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_17ae3
    L_17969:
        mov     esi, dword ptr [g_5e77a68c]
        mov     eax, dword ptr [g_5e77a5e4]
        mov     edi, eax
        sub     edi, esi
        mov     dword ptr [g_5e77a578], edi
        jns     L_17a6a
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        lea     ecx, [edx + eax*2]
        mov     dword ptr [g_5e77a7bc], ecx
        fld     dword ptr [g_5e77a668]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a7cc], edx
        fld     dword ptr [g_5e77a674]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a55c]
        mov     ecx, dword ptr [g_5e77a7cc]
        mov     edx, dword ptr [g_5e77a6b4]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a578]
        mov     dword ptr [g_5e77a7cc], ecx
        mov     ecx, dword ptr [g_5e77a560]
        add     edx, ecx
        mov     dword ptr [g_5e77a7d0], edx
    L_179eb:
        cmp     eax, -0x10
        mov     dword ptr [g_5e77a7c4], eax
        jge     L_179ff
        mov     eax, 0xfffffff0
        mov     dword ptr [g_5e77a7c4], eax
    L_179ff:
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        mov     ecx, dword ptr [g_5e77a7bc]
        neg     eax
        lea     edx, [ecx + eax*2]
        mov     dword ptr [g_5e77a7bc], edx
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
        jns     L_17a64
        mov     ecx, dword ptr [g_5e77a6d4]
        mov     edx, dword ptr [g_5e77a7cc]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a7d0]
        mov     dword ptr [g_5e77a7cc], edx
        mov     edx, dword ptr [g_5e77a6d8]
        add     ecx, edx
        mov     dword ptr [g_5e77a7d0], ecx
        jmp     L_179eb
    L_17a64:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_17a6a:
        cmp     ecx, dword ptr [ebp - 0x14]
        jl      L_17b78
        call    FUN_5e016960
        mov     esi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     esi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], esi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_17ab4
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     esi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], esi
        mov     dword ptr [g_5e77a6a4], eax
    L_17ab4:
        mov     edx, dword ptr [g_5e77a510]
        mov     eax, dword ptr [g_5e77a840]
        mov     ecx, dword ptr [g_5e77a6c4]
        add     edx, eax
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        mov     dword ptr [g_5e77a510], edx
        mov     dword ptr [g_5e77a6c4], ecx
        __emit 0x0F   /* jnz L_17969: MSVC6 miscomputes backward rel32 (off-by-6) */
        __emit 0x85
        __emit 0x8B
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
    L_17ade:
        mov     esi, 0x800
    L_17ae3:
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, ecx
        jz      L_17b78
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 0x14], ecx
        jnz     L_17b55
        test    dword ptr [g_5e77a580], esi
        jz      L_17b31
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e016c00
        mov     ecx, dword ptr [g_5e77a5ec]
        mov     edx, dword ptr [g_5e77a510]
        jmp     L_175f0
    L_17b31:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6bc]
        push    ecx
        push    edx
        call    FUN_5e0166d0
        mov     ecx, dword ptr [g_5e77a5ec]
        mov     edx, dword ptr [g_5e77a510]
        jmp     L_175f0
    L_17b55:
        mov     eax, dword ptr [g_5e77a6c0]
        mov     ecx, dword ptr [g_5e77a6bc]
        push    eax
        push    ecx
        call    FUN_5e017290
        mov     ecx, dword ptr [g_5e77a694]
        mov     edx, dword ptr [g_5e77a510]
        jmp     L_175f0
    L_17b78:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
