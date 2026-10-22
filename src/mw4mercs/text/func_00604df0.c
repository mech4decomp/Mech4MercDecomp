/*
 * FUN_00604df0 (86 B) — __thiscall (ECX = this) cubic/bezier-style
 * polynomial evaluation. Pure FPU stack math; returns value in ST0.
 *
 * RET 4 (one float stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007704c4;
extern float g_0076d064;

__declspec(naked) void __stdcall FUN_00604df0(void *param)
{
    __asm {
        push    ecx
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        /* __emit: zero-disp [esp] mem op; MSVC6 drops the 00 disp byte (D9 14 24 vs D9 54 24 00) */
        __emit  0xD9
        __emit  0x54
        __emit  0x24
        __emit  0x00
        fmul    dword ptr [esp + 0x8]
        fld     st(0)
        fadd    st(0), st(0)
        /* __emit: zero-disp [esp] mem op; MSVC6 drops the 00 disp byte (D9 04 24 vs D9 44 24 00) */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fmul    dword ptr [g_007704c4]
        /* __emit: zero-disp [esp] mem op; MSVC6 drops the 00 disp byte (D9 04 24 vs D9 44 24 00) */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fadd    st(0), st(0)
        fsubr   st(0), st(3)
        fadd    dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0x4]
        fld     st(1)
        fsub    st(0), st(3)
        fmul    dword ptr [ecx + 0xc]
        faddp   st(1), st(0)
        fxch    st(3)
        /* __emit: zero-disp [esp] mem op; MSVC6 drops the 00 disp byte (D8 24 24 vs D8 64 24 00) */
        __emit  0xD8
        __emit  0x64
        __emit  0x24
        __emit  0x00
        fmul    dword ptr [ecx + 0x8]
        faddp   st(3), st(0)
        fxch    st(1)
        fsub    st(0), st(1)
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [ecx]
        faddp   st(2), st(0)
        fstp    st(0)
        pop     ecx
        ret     0x4
    }
}
