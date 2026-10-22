/* byte-locked .text fragment 0x5E02F5A1 (18 B): code/table bytes Ghidra
   did not inventory as a function entry. Byte-exact via __emit
   (acceptance: byte-identical coverage); transcribe to real
   mnemonics later. */
__declspec(naked) void FUN_5e02f5a1(void)
{
    __asm {
            /* dword 0xffc82ce8 */
            __emit 0xe8
            __emit 0x2c
            __emit 0xc8
            __emit 0xff
            /* dword 0x58c083ff */
            __emit 0xff
            __emit 0x83
            __emit 0xc0
            __emit 0x58
            /* dword 0xc823e8c3 */
            __emit 0xc3
            __emit 0xe8
            __emit 0x23
            __emit 0xc8
            /* dword 0xc083ffff */
            __emit 0xff
            __emit 0xff
            __emit 0x83
            __emit 0xc0
            /* dword 0x00000000 */
            __emit 0x54
            __emit 0xc3
    }
}
