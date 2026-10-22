/*
 * FUN_1002F830 (6 B) - __stdcall, RET 0x8.  Returns -1 (0xFFFFFFFF).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1002F830(void)
{
    __asm {
        or      eax, 0xffffffff
        ret     0x8
    }
}
