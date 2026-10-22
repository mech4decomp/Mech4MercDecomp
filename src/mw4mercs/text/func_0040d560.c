/*
 * FUN_0040d560 (67 B) — __thiscall vector normalize helper:
 *   out = in * (g_0076d064 / sqrt(in.x^2 + in.y^2 + in.z^2))
 *   (ECX = out, [esp+4] = in)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

__declspec(naked) void FUN_0040d560(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        fld     dword ptr [edx+0x8]
        mov     eax, ecx
        fld     dword ptr [edx+0x4]
        fld     dword ptr [edx]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [edx+0x4]
        fstp    dword ptr [eax+0x4]
        fmul    dword ptr [edx+0x8]
        fstp    dword ptr [eax+0x8]
        ret     0x4
    }
}
