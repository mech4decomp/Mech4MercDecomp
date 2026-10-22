// FUN_006FCB00 (6 bytes)
// mov eax, [0x0085683C]; ret
// Returns global dword at 0x0085683C.
// NOTE: MSVC6 compiles "mov eax, [imm32]" as "mov eax, imm32" (B8),
// so we must use _emit for the A1 opcode.
__declspec(naked) void func_006fcb00(void)
{
    __asm {
        _emit 0xA1
        _emit 0x3C
        _emit 0x68
        _emit 0x85
        _emit 0x00
        ret
    }
}
