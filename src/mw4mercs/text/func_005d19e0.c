/*
 * FUN_005d19e0 (5 B) — __stdcall RET 4. Returns AL=0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d19e0(void)
{
    __asm {
        xor     al, al
        ret     0x4
    }
}
