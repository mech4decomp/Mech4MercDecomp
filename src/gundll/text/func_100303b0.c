/*
 * FUN_100303B0 (8 B) - __stdcall, RET 0x8.  Returns E_NOTIMPL (0x80004005).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100303B0(void)
{
    __asm {
        mov     eax, 0x80004005
        ret     8
    }
}
