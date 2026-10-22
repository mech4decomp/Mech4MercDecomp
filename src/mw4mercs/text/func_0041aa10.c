/*
 * FUN_0041aa10 (264 B) — __thiscall quaternion-to-Euler-angles conversion.
 * Reads a quaternion from param_1 (at [ESP+0x14]) and writes 3 Euler angles
 * to `this` (ECX). Uses FPATAN with several special-case branches.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d59c;
extern float g_0076d594;
extern float g_0076d598;
extern float g_0076c5b0;

__declspec(naked) void FUN_0041aa10(void)
{
    __asm {
        sub     esp, 0x10
        mov     edx, dword ptr [esp+0x14]
        fld     dword ptr [edx+0x20]
        fchs
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D9 14 24); ref needs D9 54 24 00 */
        __emit  0xD9
        __emit  0x54
        __emit  0x24
        __emit  0x00
        fsub    dword ptr [g_0076d064]
        fabs
        fcomp   dword ptr [g_0076d59c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_aa57
        fld     dword ptr [edx+0x4]
        mov     eax, ecx
        fld     dword ptr [edx+0x8]
        fpatan
        fstp    dword ptr [ecx]
        fld     dword ptr [g_0076d594]
        fstp    dword ptr [ecx+0x4]
        mov     dword ptr [ecx+0x8], 0
        add     esp, 0x10
        ret     0x4
L_aa57:
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D9 04 24); ref needs D9 44 24 00 */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fsub    dword ptr [g_0076d598]
        fabs
        fcomp   dword ptr [g_0076d59c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_aa98
        fld     dword ptr [edx+0x4]
        mov     eax, ecx
        fchs
        fld     dword ptr [edx+0x8]
        fchs
        fpatan
        fstp    dword ptr [ecx]
        fld     dword ptr [g_0076d594]
        fchs
        fstp    dword ptr [ecx+0x4]
        mov     dword ptr [ecx+0x8], 0
        add     esp, 0x10
        ret     0x4
L_aa98:
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D9 04 24); ref needs D9 44 24 00 */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D8 0C 24); ref needs D8 4C 24 00 */
        __emit  0xD8
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        fsubr   dword ptr [g_0076d064]
        fsqrt
        fld     dword ptr [g_0076d064]
        fdiv    st(0), st(1)
        fst     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x28]
        fcom    dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L_aad6
        fchs
        fxch    st(1)
        fchs
        fxch    st(1)
        fld     dword ptr [esp+0x14]
        fchs
        fstp    dword ptr [esp+0x14]
L_aad6:
        fld     dword ptr [esp+0x14]
        mov     eax, ecx
        fmul    dword ptr [edx+0x24]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x10]
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp+0xc]
        fxch    st(1)
        fpatan
        fstp    dword ptr [ecx]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D9 04 24); ref needs D9 44 24 00 */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fxch    st(1)
        fpatan
        fstp    dword ptr [ecx+0x4]
        fld     dword ptr [esp+0x8]
        fld     dword ptr [esp+0xc]
        fpatan
        fstp    dword ptr [ecx+0x8]
        add     esp, 0x10
        ret     0x4
    }
}
