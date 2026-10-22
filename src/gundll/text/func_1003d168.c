/*
 * FUN_1003d168 (31 B) - __cdecl.  Returns DAT_10076860 if mode (DAT_10076a94)
 * == 3, else (mode<3 ? DAT_10053f94 : 0) via sign trick.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076a94;   /* DAT_10076a94 */
extern unsigned int g_10076860;   /* DAT_10076860 */
extern unsigned int g_10053f94;   /* DAT_10053f94 */

__declspec(naked) void FUN_1003d168(void)
{
    __asm {
        mov     eax, dword ptr [g_10076a94]
        cmp     eax, 3
        jne     L_d178
        mov     eax, dword ptr [g_10076860]
        ret
L_d178:
        dec     eax
        dec     eax
        neg     eax
        sbb     eax, eax
        not     eax
        and     eax, dword ptr [g_10053f94]
        ret
    }
}
