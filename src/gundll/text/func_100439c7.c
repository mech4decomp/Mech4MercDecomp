/*
 * FUN_100439C7 (6 B) - __cdecl.  Getter: returns dword at g_10054C38.
 * (Transcribed from reference bytes; gaptext tail.)
 *
 * CFLAGS: /O1
 */

extern void *g_10054c38;

__declspec(naked) void FUN_100439C7(void)
{
    __asm {
        mov     eax, dword ptr [g_10054c38]
        ret
    }
}
