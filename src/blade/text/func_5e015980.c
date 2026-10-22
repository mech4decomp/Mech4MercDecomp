/*
 * FUN_5e015980 (818 B) — DirectDraw surface format/creation body.
 * Heavy FPU matrix math (FXCH/FDIVR/FCOM/FCOMP/FNSTSW) using ESP-relative
 * scratch slots.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a55c;      /* DAT_5e77a55c */
extern int g_5e77a560;      /* DAT_5e77a560 */
extern int g_5e77a588;      /* DAT_5e77a588 */
extern int g_5e77a5c8;      /* DAT_5e77a5c8 */
extern int g_5e77a5a8;      /* DAT_5e77a5a8 */
extern int g_5e77a584;      /* DAT_5e77a584 */
extern int g_5e77a5c4;      /* DAT_5e77a5c4 */
extern int g_5e77a5a4;      /* DAT_5e77a5a4 */

extern float g_5e03628c;    /* DAT_5e03628c */
extern float g_5e035aa4;    /* DAT_5e035aa4 */
extern float g_5e77a5ac;    /* DAT_5e77a5ac */
extern float g_5e77a5cc;    /* DAT_5e77a5cc */
extern float g_5e77a58c;    /* DAT_5e77a58c */
extern float g_5e77a530;    /* DAT_5e77a530 */
extern float g_5e77a534;    /* DAT_5e77a534 */
extern float g_5e77a590;    /* DAT_5e77a590 */
extern float g_5e77a59c;    /* DAT_5e77a59c */
extern float g_5e77a518;    /* DAT_5e77a518 */
extern float g_5e77a5a0;    /* DAT_5e77a5a0 */
extern float g_5e77a524;    /* DAT_5e77a524 */
extern float g_5e77a5b0;    /* DAT_5e77a5b0 */
extern float g_5e77a5bc;    /* DAT_5e77a5bc */
extern float g_5e77a51c;    /* DAT_5e77a51c */
extern float g_5e77a5c0;    /* DAT_5e77a5c0 */
extern float g_5e77a528;    /* DAT_5e77a528 */
extern float g_5e77a5d0;    /* DAT_5e77a5d0 */
extern float g_5e77a5dc;    /* DAT_5e77a5dc */
extern float g_5e77a520;    /* DAT_5e77a520 */
extern float g_5e77a5e0;    /* DAT_5e77a5e0 */
extern float g_5e77a52c;    /* DAT_5e77a52c */
extern float g_5e77a538;    /* DAT_5e77a538 */
extern float g_5e77a540;    /* DAT_5e77a540 */
extern float g_5e77a544;    /* DAT_5e77a544 */
extern float g_5e77a54c;    /* DAT_5e77a54c */
extern float g_5e77a550;    /* DAT_5e77a550 */
extern float g_5e77a558;    /* DAT_5e77a558 */
extern float g_5e036298;    /* DAT_5e036298 */
extern float g_5e77a53c;    /* DAT_5e77a53c */
extern float g_5e77a548;    /* DAT_5e77a548 */
extern float g_5e77a554;    /* DAT_5e77a554 */
extern float g_5e035aa0;    /* DAT_5e035aa0 */

__declspec(naked) void FUN_5e015980(void)
{
    __asm {
        sub     esp, 0x14
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        mov     edx, dword ptr [g_5e77a5a8]
        sub     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [g_5e77a584]
        fild    dword ptr [esp + 0x10]
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [esp + 0x10], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_5e77a5a4]
        mov     dword ptr [esp + 0x10], ecx
        sub     edx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        fmul    dword ptr [g_5e03628c]
        __emit 0xD9   /* __emit: MSVC6 drops 00 disp for fstp [esp]; ref D9 5C 24 00 */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [g_5e03628c]
        fst     dword ptr [esp + 0x4]
        fmul    st(0), st(2)
        __emit 0xD9   /* __emit: MSVC6 drops 00 disp for fld [esp]; ref D9 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
        fld     st(0)
        fchs
        fstp    dword ptr [esp + 0x8]
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
        __emit 0xD8   /* __emit: MSVC6 drops 00 disp for fmul [esp]; ref D8 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fxch    st(1)
        fmul    dword ptr [esp + 0x4]
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [g_5e77a534]
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
        fmul    st(0), st(5)
        fld     st(1)
        fmul    st(0), st(5)
        fsubp   st(1), st(0)
        fmul    st(0), st(3)
        or      ecx, 0xffffffff
        xor     edx, edx
        fstp    dword ptr [g_5e77a538]
        fxch    st(1)
        __emit 0xD8   /* __emit: MSVC6 drops 00 disp for fmul [esp]; ref D8 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fxch    st(1)
        fmul    dword ptr [esp + 0x4]
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [g_5e77a540]
        fld     dword ptr [g_5e77a51c]
        fsub    dword ptr [g_5e77a520]
        fld     dword ptr [g_5e77a518]
        fsub    dword ptr [g_5e77a520]
        fld     st(1)
        fmul    st(0), st(5)
        fld     st(1)
        fmul    st(0), st(5)
        fsubp   st(1), st(0)
        fmul    st(0), st(3)
        fstp    dword ptr [g_5e77a544]
        fxch    st(1)
        __emit 0xD8   /* __emit: MSVC6 drops 00 disp for fmul [esp]; ref D8 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fxch    st(1)
        fmul    dword ptr [esp + 0x4]
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [g_5e77a54c]
        fld     dword ptr [g_5e77a528]
        fsub    dword ptr [g_5e77a52c]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [g_5e77a524]
        fsub    dword ptr [g_5e77a52c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fmul    st(0), st(3)
        fld     dword ptr [esp + 0x10]
        fmul    st(0), st(3)
        fsubp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [g_5e77a550]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
        __emit 0xD8   /* __emit: MSVC6 drops 00 disp for fmul [esp]; ref D8 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x4]
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [g_5e77a558]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [g_5e036298]
        fstp    dword ptr [g_5e77a53c]
        fld     dword ptr [g_5e77a544]
        fmul    dword ptr [g_5e036298]
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
        test    ah, 0x41
        jnz     L_5bfb
        fstp    st(0)
        mov     dword ptr [g_5e77a55c], edx
        jmp     L_5c3b
    L_5bfb:
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5c35
        fld     dword ptr [g_5e77a54c]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    dword ptr [g_5e77a518]
        mov     dword ptr [g_5e77a55c], edx
        fsubp   st(1), st(0)
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5c3b
    L_5c35:
        mov     dword ptr [g_5e77a55c], ecx
    L_5c3b:
        fld     dword ptr [g_5e77a550]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a538]
        fmul    dword ptr [g_5e77a524]
        fsubp   st(1), st(0)
        fcom    dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5c6e
        fstp    st(0)
        mov     dword ptr [g_5e77a560], edx
        add     esp, 0x14
        ret
    L_5c6e:
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5ca8
        fld     dword ptr [g_5e77a558]
        fmul    dword ptr [g_5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    dword ptr [g_5e77a524]
        mov     dword ptr [g_5e77a560], edx
        fsubp   st(1), st(0)
        fcomp   dword ptr [g_5e035aa0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5cae
    L_5ca8:
        mov     dword ptr [g_5e77a560], ecx
    L_5cae:
        add     esp, 0x14
        ret
    }
}
