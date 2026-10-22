/*
 * FUN_004E7CA0 (50 B) — MLR/Adept clamp helper (identical to FUN_004e7bf0).
 *
 * __thiscall (ECX = this). Returns clamp(this+0x14 / this+0x10, lo, hi)
 * where lo = *(float*)0x0076c5b0, hi = *(float*)0x0076d064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void __fastcall FUN_004e7ca0(void)
{
    __asm {
        FLD dword ptr [ECX + 0x14]
        FDIV dword ptr [ECX + 0x10]
        FCOM dword ptr [g_76c5b0]
        __emit 0xDF        /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xE0
        __emit 0xF6        /* __emit: test ah,imm8 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        JZ l_skip_lo
        FSTP ST(0)
        FLD dword ptr [g_76c5b0]
        RET
    l_skip_lo:
        FCOM dword ptr [g_76d064]
        __emit 0xDF        /* __emit: fnstsw ax no-WAIT (DF E0) */
        __emit 0xE0
        __emit 0xF6        /* __emit: test ah,imm8 (F6 C4 41) */
        __emit 0xC4
        __emit 0x41
        JNZ l_done
        FSTP ST(0)
        FLD dword ptr [g_76d064]
    l_done:
        RET
    }
}
