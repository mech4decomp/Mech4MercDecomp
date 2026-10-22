/*
 * FUN_0041d780 (61 B) — angle normalization helper. Computes fmod(param,
 * g_76d608) via CRT _CIfmod, then wraps the result into [-g_76d604, g_76d604].
 * Returns the normalized value in ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d604; /* 0x0076d604 — float constant */
extern float g_76d608; /* 0x0076d608 — float constant (2*pi?) */
extern void __cdecl FUN_0075db56(void); /* CRT _CIfmod */

__declspec(naked) void FUN_0041d780(void)
{
    __asm {
        fld     dword ptr [esp+0x4]
        fld     dword ptr [g_76d608]
        call    FUN_0075db56
        fcom    dword ptr [g_76d604]
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_d7a3
        fsub    dword ptr [g_76d608]
        ret
    L_d7a3:
        fld     dword ptr [g_76d604]
        fchs
        fld     st(1)
        fcompp
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_d7bc
        fadd    dword ptr [g_76d608]
    L_d7bc:
        ret
    }
}
