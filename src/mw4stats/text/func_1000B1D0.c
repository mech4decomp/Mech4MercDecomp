/*
 * FUN_1000b1d0 (1 B) - empty function, just returns.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000b1d0(void)
{
    __asm {
        ret
    }
}
