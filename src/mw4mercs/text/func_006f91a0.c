// FUN_006F91A0 (10 bytes)
// mov ecx, 0x00849358; jmp rel32
// Tail-call thunk: sets ECX = global 0x00849358, jumps to target.
// Bytes: B9 58 93 84 00 E9 16 FB 03 00
__declspec(naked) void func_006f91a0(void)
{
    __asm {
        _emit 0xB9
        _emit 0x58
        _emit 0x93
        _emit 0x84
        _emit 0x00
        _emit 0xE9
        _emit 0x16
        _emit 0xFB
        _emit 0x03
        _emit 0x00
    }
}
