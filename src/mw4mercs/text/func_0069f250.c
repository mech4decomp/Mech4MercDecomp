/*
 * FUN_0069f250 (13 B) — __thiscall, ECX = this, 1 param (RET 0x4).
 *
 * Sets this[0x90] = param_1 (byte). HUD element flag setter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069f250(int param_1)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x90], al
        ret     0x4
    }
}
