/*
 * FUN_004D2AB0 (16 B) — Thunk: passes param to FUN_00414a70
 * with ECX loaded from [this + 0x10].
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00414a70(void);

__declspec(naked) void __fastcall FUN_004d2ab0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 0x10]
        push    eax
        call    FUN_00414a70
        ret     4
    }
}
