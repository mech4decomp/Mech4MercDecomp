/*
 * FUN_006FB7A0 (25 B) — MoveFileA wrapper.
 *
 * __stdcall (RET 8), 2 params: (LPCSTR existing, LPCSTR new).
 * Calls MoveFileA(existing, new), converts BOOL to 0/1 via neg/sbb/neg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fb7a0(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x8]
        MOV ECX, dword ptr [ESP + 0x4]
        PUSH EAX
        PUSH ECX
        _emit 0xFF
        _emit 0x15
        _emit 0x90
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        NEG EAX
        SBB EAX, EAX
        NEG EAX
        RET 0x8
    }
}
