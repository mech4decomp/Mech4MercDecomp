/*
 * FUN_10030980 (8 B) - __stdcall, RET 0x4.  Returns constant 2.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030980(void)
{
    __asm {
        mov     eax, 2
        ret     0x4
    }
}
