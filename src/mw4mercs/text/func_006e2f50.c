/*
 * FUN_006E2F50 (28 B) — Set string length + null-terminate.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (int length).
 * Calls FUN_006E2EB0(length) to validate/grow buffer.
 * Then sets buffer[-8] = length (stored before buffer) and
 * buffer[length] = 0 (null-terminate).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2eb0(int length);

__declspec(naked) void __stdcall FUN_006e2f50(void)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [ESP + 0xC]
        MOV ESI, ECX
        PUSH EDI
        CALL FUN_006e2eb0
        MOV EAX, dword ptr [ESI]
        MOV dword ptr [EAX - 0x8], EDI
        MOV byte ptr [EAX + EDI], 0x0
        POP EDI
        POP ESI
        RET 0x4
    }
}
