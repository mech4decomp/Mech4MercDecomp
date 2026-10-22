/*
 * FUN_5e018e00 (1627 B) — DirectDraw wrapper: matrix/format setup with FPU.
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
extern int g_5e77a5d4;
extern int g_5e77a5b4;
extern int g_5e77a594;
extern float g_5e03628c;
extern float g_5e035aa4;
extern float g_5e0384e8;
extern float g_5e036298;
extern float g_5e035aa0;
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
extern float g_5e77a590;
extern float g_5e77a59c;
extern float g_5e77a518;
extern float g_5e77a5a0;
extern float g_5e77a524;
extern float g_5e77a5b0;
extern float g_5e77a5bc;
extern float g_5e77a51c;
extern float g_5e77a5c0;
extern float g_5e77a528;
extern float g_5e77a5d0;
extern float g_5e77a5dc;
extern float g_5e77a520;
extern float g_5e77a5e0;
extern float g_5e77a52c;
extern float g_5e77a538;
extern float g_5e77a540;
extern float g_5e77a544;
extern float g_5e77a54c;
extern float g_5e77a550;
extern float g_5e77a558;
extern float g_5e77a53c;
extern float g_5e77a548;
extern float g_5e77a554;
extern int g_5e77a55c;
extern int g_5e77a560;
extern unsigned char g_5e77a580;
extern unsigned char g_5e77a5d5;
extern unsigned char g_5e77a5b5;
extern unsigned char g_5e77a595;
extern unsigned char g_5e77a5d6;
extern unsigned char g_5e77a5b6;
extern unsigned char g_5e77a596;

__declspec(naked) void FUN_5e018e00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        sub     ecx, eax
        mov     edx, dword ptr [g_5e77a5a8]
        mov     dword ptr [ebp - 0x20], ecx
        sub     edx, eax
        fild    dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [g_5e77a584]
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [ebp - 0x20], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        mov     edx, dword ptr [g_5e77a5a4]
        push    ebx
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5d4]
        and     eax, 0xff
        push    esi
        fstp    dword ptr [ebp - 0x4]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [g_5e77a5b4]
        and     ecx, 0xff
        push    edi
        fmul    dword ptr [g_5e03628c]
        sub     ecx, eax
        fstp    dword ptr [ebp - 0x8]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], edx
        mov     edx, dword ptr [g_5e77a594]
        and     edx, 0xff
        fmul    dword ptr [g_5e03628c]
        sub     edx, eax
        fstp    dword ptr [ebp - 0x10]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], ecx
        fmul    dword ptr [g_5e03628c]
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
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
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], edx
        fstp    dword ptr [ebp - 0x1c]
        fild    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e0], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6e0]
        mov     ecx, dword ptr [g_5e77a6b4]
        xor     edi, edi
        mov     dword ptr [g_5e77a6f0], ecx
        cmp     eax, edi
        jge     L_f6e
        add     eax, 0x3fff
    L_f6e:
        mov     bl, byte ptr [g_5e77a580]
        sar     eax, 0xe
        test    bl, 0x2
        mov     dword ptr [g_5e77a80c], eax
        jnz     L_9393
        xor     ecx, ecx
        xor     edx, edx
        mov     cl, byte ptr [g_5e77a5d5]
        mov     dl, byte ptr [g_5e77a5b5]
        sub     edx, ecx
        mov     dword ptr [ebp - 0x24], edx
        xor     edx, edx
        fild    dword ptr [ebp - 0x24]
        mov     dl, byte ptr [g_5e77a595]
        sub     edx, ecx
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e4], ecx
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     esi, dword ptr [g_5e77a6e4]
        mov     edx, dword ptr [g_5e77a6b4]
        cmp     esi, edi
        mov     dword ptr [g_5e77a6f4], edx
        jge     L_9021
        add     esi, 0x3fff
    L_9021:
        xor     ecx, ecx
        xor     edx, edx
        mov     cl, byte ptr [g_5e77a5d6]
        mov     dl, byte ptr [g_5e77a5b6]
        sub     edx, ecx
        mov     dword ptr [ebp - 0x24], edx
        xor     edx, edx
        fild    dword ptr [ebp - 0x24]
        mov     dl, byte ptr [g_5e77a596]
        sub     edx, ecx
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        sar     esi, 0xe
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e8], ecx
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6e8]
        mov     edx, dword ptr [g_5e77a6b4]
        cmp     ecx, edi
        mov     dword ptr [g_5e77a6f8], edx
        jge     L_90c0
        add     ecx, 0x3fff
    L_90c0:
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
        mov     dword ptr [g_5e77a804], ebx
        mov     bl, byte ptr [g_5e77a580]
        test    bl, 0x10
        jnz     L_911e
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7ec], edx
        mov     dword ptr [g_5e77a7fc], edi
    L_911e:
        xor     edi, edi
    L_9120:
        test    bl, 0x10
        jz      L_91f7
        mov     eax, dword ptr [g_5e77a5d4]
        mov     edx, dword ptr [g_5e77a5b4]
        shr     eax, 0x18
        shr     edx, 0x18
        sub     edx, eax
        mov     dword ptr [ebp - 0x24], edx
        mov     edx, dword ptr [g_5e77a594]
        fild    dword ptr [ebp - 0x24]
        shr     edx, 0x18
        sub     edx, eax
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6dc], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6ec], edx
        mov     edx, dword ptr [g_5e77a6dc]
        cmp     edx, edi
        mov     eax, edx
        jge     L_91c7
        lea     eax, [edx + 0x3fff]
    L_91c7:
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
    L_91f7:
        fld     dword ptr [g_5e77a590]
        fmul    dword ptr [g_5e77a59c]
        fstp    dword ptr [g_5e77a518]
        fld     dword ptr [g_5e77a5a0]
        fmul    dword ptr [g_5e77a590]
        fstp    dword ptr [g_5e77a524]
        fld     dword ptr [g_5e77a5b0]
        fmul    dword ptr [g_5e77a5bc]
        fstp    dword ptr [g_5e77a51c]
        fld     dword ptr [g_5e77a5c0]
        fmul    dword ptr [g_5e77a5b0]
        fstp    dword ptr [g_5e77a528]
        fld     dword ptr [g_5e77a5d0]
        fmul    dword ptr [g_5e77a5dc]
        fstp    dword ptr [g_5e77a520]
        fld     dword ptr [g_5e77a5e0]
        fmul    dword ptr [g_5e77a5d0]
        fstp    dword ptr [g_5e77a52c]
        fld     dword ptr [g_5e77a5b0]
        fsub    dword ptr [g_5e77a5d0]
        fld     dword ptr [g_5e77a590]
        fsub    dword ptr [g_5e77a5d0]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a538]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a540]
        fld     dword ptr [g_5e77a51c]
        fsub    dword ptr [g_5e77a520]
        fld     dword ptr [g_5e77a518]
        fsub    dword ptr [g_5e77a520]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a544]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a54c]
        fld     dword ptr [g_5e77a528]
        fsub    dword ptr [g_5e77a52c]
        fld     dword ptr [g_5e77a524]
        fsub    dword ptr [g_5e77a52c]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a550]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a558]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [g_5e036298]
        fstp    dword ptr [g_5e77a53c]
        fld     dword ptr [g_5e77a544]
        fmul    dword ptr [g_5e036298]
        or      ecx, 0xffffffff
        fstp    dword ptr [g_5e77a548]
        fld     dword ptr [g_5e77a550]
        fmul    dword ptr [g_5e036298]
        fstp    dword ptr [g_5e77a554]
        fld     dword ptr [g_5e77a544]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [g_5e77a518]
        fsubp   st(1), st(0)
        fcom    dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        test ah, 0x41
        jnz     L_939e
        fstp    st(0)
        mov     dword ptr [g_5e77a55c], edi
        jmp     L_93de
    L_9393:
        mov     esi, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x24]
        jmp     L_9120
    L_939e:
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        les eax, dword ptr [ecx]
        jnz     L_93d8
        fld     dword ptr [g_5e77a54c]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    dword ptr [g_5e77a518]
        mov     dword ptr [g_5e77a55c], edi
        fsubp   st(1), st(0)
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        les eax, dword ptr [ecx]
        jz      L_93de
    L_93d8:
        mov     dword ptr [g_5e77a55c], ecx
    L_93de:
        fld     dword ptr [g_5e77a550]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [g_5e77a524]
        fsubp   st(1), st(0)
        fcom    dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        test ah, 0x41
        jnz     L_9414
        mov     dword ptr [g_5e77a560], edi
        pop     edi
        pop     esi
        pop     ebx
        fstp    st(0)
        mov     esp, ebp
        pop     ebp
        ret
    L_9414:
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        les eax, dword ptr [ecx]
        jnz     L_944e
        fld     dword ptr [g_5e77a558]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    dword ptr [g_5e77a524]
        mov     dword ptr [g_5e77a560], edi
        fsubp   st(1), st(0)
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        les eax, dword ptr [ecx]
        jz      L_9454
    L_944e:
        mov     dword ptr [g_5e77a560], ecx
    L_9454:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
