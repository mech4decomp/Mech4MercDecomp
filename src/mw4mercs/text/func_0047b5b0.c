/*
 * FUN_0047b5b0 (5862 B) — __thiscall, RET 0x18. Large lightmap/vertex-color
 * generation routine with 4 jump tables (0x47cd74/8c/cda4/cdbc) and heavy FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007da864;
extern int   g_007da5d8;
extern int   g_007da5d4;
extern int   g_007da5d0;
extern int   g_007b94a0;
extern int  *g_007da68c;
extern int  *g_007da688;
extern int  *g_007da600;
extern int  *g_007da65c;
extern int  *g_007da684;
extern int  *g_007da680;
extern int  *g_007da660;
extern int  *g_007da670;
extern int  *g_007da66c;
extern int  *g_007da5e8;
extern int  *g_007da5f4;
extern int  *g_007da848;
extern int   g_007b2478[];
extern int   g_007b2408[];
extern int   g_007b2404[];
extern float g_0076c5b0;
extern float g_0076dd60;
extern float g_007b220c;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern char  g_0076df04[];
extern int   g_jt_47cd74[];
extern int   g_jt_47cd8c[];
extern int   g_jt_47cda4[];
extern int   g_jt_47cdbc[];

extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0047b5b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb8
        mov     eax, dword ptr [ecx + 0x64]
        test    eax, eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4c], 0x0
        ja      L_b5d6
        mov     byte ptr [ecx + 0x10], 0x0
        xor     eax, eax
        mov     esp, ebp
        pop     ebp
        ret     0x18
L_b5d6:
        cmp     word ptr [ecx + 0x56], 0x0
        mov     eax, dword ptr [ecx + 0x18]
        mov     dword ptr [ebp - 0x40], eax
        jnz     L_b5eb
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_b5eb:
        mov     eax, dword ptr [g_007da68c]
        mov     edx, dword ptr [g_007da688]
        mov     ecx, dword ptr [ebp - 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [g_007da600]
        mov     ebx, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [eax]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov     dword ptr [ebp - 0x30], edi
        jz      L_b67f
        mov     eax, dword ptr [ebp - 0x40]
        test    eax, eax
        mov     dword ptr [ebp - 0x14], 0x0
        jle     L_b6ba
L_b62a:
        cmp     byte ptr [ebx], 0x0
        jz      L_b65c
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x30]
        push    edx
        push    eax
        push    esi
        mov     byte ptr [ebx], 0x0
        call    FUN_0041cb30
        mov     ecx, dword ptr [g_007da65c]
        mov     edi, dword ptr [ecx]
        add     edi, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov     byte ptr [edi], al
        mov     edi, dword ptr [ebp - 0x30]
L_b65c:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x14]
        add     ecx, 0x4
        inc     eax
        add     edi, 0x10
        add     esi, 0xc
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        inc     ebx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x30], edi
        jl      L_b62a
        jmp     L_b6ba
L_b67f:
        mov     eax, dword ptr [ebp - 0x40]
        test    eax, eax
        jle     L_b6ba
        mov     dword ptr [ebp + 0x14], eax
L_b689:
        cmp     byte ptr [ebx], 0x0
        jz      L_b6a1
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        push    esi
        mov     ecx, edi
        mov     byte ptr [ebx], 0x0
        call    FUN_0041cb30
L_b6a1:
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp + 0x14]
        add     edx, 0x4
        add     esi, 0xc
        add     edi, 0x10
        inc     ebx
        dec     eax
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp + 0x14], eax
        jnz     L_b689
L_b6ba:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [eax + 0x64]
        mov     eax, dword ptr [eax + 0x24]
        and     eax, 0x3fff
        mov     dword ptr [ebp + 0xffffff50], 0x0
        mov     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x40], ebx
        mov     byte ptr [ebp + 0x17], 0x0
        mov     dword ptr [ebp - 0x50], 0x0
        mov     dword ptr [ebp - 0x54], 0x0
        jz      L_b7b2
        test    eax, eax
        jle     L_b7b2
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx + eax*0x4 + 0x24]
        test    esi, esi
        jz      L_b7b2
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_b731
        mov     dword ptr [g_007da864], 0x1
        jmp     L_b78c
L_b731:
        cmp     eax, 0x80
        jl      L_b744
        mov     dword ptr [g_007da864], 0x2
        jmp     L_b78c
L_b744:
        cmp     eax, 0x40
        jl      L_b755
        mov     dword ptr [g_007da864], 0x4
        jmp     L_b78c
L_b755:
        cmp     eax, 0x20
        jl      L_b766
        mov     dword ptr [g_007da864], 0x8
        jmp     L_b78c
L_b766:
        cmp     eax, 0x10
        jl      L_b777
        mov     dword ptr [g_007da864], 0x10
        jmp     L_b78c
L_b777:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_b78c:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L_b828
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_b828
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x1c]
        mov     byte ptr [ebp + 0x17], 0x1
        mov     dword ptr [ebp - 0x50], edx
        mov     dword ptr [ebp - 0x54], eax
L_b7b2:
        mov     ecx, dword ptr [ebp - 0x8]
        xor     eax, eax
        cmp     word ptr [ecx + 0x56], ax
        mov     dword ptr [ebp - 0x58], eax
        mov     dword ptr [ebp - 0x1c], eax
        jnz     L_b7cb
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_b7cb:
        mov     edx, dword ptr [g_007da600]
        mov     ecx, dword ptr [edx + 0x4]
        mov     edi, dword ptr [edx]
        mov     edx, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0xc], eax
        jle     L_c76e
L_b7f6:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [eax + 0x60]
        movzx   ax, byte ptr [edx + ecx]
        mov     edx, dword ptr [g_007da5e8]
        mov     edx, dword ptr [edx]
        add     edx, ecx
        cmp     byte ptr [edx], 0x0
        mov     dword ptr [ebp + 0x8], edx
        jnz     L_b82e
        mov     ecx, dword ptr [ebp - 0xc]
        and     eax, 0xffff
        add     ecx, eax
        mov     dword ptr [ebp - 0xc], ecx
        jmp     L_c75c
L_b828:
        mov     byte ptr [ebp + 0x17], 0x0
        jmp     L_b7b2
L_b82e:
        mov     ecx, dword ptr [ebp - 0xc]
        and     eax, 0xffff
        lea     edi, [eax + ecx]
        xor     esi, esi
        cmp     ecx, edi
        mov     ebx, 0x3f
        mov     dword ptr [g_007da5d8], ebx
        mov     dword ptr [g_007da5d4], esi
        mov     dword ptr [ebp - 0x48], edi
        mov     eax, ecx
        jge     L_b895
        mov     ecx, dword ptr [g_007da688]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x30], edx
        mov     edx, dword ptr [ecx + 0x48]
        mov     dword ptr [ebp - 0x24], edx
L_b869:
        mov     edx, dword ptr [ebp - 0x24]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + eax]
        mov     edx, dword ptr [ebp - 0x30]
        lea     ecx, [edx + ecx*0x4]
        mov     edx, dword ptr [ecx]
        and     ebx, edx
        or      esi, edx
        inc     eax
        cmp     eax, edi
        jl      L_b869
        test    ebx, ebx
        mov     dword ptr [g_007da5d4], esi
        mov     dword ptr [g_007da5d8], ebx
        jz      L_b89d
        mov     edx, dword ptr [ebp + 0x8]
L_b895:
        mov     byte ptr [edx], 0x0
        jmp     L_c756
L_b89d:
        test    esi, esi
        jnz     L_b8cd
        mov     eax, dword ptr [ebp - 0x4c]
        mov     ecx, dword ptr [ebp - 0x8]
        inc     eax
        mov     dword ptr [ebp - 0x4c], eax
        mov     eax, dword ptr [ebp - 0xc]
L_b8ae:
        mov     edx, dword ptr [ecx + 0x48]
        xor     ebx, ebx
        mov     bl, byte ptr [edx + eax]
        mov     edx, dword ptr [g_007da600]
        mov     edx, dword ptr [edx]
        inc     eax
        mov     byte ptr [ebx + edx], 0x1
        cmp     eax, dword ptr [ebp - 0x48]
        jl      L_b8ae
        jmp     L_c756
L_b8cd:
        mov     eax, dword ptr [esi*0x4 + g_007b2478]
        mov     edx, 0x1
        cmp     eax, edx
        mov     dword ptr [ebp - 0x10], 0x0
        jnz     L_bd74
        mov     ecx, dword ptr [ebp - 0xc]
L_b8eb:
        mov     eax, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [eax + 0x48]
        xor     edx, edx
        mov     dl, byte ptr [eax + ecx]
        inc     ecx
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x24], ecx
        mov     esi, edx
        jl      L_b903
        mov     ecx, dword ptr [ebp - 0xc]
L_b903:
        mov     edi, dword ptr [ebp - 0x10]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + ecx]
        mov     eax, dword ptr [ebp - 0x58]
        and     edi, 0xffff
        add     edi, eax
        mov     eax, dword ptr [g_007da688]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + esi*0x4]
        test    ecx, ecx
        mov     dword ptr [g_007da5d0], ecx
        jnz     L_b9c0
        mov     ecx, dword ptr [g_007da68c]
        mov     edx, dword ptr [ecx]
        mov     eax, esi
        shl     eax, 0x4
        add     eax, edx
        mov     edx, dword ptr [g_007da684]
        mov     ecx, edi
        shl     ecx, 0x4
        add     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [g_007da680]
        mov     dword ptr [ecx + 0x8], edx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edx + esi*0x8]
        mov     edx, dword ptr [edx + esi*0x8 + 0x4]
        mov     dword ptr [ecx + edi*0x8], eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     al, byte ptr [eax + 0x13]
        test    al, al
        mov     byte ptr [ebp + 0xb], 0x1
        mov     dword ptr [ecx + edi*0x8 + 0x4], edx
        jbe     L_b9a2
        test    al, 0x1
        jz      L_b9a2
        mov     ecx, dword ptr [g_007da65c]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007da660]
        mov     ecx, dword ptr [eax]
        mov     dl, byte ptr [edx + esi]
        mov     byte ptr [ecx + edi], dl
L_b9a2:
        inc     dword ptr [ebp - 0x10]
        mov     eax, dword ptr [g_007da688]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + ebx*0x4]
        inc     edi
        test    ecx, ecx
        jz      L_bd50
        mov     ecx, dword ptr [g_007da5d0]
        jmp     L_b9ce
L_b9c0:
        cmp     dword ptr [eax + ebx*0x4], 0x0
        mov     byte ptr [ebp + 0xb], 0x0
        jnz     L_bd50
L_b9ce:
        or      ecx, dword ptr [eax + ebx*0x4]
        xor     eax, eax
        mov     edx, 0x1
        mov     dword ptr [g_007da5d0], ecx
        mov     dword ptr [ebp - 0x20], eax
L_b9e1:
        test    edx, ecx
        jnz     L_b9f6
        shl     edx, 0x1
        inc     eax
        cmp     ax, 0x6
        jb      L_b9e1
        mov     dword ptr [ebp - 0x20], eax
        jmp     L_bb16
L_b9f6:
        mov     dword ptr [ebp - 0x20], eax
        cmp     byte ptr [ebp + 0xb], 0x1
        jnz     L_ba8f
        mov     ecx, dword ptr [g_007da68c]
        mov     edx, dword ptr [ecx]
        mov     eax, ebx
        mov     ecx, esi
        shl     eax, 0x4
        shl     ecx, 0x4
        add     eax, edx
        add     ecx, edx
        mov     edx, dword ptr [ebp - 0x20]
        and     edx, 0xffff
        cmp     edx, 0x5
        mov     dword ptr [ebp - 0x28], edx
        ja      L_ba6e
        jmp     dword ptr [edx*0x4 + g_jt_47cd74]
L_ba31:
        fld     dword ptr [ecx]
        fld     dword ptr [eax]
        jmp     L_ba4b
L_ba37:
        fld     dword ptr [ecx + 0x8]
        fld     dword ptr [eax + 0x8]
        jmp     L_ba4b
L_ba3f:
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 0x8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 0x8]
L_ba4b:
        fld     st(1)
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_bb03
        fstp    st(0)
        mov     dword ptr [ebp - 0x4], 0x0
        fstp    st(0)
        jmp     L_bb10
L_ba6e:
        push    0x76df04
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_baf7
        int     3
        mov     edx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_bb10
L_ba8f:
        mov     edx, dword ptr [g_007da68c]
        mov     edx, dword ptr [edx]
        mov     eax, esi
        mov     ecx, ebx
        shl     eax, 0x4
        shl     ecx, 0x4
        add     eax, edx
        add     ecx, edx
        mov     edx, dword ptr [ebp - 0x20]
        and     edx, 0xffff
        cmp     edx, 0x5
        mov     dword ptr [ebp - 0x28], edx
        ja      L_bae5
        jmp     dword ptr [edx*0x4 + g_jt_47cd8c]
L_babd:
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 0x4]
        jmp     L_ba4b
L_bacb:
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x4]
        jmp     L_ba4b
L_bad6:
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp     L_ba4b
L_bae5:
        push    0x76df04
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_baf7
        int     3
L_baf7:
        mov     edx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_bb10
L_bb03:
        fld     st(1)
        fsub    st(0), st(1)
        fdivr   st(0), st(2)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
L_bb10:
        mov     dword ptr [ebp + 0xffffff50], edx
L_bb16:
        cmp     byte ptr [ebp + 0xb], 0x1
        mov     eax, dword ptr [g_007da68c]
        mov     ecx, dword ptr [eax]
        jnz     L_bc3f
        mov     edx, dword ptr [g_007da684]
        mov     edx, dword ptr [edx]
        mov     eax, ebx
        shl     eax, 0x4
        add     eax, ecx
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, esi
        shl     eax, 0x4
        add     eax, ecx
        mov     ecx, edi
        shl     ecx, 0x4
        add     ecx, edx
        mov     edx, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld     dword ptr [edx + 0x4]
        fsub    dword ptr [eax + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [edx + 0x8]
        fsub    dword ptr [eax + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0xffffff50]
        mov     edx, dword ptr [eax*0x8 + g_007b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        jz      L_bb9e
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp     L_bba4
L_bb9e:
        fld     dword ptr [g_007b220c]
L_bba4:
        mov     eax, dword ptr [eax*0x8 + g_007b2404]
        mov     edx, dword ptr [g_007da680]
        fstp    dword ptr [ecx + eax*0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ecx + 0x1c]
        fld     dword ptr [eax + ebx*0x8]
        mov     ecx, dword ptr [edx]
        fsub    dword ptr [eax + esi*0x8]
        lea     ecx, [ecx + edi*0x8]
        lea     edx, [eax + esi*0x8 + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + esi*0x8]
        fstp    dword ptr [ecx]
        fld     dword ptr [eax + ebx*0x8 + 0x4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x8]
        mov     al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 0x4]
        jbe     L_bd4d
        test    al, 0x1
        jz      L_bd4d
        mov     eax, dword ptr [g_007da65c]
        mov     eax, dword ptr [eax]
        mov     cl, byte ptr [eax + esi]
        xor     edx, edx
        mov     dl, byte ptr [eax + ebx]
        mov     byte ptr [ebp + 0xffffff4c], cl
        mov     esi, dword ptr [ebp + 0xffffff4c]
        mov     eax, dword ptr [g_007da660]
        mov     ecx, dword ptr [eax]
        and     esi, 0xff
        mov     dword ptr [ebp - 0x34], esi
        sub     edx, esi
        mov     dword ptr [ebp + 0x8], edx
        fild    dword ptr [ebp + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fiadd   dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x8]
        mov     dl, byte ptr [ebp + 0x8]
        jmp     L_bd4a
L_bc3f:
        mov     edx, dword ptr [g_007da684]
        mov     edx, dword ptr [edx]
        mov     eax, esi
        shl     eax, 0x4
        add     eax, ecx
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, ebx
        shl     eax, 0x4
        add     eax, ecx
        mov     ecx, edi
        shl     ecx, 0x4
        add     ecx, edx
        mov     edx, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld     dword ptr [edx + 0x4]
        fsub    dword ptr [eax + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [edx + 0x8]
        fsub    dword ptr [eax + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + 0xc]
        mov     eax, dword ptr [ebp + 0xffffff50]
        mov     edx, dword ptr [eax*0x8 + g_007b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        jz      L_bcb6
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp     L_bcbc
L_bcb6:
        fld     dword ptr [g_007b220c]
L_bcbc:
        mov     eax, dword ptr [eax*0x8 + g_007b2404]
        mov     edx, dword ptr [g_007da680]
        fstp    dword ptr [ecx + eax*0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ecx + 0x1c]
        fld     dword ptr [eax + esi*0x8]
        mov     ecx, dword ptr [edx]
        fsub    dword ptr [eax + ebx*0x8]
        lea     ecx, [ecx + edi*0x8]
        lea     edx, [eax + ebx*0x8 + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [eax + ebx*0x8]
        fstp    dword ptr [ecx]
        fld     dword ptr [eax + esi*0x8 + 0x4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x8]
        mov     al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 0x4]
        jbe     L_bd4d
        test    al, 0x1
        jz      L_bd4d
        mov     eax, dword ptr [g_007da65c]
        mov     eax, dword ptr [eax]
        mov     cl, byte ptr [eax + ebx]
        xor     edx, edx
        mov     dl, byte ptr [eax + esi]
        mov     byte ptr [ebp + 0xffffff54], cl
        mov     ecx, dword ptr [ebp + 0xffffff54]
        mov     eax, dword ptr [g_007da660]
        and     ecx, 0xff
        mov     dword ptr [ebp - 0x34], ecx
        sub     edx, ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp + 0x8], edx
        fild    dword ptr [ebp + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fiadd   dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x8]
        mov     dl, byte ptr [ebp + 0x8]
L_bd4a:
        mov     byte ptr [ecx + edi], dl
L_bd4d:
        inc     dword ptr [ebp - 0x10]
L_bd50:
        mov     edi, dword ptr [ebp - 0x48]
        mov     ecx, dword ptr [ebp - 0x24]
        cmp     ecx, edi
        jl      L_b8eb
        mov     eax, dword ptr [g_007da670]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x1c]
        mov     word ptr [ecx + edx*0x2], ax
        jmp     L_c72d
L_bd74:
        mov     eax, dword ptr [g_007da66c]
        mov     ecx, dword ptr [eax + 0x30]
        mov     dword ptr [ebp + 0xffffff74], ecx
        mov     ecx, dword ptr [eax + 0x40]
        mov     dword ptr [ebp + 0xffffff7c], ecx
        mov     ecx, dword ptr [eax + 0x48]
        mov     dword ptr [ebp - 0x80], ecx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     cl, byte ptr [ecx + 0x13]
        test    cl, cl
        mov     byte ptr [ebp - 0x6c], cl
        jbe     L_bdc4
        mov     edi, ecx
        and     edi, 0xff
        lea     ecx, [ebp - 0x7c]
        add     eax, 0x50
        mov     esi, 0x2
L_bdb1:
        test    edi, edx
        jz      L_bdb9
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx], ebx
L_bdb9:
        add     eax, 0x8
        add     ecx, 0x4
        shl     edx, 0x1
        dec     esi
        jnz     L_bdb1
L_bdc4:
        mov     eax, dword ptr [g_007da68c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x34], eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [eax + 0x1c]
        xor     edx, edx
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x44], edi
L_bde2:
        mov     esi, dword ptr [ebp - 0x24]
        mov     ebx, dword ptr [ebp - 0x34]
        xor     eax, eax
        mov     al, byte ptr [esi + ecx]
        and     edx, 0xffff
        mov     ecx, edx
        shl     ecx, 0x4
        mov     esi, eax
        shl     eax, 0x4
        add     eax, ebx
        add     ecx, dword ptr [ebp + 0xffffff74]
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [ebp + 0xffffff7c]
        mov     dword ptr [ecx + 0x8], ebx
        mov     ecx, dword ptr [edi + esi*0x8]
        mov     dword ptr [eax + edx*0x8], ecx
        mov     ecx, dword ptr [edi + esi*0x8 + 0x4]
        mov     dword ptr [eax + edx*0x8 + 0x4], ecx
        mov     eax, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [eax + esi*0x4]
        mov     eax, dword ptr [ebp - 0x80]
        mov     dword ptr [eax + edx*0x4], ecx
        mov     eax, dword ptr [ebp - 0x6c]
        test    al, al
        jbe     L_be8d
        mov     ecx, eax
        and     ecx, 0xff
        mov     dword ptr [ebp + 0x8], 0x1
        mov     dword ptr [ebp - 0x10], ecx
        lea     edi, [ebp - 0x7c]
        mov     eax, 0x7da65c
L_be5c:
        mov     ebx, dword ptr [ebp + 0x8]
        test    ecx, ebx
        jz      L_be72
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + esi]
        mov     ebx, dword ptr [edi]
        mov     byte ptr [edx + ebx], cl
        mov     ecx, dword ptr [ebp - 0x10]
L_be72:
        mov     ebx, dword ptr [ebp + 0x8]
        add     eax, 0x8
        shl     ebx, 0x1
        add     edi, 0x4
        cmp     eax, 0x7da66c
        mov     dword ptr [ebp + 0x8], ebx
        jl      L_be5c
        mov     eax, dword ptr [ebp - 0x6c]
        mov     edi, dword ptr [ebp - 0x44]
L_be8d:
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x20]
        mov     esi, dword ptr [ebp - 0x48]
        inc     ecx
        inc     edx
        cmp     ecx, esi
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0x20], edx
        jl      L_bde2
        test    al, al
        mov     ecx, dword ptr [g_007da66c]
        mov     word ptr [ebp - 0x74], dx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp + 0xffffff58], edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [ebp + 0xffffff60], edx
        mov     edx, dword ptr [ecx + 0x18]
        mov     dword ptr [ebp - 0x5c], 0x0
        mov     dword ptr [ebp + 0xffffff64], edx
        jbe     L_bf00
        and     eax, 0xff
        mov     esi, 0x1
        lea     edx, [ebp + 0xffffff68]
        add     ecx, 0x20
        mov     edi, 0x2
L_beed:
        test    eax, esi
        jz      L_bef5
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [edx], ebx
L_bef5:
        add     ecx, 0x8
        add     edx, 0x4
        shl     esi, 0x1
        dec     edi
        jnz     L_beed
L_bf00:
        mov     ebx, dword ptr [ebp - 0x74]
        mov     edx, 0x1
        mov     word ptr [ebp + 0xffffff70], 0x0
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x34], 0x4
L_bf1b:
        mov     dword ptr [ebp - 0x70], 0x0
        mov     dword ptr [ebp - 0x28], 0x7b2404
        mov     dword ptr [ebp - 0x44], 0x6
L_bf30:
        test    dword ptr [g_007da5d4], edx
        jz      L_c5b8
        xor     esi, esi
        mov     ecx, ebx
        and     ecx, 0xffff
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 0x30], ecx
        jle     L_c4c2
        mov     eax, dword ptr [ebp + 0xffffff7c]
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp - 0x80]
        mov     dword ptr [ebp - 0x68], eax
        mov     eax, dword ptr [ebp + 0xffffff74]
        lea     edi, [eax + 0x8]
        mov     dword ptr [ebp + 0xffffff48], edi
        jmp     L_bf75
L_bf72:
        mov     ecx, dword ptr [ebp - 0x30]
L_bf75:
        lea     eax, [esi + 0x1]
        xor     ebx, ebx
        cmp     eax, ecx
        setge   bl
        mov     dword ptr [ebp - 0x24], eax
        dec     ebx
        and     ebx, eax
        mov     eax, dword ptr [ebp - 0x68]
        mov     eax, dword ptr [eax]
        test    edx, eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x3c], ecx
        mov     dword ptr [g_007da5d0], eax
        jnz     L_c083
        mov     ecx, dword ptr [ebp + 0xffffff70]
        mov     ebx, dword ptr [ebp + 0xffffff58]
        and     ecx, 0xffff
        mov     eax, ecx
        shl     eax, 0x4
        add     eax, ebx
        mov     ebx, dword ptr [edi - 0x8]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [edi - 0x4]
        mov     dword ptr [eax + 0x4], ebx
        mov     ebx, dword ptr [edi]
        mov     dword ptr [eax + 0x8], ebx
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0xc], ebx
        mov     eax, dword ptr [ebp - 0x68]
        mov     eax, dword ptr [eax]
        mov     ebx, dword ptr [ebp + 0xffffff64]
        mov     dword ptr [ebx + ecx*0x4], eax
        mov     eax, dword ptr [ebp - 0x20]
        mov     ebx, dword ptr [eax]
        mov     eax, dword ptr [ebp + 0xffffff60]
        mov     dword ptr [eax + ecx*0x8], ebx
        mov     ebx, dword ptr [ebp - 0x20]
        mov     ebx, dword ptr [ebx + 0x4]
        mov     dword ptr [eax + ecx*0x8 + 0x4], ebx
        xor     eax, eax
        mov     eax, dword ptr [ebp - 0x8]
        mov     al, byte ptr [eax + 0x13]
        test    al, al
        jbe     L_c03a
        mov     ebx, eax
        and     ebx, 0xff
        mov     edx, 0x1
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x10], ebx
        xor     eax, eax
L_c012:
        test    ebx, edx
        jz      L_c02d
        mov     edx, dword ptr [ebp + eax - 0x7c]
        mov     ebx, dword ptr [ebp + eax + 0xffffff68]
        mov     dl, byte ptr [edx + esi]
        mov     byte ptr [ebx + ecx], dl
        mov     edx, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [ebp - 0x10]
L_c02d:
        add     eax, 0x4
        shl     edx, 0x1
        cmp     eax, 0x8
        mov     dword ptr [ebp + 0x8], edx
        jl      L_c012
L_c03a:
        mov     ecx, dword ptr [ebp - 0x80]
        mov     eax, dword ptr [ebp - 0x3c]
        mov     esi, dword ptr [ecx + eax*0x4]
        inc     word ptr [ebp + 0xffffff70]
        test    esi, edx
        jz      L_c496
        mov     ecx, dword ptr [ebp + 0xffffff74]
        shl     eax, 0x4
        lea     ebx, [eax + ecx]
        cmp     dword ptr [ebp - 0x28], 0x7b242c
        ja      L_c110
        mov     edx, dword ptr [ebp - 0x70]
        jmp     dword ptr [edx*0x4 + g_jt_47cda4]
L_c075:
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi - 0x4]
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 0x4]
        jmp     L_c0d9
L_c083:
        mov     eax, dword ptr [ebp - 0x80]
        test    dword ptr [eax + ecx*0x4], edx
        jnz     L_c496
        mov     eax, dword ptr [ebp - 0x3c]
        mov     ecx, dword ptr [ebp + 0xffffff74]
        shl     eax, 0x4
        lea     ebx, [eax + ecx]
        cmp     dword ptr [ebp - 0x28], 0x7b242c
        ja      L_c2a9
        mov     edx, dword ptr [ebp - 0x70]
        jmp     dword ptr [edx*0x4 + g_jt_47cdbc]
L_c0b5:
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 0x4]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi - 0x4]
        jmp     L_c272
L_c0c6:
        fld     dword ptr [edi - 0x4]
        fld     dword ptr [ebx + 0x4]
        jmp     L_c0d9
L_c0ce:
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi - 0x8]
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx]
L_c0d9:
        fld     st(1)
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_c12b
        fstp    st(0)
        fstp    st(0)
L_c0ec:
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_c138
L_c0f5:
        fld     dword ptr [edi - 0x8]
        fld     dword ptr [ebx]
        jmp     L_c0d9
L_c0fc:
        fld     dword ptr [edi]
        fld     dword ptr [ebx + 0x8]
        jmp     L_c0d9
L_c103:
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi]
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 0x8]
        jmp     L_c0d9
L_c110:
        push    0x76df04
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_c0ec
        int     3
L_c122:
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_c138
L_c12b:
        fld     st(1)
        fsub    st(0), st(1)
        fdivr   st(0), st(2)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
L_c138:
        fld     dword ptr [ebx]
        mov     esi, dword ptr [ebp + 0xffffff70]
        fsub    dword ptr [edi - 0x8]
        mov     ecx, dword ptr [ebp + 0xffffff58]
        and     esi, 0xffff
        mov     eax, esi
        fmul    dword ptr [ebp - 0x4]
        shl     eax, 0x4
        add     eax, ecx
        fadd    dword ptr [edi - 0x8]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        fstp    dword ptr [eax]
        fld     dword ptr [ebx + 0x4]
        fsub    dword ptr [edi - 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edi - 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ebx + 0x8]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edi]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [edi + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [eax + 0xc]
        jz      L_c19e
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp     L_c1a4
L_c19e:
        fld     dword ptr [g_007b220c]
L_c1a4:
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x20]
        fstp    dword ptr [eax + edx*0x4]
        mov     edi, dword ptr [ebp + 0xffffff7c]
        mov     ebx, dword ptr [ebp - 0x3c]
        fld     dword ptr [edi + ebx*0x8]
        mov     edx, dword ptr [ebp + 0xffffff60]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edx + esi*0x8]
        fld     dword ptr [edi + ebx*0x8 + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ecx + 0x4]
        xor     ecx, ecx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     cl, byte ptr [ecx + 0x13]
        test    cl, cl
        fstp    dword ptr [edx + esi*0x8 + 0x4]
        jbe     L_c3f4
        mov     edx, ecx
        and     edx, 0xff
        mov     dword ptr [ebp + 0x8], 0x1
        mov     dword ptr [ebp - 0x10], edx
        xor     ecx, ecx
L_c1fd:
        mov     edi, dword ptr [ebp + 0x8]
        test    edx, edi
        jz      L_c24a
        mov     edi, dword ptr [ebp + ecx - 0x7c]
        mov     edx, dword ptr [ebp - 0x18]
        mov     dl, byte ptr [edi + edx]
        mov     byte ptr [ebp - 0x64], dl
        mov     edx, dword ptr [ebp - 0x64]
        and     edx, 0xff
        mov     dword ptr [ebp - 0x3c], edx
        xor     edx, edx
        mov     dl, byte ptr [edi + ebx]
        sub     edx, dword ptr [ebp - 0x3c]
        mov     edi, dword ptr [ebp + ecx + 0xffffff68]
        mov     dword ptr [ebp - 0x38], edx
        fild    dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x4]
        fiadd   dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x38]
        mov     dl, byte ptr [ebp - 0x38]
        mov     byte ptr [edi + esi], dl
        mov     edx, dword ptr [ebp - 0x10]
L_c24a:
        mov     edi, dword ptr [ebp + 0x8]
        add     ecx, 0x4
        shl     edi, 0x1
        cmp     ecx, 0x8
        mov     dword ptr [ebp + 0x8], edi
        jl      L_c1fd
        jmp     L_c3f4
L_c25f:
        fld     dword ptr [ebx + 0x4]
        fld     dword ptr [edi - 0x4]
        jmp     L_c272
L_c267:
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi - 0x8]
L_c272:
        fld     st(1)
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je      L_c2c4
        fstp    st(0)
        fstp    st(0)
L_c285:
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_c2d1
L_c28e:
        fld     dword ptr [ebx]
        fld     dword ptr [edi - 0x8]
        jmp     L_c272
L_c295:
        fld     dword ptr [ebx + 0x8]
        fld     dword ptr [edi]
        jmp     L_c272
L_c29c:
        fld     dword ptr [ebx + 0xc]
        fsub    dword ptr [ebx + 0x8]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [edi]
        jmp     L_c272
L_c2a9:
        push    0x76df04
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_c285
        int     3
        mov     dword ptr [ebp - 0x4], 0x0
        jmp     L_c2d1
L_c2c4:
        fld     st(1)
        fsub    st(0), st(1)
        fdivr   st(0), st(2)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
L_c2d1:
        fld     dword ptr [edi - 0x8]
        mov     esi, dword ptr [ebp + 0xffffff70]
        fsub    dword ptr [ebx]
        mov     ecx, dword ptr [ebp + 0xffffff58]
        and     esi, 0xffff
        mov     eax, esi
        fmul    dword ptr [ebp - 0x4]
        shl     eax, 0x4
        add     eax, ecx
        fadd    dword ptr [ebx]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        fstp    dword ptr [eax]
        fld     dword ptr [edi - 0x4]
        fsub    dword ptr [ebx + 0x4]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ebx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edi]
        fsub    dword ptr [ebx + 0x8]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ebx + 0x8]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [ebx + 0xc]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ebx + 0xc]
        fstp    dword ptr [eax + 0xc]
        jz      L_c337
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp     L_c33d
L_c337:
        fld     dword ptr [g_007b220c]
L_c33d:
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [ebp - 0x20]
        fstp    dword ptr [eax + edx*0x4]
        mov     ecx, dword ptr [ebp + 0xffffff7c]
        fld     dword ptr [ebx]
        mov     edx, dword ptr [ebp - 0x3c]
        fsub    dword ptr [ecx + edx*0x8]
        mov     edi, dword ptr [ebp + 0xffffff60]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ecx + edx*0x8]
        lea     ecx, [ecx + edx*0x8 + 0x4]
        fstp    dword ptr [edi + esi*0x8]
        fld     dword ptr [ebx + 0x4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [ecx]
        xor     ecx, ecx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     cl, byte ptr [ecx + 0x13]
        test    cl, cl
        fstp    dword ptr [edi + esi*0x8 + 0x4]
        jbe     L_c3f4
        mov     edi, ecx
        and     edi, 0xff
        mov     dword ptr [ebp + 0x8], 0x1
        mov     dword ptr [ebp - 0x10], edi
        xor     ecx, ecx
L_c394:
        mov     ebx, dword ptr [ebp + 0x8]
        test    edi, ebx
        jz      L_c3e4
        mov     edi, dword ptr [ebp + ecx - 0x7c]
        mov     dl, byte ptr [edi + edx]
        mov     ebx, dword ptr [ebp - 0x18]
        mov     byte ptr [ebp - 0x60], dl
        mov     edx, dword ptr [ebp - 0x60]
        and     edx, 0xff
        mov     dword ptr [ebp - 0x38], edx
        xor     edx, edx
        mov     dl, byte ptr [edi + ebx]
        sub     edx, dword ptr [ebp - 0x38]
        mov     edi, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x2c], edx
        fild    dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [ebp + ecx + 0xffffff68]
        fmul    dword ptr [ebp - 0x4]
        fiadd   dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x2c]
        mov     bl, byte ptr [ebp - 0x2c]
        mov     byte ptr [edx + esi], bl
        mov     edx, dword ptr [ebp - 0x3c]
L_c3e4:
        mov     ebx, dword ptr [ebp + 0x8]
        add     ecx, 0x4
        shl     ebx, 0x1
        cmp     ecx, 0x8
        mov     dword ptr [ebp + 0x8], ebx
        jl      L_c394
L_c3f4:
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [ebp - 0x38], 0x0
        mov     edi, dword ptr [ebp - 0x2c]
        xor     ecx, ecx
        xor     edx, edx
        test    dword ptr [edi], 0x80000000
        setnz   cl
        sub     edx, ecx
        and     edx, 0x8
        xor     ebx, ebx
        test    dword ptr [edi + 0x4], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x2
        or      edx, ebx
        xor     ebx, ebx
        test    dword ptr [edi + 0x8], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x10
        or      edx, ebx
        fld     dword ptr [edi + 0xc]
        xor     ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi + 0x4]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi + 0x8]
        fnstsw  ax
        test    ah, 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp - 0x38], edx
        mov     eax, dword ptr [ebp - 0x38]
        mov     ecx, dword ptr [ebp + 0xffffff64]
        inc     word ptr [ebp + 0xffffff70]
        mov     edi, dword ptr [ebp + 0xffffff48]
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [ecx + esi*0x4], eax
L_c496:
        mov     eax, dword ptr [ebp - 0x68]
        mov     ecx, dword ptr [ebp - 0x20]
        mov     esi, dword ptr [ebp - 0x24]
        add     eax, 0x4
        mov     dword ptr [ebp - 0x68], eax
        mov     eax, dword ptr [ebp - 0x30]
        add     edi, 0x10
        add     ecx, 0x8
        cmp     esi, eax
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp + 0xffffff48], edi
        mov     dword ptr [ebp - 0x20], ecx
        jl      L_bf72
L_c4c2:
        mov     eax, dword ptr [ebp - 0x5c]
        mov     ecx, dword ptr [g_007da66c]
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x4
        add     eax, ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff74], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp + 0xffffff7c], ecx
        mov     ecx, dword ptr [ebp - 0x8]
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 0x13]
        test    bl, bl
        mov     dword ptr [ebp - 0x80], eax
        jbe     L_c532
        mov     esi, ebx
        xor     eax, eax
        and     esi, 0xff
        mov     edx, 0x1
        mov     dword ptr [ebp - 0x10], esi
        lea     ecx, [ebp - 0x7c]
L_c50b:
        test    esi, edx
        jz      L_c527
        mov     esi, dword ptr [ebp - 0x5c]
        mov     edi, dword ptr [g_007da66c]
        lea     esi, [esi + esi*0x2]
        lea     esi, [eax + esi*0x2]
        mov     esi, dword ptr [edi + esi*0x8 + 0x20]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [ebp - 0x10]
L_c527:
        inc     eax
        add     ecx, 0x4
        shl     edx, 0x1
        cmp     eax, 0x2
        jl      L_c50b
L_c532:
        mov     ax, word ptr [ebp + 0xffffff70]
        mov     edi, dword ptr [ebp - 0x5c]
        mov     word ptr [ebp - 0x74], ax
        xor     eax, eax
        test    edi, edi
        setz    al
        lea     ecx, [eax + eax*0x2]
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [g_007da66c]
        shl     ecx, 0x4
        add     eax, ecx
        test    bl, bl
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff58], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp + 0xffffff60], ecx
        mov     dword ptr [ebp + 0xffffff64], eax
        jbe     L_c5ac
        xor     eax, eax
        mov     edx, 0x1
        and     ebx, 0xff
        lea     ecx, [ebp + 0xffffff68]
L_c588:
        test    ebx, edx
        jz      L_c5a1
        mov     esi, dword ptr [ebp - 0x5c]
        mov     edi, dword ptr [g_007da66c]
        lea     esi, [esi + esi*0x2]
        lea     esi, [eax + esi*0x2]
        mov     esi, dword ptr [edi + esi*0x8 + 0x20]
        mov     dword ptr [ecx], esi
L_c5a1:
        inc     eax
        add     ecx, 0x4
        shl     edx, 0x1
        cmp     eax, 0x2
        jl      L_c588
L_c5ac:
        mov     ebx, dword ptr [ebp - 0x74]
        mov     word ptr [ebp + 0xffffff70], 0x0
L_c5b8:
        mov     esi, dword ptr [ebp - 0x70]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x44]
        shl     edx, 0x1
        inc     esi
        add     ecx, 0x8
        dec     eax
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x70], esi
        mov     dword ptr [ebp - 0x28], ecx
        mov     dword ptr [ebp - 0x44], eax
        jnz     L_bf30
        mov     esi, ebx
        xor     eax, eax
        and     esi, 0xffff
        jle     L_c61e
        mov     ecx, dword ptr [ebp - 0x80]
L_c5e9:
        or      eax, dword ptr [ecx]
        add     ecx, 0x4
        dec     esi
        jnz     L_c5e9
        test    eax, eax
        jz      L_c61e
        mov     ecx, dword ptr [ebp - 0x34]
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        mov     dword ptr [ebp - 0x34], ecx
        jnz     L_bf1b
        test    eax, eax
        jz      L_c61e
        mov     ecx, dword ptr [g_007da5e8]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp - 0x14]
        mov     byte ptr [edx + eax], 0x0
        jmp     L_c75c
L_c61e:
        xor     edi, edi
        mov     eax, ebx
        and     eax, 0xffff
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x30], eax
        jle     L_c715
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dl, byte ptr [ecx + 0x13]
        mov     eax, dword ptr [g_007da680]
        mov     esi, dword ptr [ebp + 0xffffff74]
        mov     ecx, dword ptr [ebp + 0xffffff7c]
        mov     ebx, dword ptr [g_007da684]
        mov     byte ptr [ebp - 0x6c], dl
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x58]
        lea     edx, [edx + eax*0x8]
        shl     eax, 0x4
        add     esi, 0x8
        add     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x34], edx
L_c669:
        mov     ebx, dword ptr [ebp - 0x58]
        add     ebx, edi
        mov     dword ptr [ebp - 0x2c], ebx
        mov     ebx, dword ptr [esi - 0x8]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esi - 0x4]
        mov     dword ptr [eax + 0x4], ebx
        mov     ebx, dword ptr [esi]
        mov     dword ptr [eax + 0x8], ebx
        mov     ebx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0xc], ebx
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebx
        mov     ebx, dword ptr [ebp - 0x6c]
        test    bl, bl
        jbe     L_c6f1
        mov     ecx, ebx
        and     ecx, 0xff
        lea     ebx, [ebp - 0x7c]
        mov     dword ptr [ebp + 0x8], 0x1
        mov     dword ptr [ebp - 0x10], ecx
        mov     edx, 0x7da660
        mov     dword ptr [ebp - 0x24], ebx
L_c6b5:
        mov     ebx, dword ptr [ebp + 0x8]
        test    ecx, ebx
        jz      L_c6d4
        mov     ecx, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + edi]
        mov     ebx, dword ptr [edx]
        mov     edi, dword ptr [ebp - 0x2c]
        mov     ebx, dword ptr [ebx]
        mov     byte ptr [ebx + edi], cl
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0x18]
L_c6d4:
        add     dword ptr [ebp - 0x24], 0x4
        mov     ebx, dword ptr [ebp + 0x8]
        add     edx, 0x8
        shl     ebx, 0x1
        cmp     edx, 0x7da670
        mov     dword ptr [ebp + 0x8], ebx
        jl      L_c6b5
        mov     edx, dword ptr [ebp - 0x34]
        mov     ecx, dword ptr [ebp - 0x44]
L_c6f1:
        mov     ebx, dword ptr [ebp - 0x30]
        inc     edi
        add     edx, 0x8
        add     ecx, 0x8
        add     eax, 0x10
        add     esi, 0x10
        cmp     edi, ebx
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x44], ecx
        jl      L_c669
        mov     ebx, dword ptr [ebp - 0x74]
L_c715:
        mov     edx, dword ptr [g_007da670]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dx, word ptr [ebp - 0x74]
        mov     word ptr [eax + ecx*0x2], dx
        mov     dword ptr [ebp - 0x10], ebx
        mov     eax, ebx
L_c72d:
        mov     edx, dword ptr [ebp - 0x58]
        mov     ecx, dword ptr [ebp - 0x1c]
        and     eax, 0xffff
        add     edx, eax
        mov     eax, dword ptr [ebp - 0x4c]
        inc     ecx
        inc     eax
        mov     dword ptr [ebp - 0x4c], eax
        mov     eax, dword ptr [g_007da5e8]
        mov     dword ptr [ebp - 0x58], edx
        mov     edx, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [eax]
        mov     byte ptr [ecx + edx], 0x0
L_c756:
        mov     eax, dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0xc], eax
L_c75c:
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x40]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x14], eax
        jl      L_b7f6
L_c76e:
        mov     dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov     ecx, dword ptr [ebp + 0x10]
        jz      L_c77d
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L_c78a
L_c77d:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ebp + 0x10]
        shl     eax, 0x5
        add     eax, esi
L_c78a:
        mov     esi, dword ptr [ebp - 0x8]
        xor     ebx, ebx
        test    dl, dl
        mov     dword ptr [esi + 0x44], eax
        mov     word ptr [esi + 0xa], bx
        jz      L_c79f
        mov     eax, dword ptr [ecx + 0x48]
        jmp     L_c7a8
L_c79f:
        mov     edx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ecx + 0x28]
        lea     eax, [eax + edx*0x2]
L_c7a8:
        mov     ecx, dword ptr [g_007da600]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x50], eax
        xor     eax, eax
        cmp     ecx, ebx
        mov     word ptr [esi + 0x54], bx
        mov     dword ptr [ebp - 0x18], ecx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp + 0x8], ebx
        jle     L_c8ed
L_c7cb:
        mov     edx, dword ptr [g_007da600]
        mov     edx, dword ptr [edx]
        cmp     byte ptr [edx + eax], 0x0
        jnz     L_c7e1
        inc     dword ptr [ebp + 0x8]
        jmp     L_c8df
L_c7e1:
        mov     ecx, dword ptr [g_007da5f4]
        mov     dx, word ptr [ebp + 0x8]
        mov     word ptr [ecx + eax*0x2], dx
        test    byte ptr [esi + 0x13], 0x1
        jz      L_c810
        mov     ecx, dword ptr [g_007da65c]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [esi + 0x44]
        mov     dl, byte ptr [edx + eax]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edi + 0x17], dl
L_c810:
        mov     ecx, dword ptr [g_007da68c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esi + 0x44]
        mov     eax, dword ptr [esi + 0x1c]
        xor     ebx, ebx
        mov     bx, word ptr [esi + 0xa]
        mov     dword ptr [ebp - 0x64], eax
        mov     dword ptr [ebp - 0x60], edx
        shl     ebx, 0x5
        add     ebx, ecx
        mov     dword ptr [ebp - 0x2c], ebx
        mov     ecx, dword ptr [ebp - 0x60]
        fld1
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x2c]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [ebx]
        mov     eax, dword ptr [g_007b94a0]
        mov     ecx, dword ptr [ebp - 0x64]
        mov     dword ptr [ebx + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov     eax, dword ptr [ebp - 0xc]
        fstp    dword ptr [ebx]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ecx + eax*0x8]
        mov     dword ptr [ebx + 0x18], edx
        mov     eax, dword ptr [ecx + eax*0x8 + 0x4]
        mov     dword ptr [ebx + 0x1c], eax
        mov     al, byte ptr [ebp + 0x17]
        test    al, al
        jz      L_c8d5
        mov     edx, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx + 0x18]
        lea     eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x54]
        xor     eax, eax
        mov     ax, word ptr [esi + 0xa]
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea     eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_c8d5:
        inc     word ptr [esi + 0xa]
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x18]
L_c8df:
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0xc], eax
        jl      L_c7cb
        xor     ebx, ebx
L_c8ed:
        mov     eax, dword ptr [ebp - 0x40]
        xor     edx, edx
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x14], ebx
        jle     L_c9e7
L_c8fd:
        mov     eax, dword ptr [esi + 0x60]
        mov     ecx, dword ptr [g_007da5e8]
        movzx   di, byte ptr [eax + ebx]
        mov     eax, dword ptr [ecx]
        cmp     byte ptr [eax + ebx], 0x0
        jnz     L_c91e
        and     edi, 0xffff
        jmp     L_c9d6
L_c91e:
        and     edi, 0xffff
        mov     eax, 0x1
        lea     ecx, [edi - 0x1]
        cmp     ecx, eax
        mov     dword ptr [ebp + 0x8], edi
        jle     L_c9d6
L_c937:
        mov     ebx, dword ptr [g_007da5f4]
        xor     ecx, ecx
        mov     ecx, dword ptr [esi + 0x48]
        mov     cl, byte ptr [ecx + edx]
        mov     edi, ecx
        movzx   cx, cl
        and     edi, 0xff
        sub     cx, word ptr [ebx + edi*0x2]
        mov     ebx, dword ptr [esi + 0x50]
        xor     edi, edi
        mov     di, word ptr [esi + 0x54]
        mov     word ptr [ebx + edi*0x2], cx
        mov     ebx, dword ptr [g_007da5f4]
        xor     ecx, ecx
        mov     ecx, dword ptr [esi + 0x48]
        add     ecx, eax
        mov     cl, byte ptr [ecx + edx + 0x1]
        mov     edi, ecx
        and     edi, 0xff
        movzx   cx, cl
        sub     cx, word ptr [ebx + edi*0x2]
        mov     ebx, dword ptr [esi + 0x50]
        xor     edi, edi
        mov     di, word ptr [esi + 0x54]
        mov     word ptr [ebx + edi*0x2 + 0x2], cx
        mov     ebx, dword ptr [g_007da5f4]
        xor     ecx, ecx
        mov     ecx, dword ptr [esi + 0x48]
        add     ecx, eax
        mov     cl, byte ptr [ecx + edx]
        mov     edi, ecx
        and     edi, 0xff
        movzx   cx, cl
        sub     cx, word ptr [ebx + edi*0x2]
        mov     ebx, dword ptr [esi + 0x50]
        xor     edi, edi
        mov     di, word ptr [esi + 0x54]
        mov     word ptr [ebx + edi*0x2 + 0x4], cx
        add     word ptr [esi + 0x54], 0x3
        mov     edi, dword ptr [ebp + 0x8]
        inc     eax
        lea     ecx, [edi - 0x1]
        cmp     eax, ecx
        jl      L_c937
        mov     ebx, dword ptr [ebp - 0x14]
L_c9d6:
        mov     eax, dword ptr [ebp - 0x40]
        add     edx, edi
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [ebp - 0x14], ebx
        jl      L_c8fd
L_c9e7:
        mov     eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        jle     L_cd2f
        mov     ecx, dword ptr [ebp - 0x1c]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0xc], eax
        jle     L_cd2f
L_ca05:
        mov     edx, dword ptr [g_007da670]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     ax, word ptr [eax + ecx*0x2]
        mov     dword ptr [ebp - 0x18], 0x1
        and     eax, 0xffff
        mov     dword ptr [ebp + 0x8], eax
        dec     eax
        cmp     eax, 0x1
        jle     L_cd12
        mov     edx, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp - 0x8]
        lea     eax, [edx*0x8 + 0x8]
        mov     dword ptr [ebp - 0x24], eax
L_ca3d:
        test    byte ptr [ebx + 0x13], 0x1
        jz      L_caa1
        mov     ecx, dword ptr [g_007da660]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ebx + 0x44]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0xc]
        mov     dl, byte ptr [edx + eax]
        shl     ecx, 0x5
        mov     byte ptr [ecx + esi + 0x17], dl
        mov     ecx, dword ptr [g_007da660]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ebp - 0x18]
        mov     edi, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        add     edx, esi
        mov     dl, byte ptr [edx + eax + 0x1]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edi + 0x37], dl
        mov     ecx, dword ptr [g_007da660]
        mov     edx, dword ptr [ecx]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        add     edx, esi
        mov     esi, dword ptr [ebx + 0x44]
        mov     dl, byte ptr [edx + eax]
        shl     ecx, 0x5
        mov     byte ptr [ecx + esi + 0x57], dl
L_caa1:
        mov     eax, dword ptr [g_007da680]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007da684]
        mov     eax, dword ptr [edx]
        xor     esi, esi
        mov     si, word ptr [ebx + 0xa]
        mov     dword ptr [ebp + 0xffffff4c], ecx
        mov     ecx, dword ptr [ebp - 0x18]
        mov     dword ptr [ebp + 0xffffff54], eax
        mov     eax, dword ptr [ebp - 0xc]
        lea     edx, [eax + ecx]
        lea     eax, [eax + ecx + 0x1]
        mov     ecx, dword ptr [ebx + 0x44]
        shl     esi, 0x5
        add     esi, ecx
        mov     dword ptr [ebp - 0x2c], edx
        mov     dword ptr [ebp - 0x60], eax
        mov     dword ptr [ebp - 0x64], esi
        mov     ecx, dword ptr [ebp + 0xffffff54]
        fld1
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp - 0x64]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x60]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x8]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x2c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x2c]
        fmul    st(0), st(1)
        shl     eax, 0x4
        add     eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
        fld1
        fdiv    dword ptr [eax + 0xc]
        fst     dword ptr [edx + 0x4c]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld     dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp    st(0)
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov     eax, dword ptr [g_007b94a0]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x50], eax
        mov     eax, dword ptr [ebp + 0xffffff4c]
        fstp    dword ptr [esi]
        mov     edx, dword ptr [eax + ecx*0x8]
        fld     dword ptr [g_007da878]
        mov     ecx, dword ptr [eax + ecx*0x8 + 0x4]
        fmul    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x18], edx
        mov     dword ptr [esi + 0x1c], ecx
        mov     ecx, dword ptr [ebp - 0x24]
        fadd    dword ptr [g_007da870]
        mov     edx, dword ptr [eax + ecx + 0x8]
        mov     dword ptr [esi + 0x38], edx
        mov     edx, dword ptr [eax + ecx + 0xc]
        fstp    dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x3c], edx
        fld     dword ptr [g_007da87c]
        mov     edx, dword ptr [eax + ecx]
        fmul    dword ptr [esi + 0x20]
        mov     eax, dword ptr [eax + ecx + 0x4]
        mov     dword ptr [esi + 0x5c], eax
        mov     al, byte ptr [ebp + 0x17]
        test    al, al
        fadd    dword ptr [g_007da874]
        mov     dword ptr [esi + 0x58], edx
        fstp    dword ptr [esi + 0x20]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld     dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        jz      L_ccb3
        mov     edx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x50]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx + 0x18]
        lea     eax, [ecx + edx + 0x18]
        xor     edx, edx
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x54]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea     eax, [eax + ecx + 0x1c]
        xor     ecx, ecx
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x50]
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x38]
        lea     eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov     cx, word ptr [ebx + 0xa]
        mov     edx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x54]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea     eax, [ecx + edx + 0x3c]
        xor     edx, edx
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x50]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        shl     eax, 0x5
        fadd    dword ptr [eax + ecx + 0x58]
        lea     eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x54]
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x5c]
        lea     eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_ccb3:
        mov     ax, word ptr [ebx + 0xa]
        mov     edx, dword ptr [ebx + 0x50]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x54]
        add     dword ptr [ebp - 0x24], 0x8
        mov     word ptr [edx + ecx*0x2], ax
        mov     cx, word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebx + 0x50]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x54]
        inc     cx
        mov     word ptr [eax + edx*0x2 + 0x2], cx
        mov     cx, word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebx + 0x50]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x54]
        add     cx, 0x2
        mov     word ptr [eax + edx*0x2 + 0x4], cx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, 0x3
        add     word ptr [ebx + 0xa], ax
        add     word ptr [ebx + 0x54], ax
        mov     eax, dword ptr [ebp - 0x18]
        inc     eax
        dec     ecx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x18], eax
        jl      L_ca3d
L_cd12:
        mov     esi, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x1c]
        add     esi, edx
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x14], eax
        jl      L_ca05
L_cd2f:
        mov     al, byte ptr [ebp + 0x1c]
        test    al, al
        jnz     L_cd58
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [eax + 0xc]
        xor     edx, edx
        mov     dx, word ptr [ecx + 0xa]
        add     edi, edx
        xor     edx, edx
        mov     dx, word ptr [ecx + 0x54]
        mov     dword ptr [eax], edi
        add     esi, edx
        mov     dword ptr [eax + 0xc], esi
        jmp     L_cd5b
L_cd58:
        mov     ecx, dword ptr [ebp - 0x8]
L_cd5b:
        cmp     word ptr [ecx + 0xa], 0x0
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [ecx + 0x10], al
        mov     eax, dword ptr [ebp - 0x4c]
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x18
    }
}
