/*
 * DATA_004028dd (0x13 bytes @ 0x4028dd-0x4028f0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_004028dd(void)
{
    __asm {
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x6A
        __emit 0x14
        __emit 0xE8
        __emit 0x09
        __emit 0x3D
        __emit 0x2F
        __emit 0x00
        __emit 0x25
        __emit 0xFF
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0x90
    }
}
