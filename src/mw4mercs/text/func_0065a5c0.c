/*
 * FUN_0065a5c0 (5 B) — returns its first argument (mov eax,[esp+4]; ret).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065a5c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        ret
    }
}
