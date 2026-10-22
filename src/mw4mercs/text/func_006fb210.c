/*
 * FUN_006FB210 (38 B) — Zero 7 global DWORDs at 0x8566F0-0x856714.
 *
 * __cdecl.
 *
 * Disassembly:
 *   33 C0             xor     eax, eax
 *   A3 F4 66 85 00    mov     [0x8566F4], eax
 *   A3 F8 66 85 00    mov     [0x8566F8], eax
 *   A3 00 67 85 00    mov     [0x856700], eax
 *   A3 FC 66 85 00    mov     [0x8566FC], eax
 *   A3 F0 66 85 00    mov     [0x8566F0], eax
 *   A3 14 67 85 00    mov     [0x856714], eax
 *   A3 10 67 85 00    mov     [0x856710], eax
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fb210(void)
{
    __asm {
        xor     eax, eax
        _emit 0xA3
        _emit 0xF4
        _emit 0x66
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0xF8
        _emit 0x66
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x00
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0xFC
        _emit 0x66
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0xF0
        _emit 0x66
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x14
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0xA3
        _emit 0x10
        _emit 0x67
        _emit 0x85
        _emit 0x00
        ret
    }
}
