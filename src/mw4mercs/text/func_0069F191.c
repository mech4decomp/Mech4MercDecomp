/*
 * FUN_0069F191 (103 B) — .text DATA block (Ghidra mis-disassembled it as
 * code). The bytes are a repeated 4-byte pattern (0x0069XXXX), i.e. a data
 * table, not real instructions. Reproduced verbatim via __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_0069F191(void)
{
    __asm {
        /* .text data block - raw bytes, not instructions */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x93
        __emit 0xEB
        __emit 0x69
        __emit 0x00
        __emit 0x2A
        __emit 0xEC
        __emit 0x69
        __emit 0x00
        __emit 0x50
        __emit 0xEC
        __emit 0x69
        __emit 0x00
        __emit 0x76
        __emit 0xEC
        __emit 0x69
        __emit 0x00
        __emit 0xE0
        __emit 0xEC
        __emit 0x69
        __emit 0x00
        __emit 0xE1
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0x07
        __emit 0xEE
        __emit 0x69
        __emit 0x00
        __emit 0x67
        __emit 0xEE
        __emit 0x69
        __emit 0x00
        __emit 0xC7
        __emit 0xEE
        __emit 0x69
        __emit 0x00
        __emit 0xD2
        __emit 0xF0
        __emit 0x69
        __emit 0x00
        __emit 0x45
        __emit 0xF1
        __emit 0x69
        __emit 0x00
        __emit 0x27
        __emit 0xEF
        __emit 0x69
        __emit 0x00
        __emit 0x4D
        __emit 0xEF
        __emit 0x69
        __emit 0x00
        __emit 0x73
        __emit 0xEF
        __emit 0x69
        __emit 0x00
        __emit 0xF7
        __emit 0xEF
        __emit 0x69
        __emit 0x00
        __emit 0xFD
        __emit 0xEC
        __emit 0x69
        __emit 0x00
        __emit 0x23
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0x49
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0x6F
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0x95
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0xBB
        __emit 0xED
        __emit 0x69
        __emit 0x00
        __emit 0x18
        __emit 0xF0
        __emit 0x69
        __emit 0x00
        __emit 0x3B
        __emit 0xF0
        __emit 0x69
        __emit 0x00
        __emit 0x5E
        __emit 0xF0
        __emit 0x69
        __emit 0x00
        __emit 0x81
        __emit 0xF0
        __emit 0x69
        __emit 0x00
    }
}
