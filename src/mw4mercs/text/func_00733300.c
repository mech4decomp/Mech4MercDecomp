/*
 * FUN_00733300 (1 B) — empty function, just RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00733300(void)
{
    __asm {
        ret
    }
}
