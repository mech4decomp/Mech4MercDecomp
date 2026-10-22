/*
 * DATA_007362b0 (0x20 bytes @ 0x7362b0-0x7362d0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_007362b0(void)
{
    __asm {
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x8B
        __emit 0x48
        __emit 0x12
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x10
        __emit 0x83
        __emit 0xC0
        __emit 0x0E
        __emit 0x8B
        __emit 0x40
        __emit 0x08
        __emit 0x89
        __emit 0x0A
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x14
        __emit 0x89
        __emit 0x01
        __emit 0xC2
        __emit 0x14
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
