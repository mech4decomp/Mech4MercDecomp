/*
 * FUN_00505d50 (15 B) — Array setter (__thiscall, RET 0x8).
 * Sets this[param_1 + 0x24] = param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00505d50(void)
{
    __asm {
        mov     eax, [esp + 8]
        mov     edx, [esp + 4]
        mov     [ecx + edx * 4 + 0x24], eax
        ret     8
    }
}
