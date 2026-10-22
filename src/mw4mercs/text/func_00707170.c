/*
 * FUN_00707170 (5 B) -- __stdcall (RET 0x4) stub returning 1 in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00707170(void)
{
    __asm {
        mov     al, 0x1
        ret     0x4
    }
}
