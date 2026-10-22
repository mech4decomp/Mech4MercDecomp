/*
 * FUN_004960b0 (3 B) — thunk: returns 0 (AL=0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004960b0(void)
{
    __asm {
        xor     al, al
        ret
    }
}
