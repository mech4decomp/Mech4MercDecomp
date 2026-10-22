/*
 * FUN_5e014bc0 (1017 B) — DirectDraw surface/format creation body.
 * Heavy global-state manipulation + FPU rounding + indirect callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a580;      /* DAT_5e77a580 (flags) */
extern int g_5e038928;      /* DAT_5e038928 */
extern int g_5e038994;      /* DAT_5e038994 */
extern int (*g_5e77a6a8)(void);  /* code* DAT_5e77a6a8 (callback) */
extern int g_5e77a6ac;      /* DAT_5e77a6ac */
extern int g_5e77a6bc;      /* DAT_5e77a6bc */
extern int g_5e77a6b8;      /* DAT_5e77a6b8 */
extern int g_5e77a6c0;      /* DAT_5e77a6c0 */
extern int g_5e77a6c4;      /* DAT_5e77a6c4 */
extern int g_5e77a5ec;      /* DAT_5e77a5ec */
extern int g_5e77a694;      /* DAT_5e77a694 */
extern int g_5e77a840;      /* DAT_5e77a840 */
extern int g_5e77a5e8;      /* DAT_5e77a5e8 */
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
extern int g_5e77a60c;      /* DAT_5e77a60c */
extern int g_5e77a618;      /* DAT_5e77a618 */
extern int g_5e77a624;      /* DAT_5e77a624 */
extern int g_5e77a600;      /* DAT_5e77a600 */
extern int g_5e77a578;      /* DAT_5e77a578 */
extern int g_5e77a7c8;      /* DAT_5e77a7c8 */
extern int g_5e77a800;      /* DAT_5e77a800 */
extern int g_5e77a7e0;      /* DAT_5e77a7e0 */
extern int g_5e77a7e8;      /* DAT_5e77a7e8 */
extern int g_5e77a7c4;      /* DAT_5e77a7c4 */
extern int g_5e77a6e0;      /* DAT_5e77a6e0 */
extern int g_5e77a6e4;      /* DAT_5e77a6e4 */
extern int g_5e77a6e8;      /* DAT_5e77a6e8 */
extern int g_5e77a6dc;      /* DAT_5e77a6dc */
extern int g_5e77a698;      /* DAT_5e77a698 */
extern int g_5e77a6a4;      /* DAT_5e77a6a4 */
extern int g_5e77a69c;      /* DAT_5e77a69c */
extern int g_5e77a6a0;      /* DAT_5e77a6a0 */
extern int g_5e77a5e4;      /* DAT_5e77a5e4 */
extern int g_5e77a788;      /* DAT_5e77a788 */

extern float g_5e77a530;    /* DAT_5e77a530 */
extern float g_5e036290;    /* DAT_5e036290 */
extern float g_5e77a630;    /* DAT_5e77a630 */

extern unsigned char g_5e038524[];  /* byte table */
extern unsigned char g_5e036089[];  /* byte table */
extern unsigned char g_5e036088[];  /* byte table */
extern int g_5e038990[];            /* dword table */
extern int g_5e038924[];            /* dword table */

extern void __cdecl FUN_5e0147b0(void);
extern void __cdecl FUN_5e014050(void);
extern void __cdecl FUN_5e0144a0(void);
extern void __cdecl FUN_5e014670(void);

__declspec(naked) void FUN_5e014bc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, dword ptr [g_5e77a580]
        push    ebx
        push    esi
        mov     esi, eax
        and     eax, 0xff
        push    edi
        shr     esi, 0x10
        lea     edi, [eax*4 + g_5e038524]
        xor     eax, eax
        mov     al, byte ptr [esi*2 + g_5e036089]
        mov     ecx, dword ptr [eax*4 + g_5e038990]
        mov     eax, 0x5e77a788
        mov     dword ptr [g_5e038928], ecx
        xor     ecx, ecx
        xor     edx, edx
        add     eax, 0x4
    L_4bfc:
        mov     dl, byte ptr [ecx + edi]
        inc     ecx
        cmp     eax, 0x5e77a798
        mov     edx, dword ptr [edx*4 + g_5e038924]
        mov     dword ptr [eax - 0x4], edx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-5) across the reloc'd mov edx,[edx*4+...] */
        __emit 0xE6
        mov     eax, dword ptr [g_5e77a788]
        xor     ecx, ecx
        mov     cl, byte ptr [esi*2 + g_5e036088]
        mov     dword ptr [g_5e038994], eax
        mov     edx, dword ptr [ecx*4 + g_5e038990]
        mov     dword ptr [g_5e77a6a8], edx
        call    FUN_5e0147b0
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        jnz     L_4c76
        mov     eax, dword ptr [g_5e77a6bc]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e014050
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e0144a0
        mov     ecx, dword ptr [g_5e77a5ec]
        mov     dword ptr [g_5e77a6c4], ecx
        jmp     L_4ca5
    L_4c76:
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e014050
        mov     ecx, dword ptr [g_5e77a6bc]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e0144a0
        mov     eax, dword ptr [g_5e77a694]
        mov     dword ptr [g_5e77a6c4], eax
    L_4ca5:
        mov     ecx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a5e8]
        imul    ecx, eax
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [g_5e036290]
        fstp    dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_5e77a844]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a6cc]
        imul    edx, eax
        mov     eax, dword ptr [g_5e77a6d0]
        mov     dword ptr [g_5e77a510], ecx
        add     edx, eax
        mov     dword ptr [g_5e77a514], edx
        fld     dword ptr [ebp - 0x18]
        fistp   qword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_5e77a6c4]
        mov     dword ptr [g_5e77a7dc], eax
        mov     dword ptr [ebp - 0x18], 0
    L_4d01:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_4f58
    L_4d12:
        mov     edi, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_4d24:
        mov     eax, dword ptr [g_5e77a5e4]
        mov     ebx, eax
        sub     ebx, edi
        mov     dword ptr [g_5e77a578], ebx
        jns     L_4ed0
        mov     ecx, dword ptr [g_5e77a834]
        mov     edi, eax
        fld     dword ptr [g_5e77a630]
        fmul    dword ptr [g_5e036290]
        shl     edi, cl
        fstp    dword ptr [ebp - 0x10]
        lea     ecx, [edx + edi*2]
        lea     edx, [esi + eax*2]
        mov     dword ptr [g_5e77a7bc], ecx
        mov     dword ptr [g_5e77a7c0], edx
        fld     dword ptr [ebp - 0x10]
        fistp   qword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [g_5e77a60c]
        mov     edx, dword ptr [g_5e77a618]
        mov     esi, dword ptr [g_5e77a578]
        mov     dword ptr [g_5e77a7c8], eax
        mov     eax, dword ptr [g_5e77a624]
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [g_5e77a600]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x10], ecx
    L_4d9b:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        sar     eax, 0xe
        sar     edx, 0xe
        mov     edi, eax
        and     edx, 0x3ff
        shl     eax, 0xb
        sar     ecx, 0xe
        or      eax, edx
        and     ecx, 0x3ff
        shl     eax, 0xb
        and     edi, 0x3ff
        or      eax, ecx
        shl     edi, 0x14
        mov     dword ptr [g_5e77a800], eax
        mov     al, byte ptr [g_5e77a580]
        or      edi, ecx
        test    al, 0x10
        mov     dword ptr [g_5e77a7e0], edi
        jz      L_4dfe
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0xe
        and     eax, 0x3ff
        shl     eax, 0xb
        or      eax, edx
        shl     eax, 0xa
        mov     dword ptr [g_5e77a7e8], eax
        jmp     L_4e07
    L_4dfe:
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7e8], edx
    L_4e07:
        mov     eax, esi
        cmp     esi, -0x10
        mov     dword ptr [g_5e77a7c4], eax
        jge     L_4e1d
        mov     eax, 0xfffffff0
        mov     dword ptr [g_5e77a7c4], eax
    L_4e1d:
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
        mov     esi, dword ptr [g_5e77a578]
        mov     eax, dword ptr [g_5e77a7c4]
        sub     esi, eax
        mov     dword ptr [g_5e77a578], esi
        jns     L_4eca
        mov     ecx, dword ptr [g_5e77a6e0]
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [g_5e77a7dc]
        mov     ebx, dword ptr [g_5e77a7c8]
        shl     ecx, 0x4
        add     edx, ecx
        mov     edi, dword ptr [ebp - 0xc]
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [g_5e77a6e4]
        add     ebx, eax
        mov     eax, dword ptr [ebp - 0x8]
        shl     edx, 0x4
        mov     ecx, dword ptr [g_5e77a6dc]
        add     eax, edx
        mov     dword ptr [ebp - 0x8], eax
        mov     eax, dword ptr [g_5e77a6e8]
        shl     eax, 0x4
        add     edi, eax
        mov     eax, dword ptr [ebp - 0x10]
        shl     ecx, 0x4
        add     eax, ecx
        mov     dword ptr [g_5e77a7c8], ebx
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_4d9b
    L_4eca:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_4ed0:
        cmp     ecx, dword ptr [ebp - 0x18]
        jl      L_4fb2
        call    FUN_5e014670
        mov     edi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     edi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_4f1a
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     edi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
    L_4f1a:
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
        jnz     L_4d24
    L_4f58:
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, ecx
        jz      L_4fb2
        mov     ecx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 0x18], ecx
        jnz     L_4f94
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e014050
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_4d01
    L_4f94:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6bc]
        push    ecx
        push    edx
        call    FUN_5e0144a0
        mov     ecx, dword ptr [g_5e77a694]
        jmp     L_4d01
    L_4fb2:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
