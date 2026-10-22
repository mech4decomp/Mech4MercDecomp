/*
 * FUN_0040c5f0 (31 B) — __thiscall: negate 3 floats from [esp+4] into
 * the object in ECX (this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c5f0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        fld     dword ptr [ecx]
        fchs
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+0x4]
        fchs
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [ecx+0x8]
        fchs
        fstp    dword ptr [eax+0x8]
        ret     0x4
    }
}
