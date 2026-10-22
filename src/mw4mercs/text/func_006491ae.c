/*
 * DATA_006491ae (0x22 bytes @ 0x6491ae-0x6491d0) - verbatim .text data:
 * 2-byte alignment pad (8B FF = mov edi,edi) + a 5-entry pointer/jump-table
 * (0x6491b0-0x6491c3) + nop padding to the next function (FUN_006491d0).
 * Relocated entries reproduced; gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_006491ae(void)
{
    __asm {
        /* __emit: alignment pad 8B FF (mov edi,edi) */
        __emit 0x8B
        __emit 0xFF
        /* jump-table dword entries */
        __emit 0x79
        __emit 0x91
        __emit 0x64
        __emit 0x00
        __emit 0x80
        __emit 0x91
        __emit 0x64
        __emit 0x00
        __emit 0x87
        __emit 0x91
        __emit 0x64
        __emit 0x00
        __emit 0x9A
        __emit 0x91
        __emit 0x64
        __emit 0x00
        __emit 0x8E
        __emit 0x91
        __emit 0x64
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
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
