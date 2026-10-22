/*
 * FUN_00706550 (10 B) — returns the single argument + 0x4a (__stdcall,
 * ret 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00706550(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        add     eax, 0x4a
        ret     4
    }
}
