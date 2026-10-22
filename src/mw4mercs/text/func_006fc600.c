/*
 * FUN_006fc600 (22 B) — __stdcall: call FUN_006fc8c0(param_2, param_3), ret 0xc
 *
 * Disassembly:
 *   8B 44 24 0C       mov eax, dword ptr [esp + 0xc]
 *   8B 4C 24 08       mov ecx, dword ptr [esp + 0x8]
 *   50                push eax
 *   51                push ecx
 *   8B 4C 24 0C       mov ecx, dword ptr [esp + 0xc]
 *   E8 AD 02 00 00    call 0x006fc8c0
 *   C2 0C 00          ret 0xc
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fc600(void)
{
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        _emit 0xE8
        _emit 0xAD
        _emit 0x02
        _emit 0x00
        _emit 0x00
        ret 0xc
    }
}
