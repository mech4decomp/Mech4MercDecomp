/*
 * FUN_004CCCEE (3 B) -- ret stub preceded by two alignment NOPs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004CCCEE(void)
{
    __asm {
        nop
        nop
        ret
    }
}
