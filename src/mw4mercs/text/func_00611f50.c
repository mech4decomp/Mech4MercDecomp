/*
 * FUN_00611f50 (76 B) — float accumulator update.
 *
 * g_007f28c4 -= g_0076d064; if result < g_0076d064 set to 1.0; else if
 * g_00770168 < result set to 10.0. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007f28c4;
extern float g_0076d064;
extern float g_00770168;

__declspec(naked) void FUN_00611f50(void)
{
    __asm {
        fld     dword ptr [g_007f28c4]
        fsub    dword ptr [g_0076d064]
        fst     dword ptr [g_007f28c4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_7c
        mov     dword ptr [g_007f28c4], 0x3f800000
        xor     eax, eax
        ret
    L_7c:
        fld     dword ptr [g_007f28c4]
        fcomp   dword ptr [g_00770168]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_99
        mov     dword ptr [g_007f28c4], 0x41200000
    L_99:
        xor     eax, eax
        ret
    }
}
