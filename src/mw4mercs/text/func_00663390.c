/*
 * FUN_00663390 (24 B) — __thiscall: copies three floats from this
 * (+8, +0x18, +0x28) into the output buffer in arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00663390(void)
{
    __asm {
        fld     dword ptr [ecx + 8]
        mov     eax, dword ptr [esp + 4]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x18]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [ecx + 0x28]
        fstp    dword ptr [eax + 8]
        ret     4
    }
}
