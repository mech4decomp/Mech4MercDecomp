/*
 * FUN_004eef70 (79 B) — MLR/Adept application core, __thiscall with one
 * stack arg. Dot product of (param_1 - this[0..2]) with this[3..5], clamped
 * to [DAT_0076c5b0, this[6]].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

__declspec(naked) void FUN_004eef70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [ecx + 0x14]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x10]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ecx + 0xc]
        faddp   st(1), st(0)
        __emit  0xD8        /* __emit: MSVC6 rejects `fcom` with absolute-mem operand */
        __emit  0x15
        __emit  0xB0
        __emit  0xC5
        __emit  0x76
        __emit  0x00
        fnstsw  ax
        __emit  0xF6        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit  0xC4
        __emit  0x01
        jz      Lad
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
        ret     0x4
Lad:
        fcom    dword ptr [ecx + 0x18]
        fnstsw  ax
        __emit  0xF6        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit  0xC4
        __emit  0x41
        jnz     Lbc
        fstp    st(0)
        fld     dword ptr [ecx + 0x18]
Lbc:
        ret     0x4
    }
}
