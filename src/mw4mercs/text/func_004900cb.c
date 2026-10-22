/*
 * DATA_004900cb (0x25 bytes @ 0x4900cb-0x4900f0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_004900cb(void)
{
    __asm {
        __emit 0x90
        __emit 0x56
        __emit 0xFF
        __emit 0x48
        __emit 0x00
        __emit 0x91
        __emit 0xFF
        __emit 0x48
        __emit 0x00
        __emit 0xAC
        __emit 0x00
        __emit 0x49
        __emit 0x00
        __emit 0xC4
        __emit 0xFF
        __emit 0x48
        __emit 0x00
        __emit 0xF0
        __emit 0xFF
        __emit 0x48
        __emit 0x00
        __emit 0x1C
        __emit 0x00
        __emit 0x49
        __emit 0x00
        __emit 0x4C
        __emit 0x00
        __emit 0x49
        __emit 0x00
        __emit 0x7C
        __emit 0x00
        __emit 0x49
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
