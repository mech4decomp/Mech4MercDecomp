/*
 * DATA_00709110 (0x10 bytes @ 0x709110-0x709120) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00709110(void)
{
    __asm {
        __emit 0xA1
        __emit 0x70
        __emit 0x8F
        __emit 0x85
        __emit 0x00
        __emit 0x50
        __emit 0xFF
        __emit 0x15
        __emit 0xD0
        __emit 0xB2
        __emit 0x76
        __emit 0x00
        __emit 0x59
        __emit 0xC3
        __emit 0x90
        __emit 0x90
    }
}
