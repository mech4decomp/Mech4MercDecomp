/*
 * FUN_10031260 (5 B) - __stdcall, RET 0x4.  Returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031260(void)
{
    __asm {
        xor     eax, eax
        ret     0x4
    }
}
