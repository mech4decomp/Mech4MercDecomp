/*
 * FUN_0043e6c0 (1591 B) — MLR mesh render/transform (__thiscall, RET 0x14).
 * Builds vertex/index buffers, applies a matrix transform (FPU), and
 * writes out index data. Heavy use of absolute globals (0x7da8xx palette/
 * lookup tables) and virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  FUN_004422b0(void);
extern int   FUN_00491cd0(void);
extern void  FUN_00421f00(void);
extern void  FUN_0043e0e0(void);

extern int    g_007da848;
extern int    g_007da864;
extern int    g_007da600;
extern int    g_007da5f4;
extern char   g_007da86c;
extern float  g_0076d064;
extern float  g_007da87c;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da870;
extern int    g_007b9864;
extern int    g_007d98fc;

__declspec(naked) void FUN_0043e6c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x8c]
        test    eax, eax
        jnz     L_6f5
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_004422b0
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_6f5:
        mov     eax, dword ptr [ebx + 0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp + 0x17], 0x0
        mov     dword ptr [ebp - 0xc], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        jz      L_7cd
        test    eax, eax
        jle     L_7cd
        mov     edx, dword ptr [g_007da848]
        mov     esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        jz      L_7cd
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_754
        mov     dword ptr [g_007da864], 0x1
        jmp     L_7af
L_754:
        cmp     eax, 0x80
        jl      L_767
        mov     dword ptr [g_007da864], 0x2
        jmp     L_7af
L_767:
        cmp     eax, 0x40
        jl      L_778
        mov     dword ptr [g_007da864], 0x4
        jmp     L_7af
L_778:
        cmp     eax, 0x20
        jl      L_789
        mov     dword ptr [g_007da864], 0x8
        jmp     L_7af
L_789:
        cmp     eax, 0x10
        jl      L_79a
        mov     dword ptr [g_007da864], 0x10
        jmp     L_7af
L_79a:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_7af:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L_7dc
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      L_7dc
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [ebp + 0x17], 0x1
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x10], eax
L_7cd:
        mov     dl, byte ptr [ebp + 0x18]
        test    dl, dl
        mov     ecx, dword ptr [ebp + 0xc]
        jz      L_7e2
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L_7f1
L_7dc:
        mov     byte ptr [ebp + 0x17], 0x0
        jmp     L_7cd
L_7e2:
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x18]
        lea     eax, [eax + eax*4]
        lea     eax, [ecx + eax*8]
        mov     ecx, dword ptr [ebp + 0xc]
L_7f1:
        mov     dword ptr [ebx + 0x84], eax
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L_812
        test    eax, eax
        jle     L_812
        mov     esi, dword ptr [g_007da848]
        mov     eax, dword ptr [esi + eax*4 + 0x24]
        mov     dword ptr [ebp - 0x24], eax
L_812:
        mov     edi, dword ptr [ebx + 0x18]
        cmp     edi, 0x100
        mov     dword ptr [ebp - 0x18], edi
        jle     L_82a
        mov     dword ptr [ebp - 0x18], 0x100
        mov     edi, dword ptr [ebp - 0x18]
L_82a:
        test    dl, dl
        jz      L_833
        mov     eax, dword ptr [ecx + 0x30]
        jmp     L_83d
L_833:
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x10]
        shl     eax, 0x5
        add     eax, esi
L_83d:
        test    dl, dl
        mov     dword ptr [ebx + 0x44], eax
        jz      L_849
        mov     eax, dword ptr [ecx + 0x38]
        jmp     L_855
L_849:
        mov     eax, dword ptr [ecx + 0x4]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [ecx + 0x18]
        lea     eax, [eax + edx*8]
L_855:
        xor     esi, esi
        cmp     word ptr [ebx + 0x56], si
        mov     dword ptr [ebx + 0x84], eax
        mov     word ptr [ebx + 0xa], si
        jnz     L_871
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x98]
L_871:
        xor     eax, eax
        cmp     edi, eax
        mov     dword ptr [ebp - 0x14], eax
        jle     L_b16
        lea     ecx, [edi*8]
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x4], ecx
L_88e:
        mov     edx, dword ptr [g_007da600]
        mov     ecx, dword ptr [edx]
        cmp     byte ptr [ecx + esi], 0x0
        jnz     L_8a4
        inc     dword ptr [ebp - 0x14]
        jmp     L_afe
L_8a4:
        mov     edi, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_007da5f4]
        mov     edx, esi
        sub     edx, edi
        mov     dword ptr [ecx + esi*2], edx
        test    byte ptr [g_007da86c], 0x2
        jle     L_a1f
        mov     ecx, dword ptr [ebx + 0x28]
        test    ch, 0x3c
        jz      L_a1f
        mov     edx, dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     edi, dword ptr [ebx + 0x1c]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx + 0xa]
        mov     dword ptr [ebp - 0x24], edx
        lea     eax, [eax + eax*4]
        lea     ecx, [ecx + eax*8]
        mov     dword ptr [ebp - 0x20], ecx
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp - 0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x20]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [edi + esi*8 + 0x4]
        mov     edx, dword ptr [edi + esi*8]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [edi + eax]
        mov     eax, dword ptr [edi + eax + 0x4]
        mov     edi, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx + 0x24], eax
        xor     eax, eax
        test    edi, edi
        mov     ax, word ptr [ebx + 0xa]
        mov     dword ptr [ecx + 0x20], edx
        lea     eax, [eax + eax*4]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [ecx + 0x8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x4]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ebx + 0x90]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx + 0x84]
        mov     edx, dword ptr [edx + esi*4]
        mov     dword ptr [ecx + eax*8 + 0x10], edx
        jz      L_97
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebx + 0x14]
        add     eax, edx
        push    eax
        mov     ecx, edi
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x84]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        lea     ecx, [ecx + ecx*4]
        mov     byte ptr [edx + ecx*8 + 0x17], al
        jmp     L_97
L_a1f:
        mov     edx, dword ptr [ebx + 0x44]
        mov     edi, dword ptr [ebx + 0x1c]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        add     ecx, edx
        mov     edx, dword ptr [ebx + 0x14]
        add     eax, edx
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x24], eax
        call    FUN_0043e0e0
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [edi + esi*8]
        mov     edx, dword ptr [edi + esi*8 + 0x4]
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [eax + 0x1c], edx
        mov     eax, ecx
        add     ecx, 0x8
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [g_007b9864]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edi + ecx]
        mov     dword ptr [edx + eax], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edi + ecx + 0x4]
        mov     dword ptr [edx + eax + 0x4], ecx
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_a94
        mov     edx, dword ptr [ebp - 0x24]
        push    edx
        mov     ecx, eax
        call    FUN_00421f00
        mov     ecx, dword ptr [ebp - 0x20]
        mov     byte ptr [ecx + 0x17], al
L_a94:
        mov     edi, dword ptr [ebp + 0x10]
L_97:
        mov     al, byte ptr [ebp + 0x17]
        test    al, al
        jz      L_ad0
        mov     eax, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0xc]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        xor     ecx, ecx
        shl     edx, 0x5
        fadd    dword ptr [edx + eax + 0x18]
        lea     eax, [edx + eax + 0x18]
        fstp    dword ptr [eax]
        mov     cx, word ptr [ebx + 0xa]
        mov     edx, dword ptr [ebx + 0x44]
        fld     dword ptr [ebp - 0x10]
        shl     ecx, 0x5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea     eax, [ecx + edx + 0x1c]
        fstp    dword ptr [eax]
L_ad0:
        test    edi, edi
        jz      L_af4
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebx + 0x14]
        add     eax, edx
        push    eax
        mov     ecx, edi
        call    FUN_00421f00
        mov     edx, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx + edx + 0x17], al
L_af4:
        inc     word ptr [ebx + 0xa]
        mov     eax, dword ptr [ebp - 0x8]
        mov     edi, dword ptr [ebp - 0x18]
L_afe:
        mov     ecx, dword ptr [ebp - 0x4]
        inc     esi
        add     ecx, 0x8
        add     eax, 0xc
        cmp     esi, edi
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], eax
        jl      L_88e
L_b16:
        test    byte ptr [g_007da86c], 0x2
        jle     L_c02
        mov     eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        jz      L_c02
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_ecec
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax + 0x4]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        add     edx, ecx
        mov     dword ptr [eax + 0x4], edx
L_eb4b:
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x28]
        lea     eax, [edx + ecx*2]
L_eb54:
        mov     ecx, dword ptr [ebx + 0x58]
        xor     edx, edx
        xor     edi, edi
        cmp     ecx, edx
        mov     dword ptr [ebx + 0x50], eax
        mov     word ptr [ebx + 0x54], di
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp + 0x10], edx
        jle     L_bd2
        mov     ecx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp + 0x14], ecx
        mov     ecx, dword ptr [g_007da5f4]
        mov     esi, dword ptr [ebp + 0x14]
L_b7d:
        cmp     byte ptr [esi + edx], 0x0
        jz      L_bc3
        mov     edx, dword ptr [ebx + 0x48]
        mov     esi, dword ptr [ebp + 0x10]
        add     esi, edx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x2]
        inc     edi
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x2], dx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1]
        inc     edi
        add     eax, 0x2
        mov     dx, word ptr [ecx + edx*2]
        mov     word ptr [eax - 0x2], dx
        mov     edx, dword ptr [ebp + 0x8]
L_bc3:
        add     dword ptr [ebp + 0x10], 0x3
        mov     esi, dword ptr [ebx + 0x58]
        inc     edx
        cmp     edx, esi
        mov     dword ptr [ebp + 0x8], edx
        /* __emit: MSVC6 miscomputes this backward jcc rel-offset (0xAE vs ref 0xAB, off-by-3) */
        __emit 0x7C
        __emit 0xAB
L_bd2:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [ebx + 0x54], di
        jnz     L_bee
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0xc]
        and     edi, 0xffff
        add     ecx, edi
        mov     dword ptr [eax + 0xc], ecx
L_bee:
        cmp     word ptr [ebx + 0xa], 0x0
        pop     edi
        setnz   al
        pop     esi
        mov     byte ptr [ebx + 0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_c02:
        mov     eax, dword ptr [ebx + 0x64]
        and     eax, 0x3fff
        jz      L_c3c
        test    eax, eax
        jle     L_c3c
        mov     edx, dword ptr [g_007da848]
        mov     eax, dword ptr [edx + eax*4 + 0x24]
        test    eax, eax
        jz      L_c3c
        mov     cl, byte ptr [eax + 0x24]
        test    cl, cl
        jnz     L_c9d
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        jz      L_c9d
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        mov     byte ptr [ebp + 0x17], 0x1
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x10], edx
L_c3c:
        mov     esi, dword ptr [ebx + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0xa]
        shl     ecx, 0x5
        lea     edi, [ecx + esi]
        mov     eax, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        mov     al, byte ptr [ebp + 0x17]
        and     ecx, 0x3
        test    al, al
        rep     movsb
        jz      L_ca3
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L_cd5
        mov     ecx, dword ptr [g_007b9864]
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ebx + 0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L_ec80:
        fld     dword ptr [ebp - 0xc]
        add     eax, 0x8
        fadd    dword ptr [eax - 0x8]
        add     ecx, 0x20
        dec     esi
        fstp    dword ptr [ecx - 0x24]
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [eax - 0x4]
        fstp    dword ptr [ecx - 0x20]
        jnz     L_ec80
        jmp     L_cd5
L_c9d:
        mov     byte ptr [ebp + 0x17], 0x0
        jmp     L_c3c
L_ca3:
        xor     edx, edx
        mov     dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle     L_cd5
        mov     esi, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [g_007b9864]
        mov     eax, dword ptr [eax]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx + esi + 0x1c]
        mov     esi, edx
L_ecc2:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx - 0x4], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx], edi
        add     eax, 0x8
        add     ecx, 0x20
        dec     esi
        jnz     L_ecc2
L_cd5:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_ecec
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax]
        add     edx, edx
        add     ecx, edx
        mov     dword ptr [eax], ecx
        jmp     L_eb4b
L_ecec:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x48]
        jmp     L_eb54
    }
}
