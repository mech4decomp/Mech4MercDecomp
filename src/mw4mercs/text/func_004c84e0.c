/*
 * FUN_004c84e0 (3 B) -- ret 0xc stub (stdcall-style empty function popping
 * 12 bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c84e0(void)
{
    __asm {
        ret     0xc
    }
}
