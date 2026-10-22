/*
 * FUN_006FB780 (22 B) — CreateDirectoryA wrapper.
 *
 * __stdcall (RET 4), 1 param (LPCSTR path).
 * Calls CreateDirectoryA(path, NULL), converts BOOL to 0/1 via neg/sbb/neg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fb780(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        PUSH 0x0
        PUSH EAX
        _emit 0xFF
        _emit 0x15
        _emit 0x8C
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        NEG EAX
        SBB EAX, EAX
        NEG EAX
        RET 0x4
    }
}
