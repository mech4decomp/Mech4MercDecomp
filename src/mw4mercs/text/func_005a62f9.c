/*
 * FUN_005a62f9 (extent 0x5a62f9-0x5a6670) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005a62f9(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        lahf
        __emit 0x62  /* bound ebx,[edx+disp8] — disp8 byte lies beyond 6-byte extent */
        __emit 0x5A
    }
}
