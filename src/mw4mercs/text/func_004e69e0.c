/* FUN_004e69e0 - MLR/Adept internal-damage object factory (59 B) */

extern int g_7dc140;   /* DAT_007dc140 */
extern int g_7dc774;   /* DAT_007dc774 */
extern void *__cdecl FUN_004084d0(int);
extern int __fastcall FUN_004d5c10(int size, const char *name, void *parent, int flags, void *vtable);

__declspec(naked) void FUN_004e69e0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_004e6a10
        mov     ecx, dword ptr [g_7dc140]
        push    0
        push    0
        push    ecx
        push    0x7741e4
        push    0x236
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_7dc774], eax
        ret
L_004e6a10:
        mov     dword ptr [g_7dc774], 0
        ret
    }
}
