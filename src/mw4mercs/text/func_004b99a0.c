/*
 * FUN_004B99A0 (30 B) — __thiscall method.
 * Calls FUN_00421EC0(param_1), then FUN_00491340(param_1).
 * RET 0x4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00421ec0(int param_1);
extern void __cdecl FUN_00491340(int param_1);

__declspec(naked) void __stdcall FUN_004b99a0(void)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [ESP + 0xC]
        PUSH EDI
        MOV ESI, ECX
        CALL FUN_00421ec0
        ADD ESP, 0x4
        PUSH EDI
        MOV ECX, ESI
        CALL FUN_00491340
        POP EDI
        POP ESI
        RET 0x4
    }
}
