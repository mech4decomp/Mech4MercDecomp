/*
 * FUN_0069e180 (21 B) — __thiscall, ECX = this, 2 params (RET 0x8).
 *
 * Adds param_2 to this[8 + param_1*4] and to this[0xc00].
 * HUD element accumulation helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069e180(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        add     dword ptr [ecx + eax*4 + 0x8], edx
        add     dword ptr [ecx + 0xc00], edx
        ret     0x8
    }
}
