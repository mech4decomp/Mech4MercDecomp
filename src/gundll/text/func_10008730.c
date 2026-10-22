/*
 * FUN_10008730 (3 B) - __stdcall, RET 0x1C.  Stub that just returns to the
 * caller, popping 0x1C bytes of stack args.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008730(void)
{
    __asm {
        ret     0x1c
    }
}
