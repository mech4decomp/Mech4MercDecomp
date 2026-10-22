/*
 * FUN_006F1870 (69 B) — Conditional sub-object insertion.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param). Checks if
 * FUN_00415230(DAT_007F1F84) returns 1. If so, compares the sub-object
 * at this+0x20 against the parameter. If different, calls FUN_0041FCB0
 * (clear) and FUN_0041FCD0 (copy) and returns 1. Otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415230(int);
extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(int);

__declspec(naked) void __fastcall FUN_006f1870(void)
{
    __asm {
        _emit   0xA1
        _emit   0x84
        _emit   0x1F
        _emit   0x7F
        _emit   0x00
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_fail
        add     esi, 0x20
        mov     ecx, esi
        call    FUN_0041fd80
        cmp     eax, edi
        jz      l_fail
        mov     ecx, esi
        call    FUN_0041fcb0
        push    edi
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    l_fail:
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    }
}
