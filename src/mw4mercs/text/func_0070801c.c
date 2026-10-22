/*
 * DATA_0070801c (0x14 bytes @ 0x70801c-0x708030) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_0070801c(void)
{
    __asm {
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0xA3
        __emit 0x18
        __emit 0x8C
        __emit 0x85
        __emit 0x00
        __emit 0x33
        __emit 0xC0
        __emit 0xC2
        __emit 0x10
        __emit 0x00
        __emit 0x90
        __emit 0x90
    }
}
