/*
 * FUN_10030c80 (3 B) - __stdcall, RET 0x4.
 * Empty stub returning to caller, popping 4 bytes.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030c80(void)
{
    __asm {
        ret     0x4
    }
}
