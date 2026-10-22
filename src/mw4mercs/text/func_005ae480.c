/*
 * FUN_005ae480 (23 B) — Setter: stores param into this+0x170, sets state 1.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ae480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x168], 0x1
        mov     dword ptr [ecx + 0x170], eax
        ret     0x4
    }
}
