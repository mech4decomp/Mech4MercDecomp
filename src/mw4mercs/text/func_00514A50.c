/*
 * FUN_00514A50 (8 B) -- __stdcall (RET 0xC) stub returning 0xe.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00514A50(void)
{
    __asm {
        mov     eax, 0xE
        ret     0xC
    }
}
