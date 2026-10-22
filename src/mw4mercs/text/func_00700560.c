/*
 * FUN_00700560 (94 B) — Critical-section-guarded teardown/reset.
 * Enters a critical section, runs two cleanup helpers, optionally
 * runs two more, leaves the section, then clears several globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00700020(void);
extern int __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f6760(void);

extern void *g_iat_76b110;      /* IAT: EnterCriticalSection */
extern void *g_iat_76b100;      /* IAT: LeaveCriticalSection */

extern unsigned int g_85683c;   /* DAT_0085683c */
extern unsigned char g_8aaac2;  /* DAT_008aaac2 */
extern unsigned int g_8aaac8;   /* DAT_008aaac8 */
extern unsigned int g_8aaacc;   /* DAT_008aaacc */
extern unsigned int g_8aab08;   /* DAT_008aab08 */
extern unsigned int g_856838;   /* DAT_00856838 */

__declspec(naked) void FUN_00700560(void)
{
    __asm {
        push    0x8AAA20
        mov     dword ptr [g_85683c], 0x20
        call    dword ptr [g_iat_76b110]
        call    FUN_00700020
        call    FUN_006f89f0
        test    eax, eax
        jz      L_70058d
        call    FUN_006f89f0
        call    FUN_006f6760
L_70058d:
        push    0x8AAA20
        call    dword ptr [g_iat_76b100]
        xor     eax, eax
        mov     byte ptr [g_8aaac2], al
        mov     dword ptr [g_8aaac8], eax
        mov     dword ptr [g_8aaacc], eax
        mov     dword ptr [g_8aab08], eax
        mov     dword ptr [g_85683c], 0x40
        mov     dword ptr [g_856838], eax
        ret
    }
}
