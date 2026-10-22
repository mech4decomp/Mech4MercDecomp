/*
 * DATA_00414a5b (0x15 bytes @ 0x414a5b-0x414a70) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00414a5b(void)
{
    __asm {
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x01
        __emit 0x66
        __emit 0x8B
        __emit 0x40
        __emit 0x14
        __emit 0xC3
        __emit 0x90
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
