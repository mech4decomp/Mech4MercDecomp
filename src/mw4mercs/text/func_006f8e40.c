// FUN_006F8E40 (6 bytes)
// mov al, [0x007B6ECC]; ret
// Returns global byte at 0x007B6ECC.
// NOTE: MSVC6 compiles "mov al, [imm32]" incorrectly, so use _emit.
__declspec(naked) void func_006f8e40(void)
{
    __asm {
        _emit 0xA0
        _emit 0xCC
        _emit 0x6E
        _emit 0x7B
        _emit 0x00
        ret
    }
}
