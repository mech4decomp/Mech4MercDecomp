/*
 * FUN_005d1180 (13 B) - __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Setter: this+0x460 = param1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d1180(int param1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x460], eax
        ret     4
    }
}
