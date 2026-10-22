/* in-.text data placeholder: 32 B @ 0x1002e730-0x1002e750 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x1002e730(void)
{
    __asm {
        __emit 0x09
        __emit 0xE7
        __emit 0x02
        __emit 0x10
        __emit 0xF2
        __emit 0xE6
        __emit 0x02
        __emit 0x10
        __emit 0x15
        __emit 0xE7
        __emit 0x02
        __emit 0x10
        __emit 0x2A
        __emit 0xE7
        __emit 0x02
        __emit 0x10
        __emit 0xF7
        __emit 0xE6
        __emit 0x02
        __emit 0x10
        __emit 0x2A
        __emit 0xE7
        __emit 0x02
        __emit 0x10
        __emit 0x2A
        __emit 0xE7
        __emit 0x02
        __emit 0x10
        __emit 0x24
        __emit 0xE7
        __emit 0x02
        __emit 0x10
    }
}
