/*
 * FUN_005ae1b6 (extent 0x5ae1b6-0x5ae3c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005ae1b6(void)
{
    __asm {
        mov    edi, edi
        sbb    eax, 0x50005ad9
        __emit 0xD9  /* fstp dword ptr [edx+disp8] — disp8 byte lies beyond 9-byte extent */
        __emit 0x5A
    }
}
