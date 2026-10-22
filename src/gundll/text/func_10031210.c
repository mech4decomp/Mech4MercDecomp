/*
 * FUN_10031210 (8 B) - __stdcall, RET 0x4.  Returns constant 4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031210(void)
{
    __asm {
        mov     eax, 4
        ret     0x4
    }
}
