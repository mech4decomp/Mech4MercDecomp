/*
 * FUN_10008700 (5 B) - __stdcall, RET 0x1c. Stub: returns TRUE (al=1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008700(void)
{
    __asm {
        mov     al, 1
        ret     0x1c
    }
}
