/*
 * FUN_10008770 (3 B) - __stdcall, RET 0x10.  Stub that just returns to the
 * caller, popping 0x10 bytes of stack args.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008770(void)
{
    __asm {
        ret     0x10
    }
}
