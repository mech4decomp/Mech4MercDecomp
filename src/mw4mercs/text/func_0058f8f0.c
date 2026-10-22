/* FUN_0058F8F0: Weighted average calculation (105 B)
 * fastcall: ECX = this (param_1)
 * Iterates 11 entries at this+0x944, computes weighted sum and divisor.
 * Special case for index 6: uses this+0x95c with weight 0x0077016c.
 * Other indices: uses value directly with weight 0x0076d064.
 * Returns sum/divisor (or sum if divisor is zero).
 */
extern float DAT_0076c5b0;
extern float DAT_0077016c;
extern float DAT_0076d064;

__declspec(naked) void FUN_0058F8F0(void)
{
    __asm {
        PUSH ECX
        FLD dword ptr [DAT_0076c5b0]
        /* __emit: MSVC6 collapses zero-disp [esp] to C7 04 24; ref uses C7 44 24 00 */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        /* __emit: MSVC6 collapses zero-disp [esp] to D9 04 24; ref uses D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        XOR EAX, EAX                    /* iVar2 = 0 */

loop_start:
        MOV EDX, dword ptr [ECX + EAX*0x4 + 0x944]  /* iVar1 = this->field_944[i] */
        CMP EDX, -0x1
        /* __emit: MSVC6 collapses zero-disp [esp] to 89 14 24; ref uses 89 54 24 00 */
        __emit 0x89
        __emit 0x54
        __emit 0x24
        __emit 0x00
        JZ skip_entry

        CMP EAX, 0x6
        JNZ not_special

        /* Special case: index 6 */
        FILD dword ptr [ECX + 0x95C]    /* load this->field_95c */
        FMUL dword ptr [DAT_0077016c]
        FADDP ST(2), ST(0)
        FADD dword ptr [DAT_0077016c]
        JMP skip_entry

not_special:
        /* __emit: MSVC6 collapses zero-disp [esp] to DB 04 24; ref uses DB 44 24 00 */
        __emit 0xDB
        __emit 0x44
        __emit 0x24
        __emit 0x00
        FADDP ST(2), ST(0)
        FADD dword ptr [DAT_0076d064]

skip_entry:
        INC EAX
        CMP EAX, 0xB
        JL loop_start

        FCOM dword ptr [DAT_0076c5b0]
        FNSTSW AX
        TEST AH, 0x40                   /* test C3 (equal) */
        JNZ skip_div
        FXCH
        FDIV ST(0), ST(1)
        FXCH

skip_div:
        FSTP ST(0)
        POP ECX
        RET
    }
}
