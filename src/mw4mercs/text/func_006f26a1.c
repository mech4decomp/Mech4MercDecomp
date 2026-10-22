/*
 * DATA_006f26a1 (0x5e bytes @ 0x6f26a1-0x6f2700) - verbatim .text data:
 * 3-byte alignment pad (8D 49 00 = lea ecx,[ecx]) + a pointer/jump-table
 * of the preceding function FUN_006F2420. First table dword 0x006F2437
 * starts at 0x6f26a4. Relocated entries reproduced; gen via tools/gen_data.py.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void DATA_006f26a1(void)
{
    __asm {
        /* __emit: alignment pad 8D 49 00 (lea ecx,[ecx]) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump-table dword entries (first: 0x006F2437) */
        __emit 0x37
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0x91
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0xA9
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0xC1
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0xD9
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0xF1
        __emit 0x24
        __emit 0x6F
        __emit 0x00
        __emit 0x09
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x21
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x39
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x51
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x69
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x81
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x99
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0xB1
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0xC9
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0xE1
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0xF9
        __emit 0x25
        __emit 0x6F
        __emit 0x00
        __emit 0x11
        __emit 0x26
        __emit 0x6F
        __emit 0x00
        __emit 0x29
        __emit 0x26
        __emit 0x6F
        __emit 0x00
        __emit 0x41
        __emit 0x26
        __emit 0x6F
        __emit 0x00
        __emit 0x59
        __emit 0x26
        __emit 0x6F
        __emit 0x00
        __emit 0x71
        __emit 0x26
        __emit 0x6F
        __emit 0x00
        __emit 0x89
        __emit 0x26
        __emit 0x6F
        __emit 0x00
    }
}
