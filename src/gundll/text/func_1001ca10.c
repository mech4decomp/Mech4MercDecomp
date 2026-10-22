/*
 * FUN_1001ca10 (5 B) - __stdcall, RET 0x8.
 * Returns 0, popping 8 bytes.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001ca10(void)
{
    __asm {
        xor     eax, eax
        ret     0x8
    }
}
