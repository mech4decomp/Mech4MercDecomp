/*
 * FUN_5e031f4a (26 B) - set default LCID globals.
 * ORs 0x104 into the flag word, then GetUserDefaultLCID().
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_5e77aaf0;   /* DAT_5e77aaf0 */
extern int   g_5e77aaf4;   /* DAT_5e77aaf4 */
extern int   g_5e77aad8;   /* DAT_5e77aad8 */
extern int (*g_5e0350f4)(void);  /* IAT: GetUserDefaultLCID */

__declspec(naked) void FUN_5e031f4a(void)
{
    __asm {
        or      word ptr [g_5e77aaf0], 0x104
        call    dword ptr [g_5e0350f4]
        mov     dword ptr [g_5e77aaf4], eax
        mov     dword ptr [g_5e77aad8], eax
        ret
    }
}
