/* in-.text data placeholder: 41 B @ 0x10030017-0x10030040 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10030017(void)
{
    __asm {
        __emit 0x90
        __emit 0x43
        __emit 0xFD
        __emit 0x02
        __emit 0x10
        __emit 0x18
        __emit 0xFE
        __emit 0x02
        __emit 0x10
        __emit 0x12
        __emit 0xFF
        __emit 0x02
        __emit 0x10
        __emit 0x6B
        __emit 0xFF
        __emit 0x02
        __emit 0x10
        __emit 0xEC
        __emit 0xFD
        __emit 0x02
        __emit 0x10
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x03
        __emit 0x90
        __emit 0x90
    }
}
