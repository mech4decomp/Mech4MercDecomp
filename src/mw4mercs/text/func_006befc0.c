/*
 * FUN_006BEFC0 (13 B) — Zero two globals.
 *
 * Sets DAT_0082f350 and DAT_0082f354 to 0.
 *
 * __cdecl (no params).
 *
 * Disassembly:
 *   33 C0             xor     eax, eax
 *   A3 50 F3 82 00    mov     [0x0082f350], eax
 *   A3 54 F3 82 00    mov     [0x0082f354], eax
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006befc0(void)
{
    __asm {
        xor     eax, eax
; mov [0x0082f350], eax
_emit 0xA3
_emit 0x50
_emit 0xF3
_emit 0x82
_emit 0x00
; mov [0x0082f354], eax
_emit 0xA3
_emit 0x54
_emit 0xF3
_emit 0x82
_emit 0x00
        ret
    }
}
