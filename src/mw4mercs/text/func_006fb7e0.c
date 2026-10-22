/*
 * FUN_006fb7e0 (20 B) — __stdcall: RemoveDirectoryA(param_1), convert BOOL to 0/1
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   50                push eax
 *   FF 15 98 B1 76 00 call dword ptr [0x0076b198]  ; RemoveDirectoryA
 *   F7 D8             neg eax
 *   1B C0             sbb eax, eax
 *   F7 D8             neg eax
 *   C2 04 00          ret 4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fb7e0(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x98
        _emit 0xB1
        _emit 0x76
        _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        ret 4
    }
}
