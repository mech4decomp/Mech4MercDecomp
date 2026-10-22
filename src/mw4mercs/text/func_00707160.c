/*
 * FUN_00707160 (5 B) — returns AL=1, `ret 4` (pops 4 bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_00707160(void)
{
    __asm {
        mov     al, 1
        ret     4
    }
}
