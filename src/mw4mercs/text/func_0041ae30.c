/*
 * FUN_0041ae30 (73 B) — __thiscall 3-component vector linear interpolation
 * (lerp). result = param_1*(1-param_3) + param_2*param_3, written to `this`
 * (ECX/EAX). param_1 at [ESP+0x4], param_2 at [ESP+0x8], param_3 at [ESP+0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

__declspec(naked) void FUN_0041ae30(void)
{
    __asm {
        fld     dword ptr [g_0076d064]
        mov     edx, dword ptr [esp+0x8]
        fsub    dword ptr [esp+0xc]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        fld     dword ptr [ecx]
        fmul    st(0), st(1)
        fld     dword ptr [edx]
        fmul    dword ptr [esp+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+0x4]
        fmul    st(0), st(1)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esp+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ecx+0x8]
        fmul    st(0), st(1)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esp+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        fstp    st(0)
        ret     0xc
    }
}
