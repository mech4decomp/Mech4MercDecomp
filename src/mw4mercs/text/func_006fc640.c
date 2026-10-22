/*
 * FUN_006FC640 (22 B) — Thunk wrapper calling FUN_006FC820.
 *
 * __stdcall (RET 0xC), 3 params.
 * Reads param_2 (ESP+0x8) and param_3 (ESP+0xC), pushes them in reverse,
 * then loads param_1 (ESP+0x4, now at ESP+0xC after pushes) into ECX,
 * then calls FUN_006FC820.
 *
 * Equivalent to: FUN_006fc820(param_1, param_3, param_2)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006fc820(void);

__declspec(naked) void __stdcall FUN_006fc640(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x8]
        MOV ECX, dword ptr [ESP + 0xC]
        PUSH EAX
        PUSH ECX
        MOV ECX, dword ptr [ESP + 0xC]
        CALL FUN_006fc820
        RET 0xC
    }
}
