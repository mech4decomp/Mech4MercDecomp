/*
 * FUN_00706E60 (5 B) — stub getter: returns 0, __stdcall ret 0xc.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00706E60(void)
{
    __asm {
        xor     eax, eax
        ret     0xc
    }
}
