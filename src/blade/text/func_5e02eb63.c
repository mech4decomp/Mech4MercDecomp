/*
 * FUN_5e02eb63 (41 B) - clears the codepage table globals
 * (DAT_5e77ad00, DAT_5e77abe8, DAT_5e77abfc, DAT_5e77ae04,
 * DAT_5e77abf0..f8).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abe8;      /* DAT_5e77abe8 */
extern int g_5e77abfc;      /* DAT_5e77abfc */
extern int g_5e77ae04;      /* DAT_5e77ae04 */
extern unsigned char g_5e77ad00[];  /* DAT_5e77ad00 (byte array) */
extern int g_5e77abf0[];    /* DAT_5e77abf0 (dword array) */

__declspec(naked) void FUN_5e02eb63(void)
{
    __asm {
        push    edi
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_5e77ad00
        rep stosd
        stosb
        xor     eax, eax
        mov     edi, offset g_5e77abf0
        mov     [g_5e77abe8], eax
        mov     [g_5e77abfc], eax
        mov     [g_5e77ae04], eax
        stosd
        stosd
        stosd
        pop     edi
        ret
    }
}
