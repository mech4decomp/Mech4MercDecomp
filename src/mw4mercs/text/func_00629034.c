/*
 * Residual/gap data at 0x00629034-0x00629050 (29 B).
 * The 8-entry jump table of the preceding function FUN_00628ED0
 * (dispatch `FF 24 85`), starting at its first entry 0x00628EE4.
 * Emit table dwords as literal patched addresses, one byte per __emit
 * line (C4405 if multiple). Trailing byte 0x46 is the start of the
 * following function's code (in-slice only).
 */
__declspec(naked) void func_00629034(void) {
    __asm {
        /* jump-table dword entry 0x00628EE4 */
        __emit 0xE4
        __emit 0x8E
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628EF2 */
        __emit 0xF2
        __emit 0x8E
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628F00 */
        __emit 0x00
        __emit 0x8F
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628F0E */
        __emit 0x0E
        __emit 0x8F
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628F1C */
        __emit 0x1C
        __emit 0x8F
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628F2A */
        __emit 0x2A
        __emit 0x8F
        __emit 0x62
        __emit 0x00
        /* jump-table dword entry 0x00628F38 */
        __emit 0x38
        __emit 0x8F
        __emit 0x62
        __emit 0x00
        /* truncated byte 0x46 of following code (in-slice only) */
        __emit 0x46
    }
}
