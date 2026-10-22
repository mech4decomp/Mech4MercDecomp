/*
 * FUN_004c84d0 (3 B) -- ret 8 stub (stdcall-style empty function popping 8
 * bytes of args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c84d0(void)
{
    __asm {
        ret     8
    }
}
