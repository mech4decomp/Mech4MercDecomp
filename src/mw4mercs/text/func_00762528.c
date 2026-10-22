/*
 * DATA_00762528 (0x8 bytes @ 0x762528-0x762530) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00762528(void)
{
    __asm {
        __emit 0xF8
        __emit 0x0A
        __emit 0x75
        __emit 0x00
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
