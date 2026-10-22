/*
 * FUN_00665b40 (115 B) — ABL list lookup: iterate a list (0x370 offset)
 * matching field +0x34 against param_2; return a float from the match
 * (or 0.0 if not found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_00416bc0(int);
extern int __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern float __cdecl FUN_004e7bf0(void);

__declspec(naked) void FUN_00665b40(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        add     eax, 0x370
        push    eax
        lea     ecx, [esp + 0x8]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0x4], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        jz      L_665b82
        mov     esi, dword ptr [esp + 0x20]
L_665b70:
        cmp     dword ptr [eax + 0x34], esi
        jz      L_665b96
        lea     ecx, [esp + 0x4]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_665b70
L_665b82:
        lea     ecx, [esp + 0x4]
        call    FUN_00416c60
        fld     dword ptr [g_0076c5b0]
        pop     esi
        add     esp, 0x14
        ret
L_665b96:
        mov     ecx, eax
        call    FUN_004e7bf0
        fstp    dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x4]
        call    FUN_00416c60
        fld     dword ptr [esp + 0x1c]
        pop     esi
        add     esp, 0x14
        ret
    }
}
