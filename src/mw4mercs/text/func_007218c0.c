/*
 * DATA_007218c0 (0x30 bytes @ 0x7218c0-0x7218f0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_007218c0(void)
{
    __asm {
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x68
        __emit 0x00
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x68
        __emit 0x30
        __emit 0xCF
        __emit 0x87
        __emit 0x00
        __emit 0x68
        __emit 0xEF
        __emit 0x03
        __emit 0x00
        __emit 0x00
        __emit 0x50
        __emit 0xFF
        __emit 0x15
        __emit 0x9C
        __emit 0xB5
        __emit 0x76
        __emit 0x00
        __emit 0xA0
        __emit 0x30
        __emit 0xCF
        __emit 0x87
        __emit 0x00
        __emit 0xF6
        __emit 0xD8
        __emit 0x1B
        __emit 0xC0
        __emit 0x25
        __emit 0x30
        __emit 0xCF
        __emit 0x87
        __emit 0x00
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
