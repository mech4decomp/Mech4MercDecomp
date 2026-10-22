/*
 * DATA_00750762 (0x1e bytes @ 0x750762-0x750780) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00750762(void)
{
    __asm {
        __emit 0x8B
        __emit 0xFF
        __emit 0x52
        __emit 0x07
        __emit 0x75
        __emit 0x00
        __emit 0x3A
        __emit 0x07
        __emit 0x75
        __emit 0x00
        __emit 0x5A
        __emit 0x07
        __emit 0x75
        __emit 0x00
        __emit 0x4A
        __emit 0x07
        __emit 0x75
        __emit 0x00
        __emit 0x42
        __emit 0x07
        __emit 0x75
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
