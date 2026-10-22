/*
 * FUN_00408b60 (3 B) — returns AL=0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00408b60(void)
{
    __asm {
        xor     al, al
        ret
    }
}
