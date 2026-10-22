// FUN_006F89F0 (6 bytes)
// mov eax, [0x008493D0]; ret
// Returns global dword at 0x008493D0.
// NOTE: MSVC6 compiles "mov eax, [imm32]" as "mov eax, imm32" (B8),
// so we must use _emit for the A1 opcode.
__declspec(naked) void func_006f89f0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD0
        _emit 0x93
        _emit 0x84
        _emit 0x00
        ret
    }
}
