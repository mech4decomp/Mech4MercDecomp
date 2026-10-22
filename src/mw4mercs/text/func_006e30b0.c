/*
 * FUN_006E30B0 (25 B) — Set byte at index in a buffer.
 *
 * __thiscall (ECX = this), RET 8, 2 stack params: (int index, byte value).
 * Calls FUN_006E2970() for validation, then sets this->buffer[index] = value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e2970(void);

__declspec(naked) void __stdcall FUN_006e30b0(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        CALL FUN_006e2970
        MOV EAX, dword ptr [ESI]
        MOV CL, byte ptr [ESP + 0xC]
        MOV EDX, dword ptr [ESP + 0x8]
        MOV byte ptr [EAX + EDX], CL
        POP ESI
        RET 0x8
    }
}
