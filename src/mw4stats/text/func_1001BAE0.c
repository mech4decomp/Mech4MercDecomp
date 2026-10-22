/*
 * FUN_1001bae0 (3 B) - empty function, returns with RET 0x4.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1001bae0(void)
{
    __asm {
        ret     0x4
    }
}
