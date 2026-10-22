/*
 * FUN_006d2f50 (16 B) — __thiscall: lea eax, [esp+4]; push eax; add ecx, 4; call FUN_00416f60; ret 4
 *
 * Disassembly:
 *   8D 44 24 04       lea eax, dword ptr [esp + 4]
 *   50                push eax
 *   83 C1 04          add ecx, 4
 *   E8 03 40 D4 FF    call 0x00416f60
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d2f50(void)
{
    __asm {
        lea eax, dword ptr [esp + 4]
        push eax
        add ecx, 4
        _emit 0xE8
        _emit 0x03
        _emit 0x40
        _emit 0xD4
        _emit 0xFF
        ret 4
    }
}
