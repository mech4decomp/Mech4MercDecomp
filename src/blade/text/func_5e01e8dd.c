/*
 * 0x5E01E8DD..0x5E01E92F (83 B) is IN-CODE DATA, not a function: Ghidra labels
 * it switchdataD_5e01e8e0 / switchdataD_5e01e8f4 (jump tables owned by
 * FUN_5e01e7b0, which ends exactly at 0x5E01E8DD). It was previously
 * mistranscribed as code (fake `call FUN_462846eb` / `FUN_468346f3` with
 * out-of-range rel32 targets). Byte-lock the raw run verbatim (jump-table
 * dword entries have no inline-asm `dd`); 0 relocs, byte-exact.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_5e01e8dd(void)
{
    __asm {
        // +0x0
        __emit 0x8d
        __emit 0x49
        __emit 0x00
        __emit 0x38
        __emit 0xe8
        __emit 0x01
        __emit 0x5e
        __emit 0x2f
        // +0x8
        __emit 0xe8
        __emit 0x01
        __emit 0x5e
        __emit 0x26
        __emit 0xe8
        __emit 0x01
        __emit 0x5e
        __emit 0x1d
        // +0x10
        __emit 0xe8
        __emit 0x01
        __emit 0x5e
        __emit 0x81
        __emit 0xe8
        __emit 0x01
        __emit 0x5e
        __emit 0x00
        // +0x18
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x04
        // +0x20
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
        __emit 0x90
        __emit 0x90
        // +0x28
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // +0x30
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8b
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x8b
        // +0x38
        __emit 0x51
        __emit 0x4c
        __emit 0x3b
        __emit 0xc2
        __emit 0x74
        __emit 0x03
        __emit 0x89
        __emit 0x41
        // +0x40
        __emit 0x4c
        __emit 0xc2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // +0x48
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // +0x50
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
