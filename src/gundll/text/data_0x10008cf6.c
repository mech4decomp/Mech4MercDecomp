/* in-.text data placeholder: 26 B @ 0x10008cf6-0x10008d10 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10008cf6(void)
{
    __asm {
        __emit 0x8B
        __emit 0xFF
        __emit 0xA6
        __emit 0x8C
        __emit 0x00
        __emit 0x10
        __emit 0xAD
        __emit 0x8C
        __emit 0x00
        __emit 0x10
        __emit 0xB4
        __emit 0x8C
        __emit 0x00
        __emit 0x10
        __emit 0xBB
        __emit 0x8C
        __emit 0x00
        __emit 0x10
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
