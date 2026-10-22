/*
 * FUN_0047f9e0 (24 B) — __thiscall (RET 0x4): copies 3 floats from the
 * object at ECX (offsets 0x20/0x24/0x28) into the caller's buffer.
 * MLR vector getter.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0047f9e0(void)
{
    __asm {
        fld     dword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x24]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x28]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
