/*
 * FUN_00652b60 (76 B) — float interpolation/clamp helper.
 *
 * Computes (a-b)/(c-b); if flag==1 subtracts from g_0076d064; clamps to
 * [g_0076c5b0, g_0076d064]. Returns value on FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_00652b60(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        mov     al, byte ptr [esp + 0x10]
        cmp     al, 0x1
        fsub    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x8]
        fdivp   st(1), st(0)
        jnz     L_80
        fsubr   dword ptr [g_0076d064]
    L_80:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_96
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
        ret
    L_96:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_ab
        fstp    st(0)
        fld     dword ptr [g_0076d064]
    L_ab:
        ret
    }
}
