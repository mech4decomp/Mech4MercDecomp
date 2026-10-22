/*
 * FUN_0069a110 (1 B) - HUD helper: empty function, just RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069a110(void)
{
    __asm {
        ret
    }
}
