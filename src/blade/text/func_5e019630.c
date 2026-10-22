/*
 * FUN_5e019630 (1783 B) — DirectDraw wrapper: main render/format loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e018e00(void);
extern void __cdecl FUN_5e018750(void);
extern void __cdecl FUN_5e019460(void);
extern void __cdecl FUN_5e018c60(void);
extern void (*g_5e77a6a8)(void);

extern int g_5e77a580;
extern unsigned char g_5e036089;
extern unsigned char g_5e036088;
extern int g_5e038990;
extern int g_5e038928;
extern int g_5e038994;
extern int g_5e038924;
extern unsigned char g_5e038524;
extern int g_5e03852c;
extern int g_5e77a788;
extern int g_5e77a594;
extern int g_5e77a7ac;
extern int g_5e77a7a0;
extern int g_5e77a7a4;
extern int g_5e77a7a8;
extern int g_5e77a6ac;
extern int g_5e77a6bc;
extern int g_5e77a6b8;
extern int g_5e77a6c0;
extern int g_5e77a6c4;
extern int g_5e77a840;
extern int g_5e77a5e8;
extern int g_5e77a844;
extern int g_5e77a6cc;
extern int g_5e77a6d0;
extern int g_5e77a510;
extern int g_5e77a514;
extern float g_5e77a530;
extern float g_5e036290;
extern int g_5e77a7dc;
extern int g_5e77a68c;
extern int g_5e77a578;
extern int g_5e77a5e4;
extern int g_5e77a834;
extern float g_5e77a630;
extern int g_5e77a7bc;
extern int g_5e77a7c0;
extern int g_5e77a63c;
extern int g_5e77a650;
extern int g_5e77a65c;
extern float g_5e035aa4;
extern int g_5e77a7c8;
extern int g_5e77a6b4;
extern float g_5e0384e8;
extern int g_5e77a55c;
extern int g_5e77a560;
extern float g_5e77a53c;
extern float g_5e77a548;
extern float g_5e77a554;
extern float g_5e77a538;
extern float g_5e77a544;
extern float g_5e77a550;
extern float g_5e77a6c8;
extern int g_5e77a60c;
extern int g_5e77a618;
extern int g_5e77a624;
extern int g_5e77a600;
extern int g_5e77a808;
extern int g_5e77a7e0;
extern int g_5e77a7f0;
extern int g_5e77a800;
extern int g_5e77a7e8;
extern int g_5e77a7f8;
extern int g_5e77a810;
extern int g_5e77a7cc;
extern int g_5e77a7d0;
extern int g_5e77a7c4;
extern int g_5e77a7d4;
extern int g_5e77a7d8;
extern int g_5e77a6e0;
extern int g_5e77a6e8;
extern int g_5e77a6e4;
extern int g_5e77a6dc;
extern int g_5e77a698;
extern int g_5e77a6a4;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a5ec;
extern int g_5e77a694;

__declspec(naked) void FUN_5e019630(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x44
        mov     edx, dword ptr [g_5e77a580]
        push    ebx
        push    esi
        mov     esi, edx
        shr     esi, 0x10
        mov     eax, edx
        xor     ecx, ecx
        mov     cl, byte ptr [esi*2 + g_5e036089]
        and     eax, 0xff
        push    edi
        lea     edi, [eax*4 + g_5e038524]
        mov     eax, dword ptr [ecx*4 + g_5e038990]
        mov     dword ptr [g_5e038928], eax
        xor     ecx, ecx
        mov     eax, 0x5e77a788
    L_66e:
        xor     ebx, ebx
        add     eax, 0x4
        mov     bl, byte ptr [ecx + edi]
        inc     ecx
        cmp     eax, 0x5e77a798
        mov     ebx, dword ptr [ebx*4 + g_5e038924]
        mov     dword ptr [eax - 0x4], ebx
        jl      L_66e
        mov     ecx, dword ptr [g_5e77a788]
        xor     eax, eax
        mov     al, byte ptr [esi*2 + g_5e036088]
        mov     dword ptr [g_5e038994], ecx
        test    dl, 0x4
        mov     ecx, dword ptr [eax*4 + g_5e038990]
        mov     dword ptr [g_5e77a6a8], ecx
        jnz     L_706
        test    dl, 0x2
        jz      L_6d1
        mov     eax, dword ptr [g_5e77a594]
        mov     edx, eax
        shr     edx, 0x3
        and     edx, 0x1f
        shr     eax, 0x1b
        mov     dword ptr [g_5e77a7ac], edx
        mov     dword ptr [g_5e77a7a0], eax
        jmp     L_706
    L_6d1:
        mov     ecx, dword ptr [g_5e77a594]
        mov     eax, ecx
        mov     edx, ecx
        shr     eax, 0x3
        mov     esi, eax
        and     eax, 0x1f0000
        and     ecx, 0xf800ffff
        and     edx, 0xf800
        and     esi, 0x1f
        or      eax, ecx
        or      edx, esi
        shr     eax, 0x10
        mov     dword ptr [g_5e77a7a4], edx
        mov     dword ptr [g_5e77a7a8], eax
    L_706:
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        jnz     L_746
        call    FUN_5e018e00
        mov     eax, dword ptr [g_5e77a6bc]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e018750
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e019460
        mov     ecx, dword ptr [g_5e77a5ec]
        mov     dword ptr [g_5e77a6c4], ecx
        jmp     L_77a
    L_746:
        call    FUN_5e018e00
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e018750
        mov     ecx, dword ptr [g_5e77a6bc]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e019460
        mov     eax, dword ptr [g_5e77a694]
        mov     dword ptr [g_5e77a6c4], eax
    L_77a:
        mov     ecx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a5e8]
        imul    ecx, eax
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [g_5e036290]
        fstp    dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [g_5e77a844]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a6cc]
        imul    edx, eax
        mov     eax, dword ptr [g_5e77a6d0]
        mov     dword ptr [g_5e77a510], ecx
        add     edx, eax
        mov     dword ptr [g_5e77a514], edx
        fld     dword ptr [ebp - 0x2c]
        fistp   qword ptr [ebp - 0x3c]
        mov     eax, dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [g_5e77a6c4]
        mov     dword ptr [g_5e77a7dc], eax
        mov     dword ptr [ebp - 0x2c], 0x0
    L_7d6:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_cc6
    L_7e7:
        mov     edi, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_7f9:
        mov     eax, dword ptr [g_5e77a5e4]
        mov     ebx, eax
        sub     ebx, edi
        mov     dword ptr [g_5e77a578], ebx
        jns     L_c3e
        mov     ecx, dword ptr [g_5e77a834]
        mov     edi, eax
        fld     dword ptr [g_5e77a630]
        fmul    dword ptr [g_5e036290]
        shl     edi, cl
        fstp    dword ptr [ebp - 0x28]
        lea     ecx, [edx + edi*2]
        lea     edx, [esi + eax*2]
        mov     dword ptr [g_5e77a7bc], ecx
        mov     dword ptr [g_5e77a7c0], edx
        fld     dword ptr [ebp - 0x28]
        fistp   qword ptr [ebp - 0x44]
        mov     ecx, dword ptr [g_5e77a63c]
        mov     edx, dword ptr [g_5e77a650]
        fld     dword ptr [g_5e035aa4]
        mov     dword ptr [ebp - 0x4], ecx
        mov     eax, dword ptr [ebp - 0x44]
        fdiv    dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [g_5e77a7c8], eax
        mov     eax, dword ptr [g_5e77a65c]
        mov     dword ptr [ebp - 0xc], eax
        fst     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [g_5e77a6b4]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a55c]
        mov     ecx, dword ptr [g_5e77a560]
        add     eax, edx
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, dword ptr [g_5e77a578]
        add     edx, ecx
        cmp     eax, -0x10
        mov     dword ptr [ebp - 0x14], edx
        jge     L_8e8
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_914
    L_8e8:
        inc     eax
        mov     dword ptr [ebp - 0x28], eax
        fild    dword ptr [ebp - 0x28]
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
    L_914:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        mov     eax, dword ptr [g_5e77a60c]
        mov     ecx, dword ptr [g_5e77a618]
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [g_5e77a600]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x24], edx
    L_93f:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     bl, byte ptr [g_5e77a580]
        sar     ecx, 0xe
        test    bl, 0x2
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [g_5e77a808], ecx
        jnz     L_9c9
        mov     eax, dword ptr [ebp - 0x24]
        mov     esi, dword ptr [ebp - 0x20]
        sar     eax, 0xe
        mov     edi, eax
        and     ecx, 0x3ff
        and     edi, 0x3ff
        mov     dword ptr [ebp - 0x34], eax
        mov     edx, edi
        shl     edx, 0x14
        or      edx, ecx
        sar     esi, 0xe
        mov     dword ptr [g_5e77a7e0], edx
        mov     edx, esi
        and     edx, 0x3ff
        mov     dword ptr [ebp - 0x30], esi
        mov     ebx, edx
        shl     ebx, 0xb
        or      ebx, ecx
        mov     dword ptr [g_5e77a7f0], ebx
        mov     ebx, eax
        shl     ebx, 0xb
        or      ebx, edx
        shl     ebx, 0xb
        or      ebx, ecx
        mov     dword ptr [g_5e77a800], ebx
        mov     bl, byte ptr [g_5e77a580]
        test    bl, 0x10
        jnz     L_9d4
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7e8], edx
        mov     dword ptr [g_5e77a7f8], edi
        jmp     L_9cf
    L_9c9:
        mov     esi, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [ebp - 0x34]
    L_9cf:
        test    bl, 0x10
        jz      L_a08
    L_9d4:
        mov     edx, dword ptr [ebp - 0x28]
        and     esi, 0x3ff
        mov     ecx, edx
        and     eax, 0x3ff
        sar     ecx, 0xe
        and     ecx, 0x3ff
        mov     dword ptr [g_5e77a810], edx
        shl     ecx, 0xb
        or      esi, ecx
        shl     esi, 0xa
        or      eax, ecx
        mov     dword ptr [g_5e77a7e8], esi
        mov     dword ptr [g_5e77a7f8], eax
    L_a08:
        mov     eax, dword ptr [g_5e77a578]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x14]
        mov     dword ptr [g_5e77a7c4], eax
        mov     dword ptr [g_5e77a7cc], ecx
        mov     dword ptr [g_5e77a7d0], edx
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [g_5e77a6b4]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a560]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     edi, dword ptr [g_5e77a55c]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a578]
        add     eax, edi
        cmp     ecx, -0x10
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], edx
        jge     L_b17
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
        jge     L_add
        fld     dword ptr [g_5e77a53c]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [g_5e77a548]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [g_5e77a554]
        fadd    dword ptr [ebp - 0xc]
        jmp     L_b09
    L_add:
        inc     eax
        mov     dword ptr [ebp - 0x38], eax
        fild    dword ptr [ebp - 0x38]
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
    L_b09:
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a6c8]
        fdiv    dword ptr [ebp - 0x4]
        jmp     L_b88
    L_b17:
        cmp     ecx, -0x2
        jl      L_b38
        jnz     L_b88
        sub     eax, dword ptr [g_5e77a7cc]
        mov     dword ptr [g_5e77a7d4], eax
        mov     eax, dword ptr [g_5e77a7d0]
        sub     edx, eax
        mov     dword ptr [g_5e77a7d8], edx
        jmp     L_b88
    L_b38:
        mov     ecx, dword ptr [g_5e77a578]
        mov     eax, dword ptr [ebp - 0x18]
        sub     eax, dword ptr [g_5e77a7cc]
        jns     L_b56
        neg     eax
        mul     dword ptr [ecx*4 + g_5e03852c]
        neg     edx
        jmp     L_b5d
    L_b56:
        mul     dword ptr [ecx*4 + g_5e03852c]
    L_b5d:
        mov     dword ptr [g_5e77a7d4], edx
        mov     eax, dword ptr [ebp - 0x14]
        sub     eax, dword ptr [g_5e77a7d0]
        jns     L_b7b
        neg     eax
        mul     dword ptr [ecx*4 + g_5e03852c]
        neg     edx
        jmp     L_b82
    L_b7b:
        mul     dword ptr [ecx*4 + g_5e03852c]
    L_b82:
        mov     dword ptr [g_5e77a7d8], edx
    L_b88:
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
        mov     eax, dword ptr [g_5e77a7c4]
        mov     ecx, dword ptr [g_5e77a578]
        sub     ecx, eax
        mov     dword ptr [g_5e77a578], ecx
        jns     L_c38
        mov     ecx, dword ptr [g_5e77a7dc]
        mov     edx, dword ptr [g_5e77a7c8]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     edi, dword ptr [ebp - 0x20]
        shl     ecx, 0x4
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6e8]
        mov     dword ptr [g_5e77a7c8], edx
        mov     edx, dword ptr [g_5e77a6e0]
        shl     edx, 0x4
        add     eax, edx
        mov     edx, dword ptr [ebp - 0x24]
        shl     ecx, 0x4
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [g_5e77a6e4]
        add     edx, ecx
        shl     eax, 0x4
        mov     dword ptr [ebp - 0x24], edx
        mov     edx, dword ptr [g_5e77a6dc]
        add     edi, eax
        mov     eax, dword ptr [ebp - 0x28]
        shl     edx, 0x4
        mov     dword ptr [ebp - 0x20], edi
        add     eax, edx
        jmp     L_93f
    L_c38:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_c3e:
        cmp     ecx, dword ptr [ebp - 0x2c]
        jl      L_d20
        call    FUN_5e018c60
        mov     edi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     edi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_c88
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     edi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
    L_c88:
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
        jnz     L_7f9
    L_cc6:
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, ecx
        jz      L_d20
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 0x2c], ecx
        jnz     L_d02
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e018750
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_7d6
    L_d02:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6bc]
        push    ecx
        push    edx
        call    FUN_5e019460
        mov     ecx, dword ptr [g_5e77a694]
        jmp     L_7d6
    L_d20:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
