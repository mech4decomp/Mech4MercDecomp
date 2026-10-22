/*
 * DATA_005f0a2f (0x31 bytes @ 0x5f0a2f-0x5f0a60) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_005f0a2f(void)
{
    __asm {
        __emit 0x90
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x50
        __emit 0xE8
        __emit 0xB3
        __emit 0xA1
        __emit 0xEE
        __emit 0xFF
        __emit 0x8B
        __emit 0xB6
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x46
        __emit 0x18
        __emit 0x8B
        __emit 0x16
        __emit 0x0D
        __emit 0xC0
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0xCE
        __emit 0x89
        __emit 0x46
        __emit 0x18
        __emit 0xFF
        __emit 0x52
        __emit 0x10
        __emit 0x8B
        __emit 0x06
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x50
        __emit 0x14
        __emit 0x5E
        __emit 0xC2
        __emit 0x04
        __emit 0x00
    }
}
