/* auto-transcribed gap function 0x10009430 (16 B); review against reference; stepping stone */
__declspec(naked) void FUN_10009430(void)
{
    __asm {
            lea eax, [ecx + 4]
            test eax, eax
            je lbl_1000943b
            lea eax, [ecx + 0x10]
            ret
        lbl_1000943b:
            xor eax, eax
            ret
            nop
            nop
    }
}
