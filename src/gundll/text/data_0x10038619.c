/* in-.text data placeholder: 12 B @ 0x10038619-0x10038625 (fn-like) - verbatim .text
 *   bytes (jump-table / pointer-table / IAT-thunk / string). byte-exact from reference. */
#pragma warning(disable : 4035 4793)

__declspec(naked) void data_0x10038619(void)
{
    __asm {
        __emit 0xFF
        __emit 0x25
        __emit 0x94
        __emit 0x90
        __emit 0x04
        __emit 0x10
        __emit 0xFF
        __emit 0x25
        __emit 0xE8
        __emit 0x90
        __emit 0x04
        __emit 0x10
    }
}
