/*
 * FUN_004F9380 (35 B) — Conditional call (__thiscall, RET 4).
 *
 * Calls FUN_00416B60(this + 0x19c, param_1). If result non-zero,
 * calls FUN_00415CA0(this + 0x19c, result).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00416b60(int param);
extern void __stdcall FUN_00415ca0(int param);

__declspec(naked) void __fastcall FUN_004f9380(void)
{
    __asm {
        mov     eax, [esp + 4]
        push    esi
        lea     esi, [ecx + 0x19c]
        push    eax
        mov     ecx, esi
        call    FUN_00416b60
        test    eax, eax
        jz      l_done
        push    eax
        mov     ecx, esi
        call    FUN_00415ca0
    l_done:
        pop     esi
        ret     4
    }
}
