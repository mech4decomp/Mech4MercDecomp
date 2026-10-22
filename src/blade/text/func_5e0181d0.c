/*
 * FUN_5e0181d0 (1399 B) — matrix/vector math update with FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* DAT_5e77a588 */
extern int g_5e77a5c8;   /* DAT_5e77a5c8 */
extern int g_5e77a5a8;   /* DAT_5e77a5a8 */
extern int g_5e77a584;   /* DAT_5e77a584 */
extern int g_5e77a5c4;   /* DAT_5e77a5c4 */
extern int g_5e77a5a4;   /* DAT_5e77a5a4 */
extern int g_5e77a5d4;   /* DAT_5e77a5d4 */
extern int g_5e77a5b4;   /* DAT_5e77a5b4 */
extern int g_5e77a594;   /* DAT_5e77a594 */
extern int g_5e77a6b4;   /* DAT_5e77a6b4 */
extern int g_5e77a6e0;   /* DAT_5e77a6e0 */
extern int g_5e77a6f0;   /* DAT_5e77a6f0 */
extern int g_5e77a80c;   /* DAT_5e77a80c */
extern int g_5e77a580;   /* DAT_5e77a580 */
extern int g_5e77a5d5;   /* DAT_5e77a5d5 */
extern int g_5e77a5b5;   /* DAT_5e77a5b5 */
extern int g_5e77a595;   /* DAT_5e77a595 */
extern int g_5e77a6e4;   /* DAT_5e77a6e4 */
extern int g_5e77a6f4;   /* DAT_5e77a6f4 */
extern int g_5e77a5d6;   /* DAT_5e77a5d6 */
extern int g_5e77a5b6;   /* DAT_5e77a5b6 */
extern int g_5e77a596;   /* DAT_5e77a596 */
extern int g_5e77a6e8;   /* DAT_5e77a6e8 */
extern int g_5e77a6f8;   /* DAT_5e77a6f8 */
extern int g_5e77a7e4;   /* DAT_5e77a7e4 */
extern int g_5e77a7f4;   /* DAT_5e77a7f4 */
extern int g_5e77a804;   /* DAT_5e77a804 */
extern int g_5e77a7ec;   /* DAT_5e77a7ec */
extern int g_5e77a7fc;   /* DAT_5e77a7fc */
extern int g_5e77a6dc;   /* DAT_5e77a6dc */
extern int g_5e77a6ec;   /* DAT_5e77a6ec */
extern int g_5e77a814;   /* DAT_5e77a814 */
extern int g_5e77a7d4;   /* DAT_5e77a7d4 */
extern int g_5e77a6d4;   /* DAT_5e77a6d4 */
extern int g_5e77a7d8;   /* DAT_5e77a7d8 */
extern int g_5e77a6d8;   /* DAT_5e77a6d8 */
extern int g_5e77a55c;   /* DAT_5e77a55c */
extern int g_5e77a560;   /* DAT_5e77a560 */
extern float g_5e03628c; /* DAT_5e03628c */
extern float g_5e035aa4; /* DAT_5e035aa4 */
extern float g_5e77a5ac; /* DAT_5e77a5ac */
extern float g_5e77a5cc; /* DAT_5e77a5cc */
extern float g_5e77a58c; /* DAT_5e77a58c */
extern float g_5e77a530; /* DAT_5e77a530 */
extern float g_5e77a534; /* DAT_5e77a534 */
extern float g_5e0384e8; /* DAT_5e0384e8 */
extern float g_5e77a5bc; /* DAT_5e77a5bc */
extern float g_5e77a5dc; /* DAT_5e77a5dc */
extern float g_5e77a59c; /* DAT_5e77a59c */
extern float g_5e77a564; /* DAT_5e77a564 */
extern float g_5e77a56c; /* DAT_5e77a56c */
extern float g_5e77a5c0; /* DAT_5e77a5c0 */
extern float g_5e77a5e0; /* DAT_5e77a5e0 */
extern float g_5e77a5a0; /* DAT_5e77a5a0 */
extern float g_5e77a568; /* DAT_5e77a568 */
extern float g_5e77a570; /* DAT_5e77a570 */
extern float g_5e035aa0; /* DAT_5e035aa0 */

__declspec(naked) void FUN_5e0181d0(void)
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
        jge     L_1833e
        add     eax, 0x3fff
    L_1833e:
        mov     bl, byte ptr [g_5e77a580]
        sar     eax, 0xe
        test    bl, 0x2
        mov     dword ptr [g_5e77a80c], eax
        jnz     L_186b1
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
        jge     L_183f1
        add     esi, 0x3fff
    L_183f1:
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
        jge     L_18490
        add     ecx, 0x3fff
    L_18490:
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
        jnz     L_184ee
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7ec], edx
        mov     dword ptr [g_5e77a7fc], edi
    L_184ee:
        xor     edi, edi
    L_184f0:
        test    bl, 0x10
        jz      L_185c7
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
        jge     L_18597
        lea     eax, [edx + 0x3fff]
    L_18597:
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
    L_185c7:
        fld     dword ptr [g_5e77a5bc]
        fsub    dword ptr [g_5e77a5dc]
        fld     dword ptr [g_5e77a59c]
        fsub    dword ptr [g_5e77a5dc]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a564]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a56c]
        fld     dword ptr [g_5e77a5c0]
        fsub    dword ptr [g_5e77a5e0]
        fld     dword ptr [g_5e77a5a0]
        fsub    dword ptr [g_5e77a5e0]
        fld     st(1)
        fmul    dword ptr [ebp - 0x4]
        fld     st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a568]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a570]
        fld     dword ptr [g_5e77a564]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a7d4], eax
        shl     eax, 0x4
        mov     dword ptr [g_5e77a6d4], eax
        fld     dword ptr [g_5e77a568]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [g_5e77a564]
        mov     eax, dword ptr [g_5e77a6b4]
        or      ecx, 0xffffffff
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [g_5e77a7d8], eax
        shl     eax, 0x4
        mov     dword ptr [g_5e77a6d8], eax
        fnstsw ax
        test    ah, 0x41
        jnz     L_186bc
        mov     dword ptr [g_5e77a55c], edi
        jmp     L_186ee
    L_186b1:
        mov     esi, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x24]
        jmp     L_184f0
    L_186bc:
        fld     dword ptr [g_5e77a564]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test    ah, 0x1
        jnz     L_186e8
        fld     dword ptr [g_5e77a56c]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [g_5e77a55c], edi
        fnstsw ax
        test    ah, 0x1
        jz      L_186ee
    L_186e8:
        mov     dword ptr [g_5e77a55c], ecx
    L_186ee:
        fld     dword ptr [g_5e77a568]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test    ah, 0x41
        jnz     L_1870e
        mov     dword ptr [g_5e77a560], edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_1870e:
        fld     dword ptr [g_5e77a568]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        test    ah, 0x1
        jnz     L_1873a
        fld     dword ptr [g_5e77a570]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [g_5e77a560], edi
        fnstsw ax
        test    ah, 0x1
        jz      L_18740
    L_1873a:
        mov     dword ptr [g_5e77a560], ecx
    L_18740:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
