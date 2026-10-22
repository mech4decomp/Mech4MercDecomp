/*
 * FUN_1003A0D9 (3 B) - __cdecl.  Returns 0: xor eax,eax; ret.
 * (Transcribed from reference bytes; gaptext tail.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003A0D9(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
