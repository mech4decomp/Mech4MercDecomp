/*
 * FUN_004E0290 (33 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Calls FUN_004E02C0 as destructor body.
 * If (flags & 1), calls FUN_00416130(this) via global pointer.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004e02c0(int this);
extern void __fastcall FUN_00416130(int this);
extern int DAT_007dc6c4;

__declspec(naked) void __stdcall FUN_004E0290(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004e02c0
        test    byte ptr [esp + 8], 1
        jz      l_skip
        mov     ecx, dword ptr [DAT_007dc6c4]  ; mov ecx, [0x007dc6c4]
        push    esi
        call    FUN_00416130
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
