/*
 * FUN_006fbe50 (19 B) — __stdcall: SetFileAttributesA(param_1, 0x80)
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   68 80 00 00 00    push 0x80
 *   50                push eax
 *   FF 15 F4 B1 76 00 call dword ptr [0x0076b1f4]  ; SetFileAttributesA
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fbe50(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0x80
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0xF4
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        ret 4
    }
}
