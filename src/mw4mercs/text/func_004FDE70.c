/*
 * FUN_004FDE70 (6 B) — thunk: loads a global byte into al and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dc955;

__declspec(naked) void FUN_004FDE70(void)
{
    __asm {
        mov     al, byte ptr [g_007dc955]
        ret
    }
}
