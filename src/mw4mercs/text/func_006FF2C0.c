/*
 * FUN_006FF2C0 (5 B) — stub getter: returns 1 (al), __stdcall ret 4.
 *
 * Match: target 100%
 */

__declspec(naked) void FUN_006FF2C0(void)
{
    __asm {
        mov     al, 1
        ret     4
    }
}
