/*
 * FUN_1003e181 (6 B) - __cdecl.  Returns DAT_10053f94.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10053f94;   /* DAT_10053f94 */

__declspec(naked) void FUN_1003e181(void)
{
    __asm {
        mov     eax, dword ptr [g_10053f94]
        ret
    }
}
