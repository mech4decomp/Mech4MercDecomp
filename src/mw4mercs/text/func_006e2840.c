/*
 * FUN_006e2840 (16 B) — __fastcall: deref FUN_006e27b0(), copy dword, return this
 *
 * Disassembly:
 *   56                push esi
 *   8B F1             mov esi, ecx
 *   E8 68 FF FF FF    call 0x006e27b0
 *   8B 00             mov eax, dword ptr [eax]
 *   89 06             mov dword ptr [esi], eax
 *   8B C6             mov eax, esi
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006e2840(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8
        _emit 0x68
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
    }
}
