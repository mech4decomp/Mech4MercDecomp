/*
 * FUN_004D2AD0 (16 B) — Thunk: passes param to FUN_004149a0
 * with ECX loaded from [this + 0x10].
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004149a0(void);

__declspec(naked) void __fastcall FUN_004d2ad0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 0x10]
        push    eax
        call    FUN_004149a0
        ret     4
    }
}
