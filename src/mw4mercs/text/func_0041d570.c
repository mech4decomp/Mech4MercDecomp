/*
 * FUN_0041d570 (158 B) — __thiscall 4x4 matrix construction from 6 float
 * parameters (a perspective/orthographic-style projection matrix). Writes 16
 * floats at [ECX..ECX+0x3c]. RET 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064; /* 0x0076d064 — float constant */

__declspec(naked) void FUN_0041d570(void)
{
    __asm {
        fld     dword ptr [esp+0xc]
        xor     eax, eax
        fsub    dword ptr [esp+0x10]
        fdivr   dword ptr [g_76d064]
        fld     dword ptr [esp+0x14]
        fsub    dword ptr [esp+0x18]
        fdivr   dword ptr [g_76d064]
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [esp+0x8]
        fsub    dword ptr [esp+0x4]
        fdivr   dword ptr [g_76d064]
        fstp    dword ptr [esp+0x14]
        fld     st(0)
        fmul    dword ptr [esp+0x4]
        fstp    dword ptr [ecx]
        mov     dword ptr [ecx+0x10], eax
        fld     dword ptr [esp+0xc]
        mov     dword ptr [ecx+0x20], eax
        fmul    dword ptr [esp+0x4]
        mov     dword ptr [ecx+0x30], eax
        mov     dword ptr [ecx+0x4], eax
        fstp    dword ptr [ecx+0x14]
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x34], eax
        fmul    dword ptr [esp+0x10]
        fchs
        fstp    dword ptr [ecx+0x8]
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [esp+0x18]
        fchs
        fstp    dword ptr [ecx+0x18]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [esp+0x8]
        fstp    dword ptr [ecx+0x28]
        mov     dword ptr [ecx+0x38], 0x3f800000
        fld     dword ptr [esp+0x14]
        mov     dword ptr [ecx+0xc], eax
        fmul    dword ptr [esp+0x4]
        mov     dword ptr [ecx+0x1c], eax
        fmul    dword ptr [esp+0x8]
        fchs
        fstp    dword ptr [ecx+0x2c]
        mov     dword ptr [ecx+0x3c], eax
        ret     0x18
    }
}
