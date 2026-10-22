/*
 * FUN_006e30f0 (20 B) — __fastcall: call FUN_006e2970(), then OemToCharA(*param_1, *param_1)
 *
 * Disassembly:
 *   56                push esi
 *   8B F1             mov esi, ecx
 *   E8 78 F8 FF FF    call 0x006e2970
 *   8B 36             mov esi, dword ptr [esi]
 *   56                push esi
 *   56                push esi
 *   FF 15 78 B5 76 00 call dword ptr [0x0076b578]  ; OemToCharA
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006e30f0(void)
{
    __asm {
        push esi
        mov esi, ecx
        _emit 0xE8
        _emit 0x78
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        mov esi, dword ptr [esi]
        push esi
        push esi
        _emit 0xFF
        _emit 0x15
        _emit 0x78
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        pop esi
        ret
    }
}
