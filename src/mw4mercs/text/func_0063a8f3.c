/*
 * FUN_0063a8f3 (29 B) — jump-table tail of the preceding function. A single
 * alignment nop (90) followed by 7 dword pointers (0x006397C0, 0x00639E78,
 * 0x0063A013, 0x0063A669, 0x006399E3, 0x00639EEE, 0x0063A21C) to code within
 * the same function. Inline asm has no `dd`, so each dword is emitted as
 * literal patched-address bytes, one byte per __emit line (C4405 if multiple).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0063a8f3(void)
{
    __asm {
        nop    /* alignment pad */
        /* jump-table tail: 7 dword pointers (literal patched addrs) */
        __emit 0xC0
        __emit 0x97
        __emit 0x63
        __emit 0x00
        __emit 0x78
        __emit 0x9E
        __emit 0x63
        __emit 0x00
        __emit 0x13
        __emit 0xA0
        __emit 0x63
        __emit 0x00
        __emit 0x69
        __emit 0xA6
        __emit 0x63
        __emit 0x00
        __emit 0xE3
        __emit 0x99
        __emit 0x63
        __emit 0x00
        __emit 0xEE
        __emit 0x9E
        __emit 0x63
        __emit 0x00
        __emit 0x1C
        __emit 0xA2
        __emit 0x63
        __emit 0x00
    }
}
