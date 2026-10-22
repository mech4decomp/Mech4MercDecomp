/*
 * FUN_006fb750 (19 B) — __stdcall: GetCurrentDirectoryA(param_2, param_1)
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   8B 4C 24 08       mov ecx, dword ptr [esp + 8]
 *   50                push eax
 *   51                push ecx
 *   FF 15 58 B2 76 00 call dword ptr [0x0076b258]  ; GetCurrentDirectoryA
 *   C2 08 00          ret 8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fb750(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        push eax
        push ecx
        _emit 0xFF
        _emit 0x15
        _emit 0x58
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        ret 8
    }
}
