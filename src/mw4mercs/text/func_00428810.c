/*
 * FUN_00428810 (23 B) — MLR copy 3 floats from this+{0,0x10,0x20} to [ESP+4].
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_00428810(void)
{
    __asm {
        fld     dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x10]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x20]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
