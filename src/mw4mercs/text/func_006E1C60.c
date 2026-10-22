/*
 * FUN_006E1C60 (5 B) — stub getter: returns 0, __stdcall ret 4.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_006E1C60(void)
{
    __asm {
        xor     eax, eax
        ret     4
    }
}
