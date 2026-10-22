/*
 * FUN_006e3090 (22 B) — __fastcall: call FUN_006e2970(), then _strrev(*param_1)
 *
 * Disassembly:
 *   56                push esi
 *   8B F1             mov esi, ecx
 *   E8 D8 F8 FF FF    call 0x006e2970
 *   8B 06             mov eax, dword ptr [esi]
 *   50                push eax
 *   FF 15 A4 B3 76 00 call dword ptr [0x0076b3a4]  ; _strrev
 *   83 C4 04          add esp, 4
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006e3090(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8
        _emit 0xD8
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [esi]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0xA4
        _emit 0xB3
        _emit 0x76
        _emit 0x00
        add esp, 4
        pop esi
        ret
    }
}
