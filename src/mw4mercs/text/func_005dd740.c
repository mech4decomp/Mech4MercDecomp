/*
 * FUN_005dd740 (5 B) — returns 0 in AL, RET 4.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl func_005dd740(void)
{
    __asm {
        xor     al, al
        ret     4
    }
}
