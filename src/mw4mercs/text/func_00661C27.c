/*
 * FUN_00661C27 (extent 0x661C27-0x661C90, 105 B) - .text DATA block.
 * Pure data table (16-bit value table); not real code. Inline asm has no
 * db/dw directive, so the raw bytes are emitted verbatim.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00661C27(void)
{
    __asm {
        /* data table bytes */
        __emit 0x90
        __emit 0x7A
        __emit 0x17
        __emit 0x66
        __emit 0x00
        __emit 0xAA
        __emit 0x17
        __emit 0x66
        __emit 0x00
        __emit 0xDA
        __emit 0x17
        __emit 0x66
        __emit 0x00
        __emit 0x0A
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0x3A
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0x6A
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0x9A
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0xCA
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0x2A
        __emit 0x19
        __emit 0x66
        __emit 0x00
        __emit 0xFA
        __emit 0x18
        __emit 0x66
        __emit 0x00
        __emit 0x5A
        __emit 0x19
        __emit 0x66
        __emit 0x00
        __emit 0x8A
        __emit 0x19
        __emit 0x66
        __emit 0x00
        __emit 0xBA
        __emit 0x19
        __emit 0x66
        __emit 0x00
        __emit 0xEA
        __emit 0x19
        __emit 0x66
        __emit 0x00
        __emit 0x1A
        __emit 0x1A
        __emit 0x66
        __emit 0x00
        __emit 0x4A
        __emit 0x1A
        __emit 0x66
        __emit 0x00
        __emit 0x7A
        __emit 0x1A
        __emit 0x66
        __emit 0x00
        __emit 0xAA
        __emit 0x1A
        __emit 0x66
        __emit 0x00
        __emit 0xDA
        __emit 0x1A
        __emit 0x66
        __emit 0x00
        __emit 0x0A
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0x3A
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0x6A
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0x97
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0xC0
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0xE9
        __emit 0x1B
        __emit 0x66
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
