/*
 * FUN_005E7FD0 (11 B) — __thiscall, RET 4 (1 param).
 * *param1 = *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005e7fd0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
