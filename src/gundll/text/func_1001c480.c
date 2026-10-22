/*
 * FUN_1001C480 (13 B) - __cdecl.  Zeroes the two globals g_10055058 and
 * g_1005505c (string-load state).  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10055058;
extern int g_1005505c;

__declspec(naked) void FUN_1001C480(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_10055058], eax
        mov     dword ptr [g_1005505c], eax
        ret
    }
}
