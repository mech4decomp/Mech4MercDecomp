/*
 * FUN_1003eaae (13 B) - __cdecl.  CRT: restores the previous unhandled-
 * exception filter (g_100756b0) via SetUnhandledExceptionFilter.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049154;   /* IAT: SetUnhandledExceptionFilter */
extern void *g_100756b0;

__declspec(naked) void FUN_1003eaae(void)
{
    __asm {
        push    dword ptr [g_100756b0]
        call    dword ptr [g_10049154]
        ret
    }
}
