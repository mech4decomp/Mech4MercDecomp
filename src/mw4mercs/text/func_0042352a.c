/*
 * DATA_0042352a (0x16 bytes @ 0x42352a-0x423540) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_0042352a(void)
{
    __asm {
        __emit 0x8B
        __emit 0xFF
        __emit 0x93
        __emit 0x31
        __emit 0x42
        __emit 0x00
        __emit 0xAF
        __emit 0x31
        __emit 0x42
        __emit 0x00
        __emit 0xC3
        __emit 0x31
        __emit 0x42
        __emit 0x00
        __emit 0x0A
        __emit 0x32
        __emit 0x42
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
