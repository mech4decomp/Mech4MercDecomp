/*
 * FUN_1002F490 (8 B) - __stdcall, RET 0x8.  Returns E_NOTIMPL (0x80004001).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1002F490(void)
{
    __asm {
        mov     eax, 0x80004001
        ret     0x8
    }
}
