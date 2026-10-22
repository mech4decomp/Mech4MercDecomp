/*
 * FUN_006A2050 (13 B) — Vtable 0x799CD8 slot 19: wrapper calling FUN_006A20A0.
 *
 * Passes one stack param through to FUN_006A20A0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]
 *   50                push    eax
 *   E8 xx xx xx xx    call    FUN_006A20A0
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006a20a0(void);

__declspec(naked) void __stdcall FUN_006a2050(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006a20a0
        ret     4
    }
}
