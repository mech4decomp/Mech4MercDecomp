/*
 * FUN_006FC4B0 (24 B) — GetFileAttributesA wrapper (file exists check).
 *
 * __stdcall (RET 4), 1 param (LPCSTR path).
 * Calls GetFileAttributesA(path), returns (result != -1) as bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fc4b0(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        PUSH EAX
        _emit 0xFF
        _emit 0x15
        _emit 0xB4
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        XOR ECX, ECX
        CMP EAX, -0x1
        SETNZ CL
        MOV AL, CL
        RET 0x4
    }
}
