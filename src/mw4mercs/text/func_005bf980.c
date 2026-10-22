/*
 * FUN_005bf980 (10 B) - __thiscall setter.
 *
 * Stores stack param into [this+0x10]. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005bf980(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x10], eax
        ret     4
    }
}
