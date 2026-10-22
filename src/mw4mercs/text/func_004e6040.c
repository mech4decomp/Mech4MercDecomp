/* FUN_004e6040 - MLR/Adept state engine cleanup (62 B) */

extern int g_7dc76c;   /* DAT_007dc76c */
extern int g_7dc770;   /* DAT_007dc770 */
extern void __fastcall FUN_004d5d20(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __stdcall FUN_006f4850(int handle, int mode);

__declspec(naked) void FUN_004e6040(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7dc76c]
        test    esi, esi
        jz      skip
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     eax, dword ptr [g_7dc770]
        push    1
        push    eax
        mov     dword ptr [g_7dc76c], 0
        call    FUN_006f4850
        mov     dword ptr [g_7dc770], 0
        pop     esi
        ret
    }
}
