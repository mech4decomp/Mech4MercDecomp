/*
 * FUN_005cae40 (13 B) — __thiscall setter. Stores param into this+0x618.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cae40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x618], eax
        ret     0x4
    }
}
