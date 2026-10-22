/*
 * FUN_005a6303 (extent 0x5a6303-0x5a6670) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005a6303(void)
{
    __asm {
        /* __emit: 4-byte data tail (00 DB 62 5A), not real code.
           MSVC6 encodes add bl,bl as 02 DB and bound without disp8. */
        __emit 0x00
        __emit 0xDB
        __emit 0x62
        __emit 0x5A
    }
}
