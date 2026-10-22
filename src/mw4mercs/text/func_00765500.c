/*
 * DATA_00765500 (0x30 bytes @ 0x765500-0x765530) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00765500(void)
{
    __asm {
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0x56
        __emit 0x8B
        __emit 0x74
        __emit 0x24
        __emit 0x0C
        __emit 0x50
        __emit 0x56
        __emit 0xE8
        __emit 0x40
        __emit 0x0A
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0x83
        __emit 0xC4
        __emit 0x08
        __emit 0x51
        __emit 0xE8
        __emit 0x45
        __emit 0x86
        __emit 0xFF
        __emit 0xFF
        __emit 0xA1
        __emit 0xFC
        __emit 0xD4
        __emit 0x8B
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x2B
        __emit 0xC6
        __emit 0xA3
        __emit 0xFC
        __emit 0xD4
        __emit 0x8B
        __emit 0x00
        __emit 0x5E
        __emit 0xC3
        __emit 0x90
        __emit 0x90
    }
}
