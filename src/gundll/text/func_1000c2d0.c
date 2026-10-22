/*
 * FUN_1000C2D0 (3 B) - __stdcall, RET 0x4.  Trivial stub: returns without
 * touching its argument.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1000C2D0(void)
{
    __asm {
        ret     4
    }
}
