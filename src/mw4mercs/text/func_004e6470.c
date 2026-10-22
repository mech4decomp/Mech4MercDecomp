/*
 * FUN_004E6470 (15 B) — Setter: writes param to this+0x24,
 * then calls FUN_004E6480.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004e6480(void);

__declspec(naked) void __fastcall FUN_004e6470(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x24], eax
        call    FUN_004e6480
        ret     4
    }
}
