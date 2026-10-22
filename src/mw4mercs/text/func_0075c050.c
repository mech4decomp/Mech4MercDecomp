/*
 * DATA_0075c050 (0x10 bytes @ 0x75c050-0x75c060) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_0075c050(void)
{
    __asm {
        __emit 0x8B
        __emit 0x41
        __emit 0x20
        __emit 0x50
        __emit 0x51
        __emit 0xFF
        __emit 0x51
        __emit 0x1C
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
