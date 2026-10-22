/*
 * DATA_005a221c (0x14 bytes @ 0x5a221c-0x5a2230) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_005a221c(void)
{
    __asm {
        __emit 0x9D
        __emit 0x1F
        __emit 0x5A
        __emit 0x00
        __emit 0xB3
        __emit 0x1F
        __emit 0x5A
        __emit 0x00
        __emit 0xC9
        __emit 0x1F
        __emit 0x5A
        __emit 0x00
        __emit 0x00
        __emit 0x21
        __emit 0x5A
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
