/* in-.text data placeholder: 8 B @ 0x1003eb94-0x1003eb9c (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x1003eb94(void)
{
    __asm {
        __emit 0x56
        __emit 0x43
        __emit 0x32
        __emit 0x30
        __emit 0x58
        __emit 0x43
        __emit 0x30
        __emit 0x30
    }
}
