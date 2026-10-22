/*
 * FUN_0064c950 (5 B) — return arg;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064c950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        ret
    }
}
