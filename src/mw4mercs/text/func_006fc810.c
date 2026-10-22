/*
 * FUN_006fc810 (11 B) — __fastcall CloseHandle wrapper
 *
 * Disassembly:
 *   8B 41 04          mov eax, dword ptr [ecx + 4]
 *   50                push eax
 *   FF 15 EC B0 76 00 call dword ptr [0x0076b0ec]  ; CloseHandle
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006fc810(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0xEC
        _emit 0xB0
        _emit 0x76
        _emit 0x00
        ret
    }
}
