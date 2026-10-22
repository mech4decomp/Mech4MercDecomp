/*
 * DATA_00560180 (0x10 bytes @ 0x560180-0x560190) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00560180(void)
{
    __asm {
        __emit 0x73
        __emit 0x00
        __emit 0x56
        __emit 0x00
        __emit 0xB6
        __emit 0x00
        __emit 0x56
        __emit 0x00
        __emit 0xF6
        __emit 0x00
        __emit 0x56
        __emit 0x00
        __emit 0x2C
        __emit 0x01
        __emit 0x56
        __emit 0x00
    }
}
