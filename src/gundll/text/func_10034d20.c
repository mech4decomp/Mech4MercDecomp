/*
 * FUN_10034d20 (8 B) - __stdcall, RET 0x4.  Returns 4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034d20(void)
{
    __asm {
        mov     eax, 4
        ret     4
    }
}
