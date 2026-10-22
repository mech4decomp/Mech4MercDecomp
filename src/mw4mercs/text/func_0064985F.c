/*
 * FUN_0064985F (132 B) — in-.text data block. Leading `nop; ret` is a
 * tiny stub function; the remainder (0x649861-0x6498E2) is a data table
 * (pointer/byte table), reproduced verbatim as raw bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064985F(void)
{
    __asm {
        nop
        ret
        /* data table @ 0x649861 (raw bytes) */
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0xFB
        __emit 0x95
        __emit 0x64
        __emit 0x00
        __emit 0x14
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0xE2
        __emit 0x95
        __emit 0x64
        __emit 0x00
        __emit 0x46
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0xDC
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x2D
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x14
        __emit 0x98
        __emit 0x64
        __emit 0x00
        __emit 0xF5
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x2D
        __emit 0x98
        __emit 0x64
        __emit 0x00
        __emit 0x91
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x57
        __emit 0x97
        __emit 0x64
        __emit 0x00
        __emit 0x0E
        __emit 0x97
        __emit 0x64
        __emit 0x00
        __emit 0xCB
        __emit 0x97
        __emit 0x64
        __emit 0x00
        __emit 0xAA
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x5F
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x78
        __emit 0x96
        __emit 0x64
        __emit 0x00
        __emit 0x46
        __emit 0x98
        __emit 0x64
        __emit 0x00
        __emit 0x00
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x01
        __emit 0x02
        __emit 0x03
        __emit 0x04
        __emit 0x05
        __emit 0x06
        __emit 0x07
        __emit 0x08
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x09
        __emit 0x0A
        __emit 0x0B
        __emit 0x0C
        __emit 0x0D
        __emit 0x11
        __emit 0x0E
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x11
        __emit 0x0F
        __emit 0x11
        __emit 0x10
    }
}
