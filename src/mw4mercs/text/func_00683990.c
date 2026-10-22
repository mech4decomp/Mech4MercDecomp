/*
 * FUN_00683990 (78 B) — __stdcall float helper (RET 0x4).
 *
 * Reads two floats at [arg+0x10] and [arg+0x14]; returns a value on the
 * FPU stack based on comparisons against constants g_76c5b0 / g_76d064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0x0076c5b0 */
extern float g_76d064;   /* 0x0076d064 */

__declspec(naked) void FUN_00683990(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_b3
        fld     dword ptr [g_76c5b0]
        fsubr   dword ptr [g_76d064]
        ret     0x4
    L_b3:
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_cf
        fld     dword ptr [g_76d064]
        fsubr   dword ptr [g_76d064]
        ret     0x4
    L_cf:
        fld     dword ptr [ecx + 0x14]
        fdiv    dword ptr [ecx + 0x10]
        fsubr   dword ptr [g_76d064]
        ret     0x4
    }
}
