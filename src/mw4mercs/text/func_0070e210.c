/*
 * FUN_0070e210 (5 B) — returns EAX=0, `ret 4` (pops 4 bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_0070e210(void)
{
    __asm {
        xor     eax, eax
        ret     4
    }
}
