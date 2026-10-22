/*
 * FUN_00514390 (8 B) -- __stdcall (RET 0xC) stub returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00514390(void)
{
    __asm {
        mov     eax, 0x1
        ret     0xC
    }
}
