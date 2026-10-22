/*
 * DATA_00763db0 (0x10 bytes @ 0x763db0-0x763dc0) - verbatim .text data (jump-table / pointer table; relocated entries reproduced). gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_00763db0(void)
{
    __asm {
        __emit 0x55
        __emit 0x8B
        __emit 0xEC
        __emit 0x8B
        __emit 0x45
        __emit 0x08
        __emit 0x8B
        __emit 0x04
        __emit 0x85
        __emit 0xA0
        __emit 0xD4
        __emit 0x8B
        __emit 0x00
        __emit 0x5D
        __emit 0xC3
        __emit 0x90
    }
}
