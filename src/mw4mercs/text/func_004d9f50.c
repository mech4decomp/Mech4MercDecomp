/*
 * FUN_004D9F50 (5 B) — __stdcall return 0 (XOR AL,AL; RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004d9f50(void)
{
    __asm {
        xor al, al
        ret 4
    }
}
