/* in-.text data placeholder: 48 B @ 0x10044949-0x10044979 (data?) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10044949(void)
{
    __asm {
        __emit 0x12
        __emit 0x45
        __emit 0x04
        __emit 0x10
        __emit 0x61
        __emit 0x45
        __emit 0x04
        __emit 0x10
        __emit 0xB8
        __emit 0x45
        __emit 0x04
        __emit 0x10
        __emit 0xE2
        __emit 0x45
        __emit 0x04
        __emit 0x10
        __emit 0x3D
        __emit 0x46
        __emit 0x04
        __emit 0x10
        __emit 0xB4
        __emit 0x46
        __emit 0x04
        __emit 0x10
        __emit 0xEA
        __emit 0x46
        __emit 0x04
        __emit 0x10
        __emit 0x34
        __emit 0x47
        __emit 0x04
        __emit 0x10
        __emit 0x13
        __emit 0x47
        __emit 0x04
        __emit 0x10
        __emit 0x98
        __emit 0x47
        __emit 0x04
        __emit 0x10
        __emit 0x82
        __emit 0x47
        __emit 0x04
        __emit 0x10
        __emit 0x4E
        __emit 0x47
        __emit 0x04
        __emit 0x10
    }
}
