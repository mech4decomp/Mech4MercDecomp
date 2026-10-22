/*
 * FUN_00415020 (22 B) — archive/database subsystem: calls the PRNG step
 * FUN_00414fd0, converts the returned int to float and multiplies by a
 * global scale constant (0x76d3d4). Returns the scaled float on the FPU
 * stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00414fd0(void);
extern float g_0076d3d4;

__declspec(naked) void FUN_00415020(void)
{
    __asm {
        push    ecx
        call    FUN_00414fd0
        __emit 0x89          /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (89 04 24 vs ref 89 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB          /* __emit: same zero-disp [esp+0] quirk for fild (DB 04 24 vs ref DB 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fmul    dword ptr [g_0076d3d4]
        pop     ecx
        ret
    }
}
