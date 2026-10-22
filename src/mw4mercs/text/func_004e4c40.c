/*
 * FUN_004E4C40 (19 B) — Thunk: saves this (ECX) in ESI, calls
 * FUN_004B5DA0 with the stack param, returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004b5da0(void);

__declspec(naked) void __fastcall FUN_004e4c40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004b5da0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
