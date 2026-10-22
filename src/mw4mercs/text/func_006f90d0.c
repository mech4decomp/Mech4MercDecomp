// FUN_006F90D0 (6 bytes)
// mov eax, [0x008493CC]; ret
// Returns global dword at 0x008493CC.
// NOTE: MSVC6 compiles "mov eax, [imm32]" as "mov eax, imm32" (B8),
// so we must use _emit for the A1 opcode.
__declspec(naked) void func_006f90d0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xCC
        _emit 0x93
        _emit 0x84
        _emit 0x00
        ret
    }
}
