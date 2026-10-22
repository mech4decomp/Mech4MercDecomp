/*
 * FUN_00706BF0 (37 B) — Calls FUN_00707E90, then compares a double at
 * [arg+0x20] against a global constant, returning 1 if equal/ordered
 * (C0|C3 clear) else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707E90(void);

extern double g_779d28;   /* DAT_00779d28 */

__declspec(naked) int FUN_00706BF0(void)
{
    __asm {
        call    FUN_00707E90
        mov     eax, dword ptr [esp + 4]
        fld     qword ptr [eax + 0x20]
        fadd    qword ptr [g_779d28]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        je      L_706c10
        xor     al, al
        ret     4
L_706c10:
        mov     al, 1
        ret     4
    }
}
