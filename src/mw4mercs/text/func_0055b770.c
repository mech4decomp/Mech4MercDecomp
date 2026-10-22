/*
 * FUN_0055b770 (14 B) — Loads float from array at [ecx+0x958] indexed by stack param, ret 4.
 * Bytes: 8B 44 24 04 D9 84 81 58 09 00 00 C2 04 00
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055b770(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        fld     dword ptr [ecx + eax * 4 + 0x958]
        ret     4
    }
}
