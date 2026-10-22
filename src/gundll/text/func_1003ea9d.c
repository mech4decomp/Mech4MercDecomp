/*
 * FUN_1003ea9d (17 B) - __cdecl.  CRT: installs FUN_1003ea57 as the
 * unhandled-exception filter (SetUnhandledExceptionFilter) and stores the
 * previous filter in g_100756b0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049154;   /* IAT: SetUnhandledExceptionFilter */
extern void *g_100756b0;
extern void __stdcall FUN_1003ea57(void);

__declspec(naked) void FUN_1003ea9d(void)
{
    __asm {
        push    offset FUN_1003ea57
        call    dword ptr [g_10049154]
        mov     dword ptr [g_100756b0], eax
        ret
    }
}
