/*
 * FUN_00637c60 (323 B) — __thiscall vector normalization / easing helper.
 *
 * Computes a squared distance, normalizes, applies a per-axis weighted
 * dot product, clamps, then calls FUN_00637a20 / FUN_00637bf0 and
 * returns a power of the eased value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 (0.0) */
extern float g_76d064;   /* 0x0076d064 (1.0) */

extern void __cdecl FUN_00637a20(void);
extern int  __cdecl FUN_00637bf0(void);

__declspec(naked) void FUN_00637c60(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ecx + 0x1c]
        fld     dword ptr [ecx + 0xc]
        mov     edx, dword ptr [ecx + 0x2c]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [esp + 0x20]
        fsubr   dword ptr [eax]
        mov     dword ptr [esp + 0xc], edx
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [esp + 0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fcom    dword ptr [g_76c5b0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x40
        jz      L_637CC7
        fstp    st(0)
        pop     esi
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [g_76d064]
        add     esp, 0x18
        ret     0xc
L_637CC7:
        fsqrt
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    st(0), st(3)
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x8]
        fxch
        fmul    st(0), st(1)
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [ecx + 0x8]
        fld     dword ptr [ecx + 0x18]
        fld     dword ptr [ecx + 0x28]
        fxch    st(3)
        fmul    st(0), st(3)
        fld     dword ptr [esp + 0x8]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x4]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fst     dword ptr [esp + 0x24]
        fxch    st(3)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [g_76c5b0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_637D25
        fchs
        fst     dword ptr [esp + 0x24]
L_637D25:
        fcomp   dword ptr [g_76d064]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     L_637D3A
        mov     dword ptr [esp + 0x24], 0x3f800000
L_637D3A:
        push    0x39
        mov     ecx, esi
        call    FUN_00637a20
        fld     dword ptr [g_76d064]
        fsub    dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        push    0x17
        push    0x13
        fmulp   st(1), st(0)
        push    eax
        mov     ecx, esi
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        call    FUN_00637bf0
        cmp     eax, 0x15
        jl      L_637D98
        cmp     eax, 0x16
        jle     L_637D89
        cmp     eax, 0x17
        jnz     L_637D98
        fld     dword ptr [esp + 0x24]
        pop     esi
        fmul    dword ptr [esp + 0x20]
        fld     st(0)
        fmulp   st(1), st(0)
        add     esp, 0x18
        ret     0xc
L_637D89:
        fld     dword ptr [esp + 0x24]
        pop     esi
        fmul    dword ptr [esp + 0x20]
        add     esp, 0x18
        ret     0xc
L_637D98:
        fld     dword ptr [esp + 0x24]
        pop     esi
        add     esp, 0x18
        ret     0xc
    }
}
