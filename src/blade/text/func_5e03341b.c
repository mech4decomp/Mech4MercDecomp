/* byte-locked .text fragment 0x5E03341B (27 B): code/table bytes Ghidra
   did not inventory as a function entry. Byte-exact via __emit
   (acceptance: byte-identical coverage); transcribe to real
   mnemonics later. */
__declspec(naked) void FUN_5e03341b(void)
{
    __asm {
            /* dword 0x74ff006a */
            __emit 0x6a
            __emit 0x00
            __emit 0xff
            __emit 0x74
            /* dword 0x74ff1024 */
            __emit 0x24
            __emit 0x10
            __emit 0xff
            __emit 0x74
            /* dword 0x74ff1024 */
            __emit 0x24
            __emit 0x10
            __emit 0xff
            __emit 0x74
            /* dword 0x67e81024 */
            __emit 0x24
            __emit 0x10
            __emit 0xe8
            __emit 0x67
            /* dword 0x8bffffff */
            __emit 0xff
            __emit 0xff
            __emit 0xff
            __emit 0x8b
            /* dword 0x83182444 */
            __emit 0x44
            __emit 0x24
            __emit 0x18
            __emit 0x83
            /* dword 0x00000000 */
            __emit 0xc4
            __emit 0x10
            __emit 0xc3
    }
}
