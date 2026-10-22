/* Residual/gap function at 0x0074F758 (69 B).
 * This is the tail of a prior function's jump table (17 dword entries)
 * plus one truncated byte (0x0E) of the following function's code that
 * falls inside the 69-byte extent. Emit the table dwords as literal
 * patched addresses, one byte per __emit line (C4405 if multiple). */
__declspec(naked) void func_0074f758(void) {
    __asm {
        /* jump-table dword entry 0x0074ED8B */
        __emit 0x8B
        __emit 0xED
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EDA8 */
        __emit 0xA8
        __emit 0xED
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EDD3 */
        __emit 0xD3
        __emit 0xED
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EDF6 */
        __emit 0xF6
        __emit 0xED
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EE21 */
        __emit 0x21
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EE4C */
        __emit 0x4C
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EE77 */
        __emit 0x77
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EEA2 */
        __emit 0xA2
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EEC5 */
        __emit 0xC5
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EEE8 */
        __emit 0xE8
        __emit 0xEE
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EF05 */
        __emit 0x05
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EF30 */
        __emit 0x30
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EF4D */
        __emit 0x4D
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EF6A */
        __emit 0x6A
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EF95 */
        __emit 0x95
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EFC0 */
        __emit 0xC0
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* jump-table dword entry 0x0074EFEB */
        __emit 0xEB
        __emit 0xEF
        __emit 0x74
        __emit 0x00
        /* truncated byte 0x0E of following code (in-slice only) */
        __emit 0x0E
    }
}
