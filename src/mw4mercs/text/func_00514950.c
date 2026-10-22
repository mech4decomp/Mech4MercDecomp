/*
 * FUN_00514950 (8 B) -- __stdcall (RET 0xC) stub returning 0xff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00514950(void)
{
    __asm {
        mov     eax, 0xFF
        ret     0xC
    }
}
