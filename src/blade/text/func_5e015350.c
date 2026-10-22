/*
 * FUN_5e015350 (566 B) — DirectDraw surface format/creation body.
 * Heavy FPU matrix/interpolation math with FXCH/FDIVR/FCOMP + FNSTSW.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;      /* DAT_5e77a588 */
extern int g_5e77a5c8;      /* DAT_5e77a5c8 */
extern int g_5e77a5a8;      /* DAT_5e77a5a8 */
extern int g_5e77a584;      /* DAT_5e77a584 */
extern int g_5e77a5c4;      /* DAT_5e77a5c4 */
extern int g_5e77a5a4;      /* DAT_5e77a5a4 */
extern int g_5e77a6b4;      /* DAT_5e77a6b4 */
extern int g_5e77a7d4;      /* DAT_5e77a7d4 */
extern int g_5e77a6d4;      /* DAT_5e77a6d4 */
extern int g_5e77a7d8;      /* DAT_5e77a7d8 */
extern int g_5e77a6d8;      /* DAT_5e77a6d8 */
extern int g_5e77a55c;      /* DAT_5e77a55c */
extern int g_5e77a560;      /* DAT_5e77a560 */

extern float g_5e03628c;    /* DAT_5e03628c */
extern float g_5e035aa4;    /* DAT_5e035aa4 */
extern float g_5e77a5ac;    /* DAT_5e77a5ac */
extern float g_5e77a5cc;    /* DAT_5e77a5cc */
extern float g_5e77a58c;    /* DAT_5e77a58c */
extern float g_5e77a530;    /* DAT_5e77a530 */
extern float g_5e77a534;    /* DAT_5e77a534 */
extern float g_5e77a5bc;    /* DAT_5e77a5bc */
extern float g_5e77a5dc;    /* DAT_5e77a5dc */
extern float g_5e77a59c;    /* DAT_5e77a59c */
extern float g_5e77a564;    /* DAT_5e77a564 */
extern float g_5e77a56c;    /* DAT_5e77a56c */
extern float g_5e77a5c0;    /* DAT_5e77a5c0 */
extern float g_5e77a5e0;    /* DAT_5e77a5e0 */
extern float g_5e77a5a0;    /* DAT_5e77a5a0 */
extern float g_5e77a568;    /* DAT_5e77a568 */
extern float g_5e77a570;    /* DAT_5e77a570 */
extern float g_5e0384e8;    /* DAT_5e0384e8 */
extern float g_5e035aa0;    /* DAT_5e035aa0 */

__declspec(naked) void FUN_5e015350(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        mov     edx, dword ptr [g_5e77a5a8]
        sub     ecx, eax
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [g_5e77a584]
        fild    dword ptr [ebp - 0x14]
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [ebp - 0x14], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [ebp - 0x14]
        mov     edx, dword ptr [g_5e77a5a4]
        mov     dword ptr [ebp - 0x14], ecx
        sub     edx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x14], edx
        fmul    dword ptr [g_5e03628c]
        fstp    dword ptr [ebp - 0x4]
        fild    dword ptr [ebp - 0x14]
        fmul    dword ptr [g_5e03628c]
        fst     dword ptr [ebp - 0x8]
        fmul    st(0), st(2)
        fld     dword ptr [ebp - 0x4]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
        fld     st(0)
        fchs
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [g_5e77a5ac]
        fsub    dword ptr [g_5e77a5cc]
        fld     dword ptr [g_5e77a58c]
        fsub    dword ptr [g_5e77a5cc]
        fld     st(1)
        fmul    st(0), st(5)
        fld     st(1)
        fmul    st(0), st(5)
        fsubp   st(1), st(0)
        fmul    st(0), st(3)
        fstp    dword ptr [g_5e77a530]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x4]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a534]
        fld     dword ptr [g_5e77a5bc]
        fsub    dword ptr [g_5e77a5dc]
        fld     dword ptr [g_5e77a59c]
        fsub    dword ptr [g_5e77a5dc]
        fld     st(1)
        fmul    st(0), st(5)
        fld     st(1)
        fmul    st(0), st(5)
        fsubp   st(1), st(0)
        fmul    st(0), st(3)
        fstp    dword ptr [g_5e77a564]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x4]
        fxch    st(1)
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a56c]
        fld     dword ptr [g_5e77a5c0]
        fsub    dword ptr [g_5e77a5e0]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [g_5e77a5a0]
        fsub    dword ptr [g_5e77a5e0]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(3)
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(3)
        fsubp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [g_5e77a568]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
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
        xor     edx, edx
        shl     eax, 0x4
        mov     dword ptr [g_5e77a6d8], eax
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5501
        mov     dword ptr [g_5e77a55c], edx
        jmp     L_5533
    L_5501:
        fld     dword ptr [g_5e77a564]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_552d
        fld     dword ptr [g_5e77a56c]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [g_5e77a55c], edx
        fnstsw  ax
        test    ah, 0x1
        jz      L_5533
    L_552d:
        mov     dword ptr [g_5e77a55c], ecx
    L_5533:
        fld     dword ptr [g_5e77a568]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5550
        mov     dword ptr [g_5e77a560], edx
        mov     esp, ebp
        pop     ebp
        ret
    L_5550:
        fld     dword ptr [g_5e77a568]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_557c
        fld     dword ptr [g_5e77a570]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [g_5e77a560], edx
        fnstsw  ax
        test    ah, 0x1
        jz      L_5582
    L_557c:
        mov     dword ptr [g_5e77a560], ecx
    L_5582:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
