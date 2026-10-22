/*
 * FUN_006e5910 (19 B) — __cdecl: call FUN_00405ee0(), FUN_00709c30(), PostQuitMessage(0)
 *
 * Disassembly:
 *   E8 CB 05 D2 FF    call 0x00405ee0
 *   E8 16 43 02 00    call 0x00709c30
 *   6A 00             push 0
 *   FF 15 48 B5 76 00 call dword ptr [0x0076b548]  ; PostQuitMessage
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006e5910(void)
{
    __asm {
        _emit 0xE8
        _emit 0xCB
        _emit 0x05
        _emit 0xD2
        _emit 0xFF
        _emit 0xE8
        _emit 0x16
        _emit 0x43
        _emit 0x02
        _emit 0x00
        push 0
        _emit 0xFF
        _emit 0x15
        _emit 0x48
        _emit 0xB5
        _emit 0x76
        _emit 0x00
        ret
    }
}
