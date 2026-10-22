/*
 * FUN_0041d810 (118 B) — __thiscall angle interpolation helper. Normalizes two
 * angles via FUN_0041d780, computes the wrapped difference, and linearly
 * interpolates *this = fVar2*param_3 + (g_76d064-param_3)*fVar1. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d604; /* 0x0076d604 — float constant */
extern float g_76d608; /* 0x0076d608 — float constant (2*pi?) */
extern float g_76d064; /* 0x0076d064 — float constant */
extern void __cdecl FUN_0041d780(void);

__declspec(naked) void FUN_0041d810(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_0041d780
        fstp    dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x10]
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_0041d780
        fld     st(0)
        fsub    dword ptr [esp+0x10]
        add     esp, 0x8
        fcom    dword ptr [g_76d604]
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_d84f
        fstp    st(0)
        fsub    dword ptr [g_76d608]
        jmp     L_d868
    L_d84f:
        fld     dword ptr [g_76d604]
        fchs
        fxch    st(1)
        fcompp
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_d868
        fadd    dword ptr [g_76d608]
    L_d868:
        fld     dword ptr [g_76d064]
        mov     eax, esi
        fsub    dword ptr [esp+0x10]
        fmul    dword ptr [esp+0x8]
        fxch    st(1)
        fmul    dword ptr [esp+0x10]
        faddp   st(1), st(0)
        fstp    dword ptr [esi]
        pop     esi
        ret     0xc
    }
}
