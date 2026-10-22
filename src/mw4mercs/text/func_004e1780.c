/*
 * FUN_004E1780 (34 B) — Setter method.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Stores param at [this+0x4c]. If non-null, calls FUN_004EE490
 * with [param+0x24]. Otherwise calls FUN_004EE4E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ee490(int param);
extern void __cdecl FUN_004ee4e0(void);

__declspec(naked) void __stdcall FUN_004E1780(int param)
{
    __asm {
        mov     eax, [esp + 4]
        test    eax, eax
        mov     [ecx + 0x4c], eax
        jz      l_skip
        mov     eax, [eax + 0x24]
        push    eax
        call    FUN_004ee490
        add     esp, 4
        ret     4
    l_skip:
        call    FUN_004ee4e0
        ret     4
    }
}
