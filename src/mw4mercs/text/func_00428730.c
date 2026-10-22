/*
 * FUN_00428730 (24 B) — MLR copy 3 floats from this+{8,0x18,0x28} to [ESP+4].
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_00428730(void)
{
    __asm {
        fld     dword ptr [ecx + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x18]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x28]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
