/*
 * DATA_0072dfe0 (0x20 bytes @ 0x72dfe0-0x72e000) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_0072dfe0(void)
{
    __asm {
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x10
        __emit 0x33
        __emit 0xC9
        __emit 0x66
        __emit 0x8B
        __emit 0x48
        __emit 0x0C
        __emit 0x89
        __emit 0x0A
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x14
        __emit 0x33
        __emit 0xC9
        __emit 0x66
        __emit 0x8B
        __emit 0x48
        __emit 0x0E
        __emit 0x89
        __emit 0x0A
        __emit 0xC2
        __emit 0x14
        __emit 0x00
        __emit 0x90
    }
}
