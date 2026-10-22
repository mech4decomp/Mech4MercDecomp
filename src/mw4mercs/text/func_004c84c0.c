/*
 * FUN_004c84c0 (1 B) -- ret stub (empty function, returns immediately).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c84c0(void)
{
    __asm {
        ret
    }
}
