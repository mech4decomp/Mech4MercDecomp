/*
 * FUN_1003845F (2 B) - __stdcall, RET 0.  No-op stub: pop edi, ret.
 * (Transcribed from reference bytes; gaptext tail.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003845F(void)
{
    __asm {
        pop     edi
        ret
    }
}
