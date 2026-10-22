/*
 * FUN_006FBC60 (29 B) — GetFullPathNameA wrapper.
 *
 * __stdcall (RET 8), 2 params: (LPSTR out_buf, LPCSTR filename).
 * Calls GetFullPathNameA(filename, 0x100, out_buf, &out_buf).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fbc60(void)
{
    __asm {
        MOV ECX, dword ptr [ESP + 0x4]
        MOV EDX, dword ptr [ESP + 0x8]
        LEA EAX, [ESP + 0x4]
        PUSH EAX
        PUSH ECX
        PUSH 0x100
        PUSH EDX
        _emit 0xFF
        _emit 0x15
        _emit 0xA8
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        RET 0x8
    }
}
