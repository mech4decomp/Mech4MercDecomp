/* in-.text data placeholder: 9 B @ 0x1003c507-0x1003c510 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x1003c507(void)
{
    __asm {
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0xFF
    }
}
