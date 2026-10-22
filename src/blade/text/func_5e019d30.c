/*
 * FUN_5e019d30 (1332 B) — DirectDraw wrapper: main render/format loop (variant).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e0181d0(void);
extern void __cdecl FUN_5e017b80(void);
extern void __cdecl FUN_5e019460(void);
extern void __cdecl FUN_5e018050(void);
extern void (*g_5e77a6a8)(void);

extern int g_5e77a580;
extern unsigned char g_5e036089;
extern unsigned char g_5e036088;
extern int g_5e038990;
extern int g_5e038928;
extern int g_5e038994;
extern int g_5e038924;
extern unsigned char g_5e038524;
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
extern int g_5e77a7c8;
extern float g_5e77a668;
extern float g_5e0384e8;
extern int g_5e77a6b4;
extern int g_5e77a7cc;
extern float g_5e77a674;
extern int g_5e77a55c;
extern int g_5e77a60c;
extern int g_5e77a560;
extern int g_5e77a600;
extern int g_5e77a618;
extern int g_5e77a7d0;
extern int g_5e77a624;
extern int g_5e77a808;
extern int g_5e77a7e0;
extern int g_5e77a7f0;
extern int g_5e77a800;
extern int g_5e77a7e8;
extern int g_5e77a7f8;
extern int g_5e77a810;
extern int g_5e77a7c4;
extern int g_5e77a6d4;
extern int g_5e77a6d8;
extern int g_5e77a6e0;
extern int g_5e77a6e8;
extern int g_5e77a6dc;
extern int g_5e77a6e4;
extern int g_5e77a698;
extern int g_5e77a6a4;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a5ec;
extern int g_5e77a694;

__declspec(naked) void FUN_5e019d30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
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
        jnz     L_e06
        test    dl, 0x2
        jz      L_dd1
        mov     eax, dword ptr [g_5e77a594]
        mov     edx, eax
        shr     edx, 0x3
        and     edx, 0x1f
        shr     eax, 0x1b
        mov     dword ptr [g_5e77a7ac], edx
        mov     dword ptr [g_5e77a7a0], eax
        jmp     L_e06
    L_dd1:
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
    L_e06:
        mov     eax, dword ptr [g_5e77a6ac]
        test    eax, eax
        jnz     L_e46
        call    FUN_5e0181d0
        mov     eax, dword ptr [g_5e77a6bc]
        mov     ecx, dword ptr [g_5e77a6b8]
        push    eax
        push    ecx
        call    FUN_5e017b80
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e019460
        mov     ecx, dword ptr [g_5e77a5ec]
        mov     dword ptr [g_5e77a6c4], ecx
        jmp     L_e7a
    L_e46:
        call    FUN_5e0181d0
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6b8]
        push    edx
        push    eax
        call    FUN_5e017b80
        mov     ecx, dword ptr [g_5e77a6bc]
        mov     edx, dword ptr [g_5e77a6b8]
        push    ecx
        push    edx
        call    FUN_5e019460
        mov     eax, dword ptr [g_5e77a694]
        mov     dword ptr [g_5e77a6c4], eax
    L_e7a:
        mov     ecx, dword ptr [g_5e77a840]
        mov     eax, dword ptr [g_5e77a5e8]
        imul    ecx, eax
        fld     dword ptr [g_5e77a530]
        fmul    dword ptr [g_5e036290]
        fstp    dword ptr [ebp - 0x14]
        mov     edx, dword ptr [g_5e77a844]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a6cc]
        imul    edx, eax
        mov     eax, dword ptr [g_5e77a6d0]
        mov     dword ptr [g_5e77a510], ecx
        add     edx, eax
        mov     dword ptr [g_5e77a514], edx
        fld     dword ptr [ebp - 0x14]
        fistp   qword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [g_5e77a6c4]
        mov     dword ptr [g_5e77a7dc], eax
        mov     dword ptr [ebp - 0x14], 0x0
    L_ed6:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        mov     dword ptr [g_5e77a6c4], ecx
        jz      L_a203
    L_ee7:
        mov     edi, dword ptr [g_5e77a68c]
        mov     esi, dword ptr [g_5e77a514]
        mov     edx, dword ptr [g_5e77a510]
    L_ef9:
        mov     eax, dword ptr [g_5e77a5e4]
        mov     ebx, eax
        sub     ebx, edi
        mov     dword ptr [g_5e77a578], ebx
        jns     L_a17b
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
        fistp   qword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x28]
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
        mov     edx, dword ptr [g_5e77a60c]
        mov     dword ptr [g_5e77a7cc], eax
        mov     eax, dword ptr [g_5e77a560]
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [g_5e77a600]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a618]
        mov     dword ptr [g_5e77a7d0], ecx
        mov     ecx, dword ptr [g_5e77a624]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x10], edx
    L_fbf:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     bl, byte ptr [g_5e77a580]
        sar     ecx, 0xe
        test    bl, 0x2
        mov     dword ptr [g_5e77a808], ecx
        jnz     L_a046
        mov     eax, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [ebp - 0x8]
        sar     eax, 0xe
        mov     edi, eax
        and     ecx, 0x3ff
        and     edi, 0x3ff
        mov     dword ptr [ebp - 0x1c], eax
        mov     edx, edi
        shl     edx, 0x14
        or      edx, ecx
        sar     esi, 0xe
        mov     dword ptr [g_5e77a7e0], edx
        mov     edx, esi
        and     edx, 0x3ff
        mov     dword ptr [ebp - 0x18], esi
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
        jnz     L_a051
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7e8], edx
        mov     dword ptr [g_5e77a7f8], edi
        jmp     L_a04c
    L_a046:
        mov     esi, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x1c]
    L_a04c:
        test    bl, 0x10
        jz      L_a085
    L_a051:
        mov     edx, dword ptr [ebp - 0x10]
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
    L_a085:
        mov     eax, dword ptr [g_5e77a578]
        cmp     eax, -0x10
        mov     dword ptr [g_5e77a7c4], eax
        jge     L_a09e
        mov     eax, 0xfffffff0
        mov     dword ptr [g_5e77a7c4], eax
    L_a09e:
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
        jns     L_a175
        mov     ecx, dword ptr [g_5e77a7dc]
        mov     eax, dword ptr [g_5e77a7c8]
        mov     edx, dword ptr [g_5e77a6d4]
        mov     ebx, dword ptr [g_5e77a7cc]
        mov     edi, dword ptr [g_5e77a7d0]
        mov     esi, dword ptr [ebp - 0xc]
        shl     ecx, 0x4
        add     eax, ecx
        mov     ecx, dword ptr [g_5e77a6e0]
        mov     dword ptr [g_5e77a7c8], eax
        mov     eax, dword ptr [g_5e77a6d8]
        add     ebx, edx
        mov     edx, dword ptr [ebp - 0x4]
        shl     ecx, 0x4
        add     edi, eax
        mov     eax, dword ptr [g_5e77a6e8]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a6dc]
        mov     dword ptr [ebp - 0x4], edx
        mov     edx, dword ptr [g_5e77a6e4]
        shl     eax, 0x4
        mov     dword ptr [g_5e77a7cc], ebx
        mov     ebx, dword ptr [ebp - 0x8]
        shl     edx, 0x4
        add     esi, eax
        mov     eax, dword ptr [ebp - 0x10]
        shl     ecx, 0x4
        add     ebx, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a7d0], edi
        mov     dword ptr [ebp - 0x8], ebx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_fbf
    L_a175:
        mov     ecx, dword ptr [g_5e77a6c4]
    L_a17b:
        cmp     ecx, dword ptr [ebp - 0x14]
        jl      L_a25d
        call    FUN_5e018050
        mov     edi, dword ptr [g_5e77a68c]
        mov     edx, dword ptr [g_5e77a698]
        mov     eax, dword ptr [g_5e77a6a4]
        mov     ecx, dword ptr [g_5e77a69c]
        add     edi, edx
        add     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
        js      L_a1c5
        mov     ecx, dword ptr [g_5e77a6a0]
        inc     edi
        sub     eax, ecx
        mov     dword ptr [g_5e77a68c], edi
        mov     dword ptr [g_5e77a6a4], eax
    L_a1c5:
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
        jnz     L_ef9
    L_a203:
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, dword ptr [g_5e77a5ec]
        cmp     eax, ecx
        jz      L_a25d
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6ac]
        inc     ecx
        test    eax, eax
        mov     dword ptr [ebp - 0x14], ecx
        jnz     L_a23f
        mov     edx, dword ptr [g_5e77a6c0]
        mov     eax, dword ptr [g_5e77a6bc]
        push    edx
        push    eax
        call    FUN_5e017b80
        mov     ecx, dword ptr [g_5e77a5ec]
        jmp     L_ed6
    L_a23f:
        mov     ecx, dword ptr [g_5e77a6c0]
        mov     edx, dword ptr [g_5e77a6bc]
        push    ecx
        push    edx
        call    FUN_5e019460
        mov     ecx, dword ptr [g_5e77a694]
        jmp     L_ed6
    L_a25d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
