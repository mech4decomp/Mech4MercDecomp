/*
 * FUN_0040d5f0 (3 B) — returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d5f0(void)
{
    __asm {
        mov     al, 0x1
        ret
    }
}
