/*
 * FUN_00706560 (8 B) -- __stdcall (RET 4) stub returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00706560(void)
{
    __asm {
        mov     eax, 0x1
        ret     4
    }
}
