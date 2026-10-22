/*
 * FUN_10008750 (3 B) - __stdcall, RET 0x14.  Stub that just returns to the
 * caller, popping 0x14 bytes of stack args.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008750(void)
{
    __asm {
        ret     0x14
    }
}
