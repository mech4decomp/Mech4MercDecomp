/*
 * FUN_0064df70 (78 B) — __cdecl, one stack param.
 *
 * Computes a key from two globals (DAT_007dab44 / DAT_007dab40), calls
 * FUN_004fcb30(param), and if the result passes a flag check and
 * FUN_00415230(DAT_007f268c) returns 1, returns it; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_0064df70_dword_7dab44;   /* DAT_007dab44 */
extern unsigned int g_0064df70_dword_7dab40;   /* DAT_007dab40 */
extern unsigned int g_0064df70_dword_7f268c;   /* DAT_007f268c */

extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void __stdcall FUN_0064df70(void)
{
    __asm {
        mov     eax, dword ptr [g_0064df70_dword_7dab44]
        mov     ecx, dword ptr [g_0064df70_dword_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_ret0
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_ret0
        mov     eax, dword ptr [g_0064df70_dword_7f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_ret0
        mov     eax, esi
        pop     esi
        ret
L_ret0:
        xor     eax, eax
        pop     esi
        ret
    }
}
