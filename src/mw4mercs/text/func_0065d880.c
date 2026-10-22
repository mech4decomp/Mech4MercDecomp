/*
 * FUN_0065d880 (28 B) -- ABL bytecode helper. __fastcall: compares
 * double at this+0x2bd0 against global double DAT_0076d970; returns
 * 1 if this+0x2bd0 > DAT_0076d970, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0076d970;   /* DAT_0076d970 */

__declspec(naked) int FUN_0065d880(void)
{
    __asm {
        fld     qword ptr [ecx + 0x2bd0]
        fcomp   qword ptr [g_0076d970]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L899
        mov     eax, 0x1
        ret
L899:
        xor     eax, eax
        ret
    }
}
