/*
 * DATA_00587849 (0x27 bytes @ 0x587849-0x587870) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00587849(void)
{
    __asm {
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x81
        __emit 0x7C
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x75
        __emit 0x15
        __emit 0x8B
        __emit 0x91
        __emit 0x60
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x33
        __emit 0xC0
        __emit 0x83
        __emit 0xFA
        __emit 0xB5
        __emit 0x0F
        __emit 0x94
        __emit 0xC0
        __emit 0x40
        __emit 0x89
        __emit 0x81
        __emit 0x7C
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0xC3
    }
}
