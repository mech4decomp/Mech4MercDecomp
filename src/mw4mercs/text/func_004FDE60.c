/*
 * FUN_004FDE60 (6 B) — thunk: loads a global byte into al and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dc954;

__declspec(naked) void FUN_004FDE60(void)
{
    __asm {
        mov     al, byte ptr [g_007dc954]
        ret
    }
}
