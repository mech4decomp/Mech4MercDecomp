/*
 * FUN_1000C940 (3 B) - __stdcall, RET 0x4.  Trivial stub: returns without
 * touching its argument.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1000C940(void)
{
    __asm {
        ret     4
    }
}
