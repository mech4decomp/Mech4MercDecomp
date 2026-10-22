/*
 * FUN_0041c7a0 (38 B) — __thiscall. Scales a 3-vector by (pi / w).
 * ECX = output; stack arg: quaternion (param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;

__declspec(naked) void FUN_0041c7a0(void)
{
    __asm {
        fld     dword ptr [g_0076d064]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        fdiv    dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     st(0)
        fmul    dword ptr [ecx+0x4]
        fstp    dword ptr [eax+0x4]
        fmul    dword ptr [ecx+0x8]
        fstp    dword ptr [eax+0x8]
        ret     0x4
    }
}
