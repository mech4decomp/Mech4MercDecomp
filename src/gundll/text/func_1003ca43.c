/*
 * FUN_1003ca43 (16 B) - __cdecl. Returns g_10076864 if g_1007687c is
 * non-zero, else 0. (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_1007687c;   /* DAT_1007687c */
extern int g_10076864;   /* DAT_10076864 */

__declspec(naked) void __cdecl FUN_1003ca43(void)
{
    __asm {
        mov     eax, dword ptr [g_1007687c]
        neg     eax
        sbb     eax, eax
        and     eax, dword ptr [g_10076864]
        ret
    }
}
