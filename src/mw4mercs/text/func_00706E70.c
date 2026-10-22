/*
 * FUN_00706E70 (5 B) -- __stdcall (RET 0x8) stub returning 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00706E70(void)
{
    __asm {
        xor     eax, eax
        ret     0x8
    }
}
