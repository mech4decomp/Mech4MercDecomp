/*
 * FUN_0041a2c0 (288 B) — __thiscall 3x3 matrix inverse (adjugate +
 * scale). Reads a 3x4 matrix (12 floats) from param_1 (at [ESP+0x4]),
 * writes the adjugate to `this` (ECX/EAX), then scales all 12 outputs
 * by g_0076d064 / param_1[0] in a 12-iteration loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

__declspec(naked) void FUN_0041a2c0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        fld     dword ptr [edx+0x14]
        mov     eax, ecx
        fmul    dword ptr [edx+0x28]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [edx+0x18]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [edx+0x8]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [edx+0x4]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [edx+0x8]
        fsubp   st(1), st(0)
        fst     dword ptr [eax+0x8]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [eax+0x4]
        fld     st(1)
        fmul    dword ptr [edx+0x20]
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [eax]
        fmul    dword ptr [edx+0xc]
        fchs
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [eax+0x4]
        fsubp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [edx+0x2c]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [edx+0x18]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [edx+0x28]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx]
        fmul    dword ptr [edx+0x28]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [edx+0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [edx+0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [edx+0x18]
        fsubp   st(1), st(0)
        fst     dword ptr [eax+0x18]
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [eax+0x10]
        fchs
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [eax+0x14]
        fsubp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [edx+0x2c]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x1c]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [edx+0x10]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [edx+0x20]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [edx]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [edx]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [edx+0x4]
        fsubp   st(1), st(0)
        fst     dword ptr [eax+0x28]
        fld     dword ptr [eax+0x20]
        fmul    dword ptr [edx+0xc]
        fchs
        fld     dword ptr [eax+0x24]
        fmul    dword ptr [edx+0x1c]
        fsubp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [edx+0x2c]
        mov     edx, 0xc
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x2c]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [esp+0x4]
loop_start:
        fld     st(0)
        add     ecx, 0x4
        dec     edx
        fmul    dword ptr [ecx-0x4]
        fstp    dword ptr [ecx-0x4]
        jnz     loop_start
        fstp    st(0)
        ret     0x4
    }
}
