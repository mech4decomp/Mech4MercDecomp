/*
 * FUN_00428830 (24 B) — MLR copy 3 floats from this+{4,0x14,0x24} to [ESP+4].
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_00428830(void)
{
    __asm {
        fld     dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x14]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x24]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
