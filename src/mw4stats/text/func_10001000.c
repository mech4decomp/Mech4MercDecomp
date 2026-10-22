/*
 * FUN_10001000 (8 B) - returns constant 1.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10001000(void)
{
    __asm {
        mov     eax, 1
        ret     0xc
    }
}
