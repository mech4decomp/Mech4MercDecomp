/* in-.text data placeholder: 32 B @ 0x1003af4f-0x1003af6f (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x1003af4f(void)
{
    __asm {
        __emit 0xBD
        __emit 0xA9
        __emit 0x03
        __emit 0x10
        __emit 0x97
        __emit 0xA8
        __emit 0x03
        __emit 0x10
        __emit 0xB2
        __emit 0xA8
        __emit 0x03
        __emit 0x10
        __emit 0xFD
        __emit 0xA8
        __emit 0x03
        __emit 0x10
        __emit 0x35
        __emit 0xA9
        __emit 0x03
        __emit 0x10
        __emit 0x3D
        __emit 0xA9
        __emit 0x03
        __emit 0x10
        __emit 0x76
        __emit 0xA9
        __emit 0x03
        __emit 0x10
        __emit 0xD9
        __emit 0xA9
        __emit 0x03
        __emit 0x10
    }
}
