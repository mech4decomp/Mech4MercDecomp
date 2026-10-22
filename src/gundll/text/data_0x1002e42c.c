/* in-.text data placeholder: 36 B @ 0x1002e42c-0x1002e450 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x1002e42c(void)
{
    __asm {
        __emit 0x1A
        __emit 0xE4
        __emit 0x02
        __emit 0x10
        __emit 0x0E
        __emit 0xE4
        __emit 0x02
        __emit 0x10
        __emit 0x08
        __emit 0xE4
        __emit 0x02
        __emit 0x10
        __emit 0xFC
        __emit 0xE3
        __emit 0x02
        __emit 0x10
        __emit 0x26
        __emit 0xE4
        __emit 0x02
        __emit 0x10
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x02
        __emit 0x03
    }
}
