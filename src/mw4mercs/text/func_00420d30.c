/*
 * FUN_00420d30 (50 B) — __thiscall (RET 0x4). Computes the midpoint of an
 * AABB: (min+max)*0.5 per axis, writes 3 floats to [EAX]. Uses the float
 * constant 0.5 at 0x0076d070.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d070;

__declspec(naked) void FUN_00420d30(void)
{
    __asm {
        fld     dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [ecx]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0xc]
        fadd    dword ptr [ecx + 0x8]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x14]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
