/*
 * FUN_004CC130 (26 B) — __thiscall constructor-like function.
 * Calls FUN_004D5B10(param_1), stores param_2 at offset 0x10, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d5b10(int param);

__declspec(naked) void __stdcall FUN_004cc130(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_004d5b10
        MOV ECX, dword ptr [ESP + 0xC]
        MOV dword ptr [ESI + 0x10], ECX
        MOV EAX, ESI
        POP ESI
        RET 0x8
    }
}
