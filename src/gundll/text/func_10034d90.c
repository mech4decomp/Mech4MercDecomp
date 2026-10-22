/*
 * FUN_10034D90 (8 B) - __stdcall, RET 0x4.  Returns E_FAIL (0x80004005).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034D90(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     0x4
    }
}
