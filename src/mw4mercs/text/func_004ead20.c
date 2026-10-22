/*
 * FUN_004EAD20 (98 B) - MLR/Adept teardown (RET 0, one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_004d5d20(void);
extern void __cdecl FUN_004084e0(void);

extern char  g_7dc7b0;   /* DAT_007dc7b0 */
extern int   g_7dc7b4;   /* DAT_007dc7b4 */
extern int   g_7dc7b8;   /* DAT_007dc7b8 */
extern char  g_774554[]; /* DAT_00774554 */
extern char  g_774548[]; /* DAT_00774548 */
extern char  g_774540[]; /* DAT_00774540 */

__declspec(naked) void __fastcall FUN_004ead20(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        push    esi
        jz      LAD5C
        push    offset g_774554
        call    FUN_0040eda0
        mov     esi, eax
        xor     eax, eax
        mov     al, byte ptr [g_7dc7b0]
        mov     ecx, esi
        push    eax
        push    offset g_774548
        call    FUN_00411f20
        mov     ecx, dword ptr [g_7dc7b4]
        push    ecx
        push    offset g_774540
        mov     ecx, esi
        call    FUN_00411dc0
    LAD5C:
        mov     esi, dword ptr [g_7dc7b8]
        test    esi, esi
        jz      LAD76
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    LAD76:
        mov     dword ptr [g_7dc7b8], 0x0
        pop     esi
        ret
    }
}
