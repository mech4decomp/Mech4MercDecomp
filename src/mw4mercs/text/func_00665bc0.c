/*
 * FUN_00665bc0 (110 B) — ABL list lookup: iterate a list (0x384 offset)
 * matching field +0x3c against param_2; return an int from the match
 * (or 2 if not found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(int);
extern int __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern int __cdecl FUN_004e7760(void);

__declspec(naked) void FUN_00665bc0(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        add     eax, 0x384
        push    eax
        lea     ecx, [esp + 0x8]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x4], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        jz      L_665c02
        mov     esi, dword ptr [esp + 0x20]
L_665bf0:
        cmp     dword ptr [eax + 0x3c], esi
        jz      L_665c15
        lea     ecx, [esp + 0x4]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_665bf0
L_665c02:
        lea     ecx, [esp + 0x4]
        call    FUN_00416c60
        mov     eax, 0x2
        pop     esi
        add     esp, 0x14
        ret
L_665c15:
        mov     ecx, eax
        call    FUN_004e7760
        lea     ecx, [esp + 0x4]
        mov     esi, eax
        call    FUN_00416c60
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret
    }
}
