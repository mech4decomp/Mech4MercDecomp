/*
 * DATA_0070f068 (0x18 bytes @ 0x70f068-0x70f080) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_0070f068(void)
{
    __asm {
        __emit 0x04
        __emit 0xF0
        __emit 0x70
        __emit 0x00
        __emit 0xE4
        __emit 0xEF
        __emit 0x70
        __emit 0x00
        __emit 0x26
        __emit 0xF0
        __emit 0x70
        __emit 0x00
        __emit 0x3E
        __emit 0xF0
        __emit 0x70
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
