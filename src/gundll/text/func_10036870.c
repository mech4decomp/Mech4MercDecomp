/*
 * FUN_10036870 (8 B) - __stdcall, RET 0x4.  Returns constant 3.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10036870(void)
{
    __asm {
        mov     eax, 3
        ret     0x4
    }
}
