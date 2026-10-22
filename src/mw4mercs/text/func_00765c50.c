/*
 * DATA_00765c50 (0x30 bytes @ 0x765c50-0x765c80) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00765c50(void)
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
        __emit 0xF0
        __emit 0x02
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
        __emit 0xF5
        __emit 0x7E
        __emit 0xFF
        __emit 0xFF
        __emit 0xA1
        __emit 0x04
        __emit 0xD5
        __emit 0x8B
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x2B
        __emit 0xC6
        __emit 0xA3
        __emit 0x04
        __emit 0xD5
        __emit 0x8B
        __emit 0x00
        __emit 0x5E
        __emit 0xC3
        __emit 0x90
        __emit 0x90
    }
}
