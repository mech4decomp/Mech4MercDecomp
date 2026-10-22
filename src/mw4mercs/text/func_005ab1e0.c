/*
 * FUN_005ab1e0 (73 B) — __thiscall, RET 4.
 *
 * Reads a virtual object, compares a float param against a global constant,
 * and computes a clamped/sqrt expression. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005ab1e0(void)
{
    extern float DAT_0076c5b0;
    extern float DAT_007b4384;
    __asm {
        mov     eax, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     ecx, eax
        fnstsw  ax
        test    ah, 0x1
        jz      L_ab205
        fld     dword ptr [DAT_0076c5b0]
        ret     0x4
L_ab205:
        fld     dword ptr [ecx + 0x7c]
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x4]
        fld     st(0)
        fmul    st, st(1)
        fsubp   st(1), st(0)
        fabs
        fsqrt
        fmul    st, st(1)
        fmulp   st(1), st(0)
        fadd    st(0), st(0)
        fdiv    dword ptr [DAT_007b4384]
        ret     0x4
    }
}
