/*
 * FUN_006f7760 (13 B) — Calls FUN_006f8440(param_1)
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   50                push eax
 *   E8 D6 0C 00 00    call FUN_006f8440
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f7760(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        _emit 0xE8
        _emit 0xD6
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        ret 4
    }
}
