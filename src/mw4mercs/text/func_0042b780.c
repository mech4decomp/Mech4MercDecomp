/*
 * FUN_0042b780 (51 B) — __thiscall MLR light-angle setter (scaled).
 * Stores g_0076e0b0 * input into [this+0xac], then tan into
 * [this+0xb0] and cos into [this+0xb4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076e0b0;

__declspec(naked) void FUN_0042b780(void)
{
    __asm {
        fld     dword ptr [g_0076e0b0]
        mov     eax, dword ptr [esp+0x4]
        fmul    dword ptr [eax]
        fstp    dword ptr [ecx+0xac]
        fld     dword ptr [ecx+0xac]
        fptan
        fstp    st(0)
        fstp    dword ptr [ecx+0xb0]
        fld     dword ptr [ecx+0xac]
        fcos
        fstp    dword ptr [ecx+0xb4]
        ret     0x4
    }
}
