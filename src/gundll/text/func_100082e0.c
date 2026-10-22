/*
 * FUN_100082e0 (5 B) - __stdcall, RET 0x10. Stub: returns TRUE (al=1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100082e0(void)
{
    __asm {
        mov     al, 1
        ret     0x10
    }
}
