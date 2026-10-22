/*
 * DATA_00675d66 (0x2a bytes @ 0x675d66-0x675d90) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00675d66(void)
{
    __asm {
        __emit 0x8B
        __emit 0xFF
        __emit 0x67
        __emit 0x5B
        __emit 0x67
        __emit 0x00
        __emit 0xC2
        __emit 0x5B
        __emit 0x67
        __emit 0x00
        __emit 0x2F
        __emit 0x5C
        __emit 0x67
        __emit 0x00
        __emit 0xD1
        __emit 0x5C
        __emit 0x67
        __emit 0x00
        __emit 0x09
        __emit 0x5D
        __emit 0x67
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x50
        __emit 0xE8
        __emit 0x76
        __emit 0x4D
        __emit 0xFF
        __emit 0xFF
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
