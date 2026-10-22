/* in-.text data placeholder: 32 B @ 0x10041453-0x10041473 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10041453(void)
{
    __asm {
        __emit 0xD1
        __emit 0x0E
        __emit 0x04
        __emit 0x10
        __emit 0xA7
        __emit 0x0D
        __emit 0x04
        __emit 0x10
        __emit 0xC2
        __emit 0x0D
        __emit 0x04
        __emit 0x10
        __emit 0x0E
        __emit 0x0E
        __emit 0x04
        __emit 0x10
        __emit 0x45
        __emit 0x0E
        __emit 0x04
        __emit 0x10
        __emit 0x4D
        __emit 0x0E
        __emit 0x04
        __emit 0x10
        __emit 0x82
        __emit 0x0E
        __emit 0x04
        __emit 0x10
        __emit 0x15
        __emit 0x0F
        __emit 0x04
        __emit 0x10
    }
}
