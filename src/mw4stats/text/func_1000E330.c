/*
 * FUN_1000e330 (3 B) - empty function, returns with 8 bytes of args popped.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000e330(void)
{
    __asm {
        ret     0x8
    }
}
