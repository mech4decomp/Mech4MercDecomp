/*
 * FUN_0066ac90 (112 B) — Iterates 16 times, calling FUN_00416d50 on a
 * local struct and dispatching through vtable slot +0x14 when non-null.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416d50(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __fastcall FUN_0066ac90(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        add     ecx, 0x10
        push    edi
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00416bc0
        mov     ebp, dword ptr [esp + 0x30]
        mov     edi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x18], 0x796b28
        mov     ebx, 0xf
L_b9:
        lea     eax, [esp + 0x10]
        mov     esi, edi
        push    eax
        lea     ecx, [esp + 0x1c]
        and     esi, 0x3
        sar     edi, 0x2
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00416d50
        test    eax, eax
        jz      L_e7
        mov     ecx, dword ptr [esp + 0x38]
        push    ecx
        push    esi
        call    dword ptr [eax + 0x14]
        add     esp, 0x8
L_e7:
        dec     ebx
        cmp     ebx, -0x1
        jg      L_b9
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0xc
    }
}
