/*
 * FUN_0047CD72 (98 B) — .text DATA block (Ghidra mis-disassembled it as
 * code). The bytes are a repeated 4-byte pattern (0xBA4700xx), i.e. a data
 * table, not real instructions. Reproduced verbatim via __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0047CD72(void)
{
    __asm {
        /* .text data block - raw bytes, not instructions */
        __emit 0x8B
        __emit 0xFF
        __emit 0xBD
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0xCB
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0xD6
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x31
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x37
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x3F
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0xBD
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0xCB
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0xD6
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x31
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x37
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x3F
        __emit 0xBA
        __emit 0x47
        __emit 0x00
        __emit 0x75
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0xC6
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0xCE
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0xF5
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0xFC
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0x03
        __emit 0xC1
        __emit 0x47
        __emit 0x00
        __emit 0xB5
        __emit 0xC0
        __emit 0x47
        __emit 0x00
        __emit 0x5F
        __emit 0xC2
        __emit 0x47
        __emit 0x00
        __emit 0x67
        __emit 0xC2
        __emit 0x47
        __emit 0x00
        __emit 0x8E
        __emit 0xC2
        __emit 0x47
        __emit 0x00
        __emit 0x95
        __emit 0xC2
        __emit 0x47
        __emit 0x00
        __emit 0x9C
        __emit 0xC2
        __emit 0x47
        __emit 0x00
    }
}
