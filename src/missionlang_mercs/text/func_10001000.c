/*
 * FUN_10001000 (6 B, __stdcall) — returns 1, RET 0xC.
 *
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_10001000(void)
{
    __asm {
        push    1
        pop     eax
        ret     0xC
    }
}
