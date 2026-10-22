/*
 * FUN_00419c00 (177 B) — sphere/point collision: if the squared distance from
 * this (sphere) to [ESP+4] exceeds this[3]^2, move this toward the point and
 * grow the radius. __thiscall, RET 0x4. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;   /* _DAT_0076d064 */
extern float g_0076d070;   /* _DAT_0076d070 */
extern float g_007b220c;   /* DAT_007b220c */

__declspec(naked) void FUN_00419c00(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        fld     dword ptr [edx]
        fsub    dword ptr [ecx]
        fld     dword ptr [edx+0x4]
        fsub    dword ptr [ecx+0x4]
        fld     dword ptr [edx+0x8]
        fsub    dword ptr [ecx+0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1),st(0)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1),st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fcompp
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        fstp    st(0)
        /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      lbl1
        fstp    st(0)
        mov     eax, ecx
        ret     4
lbl1:
        fsqrt
        mov     eax, ecx
        fld     st(0)
        fadd    dword ptr [ecx+0xc]
        fmul    dword ptr [g_0076d070]
        fst     dword ptr [ecx+0xc]
        fld     st(1)
        fsub    st(0),st(1)
        fstp    dword ptr [esp+0x4]
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [ecx+0xc]
        fmul    dword ptr [ecx]
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [edx]
        faddp   st(1),st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [ecx]
        fld     dword ptr [ecx+0xc]
        fmul    dword ptr [ecx+0x4]
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [edx+0x4]
        faddp   st(1),st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [ecx+0x4]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [ecx+0xc]
        fld     dword ptr [esp+0x4]
        fmul    dword ptr [edx+0x8]
        faddp   st(1),st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [ecx+0x8]
        fstp    st(0)
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [ecx+0xc]
        fstp    dword ptr [ecx+0xc]
        ret     4
    }
}

