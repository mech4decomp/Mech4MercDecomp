/*
 * FUN_10008740 (5 B) - __stdcall, RET 0x14.  Stub returning AL=1 (true),
 * popping 0x14 bytes of stack args.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008740(void)
{
    __asm {
        mov     al, 1
        ret     0x14
    }
}
