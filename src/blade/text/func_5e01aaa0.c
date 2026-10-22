/*
 * FUN_5e01aaa0 (1593 B) — DirectDraw wrapper: color/format matrix setup with FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a5c8;
extern int g_5e77a5a8;
extern int g_5e77a584;
extern int g_5e77a5c4;
extern int g_5e77a5a4;
extern int g_5e77a5d8;
extern int g_5e77a5b8;
extern int g_5e77a594;
extern int g_5e77a5b4;
extern int g_5e77a598;
extern int g_5e77a5d4;
extern float g_5e03628c;
extern float g_5e035aa4;
extern float g_5e0384e8;
extern float g_5e77a5ac;
extern float g_5e77a5cc;
extern float g_5e77a58c;
extern float g_5e77a530;
extern float g_5e77a534;
extern int g_5e77a6b4;
extern int g_5e77a6e0;
extern int g_5e77a6f0;
extern int g_5e77a80c;
extern int g_5e77a6e4;
extern int g_5e77a6f4;
extern int g_5e77a6e8;
extern int g_5e77a6f8;
extern int g_5e77a7e4;
extern int g_5e77a7f4;
extern int g_5e77a804;
extern int g_5e77a7ec;
extern int g_5e77a7fc;
extern int g_5e77a6dc;
extern int g_5e77a6ec;
extern int g_5e77a814;
extern int g_5e77a704;
extern int g_5e77a848;
extern int g_5e77a84c;
extern int g_5e77a6fc;
extern int g_5e77a700;
extern int g_5e77a854;
extern unsigned char g_5e77a580;
extern unsigned char g_5e77a5d5;
extern unsigned char g_5e77a5b5;
extern unsigned char g_5e77a596;
extern unsigned char g_5e77a5d6;
extern unsigned char g_5e77a5b6;

__declspec(naked) void FUN_5e01aaa0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        sub     ecx, eax
        mov     edx, dword ptr [g_5e77a5a8]
        mov     dword ptr [ebp - 0x28], ecx
        sub     edx, eax
        fild    dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [g_5e77a584]
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [ebp - 0x28], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        mov     edx, dword ptr [g_5e77a5a4]
        push    ebx
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5d8]
        mov     ebx, dword ptr [g_5e77a5b8]
        push    esi
        fstp    dword ptr [ebp - 0x4]
        fild    dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x28], ecx
        mov     esi, dword ptr [g_5e77a594]
        mov     ecx, dword ptr [g_5e77a5b4]
        push    edi
        fmul    dword ptr [g_5e03628c]
        mov     edi, dword ptr [g_5e77a598]
        and     ecx, 0xff
        shr     eax, 0x18
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, esi
        fstp    dword ptr [ebp - 0x8]
        fild    dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x28], edx
        and     eax, 0xff
        shr     edi, 0x18
        fmul    dword ptr [g_5e03628c]
        imul    eax, edi
        fstp    dword ptr [ebp - 0x10]
        fild    dword ptr [ebp - 0x28]
        fmul    dword ptr [g_5e03628c]
        shr     ebx, 0x18
        imul    ecx, ebx
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
        mov     edx, dword ptr [g_5e77a5d4]
        add     eax, 0xff
        shr     eax, 0x8
        and     esi, 0xffffff00
        add     ecx, 0xff
        or      esi, eax
        and     edx, 0xff
        mov     dword ptr [g_5e77a594], esi
        shr     ecx, 0x8
        fst     dword ptr [ebp - 0xc]
        fchs
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [g_5e77a5ac]
        fsub    dword ptr [g_5e77a5cc]
        fld     dword ptr [g_5e77a58c]
        fsub    dword ptr [g_5e77a5cc]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a530]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a534]
        imul    edx, dword ptr [ebp - 0x1c]
        mov     esi, dword ptr [g_5e77a5b4]
        add     edx, 0xff
        and     esi, 0xffffff00
        shr     edx, 0x8
        or      esi, ecx
        sub     ecx, edx
        mov     dword ptr [ebp - 0x28], ecx
        sub     eax, edx
        fild    dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [g_5e77a5b4], esi
        mov     esi, dword ptr [g_5e77a5d4]
        fstp    dword ptr [ebp - 0x20]
        fild    dword ptr [ebp - 0x28]
        and     esi, 0xffffff00
        or      esi, edx
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x8]
        mov     dword ptr [g_5e77a5d4], esi
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e0], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6e0]
        mov     ecx, dword ptr [g_5e77a6b4]
        test    eax, eax
        mov     dword ptr [g_5e77a6f0], ecx
        jge     L_ac86
        add     eax, 0x3fff
    L_ac86:
        sar     eax, 0xe
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [g_5e77a80c], eax
        mov     al, byte ptr [g_5e77a580]
        test    al, 0x2
        jnz     L_af11
        mov     ecx, dword ptr [g_5e77a594]
        xor     edx, edx
        mov     dl, byte ptr [g_5e77a5d5]
        xor     eax, eax
        mov     al, byte ptr [g_5e77a5b5]
        mov     esi, edx
        xor     edx, edx
        imul    esi, dword ptr [ebp - 0x1c]
        mov     dl, ch
        imul    eax, ebx
        imul    edx, edi
        add     edx, 0xff
        add     eax, 0xff
        shr     edx, 0x8
        mov     dword ptr [ebp - 0x20], edx
        and     ch, 0x0
        shl     edx, 0x8
        add     esi, 0xff
        or      ecx, edx
        shr     eax, 0x8
        shr     esi, 0x8
        mov     edx, eax
        sub     eax, esi
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [ebp - 0x20]
        fild    dword ptr [ebp - 0x24]
        sub     eax, esi
        mov     dword ptr [g_5e77a594], ecx
        mov     dword ptr [ebp - 0x20], eax
        mov     ecx, dword ptr [g_5e77a5b4]
        fstp    dword ptr [ebp - 0x24]
        fild    dword ptr [ebp - 0x20]
        and     ch, 0x0
        shl     edx, 0x8
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x8]
        or      ecx, edx
        mov     edx, esi
        mov     dword ptr [g_5e77a5b4], ecx
        mov     ecx, dword ptr [g_5e77a5d4]
        fsubp   st(1), st(0)
        and     ch, 0x0
        shl     edx, 0x8
        fmul    dword ptr [ebp - 0xc]
        or      ecx, edx
        mov     dword ptr [g_5e77a5d4], ecx
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e4], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6e4]
        mov     ecx, dword ptr [g_5e77a6b4]
        test    eax, eax
        mov     dword ptr [g_5e77a6f4], ecx
        jge     L_ad9d
        add     eax, 0x3fff
    L_ad9d:
        xor     ecx, ecx
        xor     edx, edx
        mov     cl, byte ptr [g_5e77a596]
        mov     dl, byte ptr [g_5e77a5d6]
        sar     eax, 0xe
        imul    ecx, edi
        mov     dword ptr [ebp - 0x20], eax
        xor     eax, eax
        mov     al, byte ptr [g_5e77a5b6]
        mov     esi, edx
        imul    esi, dword ptr [ebp - 0x1c]
        imul    eax, ebx
        mov     edx, dword ptr [g_5e77a594]
        add     ecx, 0xff
        shr     ecx, 0x8
        mov     edi, ecx
        add     eax, 0xff
        and     edx, 0xff00ffff
        add     esi, 0xff
        shl     edi, 0x10
        shr     eax, 0x8
        or      edx, edi
        mov     edi, eax
        shr     esi, 0x8
        sub     eax, esi
        sub     ecx, esi
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [g_5e77a594], edx
        fild    dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x2c], ecx
        mov     edx, dword ptr [g_5e77a5b4]
        and     edx, 0xff00ffff
        fstp    dword ptr [ebp - 0x24]
        fild    dword ptr [ebp - 0x2c]
        shl     edi, 0x10
        or      edx, edi
        mov     edi, esi
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x8]
        mov     dword ptr [g_5e77a5b4], edx
        mov     edx, dword ptr [g_5e77a5d4]
        and     edx, 0xff00ffff
        fsubp   st(1), st(0)
        shl     edi, 0x10
        or      edx, edi
        fmul    dword ptr [ebp - 0xc]
        mov     dword ptr [g_5e77a5d4], edx
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e8], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6f8], ecx
        mov     ecx, dword ptr [g_5e77a6e8]
        test    ecx, ecx
        jge     L_aead
        add     ecx, 0x3fff
    L_aead:
        mov     eax, dword ptr [ebp - 0x28]
        mov     esi, dword ptr [ebp - 0x20]
        sar     ecx, 0xe
        mov     edi, ecx
        and     eax, 0x3ff
        and     edi, 0x3ff
        mov     edx, edi
        shl     edx, 0x14
        or      edx, eax
        mov     dword ptr [g_5e77a7e4], edx
        mov     edx, esi
        and     edx, 0x3ff
        mov     ebx, edx
        shl     ebx, 0xb
        or      ebx, eax
        mov     dword ptr [g_5e77a7f4], ebx
        mov     ebx, ecx
        shl     ebx, 0xb
        or      ebx, edx
        shl     ebx, 0xb
        or      ebx, eax
        mov     al, byte ptr [g_5e77a580]
        test    al, 0x10
        mov     dword ptr [g_5e77a804], ebx
        jnz     L_af1f
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7ec], edx
        mov     dword ptr [g_5e77a7fc], edi
        jmp     L_af17
    L_af11:
        mov     esi, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0x2c]
    L_af17:
        test    al, 0x10
        jz      L_afed
    L_af1f:
        mov     eax, dword ptr [g_5e77a5d4]
        mov     edx, dword ptr [g_5e77a5b4]
        shr     eax, 0x18
        shr     edx, 0x18
        sub     edx, eax
        mov     dword ptr [ebp - 0x2c], edx
        mov     edx, dword ptr [g_5e77a594]
        fild    dword ptr [ebp - 0x2c]
        shr     edx, 0x18
        sub     edx, eax
        fstp    dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x2c], edx
        fild    dword ptr [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6dc], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6ec], edx
        mov     edx, dword ptr [g_5e77a6dc]
        test    edx, edx
        mov     eax, edx
        jge     L_afbd
        lea     eax, [edx + 0x3fff]
    L_afbd:
        sar     eax, 0xe
        and     eax, 0x3ff
        and     esi, 0x3ff
        shl     eax, 0xb
        or      esi, eax
        and     ecx, 0x3ff
        shl     esi, 0xa
        or      ecx, eax
        mov     dword ptr [g_5e77a7ec], esi
        mov     dword ptr [g_5e77a814], edx
        mov     dword ptr [g_5e77a7fc], ecx
    L_afed:
        mov     ecx, dword ptr [g_5e77a598]
        mov     eax, 0xff
        shr     ecx, 0x18
        sub     eax, ecx
        mov     ecx, dword ptr [g_5e77a704]
        test    ecx, ecx
        jz      L_b02a
        shr     eax, 0x3
        imul    eax, dword ptr [g_5e77a848]
        add     eax, 0x1f07c1f
        pop     edi
        shr     eax, 0x5
        and     eax, 0x1f07c1f
        pop     esi
        mov     dword ptr [g_5e77a84c], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_b02a:
        mov     edx, dword ptr [g_5e77a5d8]
        mov     ecx, 0xff
        shr     edx, 0x18
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5b8]
        shr     edx, 0x18
        mov     esi, 0xff
        sub     eax, ecx
        sub     esi, edx
        sub     esi, ecx
        mov     dword ptr [ebp - 0x2c], esi
        fild    dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x2c], eax
        fstp    dword ptr [ebp - 0x28]
        fild    dword ptr [ebp - 0x2c]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6fc], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6fc]
        mov     ecx, dword ptr [g_5e77a6b4]
        test    eax, eax
        mov     dword ptr [g_5e77a700], ecx
        jge     L_b0ca
        add     eax, 0x3fff
    L_b0ca:
        sar     eax, 0xe
        pop     edi
        pop     esi
        mov     dword ptr [g_5e77a854], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
