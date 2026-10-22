/*
 * FUN_0041d7c0 (80 B) — __fastcall in-place angle normalization. Normalizes
 * *ECX into [-g_76d604, g_76d604] via CRT _CIfmod and returns the pointer in
 * EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d604; /* 0x0076d604 — float constant */
extern float g_76d608; /* 0x0076d608 — float constant (2*pi?) */
extern void __cdecl FUN_0075db56(void); /* CRT _CIfmod */

__declspec(naked) void FUN_0041d7c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi]
        fld     dword ptr [g_76d608]
        call    FUN_0075db56
        fcom    dword ptr [g_76d604]
        fst     dword ptr [esi]
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_d7eb
        fsub    dword ptr [g_76d608]
        mov     eax, esi
        fstp    dword ptr [esi]
        pop     esi
        ret
    L_d7eb:
        fld     dword ptr [g_76d604]
        fchs
        fld     st(1)
        fcompp
        __emit 0xDF /* __emit: fnstsw ax would get a 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_d80a
        fadd    dword ptr [g_76d608]
        mov     eax, esi
        fstp    dword ptr [esi]
        pop     esi
        ret
    L_d80a:
        mov     eax, esi
        fstp    st(0)
        pop     esi
        ret
    }
}
