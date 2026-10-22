/*
 * DATA_00610b2d (0x13 bytes @ 0x610b2d-0x610b40) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00610b2d(void)
{
    __asm {
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x9A
        __emit 0x09
        __emit 0x61
        __emit 0x00
        __emit 0xC1
        __emit 0x09
        __emit 0x61
        __emit 0x00
        __emit 0xE8
        __emit 0x09
        __emit 0x61
        __emit 0x00
        __emit 0x0F
        __emit 0x0A
        __emit 0x61
        __emit 0x00
    }
}
