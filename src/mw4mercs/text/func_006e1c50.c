/*
 * FUN_006e1c50 (1 B) -- ret stub (empty function, returns immediately).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006e1c50(void)
{
    __asm {
        ret
    }
}
