/*
 * FUN_100426E9 (6 B) - __cdecl.  Getter: return g_10075724.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10075724;   /* A1 absolute load of DAT_10075724 */

__declspec(naked) void FUN_100426E9(void)
{
    __asm {
        mov     eax, dword ptr [g_10075724]
        ret
    }
}
