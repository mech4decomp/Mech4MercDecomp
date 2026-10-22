/*
 * FUN_10031AA0 (8 B) - __stdcall, RET 0x4.  Returns constant 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031AA0(void)
{
    __asm {
        mov     eax, 1
        ret     0x4
    }
}
