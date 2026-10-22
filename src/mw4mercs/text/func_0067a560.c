/*
 * FUN_0067a560 (40 B) — __cdecl, no args.
 *
 * uVar2 = FUN_0067a540(); if 0 return 0.
 * cVar1 = FUN_00415230(DAT_007f1f84);
 * return ~-(uint)(cVar1 != 1) & uVar2;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0067a540(void);
extern char __stdcall FUN_00415230(int);
extern int g_007f1f84;

__declspec(naked) unsigned int __cdecl FUN_0067a560(void)
{
    __asm {
        push    esi
        call    FUN_0067a540
        mov     esi, eax
        test    esi, esi
        jnz     L_cont
        pop     esi
        ret
L_cont:
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        dec     al
        neg     al
        sbb     eax, eax
        not     eax
        and     eax, esi
        pop     esi
        ret
    }
}
