/*
 * FUN_004EB180 (59 B) - MLR/Adept init (RET 0, no args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern int   g_7dc860;   /* DAT_007dc860 */
extern int   g_7dc7bc;   /* DAT_007dc7bc */
extern char  g_774630[]; /* DAT_00774630 */

__declspec(naked) void __fastcall FUN_004eb180(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      LEB1B0
        mov     ecx, dword ptr [g_7dc860]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_774630
        push    0x22e
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_7dc7bc], eax
        ret
    LEB1B0:
        mov     dword ptr [g_7dc7bc], 0x0
        ret
    }
}
