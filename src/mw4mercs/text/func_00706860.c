/*
 * FUN_00706860 (5 B) — stub getter: returns 0, __stdcall ret 0x10.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_00706860(void)
{
    __asm {
        xor     eax, eax
        ret     0x10
    }
}
