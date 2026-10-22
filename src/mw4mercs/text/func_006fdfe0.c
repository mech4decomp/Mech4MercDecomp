// FUN_006FDFE0 (6 bytes)
// mov eax, [0x00856848]; ret
// Returns global dword at 0x00856848.
// NOTE: MSVC6 compiles "mov eax, [imm32]" as "mov eax, imm32" (B8),
// so we must use _emit for the A1 opcode.
__declspec(naked) void func_006fdfe0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x48
        _emit 0x68
        _emit 0x85
        _emit 0x00
        ret
    }
}
