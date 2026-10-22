/*
 * DATA_00555572 (0x1e bytes @ 0x555572-0x555590) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00555572(void)
{
    __asm {
        __emit 0x8B
        __emit 0xFF
        __emit 0xC5
        __emit 0x54
        __emit 0x55
        __emit 0x00
        __emit 0xD6
        __emit 0x54
        __emit 0x55
        __emit 0x00
        __emit 0xE7
        __emit 0x54
        __emit 0x55
        __emit 0x00
        __emit 0xF8
        __emit 0x54
        __emit 0x55
        __emit 0x00
        __emit 0x09
        __emit 0x55
        __emit 0x55
        __emit 0x00
        __emit 0x1A
        __emit 0x55
        __emit 0x55
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
