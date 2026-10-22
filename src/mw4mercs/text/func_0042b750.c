/*
 * FUN_0042b750 (45 B) — __thiscall MLR light-angle setter. Stores the
 * input angle into [this+0xac], computes tan into [this+0xb0] and
 * cos into [this+0xb4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0042b750(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx+0xac], edx
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
