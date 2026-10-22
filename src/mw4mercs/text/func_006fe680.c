// FUN_006FE680 (6 bytes)
// mov eax, [0x007B6F04]; ret
// Returns global dword at 0x007B6F04.
// NOTE: MSVC6 compiles "mov eax, [imm32]" as "mov eax, imm32" (B8),
// so we must use _emit for the A1 opcode.
__declspec(naked) void func_006fe680(void)
{
    __asm {
        _emit 0xA1
        _emit 0x04
        _emit 0x6F
        _emit 0x7B
        _emit 0x00
        ret
    }
}
