/*
 * FUN_006e3070 (19 B) — __fastcall: call FUN_006e2970(), then CharLowerA(*param_1)
 *
 * Disassembly:
 *   56                push esi
 *   8B F1             mov esi, ecx
 *   E8 F8 F8 FF FF    call 0x006e2970
 *   8B 06             mov eax, dword ptr [esi]
 *   50                push eax
 *   FF 15 80 B5 76 00 call dword ptr [0x0076b580]  ; CharLowerA
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006e3070(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8
        _emit 0xF8
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [esi]
        push eax
        _emit 0xFF
        _emit 0x15
        _emit 0x80
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        pop esi
        ret
    }
}
