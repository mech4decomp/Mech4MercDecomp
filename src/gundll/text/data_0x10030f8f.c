/* in-.text data placeholder: 65 B @ 0x10030f8f-0x10030fd0 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10030f8f(void)
{
    __asm {
        __emit 0x90
        __emit 0x75
        __emit 0x0F
        __emit 0x03
        __emit 0x10
        __emit 0xF0
        __emit 0x0E
        __emit 0x03
        __emit 0x10
        __emit 0x56
        __emit 0x0F
        __emit 0x03
        __emit 0x10
        __emit 0x21
        __emit 0x0E
        __emit 0x03
        __emit 0x10
        __emit 0xB6
        __emit 0x0D
        __emit 0x03
        __emit 0x10
        __emit 0x03
        __emit 0x0E
        __emit 0x03
        __emit 0x10
        __emit 0xD4
        __emit 0x0D
        __emit 0x03
        __emit 0x10
        __emit 0x0D
        __emit 0x0F
        __emit 0x03
        __emit 0x10
        __emit 0x83
        __emit 0x0F
        __emit 0x03
        __emit 0x10
        __emit 0x00
        __emit 0x08
        __emit 0x01
        __emit 0x08
        __emit 0x02
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x03
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x04
        __emit 0x08
        __emit 0x05
        __emit 0x06
        __emit 0x08
        __emit 0x07
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
