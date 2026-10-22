/*
 * FUN_006fb770 (14 B) — SetCurrentDirectoryA wrapper
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   50                push eax
 *   FF 15 94 B1 76 00 call dword ptr [0x0076b194]  ; SetCurrentDirectoryA
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fb770(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x94
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        ret 4
    }
}
