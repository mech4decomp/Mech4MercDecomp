/*
 * DATA_00753c90 (0x30 bytes @ 0x753c90-0x753cc0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00753c90(void)
{
    __asm {
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x8B
        __emit 0xC8
        __emit 0x81
        __emit 0xE1
        __emit 0xFF
        __emit 0xFF
        __emit 0x00
        __emit 0x00
        __emit 0x8D
        __emit 0x51
        __emit 0xFF
        __emit 0x85
        __emit 0xD1
        __emit 0x74
        __emit 0x16
        __emit 0x8D
        __emit 0x48
        __emit 0xFF
        __emit 0x23
        __emit 0xC1
        __emit 0x8B
        __emit 0xC8
        __emit 0x81
        __emit 0xE1
        __emit 0xFF
        __emit 0xFF
        __emit 0x00
        __emit 0x00
        __emit 0x8D
        __emit 0x51
        __emit 0xFF
        __emit 0x85
        __emit 0xD1
        __emit 0x75
        __emit 0xEC
        __emit 0xD1
        __emit 0xE0
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
