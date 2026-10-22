/*
 * FUN_0051C490 (5 B) — stub getter: returns 0, __stdcall ret 0xc.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_0051C490(void)
{
    __asm {
        xor     eax, eax
        ret     0xc
    }
}
