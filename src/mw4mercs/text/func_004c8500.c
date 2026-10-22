/*
 * FUN_004c8500 (3 B) -- ret 0x10 stub (stdcall-style empty function popping
 * 16 bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c8500(void)
{
    __asm {
        ret     0x10
    }
}
